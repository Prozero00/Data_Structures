#include <iostream>
#include <stack>
using namespace std;

void reverseStack(int arr[], int n){
    if (n != 0)
    {
        n--;
        cout << arr[n] << " ";
        reverseStack(arr, n);
    }  
}

int main() {
    int arr[]={28,29,30,31,32,33};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseStack(arr,n);
  return 0;
}