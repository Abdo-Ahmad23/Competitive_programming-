import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        solve();
    }


    public static void solve(){
        Scanner read = new Scanner(System.in);
        int k = read.nextInt();
        int d = read.nextInt();
        if(d == 0){
            if(k == 1){
                System.out.println(0);

            }
            else{
                System.out.println("No solution");

            }
            return;
        }
        int[] a = new int[k];
        a[0] = d;
        for(int i = 0;i < a.length;i++)
            System.out.print(a[i]);
    }



}
