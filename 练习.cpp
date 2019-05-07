#include <iostream>
#include <Windows.h>
#include <iomanip> //setw()是设置宽度的头文件
#include <string>

using namespace std;

int main(void) {

	//练习十三
	/*
	输入一句话，然后把这个字符串以单词为单位，逆转输出。
	比如将“Alice call Jack”转换为“Jack call Alice”，
	实现速度最快，移动最少。
	
	*/
	char str[256];
	int i = 0;

	cout << "请输入一句（英文）："<< endl;
	gets_s(str, sizeof(str));

	while (str[i]) {
		//跳过前面的空格
		//该循环结束后，str[i]是下一个单词的第一个字母
		while (str[i] == ' ')i++;

		int j = i;
		//该循环结束之后，ste[j]是这个单词后面的下一个位置
		while (str[j] && str[j] != ' ')j++;

		//逆转这个单词
		for (int k1 = i, k2 = j - 1; k1 < k2; k1++, k2--) {
			int tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
		}
		i = j;
	}
	for (int k1 = 0, k2 = i - 1; k1 < k2; k1++, k2--) {
		int tmp = str[k1];
		str[k1] = str[k2];
		str[k2] = tmp;
	}

	cout << str << endl;

	//练习十二
	//输入一个英文字符串（一句话），统计输入的单词个数。
	/*
	char str[256];	//'\0'就是0
	int i = 0;		//访问单词下标
	int count = 0;	//单词计数

	cout << "请输入一个字符串：" << endl;
	gets_s(str, sizeof(str));

	//跳过前面的连续空格
	while (str[i] == ' '){
		i++;
	}
	while (str[i]) {		//while(str[i] != '\0')
		//跳过连续的多个非空格组合（就是单词！）
		while (str[i] &&str[i] != ' ') {
			i++;
		}
		while (str[i] == ' ') {
			i++;			
		}
		count++;		
	}
	cout << "一共有" << count << "个单词" << endl;
	*/

	//练习十一
	/*
	经典算法题：千鸡百钱。
	1000块钱，要买100只鸡。
	公鸡每只50块
	母鸡每只30块
	小鸡每3只10块
	问：一共有多少种买法？
	*/
	/*
	//当公鸡数为i时：
	for (int i = 1; i <= 18; i++) {//i表示公鸡数
		//当母鸡数为j时：
		for (int j = 1; j <= 33; j++) {//j表示母鸡数
			//当小鸡数为k时：
			//for (int k = 1; k <= 99; k++) {//k表示小鸡数
				int k = 100 - i - j;//k表示小鸡数
				//if (i + j + k == 100 && k % 3 == 0 && i * 50 + j * 30 + k / 3 * 10 == 1000)
				if (k % 3 == 0 && i * 50 + j * 30 + k / 3 * 10 == 1000) {
					cout << "公鸡：" << i << "母鸡：" << j << "小鸡：" << k << endl;
				}
			//}
		}
	}
	*/




	//练习十
	//输入一个字符串，然后把这个字符串逆转输出
	/*
	string str;	
	char tmp;

	cout << "请输入一个字符串：" << endl;
	cin >> str;

	for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

	}
	
	/*
	int i;
	int j;
	i = 0;
	j = str.length() - 1;

	while (i < j) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}*/
	//cout << str << endl;
	


	//练习九
	//输入一个2进制整数，把它转换为10进制输出。
	/*
	string str;
	int x = 0, p = 1, s = 0;

	cout << "请输入一个二进制数：" << endl;
	cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		x = str[i] - '0';//'0'-'0'=0   '0'-'1'=1
		s += x * p;		//s=s+x*p
		p *= 2;			//p=p*2
	}
	cout << s << endl;
	*/


	//练习八
	//输入一个10进制的正整数，把它转换为2进制输出。
	/*
	int n;
	int ret[32];
	int i = 0;//表示存放二进制数的数组下标

	cout << "请输入一个正整数：" << endl;
	cin >> n;

	if (n < 0) {
		cout << "需要输入一个正整数!" << endl;
		system("pause");
		return 1;
	}

	while (n != 0) {
		ret[i] =  n % 2;
		n = n / 2;
		i++;
	}
	for (i--; i >= 0; i--) {
		cout << ret[i];
	}
	cout << endl;
	*/


	

	//练习七
	//输出指定项的斐波那契数列
	//1,1,2,3,5,8,13,21，..
	//规律1+1=2 1+2=3
	/*
	int n = 0;
	long long a = 1, b = 1;
	long long value;

	cout << "请输入斐波那契数列的个数：" << endl;
	cin >> n;
	
	if (n < 0) {
		cout << "要求是输入大于0的正数!" << endl;
		return 1;
	}

	if (n == 1) {
		cout << "1 " << endl;
		system("pause");
		return 0;	
	}
	
	if (n == 2) {
		cout << "1 1 " << endl;
		system("pause");
		return 0;
	}
	cout << "1 1 ";
	
	for (int i = 1; i <= n; i++) {
		value = a + b;
		//a和b前进一位
		a = b;
		b = value;
		cout << value << " ";
	}
	cout << endl;
	*/


	//练习六
	//输出所有水仙花数
	//水仙花数：3位数字，各位的立方之和，等于这个数的本事。（比如 153=（1*1*1）+（5*5*5）+（3*3*3））
	//水仙花数只是自幂数的一种，严格来说3位数的3次幂数才称为水仙花数。
	/*
	
	
	int a = 0, b = 0, c = 0; //个位，十位，百位

	for (int i = 100; i <= 999; i++) {
		//判断i是否是水仙花数
		a = i % 10;					//个位
		b = (i / 10) % 10;			//十位
		c = i / 100;				//百位
		if ((a*a*a) + (b*b*b) + (c*c*c) == i) {
			cout << i << endl;
		}
	}
	*/




	//练习五
	/*
	int width;

	cout << "\t\t\t\t乘法口诀表" << endl;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {	
			width = (j == 1) ? 1 : 2;
			cout << j << "x" << i << "=" << setw(width) << left << j * i << " ";//setw()是设置宽度，left是左靠齐
		}
		cout << endl;
	}
	*/


	//练习四
	/*
		  *号的个数			空格的个数
	第1行：1					7	（n-1）
	第2行：3					6	（n-2）
	第3行：5					5
	第4行：7					4
	第i行：2*i-1				n-i
	第n行：2*n-1				
	*/
	/*
	int row;		//行

	cout << "请输入金字塔行数：" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		//打印空格 row-i
		for (int j = 0; j < row - i; j++) {
			cout << " " ;
		}
		//第i行： 2*i-1
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/




	//练习三
	/*
		如果series=8时

	   i		*的个数
	 第0次		8个*			***
	 第1次		7个*			**
	 第2次		6个*			*
	 第i次		8-i个*			row-i

	*/
	/*

	int row;		//行

	cout << "请输入列数：" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row - i ; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


		//练习二
	/*
	   i		*的个数（i+1）
	 第0次		1个*			*
	 第1次		2个*			**
	 第2次		3个*			***
	*/
	/*

	int row;		//行

	cout << "请输入列数：" << endl;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


	/*练习一
	int row;		//行
	int series;		//列

	cout << "请输入行号：" << endl;
	cin >> row;
	cout << "请输入列数：" << endl;
	cin >> series;

	for (int i = 0; i < row; i++) {				//行数
		for (int j = 0; j < series; j++) {		//列数
			cout << "*" ;						
		}
		cout << endl;							//输出完一行后换行
	}
	*/

	

	


	system("pause");
	return 0;
}
