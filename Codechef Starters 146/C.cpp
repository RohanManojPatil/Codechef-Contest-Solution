#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> &arr, int i, int j)
{
    return arr[i] > arr[j];
}
int main() {
	int T;
	cin >> T;
	
	while(T--)
	{
	    vector<int> arr(16);
	    vector<int> indices(16);
	    vector<int> ans(16, 0);
	    int count = 4;
	    
	    for(int i = 0; i<16; i++)
	    {
	        cin >> arr[i];
	        indices[i] = i;
	    }
	    
	    sort(indices.begin(), indices.end(), [&](int i, int j){
	        return compare(arr, i, j);
	    });
	    
	    for(int i = 0; i<indices.size(); i++)
	    {
	        ans[indices[i]] = count;
	        
	        if(i == 0 || i == 8 || i == 12 || i == 14)
	        {
	            count--;
	        }
	    }
	    
	    for(int i = 0; i<16; i++)
	    {
	        cout << ans[i] << " ";
	        
	    }
	    
	    cout << endl;
	}

}
