package zad3_1;

import zad3.Pravougaonik;

public class Kvadar extends GeometrijskoTelo {
	
	// Polja
	protected Pravougaonik b;
	protected Pravougaonik m;
	
	// Konstruktor sa parametrima
	public Kvadar(double a, double b, double h) {
		this.b = new Pravougaonik(a, b);
		this.m = new Pravougaonik(this.b.obim(), h);		
	}
	
	//Geteri
	public double getA() {
		return b.getA();
	}
	
	public double getB() {
		return b.getB();
	}
	
	public double getH() {
		return m.getB();
	}
	
	@Override
	public double povrsina() {
		return 2 * b.povrsina() + m.povrsina();
	}

	@Override
	public double zapremina() {
		return b.povrsina() * getH();
	}

	@Override
	public String toString() {
		return "Kvadar [a=" + getA() + ", b=" + getB() + ", h=" + getH() + "]";
	}

}
