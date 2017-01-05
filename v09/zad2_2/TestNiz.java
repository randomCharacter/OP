package zad2_2;

import zad1_1.Krug;

public class TestNiz {
	
	public static void main(String[] args) {
		// Kreiranje niza
		Krug k[] = new Krug[5];
		// Dodela vrednosti
		k[0] = new Krug(5);
		k[1] = new Krug(3);
		k[2] = new Krug(2);
		k[3] = new Krug(12);
		k[4] = new Krug(4);
		
		Krug najveci = getBiggest(k);
		
		// Ispis najvećeg
		System.out.println("Najveći krug ima poluprečnik " + najveci.getR());
	}
	
	public static Krug getBiggest(Krug k[]) {
		Krug najveci = k[0];
		for (int i = 1; i < k.length; i++) {
			if (k[i].obim() > najveci.obim()) {
				najveci = k[i];
			}
		}
		return najveci;
	}
	
}
