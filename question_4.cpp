#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void interleaveQueue(queue<int>& q)
{
    int n = q.size();
    queue<int> firstHalf;
    int halfSize = n / 2;

    for (size_t i = 0; i < halfSize; i++)
    {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty())
    {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Original queue: ";
    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    interleaveQueue(q);

    cout << "Interleaved queue: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}