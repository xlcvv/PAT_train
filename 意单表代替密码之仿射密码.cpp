#include <iostream>
#include<math.h>
#include<string.h> 
using namespace std;
 
//ģ��ȡ��
int dx, y, q;
void extend_Eulid(int aa, int bb)
{
	if (bb == 0) {
		dx = 1;y = 0;q = aa;
	}
	else {
		extend_Eulid(bb, aa%bb);
		int temp = dx;
		dx = y;
		y = temp - aa / bb*y;
	}
}
//
 
int main()
{
	int a, b, YN, i, l;
	char c[100];
	int x[100], y[100];
	char ex[100];
 
	cout << "����������k =( a, b )��a, bֵ������ a,b �� Z/(26)��gcd( a,26) = 1 ��" << endl;
	a = 11;
	b = 6;
	cout << "��ô��ļ��ܺ������� ex = " << a << "*x + " << b << endl;
	while(1){ 
	cout << endl <<"������������Ҫ���ܵ�����(Сд��ĸ)��" << endl;
	cin >> c;//����
	l = strlen(c);
 
	for (i = 0; i < l; i++)
	{
		x[i] = c[i] - 'a';
		ex[i] = (a * x[i] + b) % 26;//����
	}
	cout << "���ܺ����ĸΪ��";
 
	for (i = 0; i < l; i++)
	{
		cout << char(ex[i] + 'a');//ת�ַ�
	}
	cout << endl << endl;
//	cout << "�Ƿ�Ҫ����ԭ�ģ�����1��ȷ��������������ȡ����:";
//	cin >> YN;
// 
//	while (YN == 1)
//	{
//		extend_Eulid(a, 26);//ȡ��
//		dx = (dx+26) % 26;
//		for (i = 0; i < l; i++)
//		{
//			y[i] = (dx*int(ex[i]) - dx*b) % 26;
//			y[i] = (y[i] + 26) % 26;//+26ȡ��
//			cout << char(y[i] + 'a');
//		}
//		break;
//	}
	system("pause");
}}

