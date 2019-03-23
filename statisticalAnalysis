/*Created by Gregory Tretiakov
  Calculating Simple statistics
  (average, max, min and standard deviation of a given set)
*/ 


//Including Required Packages
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Defining Variables 
char input;
char toFloat[32];              
double current,min,max,avg,sdev,var1;
int size,i,i2;
int firstRun=1;
int inLoop=0;

//Declaring Functions/Methods
int createFLoat(char x []);
int performChecks(float x);
double sqrt(double x);

//Start of main method
int main (){
  
  //Scanning In size and Creating array
  scanf("%d",&size);
  float dataPoints[size];
  
  //Setting Variables to Zero
  i2=0;
  i=0;
  //Obtaining Data From STDIN
   while ((input= getchar())!=EOF){
    if (input =='\n'&&inLoop!=0){      
      createFloat(toFloat);
      dataPoints[i2]=current;
      i2++;
      performChecks(current);
      i=0;
      memset(toFloat,0,32);
    }else{
      toFloat[i]=input;
      i++;
      inLoop=1;
     }
  }
  
   //Start of For loop to create variation 
  var1=0;
  for (i=0;i<size;i++){
     dataPoints[i]-=avg;
     dataPoints[i]*=dataPoints[i];
     var1+=dataPoints[i];
   }
   
  //Getting the SQRT of the variation (yields STDEV)
   var1=var1/size;
   sdev=sqrt(var1);
   //Outputting Results
   printf("\nm=%.3f\nM=%.3f\na=%.3f\ns=%.3f\n",min,max,avg,sdev);
   return 0;
}
//Simple Method to create a float from an Array of Chars
int createFloat(char x[]){
  current=atof(toFloat);
  return 0;
}

//Manipulating Current Data (Setting max,min and updating working average)
int performChecks(float x){
  if (firstRun==1){
    firstRun=0;
    min=x;
    max=x;
  }else if (x>max){
    max=x;
  }else if(x<min){
    min=x;
  }
  avg+=(x/size);
  return 0;
}
