//Stack Data Structure
// program to  reverse a given stack
#include <iostream>
#include <stack>
using namespace std;
//defining the reverse function
void reverseStack(stack<int> &input, stack<int> &extra) { 
    int count; int value= input.size();
  stack <int> helper;
    if(input.empty())
     return;
else{
   
   
     
    
    for(count=1; count<=value;count++){
        int x=input.top();
		input.pop();
        extra.push(x);
        }
    
}
    for (count=1;count<=value; count++){
        int y = extra.top();
       helper.push(y);
        extra.pop();       
        
    }
    for (count=1;count<=value; count++){
        int z = helper.top();
       input.push(z);
        helper.pop();       
        
    }
}

//driver
int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}
