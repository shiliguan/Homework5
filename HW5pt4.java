/*Java reference variables*/
class HW5pt4 { 
   double side;
}  
class Square { 
   public static void main(String args[]) { 
      HW5pt4 s1 = new HW5pt4();        
      HW5pt4 s2 = s1; 
           
      s1.side = 10; 
      s2.side = 10; 

      System.out.println("s1 side = " + s1.side); 
      System.out.println("s2 side = " + s2.side); 
    } 
    
}