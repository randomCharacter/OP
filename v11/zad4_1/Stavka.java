package zad4_1;

public class Stavka {
	
	// Polja
	String naziv;
	double cena;
	
	// Konstruktor sa parametrima
	public Stavka(String naziv, double cena) {
		this.naziv = naziv;
		this.cena = cena;
	}
	
	// Konstruktor kopije
	public Stavka(Stavka st) {
		this(st.naziv, st.cena);
	}
	
	// Geteri
	public String getNaziv() {
		return naziv;
	}

	public double getCena() {
		return cena;
	}

	@Override
	public String toString() {
		return naziv + " " + cena;
	}
		
}
