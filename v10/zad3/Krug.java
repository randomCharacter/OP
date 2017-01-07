package zad3;

public class Krug extends GeometrijskaFigura {
	
	// Polja
	private double r;

	public Krug(double r) {
		super();
		this.r = r;
	}
	
	// Geteri i seteri (izgenerisani)
	public double getR() {
		return r;
	}

	public void setR(double r) {
		this.r = r;
	}
	
	
	@Override
	public double obim() {
		return 2 * r * Math.PI;
	}

	@Override
	public double povrsina() {
		return Math.pow(r, 2) * Math.PI;
	}

	@Override
	public String toString() {
		return "Krug [r=" + r + "]";
	}

}
