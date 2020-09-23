//M-solutions B

package atcoder02;

import java.util.Scanner;

public class Main13 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();
		int k = scanner.nextInt();
		String ans = "No";

		for(int i=0 ; i<k ; i++) {
			if(b > c) {
				c *= 2;
			}else if(a >= b) {
				b *= 2;
			}else {
				c *= 2;
			}
		}

		if(b > a && c > b) {
			ans = "Yes";
		}

		System.out.println(ans);

		scanner.close();

	}

}
