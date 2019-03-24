/*
  Created by Gregory Tretiakov
  Simple Permutation command line esque application
*/

#include<stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t permutation(int n);

long long int i=0; 
int main(long long int argc, char **argv) {
  uint64_t s1=1;
  
  if (argc!=3){
    printf("\nWrong Format\n./test INT INT\nNOTE: Works Best With Integers Less Than or Equal To 20\n\n");
    return 0;
  }

  if (argc==3){
    int n= atoi(argv[1]);
    int r=atoi(argv[2]);
    int i=0;

    for (i=n;i>(n-r);i--){
      s1*=i;
    }

    printf("\n%lu\n",s1);

  }

  return 0;
}
