
#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");

	int a, b;
	int n;
	double s0, s1 = 0, s2 = 0, sum, h;

	cout << "Введите нижний предел интегрирования a: "; cin >> a;
	cout << "Введите верхний предел интегрирования b: "; cin >> b;
	cout << "Введите количество шагов n: "; cin >> n;

	if (a > b) {
		cout << "Некорректный ввод данных!";
		return 0;
	}

	h = (double)((b - a) / (2. * n));
	const int size = n * 2 + 1;

	double* x = new double[size];
	double* y = new double[size];

	cout << " _________________" << endl;
	cout << "| i |  Xi  |  Yi  |" << endl;
	cout << "|___|______|______|" << endl;
	for (int i = 0; i < size; ++i)
	{
		x[i] = h * i;
		y[i] = (double)pow(x[i], 3);

		cout << "|" << setw(3) << i<< "|" << setw(6) << setprecision(3) << x[i] << "|" << setw(6) << setprecision(3) << y[i] << "|" << endl;

		if (i % 2 != 0)
			s1 += (double)4 * y[i];
		else if (i > 0 && i < size - 1 && i % 2 == 0)
			s2 += (double)2 * y[i];
	}
	cout << "|___|______|______|" << endl;
	s0 = (double)y[0] + y[size - 1];
	sum = (double)(h / 3.) * (s0 + s1 + s2);

	cout << "s0 = " << setprecision(3) << s0 << endl;
	cout << "s1 = " << setprecision(3) << s1 << endl;
	cout << "s2 = " << setprecision(3) << s2 << endl;

	cout << "Приблизительная сумма = " << setprecision(3) << sum << endl;
	delete[] x;
	delete[] y;
	system("pause");
	return 0;
}

