#include <iostream>
using namespace std;

int main()
{
//  �ܽ�� ��Ʒ��  �۸� ��Ҫ��   ʹÿ����Ʒ�ļ۸�����Ҫ�ȵĳ˻����ܺ����
	int n,m,v[1000],w[1000],dp[1000] = {0};
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> v[i] >> w[i];
	for(int i = 0; i < m; i++) 
		for(int j = n; j >= v[i] ;j--) 
			dp[j] = dp[j] > dp[j-v[i]]+v[i]*w[i]?dp[j] : dp[j-v[i]]+v[i]*w[i];
	
	
	cout << dp[n]; 
	
	
}
