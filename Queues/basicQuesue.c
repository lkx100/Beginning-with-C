#include <stdio.h>
#define n 4
int queue[n];
int rear = -1, front = -1;
/*
  Operation on data :
  1. enque -> insertion
  2. deque -> deletion

  Index variables :
  1. rear -> increment as data inserted
  2. front -> increments when last data is deleted
*/
void display (){
  for (int i = 0; i <= rear; i++)
    printf("%d ", queue[i]);
}
void enque ( int data ){
  if (rear == n-1)  // full queue
    printf("Queue is full"); 
  else if (rear == -1){  // empty queue
      rear = front = 0;
      queue[rear] = data;
  }
  else {  // normal queue
    rear++;
    queue[rear] = data;
  }
}
int dequeue (int data){
  if ( front == -1 ){  // empty queue
    printf("Empty queue");
    return -1;
  }
  else if ( front == rear ){  // only one element is in queue
    int d = queue[front];
    front = -1, rear = -1;
    return d;
  }
  else {  // normal queue
    int d = queue[front];
    front++;
    return d;
  }
}
int main(){
  int k;
  scanf("%d", &queue[0]);
  enque(queue[0]);
  return 0;
}