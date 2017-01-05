package zad1;

public class Test {
	
	public static void main(String[] args) {
		Pravougaonik p1 = new Pravougaonik(5, 2);
		Pravougaonik p2 = new Pravougaonik(p1);
		
		System.out.println("O1 = " + p1.obim() + "\nP1 = " + p1.povrsina());
		System.out.println("O2 = " + p2.obim() + "\nP2 = " + p2.povrsina());
	}
	
}
