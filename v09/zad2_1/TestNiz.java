package zad2_1;

import zad1.Pravougaonik;

public class TestNiz {
	
	public static void main(String[] args) {
		// Kreiranje niza
		Pravougaonik p[] = new Pravougaonik[5];
		// Dodela vrednosti
		p[0] = new Pravougaonik(1, 5);
		p[1] = new Pravougaonik(3, 4);
		p[2] = new Pravougaonik(8, 2);
		p[3] = new Pravougaonik(4, 8);
		p[4] = new Pravougaonik(12, 2);
		
		int maxI = 1;
		double maxP = p[0].povrsina();
		
		for (int i = 1; i < p.length; i++) {
			if (p[i].povrsina() > maxP) {
				maxI = i;
				maxP = p[i].povrsina();
			}
		}
		
		// Ispis najvećeg
		System.out.println("Najveći pravougaonik ima stranice: " + p[maxI].getA() + ", " + p[maxI].getB());

	}
	
}
