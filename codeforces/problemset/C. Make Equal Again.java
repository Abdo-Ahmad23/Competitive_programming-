import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            Vector<Integer> a = new Vector<>(n);
            for (int i = 0; i < n; i++) {
                a.add(scanner.nextInt());
            }
            
            int cnt1 = 0, cnt2 = 0;
            
            int i = 0;
            while (i < n && a.get(i).equals(a.get(0))) {
                cnt1++;
                i++;
            }
            
            i = n - 1;
            while (i >= 0 && a.get(i).equals(a.get(n - 1))) {
                cnt2++;
                i--;
            }
            
            if (a.firstElement().equals(a.lastElement())) {
                if (cnt1 + cnt2 >= n) {
                    System.out.println("0");
                } else {
                    System.out.println(n - cnt1 - cnt2);
                }
            } else {
                System.out.println(Math.max(cnt1, cnt2));
            }
        }
        
        scanner.close();
    }
}
