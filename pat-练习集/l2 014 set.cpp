#include <iostream>
#include <set>
using namespace std;
int main()
{/*
ÿ�дӴ�С�� 
set ��Ԫ��Ϊÿ����С�ĳ��� 
*/ 
	set<int> s;
	s.insert(0);
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int t;
		cin >> t;
		if(t < *s.rbegin())// ����Ԫ�� 
		{
			s.erase(*(s.upper_bound(t)));// ɾ��  ��һ����t���Ԫ�� 
		}
		s.insert(t);
	}
	cout << s.size()-1;
	return 0;
}
