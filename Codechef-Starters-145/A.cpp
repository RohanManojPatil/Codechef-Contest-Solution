#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C, X;
	cin >> A >> B >> C >> X;
	
	int cuboid = A * B * C;
	int cube = pow(X, 3);
    
    if(cuboid > cube)
    {
        cout << "Cuboid";
    }
    else if(cuboid < cube)
    {
        cout << "Cube";
    }
    else
    {
        cout << "Equal";
    }
}
