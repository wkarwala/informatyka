#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int p = 2;
    int lp = 0;
    bool o;
    cout << "Podaj ile liczb pierwszych chcesz wyświetlić: ";
    cin >> n;
    cout << "Liczby pierwsze: ";
    while (lp < n)
    {
        o = true;
        for (int i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                o = false;
                break;
            }
        }

        if (o)
        {
            cout << p << " ";
            lp = lp+1;
        }
        p = p+1;
    }
}