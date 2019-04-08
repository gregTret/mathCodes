//Created by Gregory Tretiakov

#include <stdio.h>
//Declaring Method Headers
void permutate(int array[], int start, int n,int maxNum);
void shift (int array[],int i,int n);
void printOut(int array[],int maxNum);

//Start of Main Method
int main (int argc, char **argv) {
  
  //Checking that the number of arguments given is correct
  if (argc==2){
    //Declaring Variables for immediate use (based on user input)
    int perms=atoi(argv[1]);
    int i;
    int allNums[perms];

    //Creating the appropriate array to permutate through
    for (i=0;i<perms;i++){
      allNums[i]=i+1;
    }

    //Calling Permutation Function
    permutate(allNums,0,perms,perms);     

    return 0; 
  }

  printf("Improper usage use\n./permutations int\n");
  return 1;
}


//Permutate Method

void permutate(int array[], int start, int n,int maxNum) {
  //Calling function to print out the current array
  printOut(array,maxNum);
  
  if (start < n) {
    int i,j;
    for (i = n - 2; i >= start; i--) {
      for (j = i + 1; j < n; j++) {
	//Saving and readjusting the values within the total array
	//Temporary Variable
	int t = array[i];
	array[i] = array[j];
	array[j] = t;
	//Calling permutate Recursively
	permutate(array, i+1, n,maxNum);
      }
      
      shift(array, i, n);
    }
  }
}
//Shift over the array Elements
void shift (int array[],int i,int n){
  //assign array[i] to t.
  int t = array[i];
  int x;
  //for loop that deranges the array and reorders elements by shifting the first element over to the end
  for (x = i+1; x < n; x++){
    array[x-1] = array[x];
  }
  array[n-1] = t;
}
//PrintOut method
void printOut(int array[],int maxNum){
  int z=0;
  //For the number of elements print out the element at the given position
  for (z=0;z<maxNum;z++){
    printf("%d ",array[z]); 
  }
  printf("\n");
}
