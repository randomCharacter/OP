package zad2;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		// Testiranje objekata
		Osoba o = new Osoba("Petar", "Petrović");
		System.out.println("Osoba za test: " + o);
		
		// Upis u datoteku
		upisiBin("osoba.raw", o);
		// Čitanje iz datoteke
		Osoba ucitana = ucitajBin("osoba.raw");
		System.out.println("Učitana osoba: " + ucitana);
		
		// Testiranje teksta
		ArrayList<String> text = new ArrayList<>();
		text.add("Prvi red");
		text.add("tekstualnog fajla");
		text.add("koji ima");
		text.add("5 redova");
		text.add("ukupno");
		System.out.println("Kreiran tekst:");
		for (int i = 0; i < text.size(); i++) {
			System.out.println(text.get(i));
		}
		
		// Upis u datoteku
		upisiText("text.txt", text);
		
		ArrayList<String> ucitanText = ucitajText("text.txt");
		System.out.println("Učitan tekst:");
		for (int i = 0; i < ucitanText.size(); i++) {
			System.out.println(ucitanText.get(i));
		}
	}
	
	// Funkcija za upis objekta u fajl
	private static void upisiBin(String fajl, Osoba os) {
		ObjectOutputStream out = null;
		try {
			out = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream(fajl)));
			out.writeObject(os);
		} catch (IOException e) {
			System.out.print("Greška pri pisanju u fajl " + fajl);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				out.close();
			} catch (IOException e) {
				System.out.print("Greška pri zatvaranju fajla " + fajl);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
	
	// Funkcija za učitavanje objekta iz fajla
	private static Osoba ucitajBin(String fajl) {
		ObjectInputStream in = null;
		Osoba os = null;
		try {
			in = new ObjectInputStream(new BufferedInputStream(new FileInputStream(fajl)));
			os = (Osoba) in.readObject();
		} catch (IOException e) {
			System.out.println("Greška pri čitanju fajla " + fajl);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				in.close();
			} catch (IOException e) {
				System.out.print("Greška pri zatvaranju fajla " + fajl);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
		return os;
	}
	
	// Funkcija za upis teksta u fajl
	private static void upisiText(String fajl, ArrayList<String> text) {
		BufferedWriter out = null; 
		try {
			// Otvaranje fajla za pisanje
			out = new BufferedWriter(new FileWriter(fajl));
			// Ispis svakog reda
			for (int i = 0; i < text.size(); i++) {
				out.write(text.get(i) + "\n");
			}
		} catch (IOException e) {
			System.out.print("Greška pri pisanju u fajl " + fajl);
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			try {
				// Oslobađanje fajla
				out.close();
			} catch (IOException e) {
				System.out.print("Greška pri zatvaranju fajla " + fajl);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
	
	// Funkcija za učitavanje teksta iz fajla
	private static ArrayList<String> ucitajText(String fajl) {
		Scanner sc = null;
		ArrayList<String> list = new ArrayList<String>();
		try {
			// Otvaranje tekstualnog fajla za čitanje
			sc = new Scanner(new File(fajl));
			while (sc.hasNext()) {
				list.add(sc.nextLine());
			}
		} catch (FileNotFoundException e) {
			System.out.println("Fajl " + fajl + " nije pronađen");
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			// Oslobađanje fajla
			sc.close();
		}
		return list;
	}
	
	
}
