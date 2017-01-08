package zad1;

public class Test {
	
	public static void main(String[] args) {
		// Testiranje Diska
		CDDisk cd1 = new CDDisk(1, "Pera", "Pera");
		CDDisk cd2 = new CDDisk(2, "Pera", "Pera1");
		CDDisk cd3 = new CDDisk(3, "Pera", "Pera");
		CDDisk cd4 = new CDDisk(cd1);
		
		// Testiranje poređenja
		System.out.println(cd1.equals(cd2) ? "cd1 == c2" : "cd1 != cd2");
		System.out.println(cd1.equals(cd4) ? "cd1 == c4" : "cd1 != cd4");
		System.out.println();
		
		// Testiranje liste
		XCDStorage st1 = new XCDStorage();
		st1.add(cd1);
		st1.add(cd2);
		st1.add(cd3);
		System.out.println(st1);
		System.out.println();
		
		// Testiranje izbacivanja
		CDDisk removed = st1.remove(2);
		System.out.println("removed = " + removed);
		System.out.println(st1);
		System.out.println();
		
		// Testiranje traženja
		CDDisk found = st1.find(1);
		System.out.println("found = " + found);
		System.out.println();
		
		// Testiranje brisanja
		System.out.println("BRISANJE");
		st1.erase();
		System.out.println(st1);
		System.out.println();
		
		
		// Tetsiranje mape
		XCDStorageMap st2 = new XCDStorageMap();
		st2.add(cd1);
		st2.add(cd2);
		st2.add(cd3);
		System.out.println(st2);
		System.out.println();
		
		// Testiranje izbacivanja
		removed = st2.remove(2);
		System.out.println("removed = " + removed);
		System.out.println(st2);
		System.out.println();
		
		// Testiranje traženja
		found = st2.find(1);
		System.out.println("found = " + found);
		System.out.println();
		
		// Testiranje brisanja
		System.out.println("BRISANJE");
		st2.erase();
		System.out.println(st2);
		System.out.println();
	}
	
}
