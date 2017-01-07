package zad3_1;

public class Kocka extends Kvadar {
	
	// Konstruktor sa parametrima
	public Kocka(double a) {
		super(a, a, a);
	}

	@Override
	public String toString() {
		return "Kocka [a=" + getA() + "]";
	}
	
		
}
