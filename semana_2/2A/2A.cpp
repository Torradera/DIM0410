#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int m, n, k = 1;

    while (true)
    {

        cin >> m >> n;

        if (m == 0 || n == 0)
            break;

        cout << "Field #" << k;
        k++;

        char line0[n+1], line1[n+1], line2[n+1], out[n+1];

        for (i = 0; i < n; i++)
        {
            line0[i] = '0';
            line1[i] = '0';
        }
        for (i = 0; i < m; i++)
            cin >> line1;
            for (j = 0; j <= n; j++)
            {
                if (line1[i] == '*' && (j-1) < 0)
                    
            }


    return 0;
}