#include<iostream>
#include<stdlib.h>
//#include<windows.h>
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
	for (int i = 0; i < n/2; i++)
		count1 += i;
	int count2 = 0;
	for (int i = n/2; i<n; i++)
		count2 += i;
	return count1 + count2;
}
int tri_sum(int n)
{
	int count1 = 0;
	for (int i = 0; i < n / 3; i++)
		count1 += i;
	int count2 = 0;
	for (int i = n / 3; i < 2*n/3; i++)
		count2 += i;
	int count3 = 0;
	for (int i = 2*n / 3; i < n; i++)
		count3 += i;
	return count1 + count2+count3;
}
int multi_sum(int n)
{
	
	if (n == 1)
		return 1;
	else
	return n + multi_sum(n - 1);
}

int main()
{
	//while (true)
	//{
	cout << "请输入测试个数：" << endl;
	int n=0;
	cin >> n;

	/*	cout << "请输入计算模式：" << endl;*/
		/*int mo = 0;
		cin >> mo;
		if (mo == 1)
		{*/
			//_LARGE_INTEGER time_start;    /*开始时间*/
			//_LARGE_INTEGER time_over;        /*结束时间*/
			//double dqFreq;                /*计时器频率*/
			//LARGE_INTEGER f;            /*计时器频率*/
			//QueryPerformanceFrequency(&f);
			//dqFreq = (double)f.QuadPart;
			//QueryPerformanceCounter(&time_start);
			cout << each_sum(n + 1)<<endl;
		/*	QueryPerformanceCounter(&time_over);
			double _time = ((time_over.QuadPart - time_start.QuadPart) / dqFreq);
			cout << "单路算法：" << _time << "s" << endl;*/
		/*}*/
		/*else if (mo == 2)
		{*/
			//_LARGE_INTEGER time_start1;    /*开始时间*/
			//_LARGE_INTEGER time_over1;        /*结束时间*/
			//double dqFreq1;                /*计时器频率*/
			//LARGE_INTEGER f1;            /*计时器频率*/
			//QueryPerformanceFrequency(&f1);
			//dqFreq1 = (double)f1.QuadPart;
			//QueryPerformanceCounter(&time_start1);
			cout << double_sum(n + 1)<<endl;
		/*	QueryPerformanceCounter(&time_over1);
			double _time1 = ((time_over1.QuadPart - time_start1.QuadPart) / dqFreq1);
			cout << "双路算法：" << _time1 << "s" << endl;*/

			//_LARGE_INTEGER time_start3;    /*开始时间*/
			//_LARGE_INTEGER time_over3;        /*结束时间*/
			//double dqFreq3;                /*计时器频率*/
			//LARGE_INTEGER f3;            /*计时器频率*/
			//QueryPerformanceFrequency(&f3);
			//dqFreq3 = (double)f3.QuadPart;
			//QueryPerformanceCounter(&time_start3);
			cout << double_sum(n + 1) << endl;
			/*QueryPerformanceCounter(&time_over3);
			double _time3 = ((time_over3.QuadPart - time_start3.QuadPart) / dqFreq3);
			cout << "三路算法：" << _time3 << "s" << endl;*/
		//}
		/*else if (mo == 3)
		//{*/
		//	LARGE_INTEGER time_start2;    /*开始时间*/
		//	_LARGE_INTEGER time_over2;        /*结束时间*/
		//	double dqFreq2;                /*计时器频率*/
		//	LARGE_INTEGER f2;            /*计时器频率*/
		//	QueryPerformanceFrequency(&f2);
		//	dqFreq2 = (double)f2.QuadPart;
		//	QueryPerformanceCounter(&time_start2);
			cout << multi_sum(n)<<endl;
		/*	QueryPerformanceCounter(&time_over2);
			double _time2 = ((time_over2.QuadPart - time_start2.QuadPart) / dqFreq2);
			cout << "递归算法：" << _time2 << "s" << endl;*/

		/*}*/
		
	/*}*/
	return 0;
}