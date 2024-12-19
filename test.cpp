#include<iostream>
#include"list.h"
#include"queue.h"
#include"priority_queue.h"
#include"stack.h"
using namespace std;
pqueue<int> pq;
list<int> l;
queue<int> q;
stack<int> s;
int main()
{
for(int i=0;i<10;i++)
s.push(i);
for(int i=0;i<10;i++)
s.pop();
s.display();

for(int i=0;i<10;i++)
l.insert(i);
for(int i=0;i<10;i++)
l.remove();
l.display();

// for(int i=0;i<10;i++)
// q.enque(i);
// for(int i=0;i<10;i++)
// q.deque();
// q.display();

// for(int i=0;i<10;i++)
// pq.enqueue(i);
// for(int i=0;i<10;i++)
// pq.deque();
// pq.display();



}
