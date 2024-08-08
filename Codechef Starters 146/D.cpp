#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--)
    {
        int N; 
        cin >> N;
        int count = 1;
        vector<int> ans(N);
        for(int i = 0; i<N; i+=2)
        {
            ans[i] = count;
            count++;
        }
        
        for(int i = 1; i<N; i+=2)
        {
            ans[i] = count;
            count++;
        }
        
        for(int i = 0; i<N; i++)
        {
            cout << ans[i] << " ";
        }
        
        cout << endl;
    }

}
