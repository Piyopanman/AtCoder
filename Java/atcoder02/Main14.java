//M-solutions C

package atcoder02;

import java.util.Scanner;

public class Main14 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int k = scanner.nextInt();
		long[] a = new long[n];

		for(int i=0 ; i<n ; i++) {
			a[i] = scanner.nextLong();
		}

		for(int i=k-1 ; i<n-1 ; i++) {
			if(a[i-(k-1)] < a[i+1]) {
				System.out.println("Yes");
			}else {
				System.out.println("No");
			}
		}

		scanner.close();

	}

}
