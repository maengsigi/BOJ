#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int arr[N];
    vector<int> ans;
    
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] < X) {
            ans.push_back(arr[i]);
        }
    }
    
    for (int i : ans) {
        cout << i << " ";
    }
    
    return 0;
}