#include <iostream>

using namespace std;



int main()
{
    int n, m, t, k = 0;
    cin >> n >> m; // Leitura

    if (n < 1 || m > 10000)
        return 0;

    int p[m], o[m] = {0};
    bool run[m];
    for (int j = 0; j < m; j++)
        cin >> p[j];

    for (int i = 0; i < m; i++)
    {
        t = p[i];
        if (i == 0)
            k++;
        else
        {
            if (t == p[i-1])
                k++;
        }
        cout << k << endl;
        if (k == n)
            o[i] = 1;

    }
    
    for (int i = 0; i < m; i++)
        cout << o[i];

    return 0;
}