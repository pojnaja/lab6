#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int evenCount = 0;
    int oddCount = 0;
    while (true) {
        cout << "Enter an integer: ";
        cin >> n;
        if (n == 0) break;

        if (n % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "#Even numbers = " << evenCount << "\n";
    cout << "#Odd numbers = " << oddCount;
    return 0;
