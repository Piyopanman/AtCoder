//エイシング　B

package atcoder02;

import java.util.Scanner;

public class Main02 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] a = new int[n];
		int count=0;
		for(int i=0 ; i<n ; i++) {
			a[i] = scanner.nextInt();
		}
		for(int i=0 ; i<a.length ; i=i+2) {
			if(a[i]%2 == 1) {
				count++;
			}
		}

		System.out.println(count);

		scanner.close();

	}

}