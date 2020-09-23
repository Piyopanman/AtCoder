//ABC156 A

package atcoder02;

import java.util.Scanner;

public class Main15 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int r = scanner.nextInt();

		if(n>=10) {
			System.out.println(r);
		}else {
			System.out.println(r + 100*(10-n));
		}

		scanner.close();

	}

}
