package zad1;

public class CDDisk {
	
	// Polja
	private int id;
	private String naziv;
	private String izvodjac;
	
	// Konstruktor bez parametara
	public CDDisk() {
		id = 0;
		naziv = "/";
		izvodjac = "/";
	}
	
	// Konstruktor sa parametrima
	public CDDisk(int id, String naziv, String izvodjac) {
		super();
		this.id = id;
		this.naziv = naziv;
		this.izvodjac = izvodjac;
	}
	
	// Konstruktor kopije
	public CDDisk(CDDisk cd) {
		this.id = cd.id;
		this.naziv = cd.naziv;
		this.izvodjac = cd.izvodjac;
	}

	// Geteri i seteri
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getNaziv() {
		return naziv;
	}

	public void setNaziv(String naziv) {
		this.naziv = naziv;
	}

	public String getIzvodjac() {
		return izvodjac;
	}

	public void setIzvodjac(String izvodjac) {
		this.izvodjac = izvodjac;
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null) {
			return false;
		} else if (obj == this) {
			return true;
		} else {
			CDDisk cd = (CDDisk)obj;
			return id == cd.id && naziv.equals(cd.naziv) && izvodjac.equals(cd.izvodjac);
		}
	}

	@Override
	public String toString() {
		return "CDDisk [id=" + id + ", naziv=" + naziv + ", izvodjac=" + izvodjac + "]";
	}

}
