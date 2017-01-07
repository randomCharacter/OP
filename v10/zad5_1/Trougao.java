package zad5_1;

public class Trougao implements Figura {
	
	// Polja
	private double a;
	private double b;
	private double c;
	
	// Konstruktor sa parametrima (izgenerisan)
	public Trougao(double a, double b, double c) {
		super();
		this.a = a;
		this.b = b;
		this.c = c;
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
	
	public double getC() {
		return c;
	}

	public void setC(double c) {
		this.c = c;
	}
	
	@Override
	public double obim() {
		return a + b + c;
	}
	
	@Override
	public double povrsina() {
		double s = obim() / 2;
		return Math.sqrt(s * (s - a) * (s - b) * (s - c));
	}

	@Override
	public String toString() {
		return "Trougao [a=" + a + ", b=" + b + ", c=" + c + "]";
	}
	
}
