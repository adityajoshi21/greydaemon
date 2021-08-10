//implementing priority queue with all its basic functions like insert(),getMin(), removeMin()

#include<vector>
class PriorityQueue{
vector pq<int>;
public:
  PriorityQueue(){}
  
  void isEmpty(){
  return pq.size()==0;
  }

  int getSize(){
  return pq.size();
  }
  
  int getMin(){  //similar implementation for getMax
    if(pq.isEmpty()){
    return 0;
    }
    
    return pq[0];
  }
  
  void insert(int element){
  pq.push_back(element);
   while(childIndex>0){  //we've reached root node
    
    int childIndex= pq.size()-1;
    int parentIndex= (childIndex-1)/2;
    if(pq[parentIndex]>pq[childIndex]){
      int temp= pq[childIndex];
      pq[childIndex]= pq[parentIndex];
      pq[parentIndex]= temp;
     }
    
    else{
    break;
    }
   childIndex=parentIndex;
   }
  }
  
 int removeMin(){
  if(pq.isEmpty()){
  return 0; 
  }
      
   int ans=pq[0];
   pq[0]= pq[pq.size()-1]; //down_heapifying
   pq.pop_back();
   int parentIndex=0;
   int LCI= 2*parentIndex+1;
   int RCI= 2*parentIndex+2;
   
   while(LCI<pq.size()){
      int minIndex=parentIndex;
     if(pq[minIndex]> pq[LCI]){
     minIndex=LCI;
     }
     
     if(RCI<pq.size()&&pq[RCI]<pq[minIndex]){
     minIndex=RCI;
     }
   else if(minIndex==parentIndex){
   break;
   } //we've reached the root node
   int temp= p[minIndex];
     pq[parentIndex]= pq[minIndex];
     pq[parentIndex]=temp;
     
     //setting indices for the next iteration
     parentIndex= minIndex;
     LCI= 2*parentIndex+1;
     RCI=2*parentIndex+2;
   
   }
  return ans;
 } 
  
};
