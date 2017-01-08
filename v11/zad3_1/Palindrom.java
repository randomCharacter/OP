package zad3_1;

import java.util.Scanner;

public class Palindrom {
	
	public static void main(String[] args) {
		System.out.println("Unesite string:");
		Scanner sc = new Scanner(System.in);
		String text = sc.nextLine();
		sc.close();
		
		if (isPalindrome(text)) {
			System.out.println("\"" + text + "\" je palindrom");
		} else {
			System.out.println("\"" + text + "\" nije palindrom");
		}
	}
	
	public static boolean isPalindrome(String text) {
		// Izbacivanje razmaka
		String s1 = text.replace(" ", "");
		// Prebacivanje u mala slova
		s1 = s1.toLowerCase();
		
		// Provera palindroma
		for (int i = 0; i < s1.length() / 2; i++) {
			// Ako je pronađen kontra primer
			if (s1.charAt(i) != s1.charAt(s1.length() - (1 + i ))) {
				return false;
			}
		}
		return true;
		
	}
	
}
