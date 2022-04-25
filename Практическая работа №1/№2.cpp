#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
using namespace std;

int main()
{
setlocale(LC_ALL,"Russian");
srand(time(NULL));
int n,i;
cout << "Введите размер массива:";cin >> n;
int mas[n], masOut[n];
cout << "Исходый массив:" << endl;
for(i = 0; i < n; ++i)
{
  mas[i] = rand()%1000; cout << mas[i] << " ";
}
cout << "\nМассив из максимальных цифр чисел исходного массива:" << endl;
for(i = 0; i < n; ++i)
{
    int numMax = mas[i] % 10;
    mas[i] /= 10;
    while(mas[i] != 0)
    {
        if(mas[i] % 10 > numMax)
            numMax = mas[i] % 10;
        mas[i] /= 10;
    }
    masOut[i] = numMax;
    cout << numMax << " ";
}
return 0;
}
