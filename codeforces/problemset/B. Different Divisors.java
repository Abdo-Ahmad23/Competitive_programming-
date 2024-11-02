import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();
        while (t-- > 0) {
            int d = scanner.nextInt();
            int a = firstPrime(d + 1);
            int b = firstPrime(a + d);
            long res1 = (long) a * a * a;
            long res2 = (long) a * b;
            System.out.println(Math.min(res1, res2)); 
        }
        
        scanner.close();
    }
    static int firstPrime(int n){
        for(int i = n;;i++){
            boolean ok = true;
            for(int j = 2;j * j <= i;j++)
                if(i % j == 0)
                    ok = false;
                
            if(ok)
                return i;
            
            
        }
        
    }
}
