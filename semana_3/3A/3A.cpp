#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // Leitura
    int p[m];
    for (int j = 0; j < m; j++)
        cin >> p[j];
    for (int j = 0; j < m; j++)
        cout << p[j];
    return 0;
}