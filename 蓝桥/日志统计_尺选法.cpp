#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
vector<int> v[maxn];
int ans[maxn];
int n,d,k;
//��d��ʱ���� �Ƿ񳬹�k���� 
bool judge(int t)
{
	int len = v[t].size();
	if(len < k) return 0;
	int l=0,r=0,sum=0;
	sort(v[t].begin(),v[t].end());
	while(l <= r && r < len)
	{
		sum++;
		if(sum >= k)
		{
			if(v[t][r] - v[t][l] < d)
				return 1;
			else {
				sum--;
				l++;
			}
		}
		r++;
	}
	return 0;	
}
int main()
{
	cin >> n >> d >> k;
	for(int i = 0 ; i < n ; i++)
	{//  ʱ��  ���ӱ�� 
		int ts,id;
		cin >> ts >> id;
		v[id].push_back(ts);
	}
	int cnt = 0;
	for(int i = 0 ; i < maxn ; i++)
	{	
		if(judge(i))
			ans[cnt++] = i;	
	}
	
	for(int i = 0; i < cnt ; i++)
	{
		cout<<ans[i];
		if(i != cnt-1)cout << endl;
	}
	return 0;	
}
