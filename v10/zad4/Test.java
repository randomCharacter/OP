package zad4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Test {
	
	public static void main(String[] args) {
		
		BufferedReader br = null;
		try {
			br = new BufferedReader(new InputStreamReader(System.in));
			// Pokušaj učitavanja
			System.out.print("a = ");
			int a = Integer.parseInt(br.readLine());
			System.out.println("a = " + a);
		} catch (NumberFormatException e) {
			System.out.println("Uneti broj mora biti ceo!");
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				br.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		
	}
	
}
