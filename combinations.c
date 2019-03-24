#include<stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t gcd(int n,int x);

long long int i=0; 
int main(long long int argc, char **argv) {
  uint64_t s1;
  uint64_t s2;
  uint64_t s3=1;
  
  if (argc!=3){
    printf("\nWrong Format\n./test INT INT\nNOTE: Works Best With Integers Less Than or Equal To 20\n\n");
    return 0;
  }

  if (argc==3){
    int n= atoi(argv[1])+1;
    int r=atoi(argv[2]);
    
    int x,y;
   uint64_t total[n][n+1];
      
    for (i=0;i<n;i++){
      for (x=0;x<n+1;x++){
	total[i][x]=0;
      }
    }

    total[1][1]=1;
    for (i=0;i<n;i++){
      total[i][0]=1;
    }

    for (i=1;i<n;i++){
	for (x=1;x<i+1;x++){
	  total[i][x]=total[i-1][x-1]+total[i-1][x];
	  if (total[i][x]==0){
	    total[i][x]=1;
	  }
	}	
    }

    printf("\n%lu\n",total[n-1][r]);

  }

  return 0;
}
