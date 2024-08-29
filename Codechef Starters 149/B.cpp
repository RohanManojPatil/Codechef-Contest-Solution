#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

    while(T--)
    {
        int A, B, X;
        cin >> A >> B >> X;
        
        int red = A * B;
        int blue = X * X;
        int ans = 3;
        bool flag = false;
        
        if(red <= blue)
        {
            cout << 0 << endl;
            continue;
        }
        
        for(int i = B; i>=1; i--)
        {
            for(int j = A; j>=1; j--)
            {
                if(i*j <= blue)
                {
                    int temp;
                    if(i == B && j != A || i != B && j == A)
                    {
                        temp = 1;
                    }
                    else
                    {
                        temp = 2;
                    }
                    
                    ans = min(ans, temp);
                }
            }
        }
        
        
        
        cout << ans << endl;
    }
}
