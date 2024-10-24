#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void findFirstNegative(int arr[], int n, int k)
{

    for (int i = 0; i <= n - k; i++)
    {
        bool found = false;
        for (size_t j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                cout << arr[j] << " ";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    findFirstNegative(arr, n, k);
    return 0;
}