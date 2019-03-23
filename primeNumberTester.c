/*Created by Gregory Tretiakov
 Prime Number Tester for Large Integers (up to 64 bit Unsigned Integers)
*/

//Including Required Packages
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//Defining Variables 
uint64_t boundaries[67];
uint64_t input;                    //Variable that stores user input
uint64_t maxDiv=2;                 //Variable that stores the maximum value to divide by (Found by bit shifting)
uint64_t bigLoop;                  //Variable used to increment the value of a very large loop (for use with 64 bit numbers)
int numberZero=0;                 
int temp=0;                        //Integer used to store the total number of digits to bitShift through
int inc=0;                         


//Start of main method
int main (){
 //Scanning in User Input 
  scanf ("%llu",&input);


  //Creating Boundary Reference
  temp=1;
  boundaries[0]=1;
  for (inc=1;inc<67;inc++){
    if (inc%2==1){
      temp++;
    }
    boundaries[inc]=boundaries[inc-1]*maxDiv;
    if ((boundaries[inc-1]<=input) && (boundaries [inc]>input)){
      numberZero=inc;   
      inc=100;
    }
  }
 
  numberZero-=temp;


 //Actually Performing Bitshift
 if (numberZero>=2){
     maxDiv=(input>>numberZero);
  }else{
    numberZero=1;
    maxDiv=input>>numberZero;
  }
         
  //Resetting INC for use within for loop
  inc=0;    
  //Final Loop to test wether or not the inputed number was a prime number
  for (bigLoop=2;bigLoop<=maxDiv;bigLoop++){
     if ((input%bigLoop)==0){
      inc=1;
      bigLoop=maxDiv+10;
    }
  }   
  //Outputing RESULT to STDOUT
  if (inc==0){
    printf("%llu is a prime number.\n",input);
  }else{
    printf("%llu is not a prime number.\n",input);
  }

  return 0;
}
