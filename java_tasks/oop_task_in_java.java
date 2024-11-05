import java.util.Scanner;
class Main{
    public static void main(String[] args){
        
        B b = new B();
        b.readNumbers();
        A a = new A(b);
        a.printDetails();
    }
}
class A{
    private B b;
    
    public A(B b){
        this.b = b;
    }
    
    public void printDetails(){
        System.out.println("Summation of this three Numbers : " +  b.Summation());
        System.out.println("Average of this three NUmbers : " + b.Average());
        
    }
}
class B {
    private int a,b,c;
    public void readNumbers(){
        Scanner read = new Scanner(System.in);
        System.out.print("Enter First Number: ");
        a = read.nextInt();
        System.out.print("Enter Second Number: ");
        b = read.nextInt();
        System.out.print("Enter Third Number: ");
        c = read.nextInt();
    }
    public long Summation(){
        return a + b + c;
    }
    public double Average(){
        return Summation() / 3.0;
    }
}