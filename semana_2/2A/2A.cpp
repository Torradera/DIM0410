#include <iostream>
#include <string>

using namespace std;

char add_warn (char &ch_a);

int main ()
{
    int m, n, k = 1;

    while (true)
    {

        cin >> m >> n;

        if (m == 0 || n == 0)
            break;
        cout << "Field #" << k << ":" << endl;
        k++;
        char line0[n+1], line1[n+1], line2[n+1], aux;

        for (int i = 0; i < n; i++)
        {
            line0[i] = '0';
            line2[i] = '0';
        }
        for (int i = 0; i < m; i++)
        {
            cin >> line1;
            for (int j = 0; j <= n; j++)
            {
                if (line1[j] == '*')
                {
                    if ((j-1) >= 0 && (i-1) >= 0 && line0[j-1] != '*')
                    {
                        aux = line0[j-1];
                        cout << aux;
                        add_warn(aux);
                        line0[j-1] = aux;
                    }
                    else if ((i-1) > 0 && line0[j] != '*')
                    {
                        aux = line0[j];
                        add_warn(aux);
                        line0[j] = aux;
                    }
                    else if ((j+1) < n && (i-1) > 0 && line0[j+1] != '*')
                    {
                        aux = line0[j+1];
                        add_warn(aux);
                        line0[j+1] = aux;
                    }
                    else if ((j-1) > 0 && line1[j-1] != '*')
                    {
                        aux = line1[j-1];
                        add_warn(aux);
                        line1[j-1] = aux;
                    }
                    else if ((j+1) < n && line1[j+1] != '*')
                    {
                        aux = line1[j+1];
                        add_warn(aux);
                        line1[j+1] = aux;
                    }
                    else if ((j-1) > 0 && (i+1) < m && line2[j-1] != '*')
                    {
                        aux = line2[j-1];
                        add_warn(aux);
                        line2[j-1] = aux;
                    }
                    else if ((i+1) < m && line2[j] != '*')
                    {
                        aux = line2[j];
                        add_warn(aux);
                        line2[j] = aux;
                    }
                    else if ((j+1) < n && (i+1) < m && line2[j+1] != '*')
                    {
                        aux = line2[j+1];
                        add_warn(aux);
                        line2[j+1] = aux;
                    }
                }
                if (i > 0)
                    cout << line0 << endl;
                if (i == (m-1))
                    cout << line1 << endl;
                
            }
        }
    }  
    return 0;
}

char add_warn (char &ch_a)
{
    switch (ch_a)
    {
        case '*':
            break;
        case '.':
            ch_a = '1';
            break;
        case '0':
            ch_a = '1';
            break;
        case '1':
            ch_a = '2';
            break;
        case '2':
            ch_a = '3';
            break;
        case '3':
            ch_a = '4';
            break;
        case '4':
            ch_a = '5';
            break;
        case '5':
            ch_a = '6';
            break;
        case '6':
            ch_a = '7';
            break;
        case '7':
            ch_a = '8';
            break;
    }
    return ch_a;
}
