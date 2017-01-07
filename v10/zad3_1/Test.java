package zad3_1;

public class Test {
	
	public static void main(String[] args) {
		// Kreiranje objekata
		Kvadar kv = new Kvadar(1, 2, 4);
		Kocka kc = new Kocka(4);
		// Ispis objekata
		System.out.println(kv + " V = " + kv.zapremina());
		System.out.println(kc + " V = " + kc.zapremina());
		
	}
	
}
