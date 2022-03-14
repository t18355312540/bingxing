#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
const int N = 15000;
// matrix size
double b[N][N], col_sum[N];
int test_n = 15000;
void init(int n)
// generate a N∗N matrix
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			b[i][j] = double(i) + double(j);
}

void row_main()
{
	for (int j = 0; j < test_n; j++) {
		for (int i = 0; i < test_n; i++)
			col_sum[i] += b[j][i];
	}
}
int main()
{
	double s[10] = { 0 };
	int _n = 10;
	while (_n)
	{
		cout << "n:" << test_n << endl;
		// timers
		init(N);
		_LARGE_INTEGER time_start1;    /*开始时间*/
		_LARGE_INTEGER time_over1;        /*结束时间*/
		double dqFreq1;                /*计时器频率*/
		LARGE_INTEGER f1;            /*计时器频率*/
		QueryPerformanceFrequency(&f1);
		dqFreq1 = (double)f1.QuadPart;
		QueryPerformanceCounter(&time_start1);
		row_main();
		QueryPerformanceCounter(&time_over1);
		/*	for (int i = 0; i < test_n; i++)
			{
				cout << col_sum[i] << " ";
			}
			cout << endl;*/
		double _time1 = ((time_over1.QuadPart - time_start1.QuadPart) / dqFreq1);
		cout << "row：" << _time1 << "s" << endl;//单位为秒，精度为test_n 000/（cpu主频）微秒
		s[_n - 1] = _time1;
		_n--;
	}
	double S = 0;
	for (int i = 0; i < 10; i++)
	{
		S += s[i];
	}

	cout << "平均时间" << S / 10;
}