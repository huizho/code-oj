#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int maxn = 0,temp;
	int len = s.length();
	for(int i = 0 ; i < len ; i++)
	{
		temp = 1;
		//����  i-j �� i+j �Ļ��Ĵ� 
		for(int j = 1 ; j < len ; j++)
		{
			if(i-j < 0 || i+j >= len || s[i-j] != s[i+j])
				break;
			temp += 2;
		}
		maxn = maxn > temp ? maxn : temp;
		temp = 0;
		//ż��  i-j+1 �� i+j �Ļ��Ĵ� 
		for(int j = 1 ; j < len ; j++)
		{
			if(i-j+1 < 0 || i+j >= len || s[i-j+1] != s[i+j])
				break;
			temp += 2;
		}
		maxn = maxn > temp ? maxn : temp;
	}
	cout << maxn;
	
	return 0;
}
