#include <iostream>
//#include <windows.h>
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

void row_main()
{
	for (int j = 0; j < test_n; j++) {
		for (int i = 0; i < test_n; i++)
			col_sum[i] += b[j][i];
	}
}
int main()
{

	cout << "n:" << test_n << endl;
	// timers
	init(N);
	//// similar to CLOCKS_PER_SEC
	//QueryPerformanceFrequency((LARGE_INTEGER ∗) & freq);
	//// start time
	//QueryPerformanceCounter((LARGE_INTEGER ∗) & head);
	//_LARGE_INTEGER time_start;    /*开始时间*/
	//_LARGE_INTEGER time_over;        /*结束时间*/
	//double dqFreq;                /*计时器频率*/
	//LARGE_INTEGER f;            /*计时器频率*/
	//QueryPerformanceFrequency(&f);
	//dqFreq = (double)f.QuadPart;
	//QueryPerformanceCounter(&time_start);
	col_main();
	//QueryPerformanceCounter(&time_over);
	/*	for (int i = 0; i < test_n; i++)
		{
			cout << col_sum[i] << " ";
		}
		cout << endl;*/
	//double _time = ((time_over.QuadPart - time_start.QuadPart) / dqFreq);
	//cout << "col：" << _time << "s" << endl;//单位为秒，精度为test_n 000/（cpu主频）微秒
	//// end time
	//QueryPerformanceCounter((LARGE_INTEGER ∗) & tail);
	//cout << "Col: " <<(tail−head) ∗ test_n.0 / freq << "ms" << endl;
	//for (int i = 0; i < test_n; i++)
	//{
	//	col_sum[i] = 0;
	//}
	//_LARGE_INTEGER time_start1;    /*开始时间*/
	//_LARGE_INTEGER time_over1;        /*结束时间*/
	//double dqFreq1;                /*计时器频率*/
	//LARGE_INTEGER f1;            /*计时器频率*/
	//QueryPerformanceFrequency(&f1);
	//dqFreq1 = (double)f1.QuadPart;
	//QueryPerformanceCounter(&time_start1);
	row_main();
	//QueryPerformanceCounter(&time_over1);
	/*	for (int i = 0; i < test_n; i++)
		{
			cout << col_sum[i] << " ";
		}
	//	cout << endl;*/
	//double _time1 = ((time_over1.QuadPart - time_start1.QuadPart) / dqFreq1);
	//cout << "row：" << _time1 << "s" << endl;//单位为秒，精度为test_n 000/（cpu主频）微秒
}