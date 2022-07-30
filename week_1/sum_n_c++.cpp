// Sum of n natural numbers
#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    int sub = 0;

    cout << "Input limit:" << endl;
    cin >> n;

    for (int i = 0; i <= n; i++) // local decl. of i
        sum = sum + i;

    for (int j = 0; j <= n; j++)
        sub = sub - j;
    
    cout << "Sum of " << n << " numbers is: " << sum << endl;
    cout << "Sub of " << n << " numbers is: " << sub << endl;
}