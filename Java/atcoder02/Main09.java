//ABC158 A

package atcoder02;

import java.util.Scanner;

public class Main09 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		String s = scanner.next();
		String ans = "Yes";

		if(s.charAt(0) == s.charAt(1) && s.charAt(1) == s.charAt(2)) {
			ans = "No";
		}

		System.out.println(ans);

		scanner.close();

	}

}
