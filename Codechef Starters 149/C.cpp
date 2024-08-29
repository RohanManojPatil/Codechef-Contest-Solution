#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        int arr[N];
        int first = -1, last = -1, negative = 0;
        for(int i = 0; i<N; i++)
        {
            cin >> arr[i];
        }
        
        for(int i = 0; i<N; i++)
        {
            if(arr[i] > 0)
            {    
                if(first == -1)
                {
                    first = i;
                }
                
                last = i;
            }
        }
        
        for(int i = first; i<=last; i++)
        {
            if(arr[i] < 0)
            {
                negative++;
            }
        }
        
        if(first == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << negative << endl;
        }
    }
}
