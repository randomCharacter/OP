package zad2_1;

import zad2.Pravougaonik;

public class PP3Prizma {
	
	// Polja
	private JSTrougao b;
	private Pravougaonik m;
	
	// Konstruktor sa parametrima
	public PP3Prizma(double a, double h) {
		b = new JSTrougao(a);
		m = new Pravougaonik(b.obim(), h);
	}
	
	// Geteri
	public double getA() {
		return b.getA();
	}
	
	public double getH() {
		return m.getB();
	}
	
	// Metoda koja vraća površinu
	public double povrsina() {
		return 2 * b.povrsina() + m.povrsina();
	}
	
	// Metoda koja vraća zapreminu
	public double zapremina() {
		return b.povrsina() * getH();
	}
	
}
