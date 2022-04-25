#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
srand(time(NULL));
int n = 2, m = 4,i,j;
int mas[n][m];
int tmas[m][n];
cout << "Original matrix:\n";
for(i = 0; i < n; ++i)
{
    for(j = 0; j < m; ++j)
    {
        mas[i][j] = rand()%100-50;
        cout << setw(4) << mas[i][j];
    }
    cout << "\n";
}
cout << "Transposed matrix:\n";
for(i = 0; i < m; ++i)
{
    for(j = 0; j < n;++j)
    {
        tmas[i][j] = mas[j][i];
        cout << setw(4) << tmas[i][j];
    }
    cout << "\n";
}
return 0;
}
