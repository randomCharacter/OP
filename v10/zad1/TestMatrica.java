package zad1;

import java.util.Scanner;

public class TestMatrica {
	
	public static void main(String[] args) {
		// Kreiranje matrice
		double m[][] = new double[2][2];
		// Unos matrice
		System.out.println("Unesite matricu:");
		inputElements(m);
		// Ispis matrice
		System.out.println("Vaša matrica je:");
		printElements(m);
	}
	
	// Funkcija za unos elemenata
	private static void inputElements(double m[][]) {
		// Skener sa tastature
		Scanner sc = new Scanner(System.in);
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				// Učitavanje sledećeg broja sa tastature
				m[i][j] = sc.nextDouble();
			}
		}
		// Zatvaranje skenera
		sc.close();
	}
	
	// Funkcija za ispis elemenata
	private static void printElements(double m[][]) {
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				System.out.print(m[i][j] + " ");
			}
			System.out.println();
		}
	}
	
}
