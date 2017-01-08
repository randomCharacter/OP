package zad1_1;

public class Student {
	
	// Polja
	private String indeks, ime, prezime;

	// Konsruktor sa parametrima
	public Student(String indeks, String ime, String prezime) {
		super();
		this.indeks = indeks;
		this.ime = ime;
		this.prezime = prezime;
	}
	
	// Konstruktor kopije
	public Student(Student st) {
		super();
		this.indeks = st.indeks;
		this.ime = st.ime;
		this.prezime = st.prezime;
	}
	
	// Geteri
	public String getIndeks() {
		return indeks;
	}

	public String getIme() {
		return ime;
	}

	public String getPrezime() {
		return prezime;
	}

	@Override
	public String toString() {
		return "Student [indeks=" + indeks + ", ime=" + ime + ", prezime=" + prezime + "]";
	}
	
}
