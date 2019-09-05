#include <bits/stdc++.h>
using namespace std;
/*
������չŷ����±��εģ�������������������Լ����Ϊ1
��������������������޸���Ȼ��������ȫ�����Ϳ���ͳ���ˡ�
*/
const int N = 10010;
int n;
int gcd(int a,int b)
{
	return b == 0 ? a:gcd(b,a%b);
}

int main()
{
	int dp[N] = {0};	
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++)
		cin >> v[i];
	int g = v[0];
	for(int i = 1 ; i < n ; i++)
		g = gcd(g,v[i]);
	if(g != 1){
		printf("INF\n");
		return 0;
	}
	
	dp[0] = 1;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j+v[i] < N ; j++)
		{ // ��� 
			if(dp[j])
				dp[j+v[i]] = 1;
		}
	int ans=0;
    for(int i = 0 ; i < N ; i++)
    {
        if(dp[i]!=1){
            ans++;
            cout << i << " ";
		}
    }
    printf("%d\n",ans);
	return 0;
} 
