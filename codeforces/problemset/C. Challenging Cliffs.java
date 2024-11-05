import java.util.*;

public class Main {
    public static void solve() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        
        // Reading the array
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        // Sort the array
        Arrays.sort(a);
        
        // If there are only 2 elements, print them and return
        if (n == 2) {
            System.out.println(a[0] + " " + a[1]);
            return;
        }
        
        // Find the smallest difference and the index where it occurs
        int idx = -1;
        int mn = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] < mn) {
                mn = a[i + 1] - a[i];
                idx = i;
            }
        }
        
        // Print the array starting from the minimal difference pair
        StringBuilder result = new StringBuilder();
        for (int i = idx + 1; i < n; i++) {
            result.append(a[i]).append(" ");
        }
        for (int i = 0; i <= idx; i++) {
            result.append(a[i]).append(" ");
        }
        
        System.out.println(result.toString().trim());
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}
