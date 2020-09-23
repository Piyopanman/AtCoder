//ABC156 B

package atcoder02;

import java.util.Scanner;

public class Main22 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int k = scanner.nextInt();
		int ans = 1;


		while(k <= n) {
			n = n / k ;
			ans++;
		}

		System.out.println(ans);

		scanner.close();

	}

}
