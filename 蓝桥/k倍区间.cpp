#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;	
	int dp[n] = {0};
	int v[n] = {0};
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> v[i];
		dp[i] = dp[i-1] + v[i];//dp��i�� Ϊ0-i �ĺ� 
	}
	int sum = 0;
	for(int i = 1 ; i <= n ; i++){
		//ѭ����ȥǰ�������  d��j�� Ϊ0-j�ĺ� 
		for(int j = 0 ; j <= n-i ; j++)
		{
			if((dp[i] - dp[j])%k == 0)
				sum++;
		}
	}
	cout << sum;
	return 0;
}
