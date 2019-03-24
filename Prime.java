/*
  Finding the Nth Prime Number in Java
*/

import java.util.*;
import java.util.Scanner;

public class Prime
{
   public static List <Long> pn= new ArrayList<Long>();
   public static long startTime, endTime, executionTime;
   public static int n;
   public static int current=1;
   public static boolean primeFound=false;
   
   public static void main(String[] args)
   {     
      pn.add((long)2);
      pn.add((long)3);
      long nextPrime=(pn.get(pn.size()-1));
      
      Scanner keyboard = new Scanner(System.in);   
      System.out.println ("Which Prime number are you trying to find?");
      n=keyboard.nextInt();
      startTime = System.currentTimeMillis();
      
            
      while (current<=n){
         current+=1;   
         primeFound=false;    
         nextPrime=findNextPrime(nextPrime);
        // System.out.println((current+1)+" "+nextPrime);
      }

      System.out.println("The "+n+"th Prime Number is: "+pn.get(pn.size()-3));   
      
      //Calculating End runtime
      endTime = System.currentTimeMillis();
      executionTime = endTime - startTime;
      System.out.println("Execution Time: "+executionTime);
      
       System.exit(0);
   }
   
   public static long findNextPrime(long p){
   { 
      int indexFrom=0;
      p+=2;
      while(primeFound==false){
        for (int i=0;i<pn.size();i++){
           if ((pn.get(i))>(p/2.5)){
               indexFrom=pn.size()-i;
               i=pn.size();
           }
        }
     for (int i=indexFrom;i>=0;i--){
            if (p%pn.get(i)==0){
               i=-3;
               p+=2;
            }else if ((p%pn.get(i)!=0)&&(i==(0))){
               primeFound=true;
            }
         }    
      }
      pn.add(p);
      return p;
  }
 }
}
