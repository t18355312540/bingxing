#include<iostream>

using namespace std;
int each_sum(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		count += i;
	return count;
}
int double_sum(int n)
{
	int count1 = 0;
	for (int i = 0; i < n / 2; i++)
		count1 += i;
	int count2 = 0;
	for (int i = n / 2; i < n; i++)
		count2 += i;
	return count1 + count2;
}
int multi_sum(int n)
{

	if (n == 1)
		return 1;
	return n + multi_sum(n - 1);
}
int main()
{
	//while (true)
	//{
	cout << "请输入测试个数：" << endl;
	int n = 0;
	cin >> n;

	cout << "请输入计算模式：" << endl;
	int mo = 0;
	cin >> mo;
	if (mo == 1)
	{
		cout << each_sum(n + 1) << endl;
	}
	else if (mo == 2)
	{
		
		cout << double_sum(n + 1) << endl;
	

	}
	else if (mo == 3)
	{

		cout << multi_sum(n) << endl;

	}

	/*}*/
	return 0;
}