#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    int sum = 0;
    for (int i=0;i<n-1; i++){
        int z;
        cin >> z;
        sum += z;
    }
    cout << n*(n+1)/2 - sum;

}
