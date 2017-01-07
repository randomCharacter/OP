package zad5;

public class Kvadrat extends Pravougaonik {
	
	// Konstruktor sa parametrima
	public Kvadrat(double a) {
		super(a, a);
	}
	
	// Preklopljeni seteri
	@Override
	public void setA(double a) {
		super.setA(a);
		super.setB(b);
	}

	@Override
	public void setB(double b) {
		super.setA(a);
		super.setB(b);
	}

	@Override
	public String toString() {
		return "Kvadrat [a=" + a + "]";
	}
	
}
