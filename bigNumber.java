//Adding together numbers of infinite size
import java.util.Scanner;
import java.io.*;
import java.util.*;

public class bigNumber{

   public static void main(String args[]) throws IOException{
   
      Scanner keyboard = new Scanner(System.in);
      File file = new File("number.txt");
      Scanner inputFile = new Scanner(file);
      
      //String f1=(inputFile.nextLine());
      //String f2=(inputFile.nextLine());
      System.out.println("Please enter two Integers 999");
      String f1=keyboard.next();
      String f2=keyboard.next();
      for (int i=0;i<5;i++){
         System.out.println();
      }
      
      char[]first=f1.toCharArray();
      char[]second=f2.toCharArray();
      
      int length1=first.length;          
      int length2=second.length;
      int larger,distance,state,remainder;
      
      if (length1>length2){
         larger=length1+1;
         distance=length1-length2+1;
         state=0;
      }else{
         larger=length2+1;
         distance=length2-length1+1;
         state=1;
      }
      remainder=0;
      int int1[]=new int [larger];
      int int2[]=new int [larger];
      int Final[]=new int [larger];
      
      int1[0]=0;
      int2[0]=0;
      
      for (int i=1;i<larger;i++){
         if (state==0){
              int1[i]=Integer.parseInt(String.valueOf(first[i-1]));
              
              if (i>distance){
                   int2[i-1]=Integer.parseInt(String.valueOf(second[i-distance-1]));
                   if (i==larger-1){
                     int2[i]=Integer.parseInt(String.valueOf(second[i-distance]));
                   }
              }else{
                  int2[i]=0;
              }
              if (i==larger-1){
                  int2[i]=Integer.parseInt(String.valueOf(second[i-distance]));
              }
              
         }else{
              int2[i]=Integer.parseInt(String.valueOf(second[i-1]));
           
              if (i>distance){
                   int1[i-1]=Integer.parseInt(String.valueOf(first[i-distance-1]));
                   if (i==larger-1){
                     int1[i]=Integer.parseInt(String.valueOf(first[i-distance]));
                   }
              }else{
                  int1[i]=0;
              }
              
              if (i==larger-1){
               int1[i]=Integer.parseInt(String.valueOf(first[i-distance]));
              }
         }
      }
      
   for (int i=larger-1;i>=0;i--){
      if ((int1[i]+int2[i]+remainder)>=10){
         Final[i]=(int1[i]+int2[i]+remainder)-10;
         remainder=1;
      }else{
         Final[i]=(int1[i]+int2[i]+remainder);
         remainder=0;
      }      
   }
      
      
   for (int i=0;i<larger;i++){
      System.out.print(int1[i]);
   }
   System.out.println("\n+");
  
   for (int i=0;i<larger;i++){
      System.out.print(int2[i]);
   }
   System.out.println("\n=");
   
   boolean number=false;
   if (Final[0]!=0){
      number=true;
   }
   for (int i=0;i<larger;i++){
   
      if (number==false){
         if (Final[i]!=0){
            number=true;
         }
      }
      if (number==true){
         System.out.print(Final[i]);
      }

   }
  } 
}
