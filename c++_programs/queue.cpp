#include <iostream>
#include <cstdio>
using namespace std;
#include<algorithm>
#include<queue>

void Queue(){                 /* simple queue example */
   queue<int> q;
   q.push(4);
   q.push(2);
   q.push(9);
   q.push(5);
   for (int i=0;i<q.size();i++);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void P_Queue1(){            /* simple priority queue example */
    priority_queue<int> pq;
    pq.push(12);
    pq.push(23);
    pq.push(21);
    pq.push(40);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}

/* example of priority queue where lower integers have higher priority */
void P_Queue2()
{
  priority_queue <int, vector<int>, greater<int> > pq;   //pq is a priority queue of integers that uses
                                                         //a vector of integers for storage and uses >
                                                         //to determine priority. This means that if a > b,
                                                         //a has *lower* priority than b.

  pq.push(2);                      //put 2, 5, 3, 2 into the queue
  pq.push(5);
  pq.push(3);
  pq.push(1);
  while (!pq.empty()) {
    cout << pq.top()<<" ";      //print out the highest priority element in the queue
    pq.pop();                      //remove the highest priority element
  }
}
class Height
{
  public:
    Height() {};                                      //default constructor
    Height(int x, int y) { feet = x; inches = y; }    //constructor
    bool operator<(const Height&) const;              //overloaded < operator

    int get_feet() const { return feet; }             //accessor methods
    int get_inches() const { return inches; }

  private:
    int feet, inches;                                 //data fields
};

/* overload the less-than operator so priority queues know how to compare two Height objects */
bool Height::operator<(const Height& right) const
{
  return feet*12 + inches < right.feet*12 + right.inches;
}

/* example of a priority queue using the Height class */
void P_Queue3()
{
  priority_queue <Height> pq;      //pq is a priority queue of Height objects
  Height x;
  x = Height(10,20);               //put 10'20", 11'0", 8'25", and 9'4" into the priority queue
  pq.push(x);
  x = Height(11,0);
  pq.push(x);
  x = Height(8,25);
  pq.push(x);
  x = Height(9,4);
  pq.push(x);
  while (!pq.empty()) {
    cout << pq.top().get_feet()                             //print out the feet and inches of the highest
         << "' " << pq.top().get_inches() << "\"" << endl;  //priority Height object in the priority queue
    pq.pop();                                               //remove the highest priority element
  }
}

int main(){
    cout<<"Queue: ";
    Queue();
    cout<<endl<<"P_Queue: ";
    P_Queue1();
    cout<<endl<<"P_Queue2: ";
    P_Queue2();
    cout<<endl<<"P_Queue2: ";
    P_Queue3();
    cout<<endl;
  return 0;
}













