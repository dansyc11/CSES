#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
    cout << n << "\n";
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
            cout << n << "\n";
        }
        else{
            n= n*3 + 1;
            cout << n << "\n";
        }
    }
}
