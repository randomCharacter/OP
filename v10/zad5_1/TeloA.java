package zad5_1;

public class TeloA {
	
	// Polja
	protected Pravougaonik p1, p2, p3;
	protected Trougao t;
	
	public TeloA(double a, double b, double c, double d, double h) {
		p1 = new Pravougaonik(a, d);
		p2 = new Pravougaonik(a + d, h);
		p3 = new Pravougaonik(b + c, d);
		t = new Trougao(a, b, c);
	}
	
	public double povrsina() {
		return p1.povrsina() + p2.povrsina() + p3.povrsina();
	}
	
	public double zapremina() {
		return p1.povrsina() * p2.getB() + t.povrsina() * p1.getB();
	}

	@Override
	public String toString() {
		return "TeloA [a=" + t.getA() + ", b=" + t.getB() + ", c=" + t.getC() + ", d=" + p1.getB() + ", h=" + p2.getB() + "]";
	}
	
}
