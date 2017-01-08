package zad4_1;

public class Test {
	
	public static void main(String[] args) {
		Restoran res = new Restoran();
		
		res.importJelovnik("jelovnik.txt");
		System.out.println(res);
		
		res.sort();
		System.out.println(res);
		
		res.exportJelovnik("resoran.txt");
	}
	
}
