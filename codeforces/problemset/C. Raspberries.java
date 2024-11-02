import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n,k;
            n = scanner.nextInt();
            k = scanner.nextInt();
            int[] a = new int[n];
            int even = 0, odd = 0,ans = k + 1;
            for(int i = 0;i < n;i++){
                a[i] = scanner.nextInt();
                even +=(a[i] % 2 + 1) % 2;
                odd += (a[i] % 2) % 2;
                ans = Math.min(ans, k - a[i] % k);
            }
            
            if(k == 4){
                if(even % 2 == 1){
                    ans = Math.min(ans, 2 - even);
                }else{
                    ans = 0;
                }
            }
            System.out.println(ans);

                
            
        }
        
        scanner.close();
    }
    
}
