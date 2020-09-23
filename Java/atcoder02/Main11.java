//ABC157 A

package atcoder02;

import java.util.Scanner;

public class Main11 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int ans=0;

		if(n%2 == 0) {
			ans = n/2;
		}else {
			ans = n/2 + 1;
		}

		System.out.println(ans);

		scanner.close();


	}

}
