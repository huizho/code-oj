#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	for(int i = n; i >= 0; i--) {
		cin >> x;
		if(x == 0) continue;
        if(i != n && x > 0) cout << "+";     //  �����������Ƿ�Ϊ��ߴ�������Ӻ�
        if(abs(x) != 1 || i == 0) cout << x;     //  ���ϵ����ϵ����Ϊ����1��ָ��Ϊ0��
        if(x == -1  && i) cout << "-";     //  -1ϵ�����У�������������
        if(i >= 2) cout << "x^" << i;     //  ���μ��������ָ��
        if(i == 1) cout << "x";     // һ����
		
	}
	
	return 0;
}
