#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x, y, z;
        int min = 0;
        cin >> n;
        if (n > 50 && n < 100)
        {
            if (n % 3 != 0)
            {
                x = (n - 44) / 3;
            }
            else
            {
                x = (n - 47) / 3;
            }
            z = n - 3 * x;
            y = (50 - z) / 2;
            min = y + x;
            cout << min << endl;
        }
        else if (n < 50)
        {
            int k = 50 - n;
            if (k % 2 == 0)
                min = k / 2;
            else
            {
                min += (k - 1) / 2;
                n += (k - 1);
                while (n != 50)
                {
                    if ((50 - n) % 2 == 0)
                    {
                        min += ((50 - n) / 2) + 1;
                        break;
                    }
                    else
                        n -= 3;
                }
            }
            cout << min << endl;
        }
        else if (n == 100)
        {
            cout << (20) << endl;
        }
        else if (n == 0)
        {
            std::cout << (50 / 2) << std::endl;
        }
        else if (n == 50)
        {
            cout << (0) << endl;
        }
    }

    return 0;
}
