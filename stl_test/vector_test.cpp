//����������ȡ��vector��wiki �ٿ�
//Headers and Macros
/*
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#define SETW_1 10
#define SETW_2 6
#define SETW_3 10

using namespace std;

typedef vector<int> Vint;

//���Å���ȡ�������� capacity ֵ
void PrintVectorInfo(Vint& v)
{
	cout<<setw(SETW_1)<<"Element"<<setw(SETW_2)<<"Size";
	cout<<setw(SETW_3)<<"Capacity"<<endl;
	for ( Vint::iterator it = v.begin(); it != v.end(); it ++)
	{
		cout<<setw(SETW_1)<<(*it)<<setw(SETW_2)<<v.size();
		cout<<setw(SETW_3)<<v.capacity()<<endl;
	}
	cout<<endl;
}

//Main Function
int main(int argc, char** argv)
{
	//==START==//
	//����һ�� vector
	Vint vint;
	//����ɂ�����׃��
	int a = 11, b = 22, c = 33;
	//����ֻ��һ��Ԫ�ؿ��g�� vint
	//��׃�� a �}�u����һ��Ԫ�؃�
	vint.push_back(a);
	cout<<"Push Back: a = "<<a<<endl;
	//�����ɂ�Ԫ�ؿ��g�� vint
	//��׃�� a �}�u����һ��Ԫ�؃�
	//��׃�� b �}�u���ڶ���Ԫ�؃�
	//�h����һ�ν����� vint
	//��һ�ν����� vint ֻ��һ��Ԫ�ؿ��g
	//�������
	vint.push_back(b);
	cout<<"Push Back: b = "<<b<<endl;
	vint.push_back(c);
	cout<<"Push Back: c = "<<c<<endl;
	PrintVectorInfo(vint);
	//�Ƴ�����һ��Ԫ��
	vint.pop_back();
	cout<<"Pop Back......"<<endl;
	PrintVectorInfo(vint);
	//�Ƴ�����һ��Ԫ��
	vint.pop_back();
	cout<<"Pop Back......"<<endl;
	PrintVectorInfo(vint);
	//�������Ԫ��
	vint.clear();
	cout<<"Clear All Elements."<<endl;
	//==END==//
	getchar();
	return 0;
}
/*
#include <iostream>
#include <stdio.h>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
	
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
	
    for(int i=0;i<3;++i)
        cout<<v[i]<<endl;
    return 0;
}
*/