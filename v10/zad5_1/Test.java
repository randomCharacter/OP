package zad5_1;

public class Test {

	public static void main(String[] args) {
		// TeloA
		TeloA a = new TeloA(2, 3, 2, 4, 2);
		System.out.println(a);
		System.out.println("P = " + a.povrsina());
		System.out.println("V = " + a.zapremina());
		
		//TeloB
		TeloB b = new TeloB(4);
		System.out.println(b);
		System.out.println("P = " + b.povrsina());
		System.out.println("V = " + b.zapremina());		
	}

}
