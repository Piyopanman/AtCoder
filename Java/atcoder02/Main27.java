//ABC179C

package atcoder02;

import java.util.LinkedList;
import java.util.Scanner;

public class Main27 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int ans = 0;

		int c = 1;
//		if(n==2) {
//			ans = 1;
//		}else{
//			while(n-c >= 1) {
//				for(int a=1 ; a<n ; a++) {
//					if( (n-c)%a == 0 ) {
//						ans++;
//
//					}
//				}
//				c++;
//			}
//		}

		LinkedList<Integer> ansArray = new LinkedList<Integer>();


		for(int i=0 ; i<n ; i++) {
			ansArray.add(0);
		}

			while(n-c >= 1) {
				for(int a=1 ; a<n ; a++) {
					if( (n-c)%a ==0 ) {
						int b = (n-c)/a;
						if(a == b) {
							ansArray.set(c, ansArray.get(c) * 2 + 1);
							break;
						}else if(a > b) {
							ansArray.set(c, ansArray.get(c) * 2 );
							break;
						}
						ansArray.set(c, ansArray.get(c) + 1);
					}
				}
				c++;
			}


		if(n == 2) {
			System.out.println(1);
		}else {
			for(Integer a: ansArray) {
				ans += a;
			}
			System.out.println(ans);
		}





		sc.close();

	}

}
