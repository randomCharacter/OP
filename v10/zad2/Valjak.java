package zad2;

public class Valjak {
	// Polja
	private Krug b;
	private Pravougaonik m;
	
	// Konstruktor sa parametrima
	public Valjak(double r, double h) {
		b = new Krug(r);
		m = new Pravougaonik(b.obim(), h);
	}
	
	// Geteri
	public double getR() {
		return b.getR();
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
