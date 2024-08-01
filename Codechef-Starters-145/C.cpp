#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, count = 0;
        cin >> N;
        int arr[N];
        unordered_map<int, int> mp;
        
        for(int i = 0; i<N; i++)
        {
            cin >> arr[i];
        }
        
        for(int i = 0; i<N; i++)
        {
            if(arr[i] == 0)
            {
                continue;
            }
            if(mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = 1;
                count++;
            }
        }
        
        if(count >= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

}
