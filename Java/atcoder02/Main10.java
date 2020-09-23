//ABC158 B

package atcoder02;

import java.util.Scanner;

public class Main10 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner=new Scanner(System.in);
		long n = scanner.nextLong();
		long a = scanner.nextLong();  //blue
		long b = scanner.nextLong();  //red
		long ans=0;
		long m = n/(a+b);
		long l = n%(a+b);

		ans += a * m;
		if(l > a) {
			ans += a;
		}else {
			ans += l;
		}

		System.out.println(ans);

		scanner.close();

	}

}
