#include <bits/stdc++.h>
using namespace std;
 
int findMindiff(int arr[], int n,int sum)
{
	int i,j;
	int dp[n+1][sum+1];
	for (i = 0;i <= n;i++)
		dp[i][0] = 1;
	for (i = 1; i <= sum; i++)
		dp[0][i] = 0;
	for (i=1;i<=n;i++){
		for (j=1;j<=sum;j++){
			dp[i][j] = dp[i-1][j];
			if (arr[i-1] <= j)
				dp[i][j] |= dp[i-1][j-arr[i-1]];
		}
	}
    // ctrl K + ctrl C;
    // cout << "  ";
    // for(i=0; i<sum+1; i++){
    //     if( 0 < i && i<10) cout << " ";
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(i=0; i<n+1; i++){
    //     cout << i << " ";
    //     for(j=0; j<sum+1; j++){
    //         cout << dp[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

	int diff = INT_MAX;
	for (j=sum/2; j>=0; j--){
		if (dp[n][j]){
			diff = sum-2*j;
            cout << "hoge: " << j << endl; 
			break;
		}
	}
	return diff;
}

int main(){
	int n,i,sum=0;cin>>n;
	int trr[n];
	for(i=0;i<n;i++){
		cin>>trr[i];
		sum+=trr[i];
	}
	int diff = findMindiff(trr,n,sum);
	int n1 = (sum-diff)/2;
	int n2 = (sum+diff)/2;
	cout << n2 << endl;
	return 0;
}