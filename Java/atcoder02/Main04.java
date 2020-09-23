//ABC170 C

package atcoder02;

import java.util.ArrayList;
import java.util.Scanner;


public class Main04 {

	public static void main(String[] args) {

		Scanner scanner=new Scanner(System.in);


		int x =scanner.nextInt();
		int n =scanner.nextInt();
		ArrayList<Integer> list = new ArrayList<Integer>();
		for(int i=0 ; i<n ; i++) {
			list.add(scanner.nextInt());
		}
		scanner.close();

		int d = 0;
		while(true) {
			if(!list.contains(x-d)) {
				System.out.println(x-d);;
				break;
			}
			if(!list.contains(x+d)) {
				System.out.println(x+d);
				break;
			}
			d++;
		}

	}

}
