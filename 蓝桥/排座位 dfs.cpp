#include<iostream>
using namespace std;
int ans = 0;
int a[10]={0},vis[10] = {0};
int judge() {
	//3��A���ˣ�3��B���ˣ�3��C��������һ�š�
	//Ҫ����ʹ������3������ͬһ��������
	//��9���˷ֱ�Ϊ0-8��Ȼ����ÿһ������3ȡ�࣬
	//���ֻ��0,1,2������������ÿ���������������������
	int d,b,c,i,j,k;
	for(i=0,j=1,k=2;k<9;i++,k++,j++) {
		d = a[i]%3;
		b = a[j]%3;
		c = a[k]%3;
		if(b == c && b == d && d == c)
			return 0;
	}
	return 1;
}

void dfs(int n) {
	if(n == 9) {
		if(judge())ans++;
		return ;
	}
	
	for(int i = 0; i < 9; i++) {
		if(!vis[i]) {
		a[n] = i;
		vis[i] = 1;
		dfs(n+1);
		vis[i] = 0;
		}
	}	
}
int main()
{
	dfs(0);
	cout << ans;
	return 0;
} 
