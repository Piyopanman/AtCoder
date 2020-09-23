//ABC179 B

package atcoder02;

import java.util.Scanner;

public class Main26 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int count = 0;
		String ans = "No";

		int[] d1 = new int[n];
		int[] d2 = new int[n];

		for(int i=0 ; i<n ; i++) {
			d1[i] = sc.nextInt();
			d2[i] = sc.nextInt();
		}

		for(int i=0 ; i<n ; i++) {
			if(d1[i]==d2[i]) {
				count++;
				if(count == 3) {
					ans  = "Yes";
					break;
				}
			}else {
				count=0;
			}
		}

		System.out.println(ans);


		sc.close();

	}

}
