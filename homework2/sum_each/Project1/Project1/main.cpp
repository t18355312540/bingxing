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
	cout << "��������Ը�����" << endl;
	int n=0;
	cin >> n;

	/*	cout << "���������ģʽ��" << endl;*/
		/*int mo = 0;
		cin >> mo;
		if (mo == 1)
		{*/
			//_LARGE_INTEGER time_start;    /*��ʼʱ��*/
			//_LARGE_INTEGER time_over;        /*����ʱ��*/
			//double dqFreq;                /*��ʱ��Ƶ��*/
			//LARGE_INTEGER f;            /*��ʱ��Ƶ��*/
			//QueryPerformanceFrequency(&f);
			//dqFreq = (double)f.QuadPart;
			//QueryPerformanceCounter(&time_start);
			cout << each_sum(n + 1)<<endl;
		/*	QueryPerformanceCounter(&time_over);
			double _time = ((time_over.QuadPart - time_start.QuadPart) / dqFreq);
			cout << "��·�㷨��" << _time << "s" << endl;*/
		/*}*/
		/*else if (mo == 2)
		{*/
			//_LARGE_INTEGER time_start1;    /*��ʼʱ��*/
			//_LARGE_INTEGER time_over1;        /*����ʱ��*/
			//double dqFreq1;                /*��ʱ��Ƶ��*/
			//LARGE_INTEGER f1;            /*��ʱ��Ƶ��*/
			//QueryPerformanceFrequency(&f1);
			//dqFreq1 = (double)f1.QuadPart;
			//QueryPerformanceCounter(&time_start1);
			cout << double_sum(n + 1)<<endl;
		/*	QueryPerformanceCounter(&time_over1);
			double _time1 = ((time_over1.QuadPart - time_start1.QuadPart) / dqFreq1);
			cout << "˫·�㷨��" << _time1 << "s" << endl;*/

			//_LARGE_INTEGER time_start3;    /*��ʼʱ��*/
			//_LARGE_INTEGER time_over3;        /*����ʱ��*/
			//double dqFreq3;                /*��ʱ��Ƶ��*/
			//LARGE_INTEGER f3;            /*��ʱ��Ƶ��*/
			//QueryPerformanceFrequency(&f3);
			//dqFreq3 = (double)f3.QuadPart;
			//QueryPerformanceCounter(&time_start3);
			cout << double_sum(n + 1) << endl;
			/*QueryPerformanceCounter(&time_over3);
			double _time3 = ((time_over3.QuadPart - time_start3.QuadPart) / dqFreq3);
			cout << "��·�㷨��" << _time3 << "s" << endl;*/
		//}
		/*else if (mo == 3)
		//{*/
		//	LARGE_INTEGER time_start2;    /*��ʼʱ��*/
		//	_LARGE_INTEGER time_over2;        /*����ʱ��*/
		//	double dqFreq2;                /*��ʱ��Ƶ��*/
		//	LARGE_INTEGER f2;            /*��ʱ��Ƶ��*/
		//	QueryPerformanceFrequency(&f2);
		//	dqFreq2 = (double)f2.QuadPart;
		//	QueryPerformanceCounter(&time_start2);
			cout << multi_sum(n)<<endl;
		/*	QueryPerformanceCounter(&time_over2);
			double _time2 = ((time_over2.QuadPart - time_start2.QuadPart) / dqFreq2);
			cout << "�ݹ��㷨��" << _time2 << "s" << endl;*/

		/*}*/
		
	/*}*/
	return 0;
}