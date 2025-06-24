#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    vector<int> arr(n);           
    for (int i=1; i<n; i++){
        int z;
        cin >> z;
        arr[z-1] = i;
    }
    for (int i=0; i<n; i++){
        if (arr[i] == 0){
            cout << i+1 << "\n";
        }
    }


}
