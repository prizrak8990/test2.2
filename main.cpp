#include <iostream>
using namespace std;

int main()
{
    int i, n, x;
    int *a=nullptr;
    int *b=nullptr;
    int *c=nullptr;
    cin >> n;
    if (n <= 0)
    {
        cout << "An error has occurred while reading input data";
        return 0;
    }
    a=new int[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    b=new int[x];
    c=new int[n - x%n - 1];
    for (i = 0; i < x%n; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < n - x%n; i++) {
        c[i] = a[i + x%n];
    }
    for (i = 0; i < n - x%n; i++) {
        cout << c[i] << " ";
    }
    for (i = 0; i < x;%n i++) {
        cout << b[i] << " ";
    }
    return 0;
}
