//ABC159 B
//未解決

package atcoder02;

import java.util.Scanner;

public class Main08 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);

		String s = scanner.next();
		int n = s.length();
		String ans = "Yes" ;

		for(int i=0 ; i<n/2 ; i++) {
			if(s.charAt(i) != s.charAt(n-i-1)) {
				ans = "No";
				break;
			}
		}

		for(int i=0 ; i<n/4 ; i++) {
			if(s.charAt(i) != s.charAt((n-1)/2-1)) {
				ans = "No";
				break;
			}
			if(s.charAt((n+3)/2-1) != s.charAt(n-1)) {
				ans = "No";
				break;
			}
		}




		System.out.println(ans);

		scanner.close();

	}

}
