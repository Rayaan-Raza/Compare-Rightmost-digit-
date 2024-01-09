#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3,D1,D2,D3;

    cout << "Input the first number: ";
    cin >> n1;

    cout << "Input the second number: ";
    cin >> n2;

    cout << "Input the third number: ";
    cin >> n3;

    D1 = n1 % 10;
    D2 = n2 % 10;
    D3 = n3 % 10;

bool result = (D1==D2 || D1==D3 || D2==D3);

cout << "The result is : "<<(result ? "true" : "false")<<endl;

    return 0;
}
