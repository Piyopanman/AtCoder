//ABC175 B
package atcoder02;

import java.util.Scanner;


public class Main24 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
		long[] l = new long[n];
		int ans=0;

		for(int i=0 ; i<n ; i++) {
			l[i] = scanner.nextLong();
		}



		if(n <= 2) {
			ans=0;
		}

		scanner.close();

	}

}
