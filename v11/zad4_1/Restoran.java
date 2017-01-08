package zad4_1;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

public class Restoran {
	
	//Polja
	String naziv;
	String adresa;
	ArrayList<Stavka> jelovnik;
	
	// Konstruktor bez parametara
	public Restoran() {
		naziv = "Masinac";
		adresa = "Trg Dositeja Obradovica 6";
		jelovnik = new ArrayList<Stavka>();
	}
	
	// Pomoćna metoda za dodavanje stavki
	private boolean add(Stavka st) {
		for (int i = 0; i < jelovnik.size(); i++) {
			if (jelovnik.get(i).getNaziv() == st.getNaziv()) {
				return false;
			}
		}
		return jelovnik.add(new Stavka(st));
	}

	
	@Override
	public String toString() {
		String s = "";
		s += "Restoran \"" + naziv + "\"\n";
		s += "Adresa: " + adresa;
		s += "\n";
		s += "Jelovnik\n";
		s += "******************\n";
		// Dodavanje stavki
		for (int i = 0; i < jelovnik.size(); i++) {
			s += jelovnik.get(i) + "\n";
		}
		s += "******************\n";
		return s;
	}
	
	// Metoda za učitavanje jelovnika iz fajla
	public void importJelovnik(String fajl) {
		BufferedReader in = null;
		
		try {
			// Otvaranje fajla za čitanje
			in = new BufferedReader(new FileReader(fajl));
			String line;
			// Dok ima linija u fajlu, one se učitavaju
			while ((line = in.readLine()) != null) {
				// Podela linije na delove
				String[] deo = line.split("\\ ");
				// Cena je uvek poslednja
				double cena = Double.parseDouble(deo[deo.length - 1]);
				// Sve ostalo je naziv
				String naziv = "";
				for (int i = 0; i < deo.length - 1; i++) {
					naziv += deo[i];
				}
				// Dodavanje stavke u jelovnik
				add(new Stavka(naziv, cena));
			}
		} catch (IOException e) {
			System.out.println("Greška pri učitavanju fajla " + fajl);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				in.close();
			} catch (IOException e) {
				System.out.println("Greška pri zatvaranju fajla " + fajl);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}

	public void exportJelovnik(String fajl) {
		BufferedWriter out = null;
		try {
			out = new BufferedWriter(new FileWriter(fajl));
			out.write(this.toString());
		} catch (IOException e) {
			System.out.print("Greška pri pisanju u fajl " + fajl);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				out.close();
			} catch (IOException e) {
				System.out.println("Greška pri zatvaranju fajla " + fajl);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
	
	// Sortiranje jelovnika po ceni
	public void sort() {
		for (int i = 0; i < jelovnik.size() - 1; i++) {
			for (int j = i; j < jelovnik.size(); j++) {
				if (jelovnik.get(i).getCena() > jelovnik.get(j).getCena()) {
					Stavka t1 = jelovnik.get(i); // [i] -> t1
					Stavka t2 = jelovnik.get(j); // [j] -> t2
					jelovnik.remove(i); // brisanje stavke sa pozicije i
					jelovnik.add(i, t2); // t2 -> [i]
					jelovnik.remove(j); // brisanje stavke sa pozicije j
					jelovnik.add(j, t1); // t1 -> [j]
				}
			}
		}
	}
	
}
