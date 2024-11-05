import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Pair {
    int first;
    int second;

    public Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }
}

public class Main {

    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        List<Pair> a = new ArrayList<>();

        // Reading the pairs
        for (int i = 0; i < n; i++) {
            int first = scanner.nextInt();
            a.add(new Pair(first, 0)); // Initially set the second value to 0 or any default value
        }

        // You can now add more processing logic here as needed
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        while (t-- > 0) {
            solve(scanner);
        }

        scanner.close();
    }
}
