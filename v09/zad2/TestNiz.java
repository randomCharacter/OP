package zad2;

import zad1.Pravougaonik;

public class TestNiz {
	
	public static void main(String[] args) {
		// Kreiranje niza
		double a[] = new double[5];
		// Dodela vrednosti kreiranom nizu
		for (int i = 0; i < a.length; i++) {
			a[i] = i + 0.5;
		}
		
		// Kreiranje i inicijalizacija niza
		int b[] = {1, 3, 5, 7};
		
		// Kreiranje niza objekata
		Pravougaonik pravougaonik = new Pravougaonik(4,6);
		Pravougaonik p[] = new Pravougaonik[2];
		// Dodela vrednosti nizu objekata
		p[0] = new Pravougaonik(3,2);
		p[1] = pravougaonik;
		// Ispis niza objekata
		for (int i = 0; i < p.length; i++) {
			System.out.println("pravougaonik[" + i + "] ima površinu: " + p[i].povrsina());
		}
	}
	
}
