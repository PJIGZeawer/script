#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a;
    b = a/1000;
    c = (a%1000)/100;
    d = (a%100)/10;
    e = a%10;
    if ((b==e) && (c==d)) {
        cout << "This number is palindrome";
    } else {
        cout << "This number isn't palindrome";
    }
    return 0;
}