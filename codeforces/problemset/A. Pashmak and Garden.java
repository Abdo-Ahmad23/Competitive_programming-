import java.util.Scanner;

class Var {
    int x;
    int y;
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Initialize the two Var objects
        Var a = new Var();
        Var b = new Var();
        
        // Read input values
        a.x = scanner.nextInt();
        a.y = scanner.nextInt();
        b.x = scanner.nextInt();
        b.y = scanner.nextInt();
        
        int diffY = a.y - b.y;
        int diffX = a.x - b.x;

        // Conditions based on the differences between points
        if (diffY * -1 == 0) {
            System.out.printf("%d %d ", a.x, a.y + Math.abs(diffX));
            System.out.printf("%d %d ", b.x, b.y + Math.abs(diffX));
        } else if (diffX * -1 == 0) {
            System.out.printf("%d %d ", a.x + diffY, a.y);
            System.out.printf("%d %d ", b.x + diffY, b.y);
        } else if (a.y - b.y == a.x - b.x || a.y - b.y == b.x - a.x) {
            System.out.printf("%d %d ", a.x, b.y);
            System.out.printf("%d %d ", b.x, a.y);
        } else {
            System.out.println("-1");
        }

        scanner.close();
    }
}
