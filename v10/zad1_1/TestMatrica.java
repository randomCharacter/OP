package zad1_1;

public class TestMatrica {
	
	public static void main(String[] args) {
		// Kreiranje matrice
		int m[][] = new int[4][4];
		// Dodela vrednosti
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				m[i][j] = i + j;
			}
		}
		// Ispis srednje vrednosti
		System.out.println("Srednja vrednost je: " + mean(m));
	}
	
	// Funkcija za računanje srednje vrednosti proizvoljne matrice
	private static double mean(int m[][]) {
		int s = 0;  // suma
		int el = 0; // broj elemenata (ako nije pravougaona)
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				s += m[i][j];
				el++;
			}
		}
		return (double) s / el;
	}
}
