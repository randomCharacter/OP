package zad3;

public class Pravougaonik extends GeometrijskaFigura {
	
	// Polja
	protected double a;
	protected double b;
	
	// Konstruktor sa parametrima (izgenerisan)
	public Pravougaonik(double a, double b) {
		super();
		this.a = a;
		this.b = b;
	}
	
	// Konstruktor kopije
	public Pravougaonik(Pravougaonik p) {
		this.a = p.a;
		this.b = p.b;
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
