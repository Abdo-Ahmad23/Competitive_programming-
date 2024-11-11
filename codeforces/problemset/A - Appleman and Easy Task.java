import java.sql.SQLOutput;
import java.util.Scanner;

public class main {
    public static void main(String[] args)
    {
        solve();
    }


    public static void solve(){

        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        read.nextLine();
        char[][] a = new char[n][n];
        for(int i = 0;i < n;i++){
            String row = read.nextLine();
            for(int j = 0;j < n;j++){
                a[i][j] = row.charAt(j);
            }
        }
        read.close();
        int[] dx = {-1, 1, 0, 0};
        int[] dy = {0, 0, -1, 1};

        for(int i = 0;i < n;i++){
            int cnt = 0 ;
            for(int j =0;j < n;j++){
                for(int d = 0;d < 4 ;d++){
                    int I = i + dx[d];
                    int J = j + dy[d];
                    if(I < n && I >=0 && J < n && J >=0 && a[I][J] == 'o'){
                        cnt++;
                    }



                }

                if(cnt % 2 == 1){
                    System.out.println("NO");
                    return;
                }
            }

        }
        System.out.println("YES");

    }



}
