package zad1_1;

public class Test {
	
	public static void main(String[] args) {
		Student s1 = new Student("RA1/2015", "Pera", "Petrovic");
		Student s2 = new Student("RA2/2015", "Žika", "Žikić");
		Student s3 = new Student("RA3/2015", "Laza", "Lazarević");
		
		// Testiranje liste
		Ucionica lista = new Ucionica();
		lista.dodajStudenta(s1);
		lista.dodajStudenta(s2);
		lista.dodajStudenta(s3);
		System.out.println(lista);
		System.out.println();
		
		// Uklanjanje studenta iz liste
		Student st = lista.ukloniStudenta("RA2/2015");
		System.out.println("Izbačeni student je: " + st);
		System.out.println(lista);
		System.out.println();
		
		// Pražnjenje liste
		lista.isprazniUcionicu();
		System.out.println(lista);
		System.out.println();
		
		// Testiranje mape
		UcionicaMap mapa = new UcionicaMap();
		mapa.dodajStudenta(s1);
		mapa.dodajStudenta(s2);
		mapa.dodajStudenta(s3);
		System.out.println(mapa);
		System.out.println();
		
		// Uklanjanje studenta iz mape
		st = mapa.ukloniStudenta("RA2/2015");
		System.out.println("Izbačeni student je: " + st);
		System.out.println(mapa);
		System.out.println();
		
		// Pražnjenje učionice
		mapa.isprazniUcionicu();
		System.out.println(mapa);
		System.out.println();
	}
	
}
