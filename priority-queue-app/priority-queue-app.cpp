#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(1);
    pq1.push(12);
    pq1.push(8);
    pq1.push(25);
    pq1.push(87);

    cout << "queue size: " << pq1.size() << endl; //print size of queue
    
    cout << "queue: ";
    while (pq1.empty() == false)  //print and dequeue entire queue
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }

    cout << endl;
    cout << "after complete dequeue size is: " << pq1.size(); //print queue size after entire dequeue (should be 0)

}