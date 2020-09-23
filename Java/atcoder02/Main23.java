//ABC175 A
package atcoder02;

import java.util.Scanner;

public class Main23 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);

		String s = scanner.next();
		int ans=0;

		if(s.equals("RRR")) {
			ans=3;
		}else if(s.equals("RRS")|| s.equals("SRR")) {
			ans=2;
		}else if(s.equals("RSS") || s.equals("SRS") || s.equals("SSR")||  s.equals("RSR")) {
			ans=1;
		}else if(s.equals("SSS")) {
			ans=0;
		}

		System.out.println(ans);


		scanner.close();

	}

}
