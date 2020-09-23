//ABC174 B

package atcoder02;

import java.util.Scanner;
public class Main18 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		long n = scanner.nextLong();
		long d = scanner.nextLong();
//		int[] x=new int[n];
//		int[] y=new int[n];
		long[] x= new long[(int)n];
		long[] y= new long[(int)n];
		double dis=0;
		int count=0;

		for(int i=0 ; i<n ; i++) {
			x[i] = scanner.nextInt();
			y[i] = scanner.nextInt();
		}

		for(int i=0 ; i<n ; i++) {
			dis = Math.sqrt(x[i]*x[i] + y[i]*y[i]);
			if(dis <= d) {
				count++;
			}
		}

		System.out.println(count);

		scanner.close();

	}

}

