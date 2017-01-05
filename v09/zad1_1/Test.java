package zad1_1;

public class Test {
	
	public static void main(String[] args) {
		Krug k = new Krug(3);
		JSTrougao t = new JSTrougao(3);
		
		System.out.println("Krug:");
		System.out.println("O = " + k.obim() + "\nP = " + k.povrsina());
		
		System.out.println("JSTrougao:");
		System.out.println("O = " + t.obim() + "\nP = " + t.povrsina());
	}
	
}
