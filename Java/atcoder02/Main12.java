//M-solutions A

package atcoder02;

import java.util.Scanner;

public class Main12 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();


		if(x>=400 && x<=599) {
			System.out.println(8);
		}else if(x>=600 && x<=799){
			System.out.println(7);
		}else if(x>=800 && x<=999) {
			System.out.println(6);
		}else if(x>=1000 && x<=1199) {
			System.out.println(5);
		}else if(x>=1200 && x<=1399) {
			System.out.println(4);
		}else if(x>=1400 && x<=1599) {
			System.out.println(3);
		}else if(x>=1600 && x<=1799) {
			System.out.println(2);
		}else {
			System.out.println(1);
		}

		scanner.close();

	}

}
