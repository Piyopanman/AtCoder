//ABC169 B

package atcoder02;

import java.util.Scanner;

public class Main05 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		long ans = 1 ;
		long[] a = new long[n];
		long max = (long)Math.pow(10, 18);

		for(int i=0 ; i<n ; i++) {
			 a[i] = scanner.nextLong();
		}

		for(int i=0 ; i<n ; i++) {
			if(a[i]==0) {
				ans = 0;
				break;
			}else if(a[i] > (max/ans)) {
				ans = -1;
			}else {
				ans *= a[i];
			}

		}

		System.out.println(ans);

		scanner.close();

	}

}
