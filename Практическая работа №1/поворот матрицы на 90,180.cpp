#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
srand(time(NULL));
int n = 2,m = 4,i,j,k;
int mas[n][m];

cout << "source array:\n";
for(i = 0; i < n; ++i)
{
    for(j = 0; j < m; ++j)
    {
        mas[i][j] = rand()%100-50;
        cout << setw(4) << mas[i][j];
    }
    cout << endl;
}

cout << "\n90 right:\n";
int masR90[m][n];
for(i = 0; i < m; ++i)
{
    for(j = 0; j < n;++j)
    {
        masR90[i][j] = mas[j][i];
        cout << setw(4) << masR90[i][j];
    }
    cout << endl;
}

cout << "\n90 left:\n";
int masL90[m][n];
for(i = 0; i < m; ++i)
{
    for(j = 0; j < n; ++j)
    {
        masL90[i][j] = mas[j][m-i-1];
        cout << setw(4) << masL90[i][j];
    }
    cout << endl;
}

cout << "\n180 right:\n";
int masR180[n][m];
for(i = 0; i < n; ++i)
{
    for(j = 0; j < m; ++j)
    {
        masR180[i][j] = mas[i][m-j-1];
        cout << setw(4) << masR180[i][j];
    }
    cout << endl;
}
cout << "\n180 left:\n";
int masL180[n][m];
for(i = 0; i < n; ++i)
{
    for(j = 0; j < m; ++j)
    {
        masL180[i][j] = mas[n-i-1][m-j-1];
        cout << setw(4) << masL180[i][j];
    }
    cout << endl;
}
return 0;
}
