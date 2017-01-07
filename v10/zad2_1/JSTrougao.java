package zad2_1;

public class JSTrougao {

	// Polja
	private double a;
	
	// Konstruktor sa parametrima (izgenerisan)
	public JSTrougao(double a) {
		super();
		this.a = a;
	}
	
	// Geteri i seteri (izgenerisani)
	public double getA() {
		return a;
	}

	public void setA(double a) {
		this.a = a;
	}
	
	// Metoda koja vraća obim
	public double obim() {
		return 3 * a;
	}
	
	// Metoda koja vraća površinu
	public double povrsina() {
		double s = obim() / 2;
		return Math.sqrt(s * Math.pow((s - a), 3));
	}
	
}
