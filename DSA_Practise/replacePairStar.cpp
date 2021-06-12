// problem statement: Pair star
// Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

int length(char input[]){
int len=0;

  for(int i=0; input[i]!='\0'; i++){
  len++;}
  return len;
}




void pairStar(char input[], int start){
    //base case for recursion
   if(input[start]=='\0')
       return ;



pairStar(input, start+1);

if(input[start]==input[start+1]){
int end= length(input);
  input[end+1] ='\0';  // setting null char  
  int i;
  for(i=end-1;i>=start+1; i--) {
  input[i+1] = input[i];    
  }
  input[i+1]='*';
}
}  
  
void pairStar(char input[]) {
    pairStar(input, 0);
    }
    
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}

