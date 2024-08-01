#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int size, distance, switchCount = 0;
        cin >> size >> distance;
        int target[size];
        bool gunType = 0;
        
        for(int i = 0; i<size; i++)
        {
            cin >> target[i];
        }
        
        for(int i = 0; i<size; i++)
        {
            if(target[i] <= distance)
            {
                if(gunType != 0)
                {
                    switchCount++;
                    gunType = 0;
                }
            }
            else
            {
                if(gunType != 1)
                {
                    switchCount++;
                    gunType = 1;
                }
            }
        }
        
        cout << switchCount << endl;
    }
}
