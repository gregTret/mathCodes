//Fibonacci Sequence Calculator 
public class Disc{
   
   public static void main (String args[]){
      String a="a";
      String ab="ab";
      String next="";
      String storage[] =new String[100];
     
      
      for (int i=0;i<33;i++){
         next=ab+a;
         storage[i]=next;
         a=ab;
         ab=next;      
         System.out.println(i); 
      }
      
      
      for (int i=0;i<100;i++){      
         System.out.println((i+2)+" : "+storage[i]);
      }
      
   }  
}
