#include<stdio.h>
#include <stdint.h>
#include <inttypes.h>
/*
  Created By Gregory Tretiakov
  Program to calculate the GCD of two integers
*/

uint64_t gcd(uint64_t n,uint64_t x);

long long int i=0;

int main(long long int argc, char **argv) {
  uint64_t s1;
  uint64_t s2;
  
  if (argc!=3){
    printf("\nWrong Format\n./test INT INT\n\n\n");
    return 0;
  }

  if (argc==3){
    int n= atoi(argv[1]);
    int r=atoi(argv[2]);

    s2=gcd(n,r);
    printf("\n%lu\n",s2);
    }
  return 0;
  }

uint64_t gcd(uint64_t n,uint64_t x){
  uint64_t r1=1;
  int z=0;
  if (n==0||x==0){
    return 1;
  }
  for (z=x;z>=1;z--){
    if (n%z==0){
      if (x%z==0){
	return z;	
      }
    }
  }
  return 1;
}
