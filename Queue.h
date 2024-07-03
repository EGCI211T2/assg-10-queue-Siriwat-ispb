
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
if(new_node){ 
  if(size==0) headPtr= new_node;
  else tailPtr->set_next(new_node);
  tailPtr=new_node;
  size++;
  /* Add head and tail for me please */
  //1. connect & Change tail
  //2. (may be) change head  when the queue is empty
  //3. increase size*/
 }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
     NodePtr t=headPtr;
     int value= t->get_value();
     /* Add head and tail for me please */
     if(size== 1) tailPtr = NULL;
     headPtr = headPtr->get_next();
     -- size;
     delete t;
     return value;
  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
    //initialize Queue
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
    
}
Queue::~Queue(){
    //delete all remaning Queue (i.e. DQ all) 
    cout<< "Clearing queue" << endl;
    while(size > 0) cout<< "Dequeing " << dequeue() << endl;
}


#endif
