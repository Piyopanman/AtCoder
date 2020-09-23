//エイシング　C

package atcoder02;

import java.util.Scanner;

public class Main03 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] a = new int[1000000];

			for(int x=1; x<=100 ; x++) {
				for(int y=1 ; y<=100 ; y++) {
					for(int z=1 ; z<=100 ; z++) {
						a[x*x+y*y+z*z+x*y+y*z+z*x]++;
					}
				}
			}


			for(int i=1 ; i<=n ; i++) {
				System.out.println(a[i]);
			}

		scanner.close();

	}

}