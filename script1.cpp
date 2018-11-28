#include <iostream>
using namespace std;
int void () {
int r, t;
r = t;
}
int main()
{
    int a, b, c, d, e;
    cin >> a;
    b = a/1000; //first number
    c = (a%1000)/100; //second number
    d = (a%100)/10; //third number
    e = a%10; //fourth number
    if ((b==e) && (c==d)) {
        cout << "This number is palindrome";
    } else {
        cout << "This number isn't palindrome";
    }
    return 0;
}
