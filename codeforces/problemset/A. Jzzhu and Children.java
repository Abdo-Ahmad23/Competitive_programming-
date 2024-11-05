import java.util.*;

class Drone {
    int num;
    int have;
    int need;

    public Drone(int num, int have, int need) {
        this.num = num;
        this.have = have;
        this.need = need;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        Deque<Drone> deque = new ArrayDeque<>();
        
        // Reading the input and initializing the deque
        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            if (x > m) {
                deque.addLast(new Drone(i + 1, m, x));
            }
        }
        
        // Processing the drones in the deque
        while (deque.size() > 1) {
            Drone front = deque.peekFirst();
            if (front.have + m >= front.need) {
                deque.pollFirst();
            } else {
                deque.addLast(new Drone(front.num, front.have + m, front.need));
                deque.pollFirst();
            }
        }
        
        // Output the result
        if (deque.isEmpty()) {
            System.out.println(n);
        } else {
            System.out.println(deque.peekLast().num);
        }

        scanner.close();
    }
}
