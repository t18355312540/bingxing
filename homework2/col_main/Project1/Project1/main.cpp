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
void col_main()
{
	for (int i = 0; i < test_n; i++) {
		col_sum[i] = 0.0;
		for (int j = 0; j < test_n; j++)
			col_sum[i] += b[j][i];

	}
}

int main()
{
	int _n = 10;
	double s[10] = { 0 };
	while (_n)
	{
		cout << "n:" << test_n << endl;
		// timers
		init(N);
		//// similar to CLOCKS_PER_SEC
		//QueryPerformanceFrequency((LARGE_INTEGER ∗) & freq);
		//// start time
		//QueryPerformanceCounter((LARGE_INTEGER ∗) & head);
		_LARGE_INTEGER time_start;    /*开始时间*/
		_LARGE_INTEGER time_over;        /*结束时间*/
		double dqFreq;                /*计时器频率*/
		LARGE_INTEGER f;            /*计时器频率*/
		QueryPerformanceFrequency(&f);
		dqFreq = (double)f.QuadPart;
		QueryPerformanceCounter(&time_start);
		col_main();
		QueryPerformanceCounter(&time_over);
		/*	for (int i = 0; i < test_n; i++)
			{
				cout << col_sum[i] << " ";
			}
			cout << endl;*/
		double _time = ((time_over.QuadPart - time_start.QuadPart) / dqFreq);
		cout << "col：" << _time << "s" << endl;//单位为秒，精度为test_n 000/（cpu主频）微秒
		s[_n - 1] = _time;
		_n--;
	}
	double S = 0;
	for (int i = 0; i < 10; i++)
	{
		S += s[i];
	}
		
	cout << "平均时间" << S / 10;
}