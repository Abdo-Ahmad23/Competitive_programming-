import java.util.*;
public class Main
{
    
    public static ArrayList<Integer> []a=(ArrayList<Integer>[])new ArrayList[100008];
    public static Integer ans=Integer.MAX_VALUE,cntt=0;
    
    public static int po(int i,int []aa,int k,int minValueReq) {
        if(aa[i]==1) return 0;
        aa[i]=1;
        int cnt=0;
        for(Integer j: a[i]) {
            cnt+=po(j,aa,k,minValueReq);
        }
        cnt++;
        if(cnt>=minValueReq && cntt<k) {
            cntt++;
            return 0;
        }
        return cnt;
    }
    
    
    
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
		    int n=sc.nextInt(),k=sc.nextInt(),x1=sc.nextInt(),y1=sc.nextInt();
		    long ans1=0,ans2=0;
		    int a[]=new int[n];
		    int b[]=new int[n];
		    int c[]=new int[n];
		    x1--;
		    y1--;
		    for(int i=0;i<n;i++)a[i]=sc.nextInt()-1;
		    for(int i=0;i<n;i++)b[i]=sc.nextInt();
		    
		    long cnt=k,scc=0;
		    while(cnt>0 && c[x1]==0) {
		        c[x1]=1;
		        scc+=b[x1];
		        cnt--;
		        
		        ans1=Math.max(ans1,scc+(cnt*b[x1]));    
		    
		        x1=a[x1];
		    }
		    scc=0;
		    cnt=k;
		    x1=y1;
		    while(cnt>0 && c[x1]!=2) {
		        c[x1]=2;
		        scc+=b[x1];
		        cnt--;
		        
		        ans2=Math.max(ans2,scc+(cnt*b[x1]));x1=a[x1];
		    } 
		    
		    
		    if(ans1==ans2) System.out.println("Draw");
		    else if(ans1>ans2) System.out.println("Bodya");
		    else System.out.println("Sasha");
		    
		}
	} 
}