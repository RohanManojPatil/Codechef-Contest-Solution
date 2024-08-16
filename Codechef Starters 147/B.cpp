#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    int A, B, C;
	    cin >> A >> B >> C;
	    
	    int arr[] = {A, B, C};
	    sort(arr, arr+3);
	    
	    int maxi = arr[2];
	    int sum = arr[0] + arr[1];
	    
	    if(sum+1 >= maxi)
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	}

}
