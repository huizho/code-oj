#include <bits/stdc++.h>
using namespace std;
/*
dp i-k  j    δˤ��  ���� i-k �� ������� 
dp k-1  j-1  �ֻ�ˤ��   k���»������ ��һ���ֻ� 
0     n 
 1 
 1 
n 
*/ 
int main()
{
	int n = 1000,m = 3;
	int dp[1010][10]; 
	for(int i = 1; i <= n ; i++)
		dp[i][1] = i;
	for(int j = 1; j <= m ; j++)
	//	dp[1][j] = 1;
	for(int i = 2 ; i <= n ; i++)
		for(int j = 2 ; j <= m ; j++){
			int minn = 1000000000;
			for(int k = 2 ; k < i ; k++){
				minn = min(minn,max(dp[i-k][j]+1,dp[k-1][j-1]+1)); 
			}
			dp[i][j] = minn;
		}
	cout << dp[n][m];
	return 0;
}
