#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void compare(int arr[], int n){
    stack<int> s;
    vector<int> nge(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            nge[i] = s.top();
        }else
        {
            nge[i] = -1;
        }
        
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " -> " << nge[i] << endl;
    }
}

int main() {
    int arr[]={4,5,2,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    compare(arr,n);
  return 0;
}