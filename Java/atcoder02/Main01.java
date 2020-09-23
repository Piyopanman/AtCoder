//エイシング　A

package atcoder02;

import java.util.Scanner;

public class Main01 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		int l =scanner.nextInt();
		int r =scanner.nextInt();
		int d =scanner.nextInt();
		int count=0;

		for(int i=l ; i<=r ; i++) {
			if(i%d == 0) {
				count++;
			}
		}

		System.out.println(count);
		scanner.close();

	}

}
