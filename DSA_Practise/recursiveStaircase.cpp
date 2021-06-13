/*problem statement: There are n stairs, a person standing at the bottom wants to reach the top. 
The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top. */

// approach(using recursion): ways(n)= ways(n-1)+ways(n-2)
int fib(int n){
if(n==1){
return;
  else
  return fib(n-1)+ fib(n-2);   //recursive call
}
  
  //returns no. of ways to reach ith stair
  int noOfWays(int i);
  fib(i+1); 
}

// Driver 
int main()
{
    int i = 5;
 
    cout << "Number of ways = " << noOfWays(i);
 
    return 0;
}
 
