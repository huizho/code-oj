#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        bitset<8> t(n);//���������ʱ�����ֱ�Ӵ���ȥһ����
        cout<<t.to_string();
        t = m;//Ҳ����ֱ�Ӹ�ֵ
        cout<<t.to_string()<<endl;
    }
}
