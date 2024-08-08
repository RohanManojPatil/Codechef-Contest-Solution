#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T;
    cin >> T;
    
    while(T--)
    {
        int A, B, C, M;
        cin >> A >> B >> C >> M;
        bool flag = false;
        if(abs(A-B) <= M)
        {
            flag = true;
        }
        if(abs(B-C) <= M)
        {
            flag = true;
        }
        if(abs(A-C) <= M)
        {
            flag = true;
        }
        
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
