#include <iostream>
#include <cmath>
//�����Բ���   ���Ϊ��������  ���� 
bool isprime(int a){
	for(int i = 2; i <= sqrt(a); i++){
	    	if(a%i == 0)return false;
	}return true;
}
using namespace std;
int main()
{
	int n,count = 0;
    cin>>n;
    for(int i = 5; i <= n; i++){
    	if(isprime(i)&&isprime(i - 2))count++;
	}
	cout<<count;
}
