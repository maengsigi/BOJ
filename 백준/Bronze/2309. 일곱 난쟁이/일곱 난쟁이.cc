#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> dwf(9);
    int sum = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> dwf[i];
        sum += dwf[i];
    }
    
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwf[i] - dwf[j] == 100) {
                dwf.erase(dwf.begin() + i, dwf.begin() + i + 1);
                dwf.erase(dwf.begin() + j - 1, dwf.begin() + j);
                
                sort(dwf.begin(), dwf.end());
                for (int a : dwf) {
                    cout << a << "\n";
                }
                return 0;
            }
        }
    }
    return 0;
}