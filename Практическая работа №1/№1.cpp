#include <iostream>
#include <iomanip>
using namespace std;

int f1(int n, int m);
int f2(int n, int m);
int f3(int n, int m);
int f4(int n, int m);
int f5(int n, int m);

int main()
{
int n = 5,m = 5;
//cout << "n, m?"; cin >> n >> m;
cout << "A)\n";
f1(n,m);
cout << "B)\n";
f2(n,m);
cout << "C)\n";
f3(n,m);
cout << "D)\n";
f4(n,m);
cout << "E)\n";
f5(n,m);
return 0;
}

int f1(int n, int m)
{
int c = 0;
int mas[n][m];
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < m; ++j)
    {
        if(c % 2 == 0)
            mas[i][j] = 1;
        else
            mas[i][j] = 0;
        cout << mas[i][j] << " ";
        c++;

    }
    cout << "\n";
}
return 0;
}

int f2(int n, int m)
{
int mas[n][m];
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < m; ++j)
    {
        if(i == j)
            mas[i][j] = i + 1;
        else if(i + j == n - 1)
            mas[i][j] = m - i;
        else
            mas[i][j] = 0;
        cout << mas[i][j] << " ";

    }
    cout << "\n";
}
return 0;
}

int f3(int n, int m)
{
int mas[n][m];
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < m; ++j)
    {
        if(i % 2 == 0)
            mas[i][j] = i+1;
        else
            mas[i][j] = 0;
        cout << mas[i][j] << " ";
    }
    cout << "\n";
}
return 0;
}

int f4(int n, int m)
{
int mas[n][m];
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < m; ++j)
    {
        if(i % 2 == 0)
            mas[i][j] = j+1;
        else
            mas[i][j] = m - j;
        cout << mas[i][j] << " ";
    }
    cout << "\n";
}

return 0;
}

int f5(int n, int m)
{
int mas[n][m];
for(int i = 0; i < n; ++i)
{
    for(int j = 0; j < m; ++j)
    {
        if(i == j || (i + j == n -1))
            mas[i][j] = i + 1;
        else
            mas[i][j] = 0;
        cout << mas[i][j] << " ";
    }
    cout << "\n";
}
return 0;
}
