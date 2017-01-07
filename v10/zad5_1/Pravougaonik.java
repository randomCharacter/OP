package zad5_1;

public class Pravougaonik implements Figura {
	
	// Polja
	private double a;
	private double b;
	
	// Konstruktor sa parametrima (izgenerisan)
	public Pravougaonik(double a, double b) {
		super();
		this.a = a;
		this.b = b;
	}
	
	// Geteri i seteri (izgenerisani)
	public double getA() {
		return a;
	}

	public void setA(double a) {
		this.a = a;
	}

	public double getB() {
		return b;
	}

	public void setB(double b) {
		this.b = b;
	}
	
	@Override
	public double obim() {
		return 2 * a + 2 * b;
	}
	
	@Override
	public double povrsina() {
		return a * b;
	}

	@Override
	public String toString() {
		return "Pravougaonik [a=" + a + ", b=" + b + "]";
	}
}
