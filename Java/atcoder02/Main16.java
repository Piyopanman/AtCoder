//ABC157 B

package atcoder02;

import java.util.Scanner;

public class Main16{
	public static void main(String[] args) {

		Scanner scanner  = new Scanner(System.in);
		int[][] a = new int[3][3];
		String ans = "No";


		for(int i=0 ; i<3 ; i++) {
			for(int j=0 ; j<3 ; j++) {
				a[i][j] = scanner.nextInt();
			}
		}
		int n = scanner.nextInt();
		int[] b=new int[n];
		for(int i=0 ; i<n ; i++) {
			b[i] = scanner.nextInt();
		}

		for(int i=0 ; i<n ; i++) {
			for(int j=0 ; j<3 ; j++) {
				for(int k=0 ; k<3 ; k++) {
					if(b[i] == a[j][k]) {
						a[j][k] = 0;
					}
				}
			}
		}

		for(int i=0 ; i<3 ; i++) {
			if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0){
				ans = "Yes";
				break;
			}
			if(a[0][i]==0 && a[1][i]==0 && a[2][i]==0 ) {
				ans = "Yes";
				break;
			}
			if(a[0][0]==0 && a[1][1]==0 && a[2][2]==0 ) {
				ans = "Yes";
				break;
			}
			if(a[0][2]==0 && a[1][1]==0 && a[2][0]==0 ) {
				ans = "Yes";
				break;
			}
		}

		System.out.println(ans);

		scanner.close();

	}
}