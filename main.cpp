#include <iostream>
using namespace std;

int main()
{
    int i, n, x;
    cin >> n;
    if (n <= 0)
        return 0;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    int b[x%n - 1], c[n - x%n - 1];
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
