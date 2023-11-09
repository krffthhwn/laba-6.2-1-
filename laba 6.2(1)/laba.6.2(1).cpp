#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

void Create(int* q, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		q[i] = Low + rand() % (High - Low + 1);
}
void Print(int* q, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << q[i];
	cout << endl;
}

int Sum(int* q, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (q[i] % 2 != 0)
			S += i;
	return S;
}
int main()
{
	srand((unsigned)time(NULL));
	int s;
	cout << "s = "; cin >> s;
	int* d = new int[s];
	int Low = 1;
	int High = 20;
	Create(d, s, Low, High);
	cout << "q[s] =";
	Print(d, s);
	cout << "Sum = " << Sum(d, s) << endl;
	return 0;
}
