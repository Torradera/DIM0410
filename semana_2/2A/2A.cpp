#include <iostream>
#include <string>

using namespace std;

char add_warn (char a);

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
                if (line1[j] == '*')
                {
                    out[j] = '*';
                    if ((j-1) > 0 && (i-1) > 0 && (i+1) < m && (j+1) < n){
                        add_warn(line0[j-1], out[j-1]);
                        add_warn(line0[j], out[j]);
                        add_warn(line0[j+1], out[j+1]);
                        add_warn(line1[j-1], out[j-1]);
                        add_warn(line1[j+1], out[j+1]);
                        add_warn(line2[j-1], out[j-1]);
                        add_warn(line2[j], out[j]);
                        add_warn(line2[j+1], out[j+1]);
                    }
                }
                cout << out;
            }
        }
    }  
    return 0;
}

char add_warn (char ch_a, char ch_b)
{
    switch (ch_a)
    {
        case '*':
            break;
        case '0':
            ch_b = '1';
            break;
        case '1':
            ch_b = '2';
            break;
        case '2':
            ch_b = '3';
            break;
        case '3':
            ch_b = '4';
            break;
        case '4':
            ch_b = '5';
            break;
        case '5':
            ch_b = '6';
            break;
        case '6':
            ch_b = '7';
            break;
        case '7':
            ch_b = '8';
            break;
    }
}