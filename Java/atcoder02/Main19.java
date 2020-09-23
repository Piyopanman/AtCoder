//ABC174 c

package atcoder02;

import java.util.Scanner;

public class Main19 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		Scanner scanner =new Scanner(System.in);

		long k = scanner.nextLong();
		long seven = 0;
		long count = 0;



		if(k==2 || k==5){
			count = -1;
		}else {
			while(count < Math.pow(10, 2)) {
				seven += 7 * Math.pow(10, count);
				System.out.println(seven);
				count++;
				if(seven%k==0) {
					System.out.println("break");
					break;
				}

			}
		}





		System.out.println("ans:"+count);

		scanner.close();

	}

}
