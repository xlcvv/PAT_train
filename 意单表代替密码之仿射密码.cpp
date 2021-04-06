#include <iostream>
#include<math.h>
#include<string.h> 
using namespace std;
 
//模的取逆
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
 
	cout << "请依次输入k =( a, b )的a, b值，其中 a,b ∈ Z/(26)，gcd( a,26) = 1 ：" << endl;
	a = 11;
	b = 6;
	cout << "那么你的加密函数就是 ex = " << a << "*x + " << b << endl;
	while(1){ 
	cout << endl <<"接下来输入你要加密的明文(小写字母)：" << endl;
	cin >> c;//明文
	l = strlen(c);
 
	for (i = 0; i < l; i++)
	{
		x[i] = c[i] - 'a';
		ex[i] = (a * x[i] + b) % 26;//数字
	}
	cout << "加密后的字母为：";
 
	for (i = 0; i < l; i++)
	{
		cout << char(ex[i] + 'a');//转字符
	}
	cout << endl << endl;
//	cout << "是否要解密原文（输入1则确定，输入其他则取消）:";
//	cin >> YN;
// 
//	while (YN == 1)
//	{
//		extend_Eulid(a, 26);//取逆
//		dx = (dx+26) % 26;
//		for (i = 0; i < l; i++)
//		{
//			y[i] = (dx*int(ex[i]) - dx*b) % 26;
//			y[i] = (y[i] + 26) % 26;//+26取正
//			cout << char(y[i] + 'a');
//		}
//		break;
//	}
	system("pause");
}}

