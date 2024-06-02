#include <iostream>
using namespace std;

int check(int x, int y, int z)
{
    int p, q, r;
    if (x > y && x > z)
    {
        p = x;
        q = y;
        r = z;
    }
    else if (y > x && y > z)
    {
        p = y;
        q = x;
        r = z;
    }
    else
    {
        p = z;
        q = x;
        r = y;
    }
    if (p * p == q * q + r * r)
    {
        cout << "YES Pythagorean triplet";
    }
    else
    {
        cout << "NOT This is not Pythagorean triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the value of a ,b , c;" << endl;
    cin >> a >> b >> c;
    check(a, b, c);
    return 0;
}