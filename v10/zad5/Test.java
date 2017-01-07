package zad5;

public class Test {
	
	public static void main(String[] args) {
		// Kreiranje objekata
		Pravougaonik p = new Pravougaonik(2, 3);
		Krug k = new Krug(3);
		Kvadrat kv = new Kvadrat(4);
		// Ispis objekata
		System.out.println(p + " P = " + p.povrsina());
		System.out.println(k + " P = " + k.povrsina());
		System.out.println(kv + " P = " + kv.povrsina());
	}
	
}
