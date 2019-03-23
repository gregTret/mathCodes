/*Created by Gregory Tretiakov
  Multiplying two matricies togethether.
*/ 

//Including Required Packages
#include <stdio.h>

//Initializing Variables
int x=0,i=0,z=0,w=0;
int h1,w2,w1,h2,hf,wf;

//Start of Main
int main (){
  scanf("%d",&h1);    //Scanning in Height of first
  scanf("%d",&w1);    //Scanning in Width of first
  scanf("%d",&w2);    //Scanning in Width of Second
  h2=w1;              //Assigning Value of height to second
  //Assigning Values to final matrix output
  /*if (h1>h2){
    hf=h1;
  }else{
    hf=h2;
  }  
  if (w1>w2){
    wf=w1;
  }else{
    wf=w2;
  }
  */

  wf=w2;
  hf=h1; 
  //Creating Matrix representations
  float first[h1][w1];
  float second[h2][w2];
  float result[hf][wf];
  
  for (i=0;i<hf;i++){
    for (x=0;x<wf;x++){
      result[i][x]=0.00;
    }
  }
  //Scanning in values into first matrix
  for (i=0;i<h1;i++){
    for (x=0;x<w1;x++){
      scanf("%f",&first[i][x]);
    }
  }
  //Scanning in values into second matrix
  for (i=0;i<h2;i++){
    for (x=0;x<w2;x++){
      scanf("%f",&second[i][x]);
    }
  }
  //Multiplying matrix one and two together and storing the values within the final matrix
  for (i=0;i<hf;i++){
    for (x=0;x<wf;x++){
      for (z=0;z<w1;z++){
	result[i][x]+=first[i][z]*second[z][x];
      }     
    }
  }
  //printing out the required output
  printf("%d %d\n",hf,wf);
  for (i=0;i<hf;i++){
    for (x=0;x<wf;x++){
      printf("%.2f ",result[i][x]);
    }
    printf("\n");
  }
  return 0;

}
