//ABC172 C

package atcoder02;

import java.util.Scanner;

public class Main06 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int m = scanner.nextInt();
		long k = scanner.nextLong();
		long[] a=new long[n+1];
		long[] b=new long[m+1];
		a[0] = 0;
		b[0] = 0;

		for(int i=1 ; i<=n ; i++) {
			a[i] = scanner.nextLong() + a[i-1];
		}
		for(int i=1 ; i<=m ; i++) {
			b[i] = scanner.nextLong() + b[i-1];
		}

		int j = m;
		int count = 0;
		for(int i=0 ; i<=n ; i++) {
			if(a[i] > k) {
				break;
			}
			while(a[i] + b[j] > k) {
				j--;
			}
			count = Math.max(count,i+j);
		}

		System.out.println(count);

		scanner.close();

	}

}
