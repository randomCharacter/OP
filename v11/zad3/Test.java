package zad3;

public class Test {
	
	public static void main(String[] args) {
		String s1 = "Ovo je test string";
		String s2 = new String(", a ovo je drugi test string");
		String s3 = new String(s1);

		// Konkatanacija stringova
		String s4 = s1 + s2;
		String s5 = s1.concat(s2);
		System.out.println("s1 + s2 = " + s4);
		System.out.println("s1.concat(s2) = " + s5);
		
		// Poređenje operatorom ==
		if (s1 == s3) {
			System.out.println("s1 == s3");
		} else {
			System.out.println("s1 != s3");
		}
		if (s1 == s2) {
			System.out.println("s1 == s2");
		} else {
			System.out.println("s1 != s2");
		}
		// Poređenje metodom equals()
		if (s1.equals(s2)) {
			System.out.println("s1.equals(s2)");
		} else {
			System.out.println("s1.equals(s2)");
		}
		if (s4.equals(s5)) {
			System.out.println("s1.equals(s4)");
		} else {
			System.out.println("s1.equals(s5)");
		}
		
		// Pronalaženje podstringa
		if (s1.indexOf("drugi") != -1) {
			System.out.println("U stringu \"" + s1 + "\" podstring \"drugi\" se nalazi na poziciji " + s1.indexOf("drugi"));
		} else {
			System.out.println("String \"" + s1 + "\" ne sadrži podstring \"drugi\"");
		}
		if (s2.indexOf("drugi") != -1) {
			System.out.println("U stringu \"" + s2 + "\" podstring \"drugi\" se nalazi na poziciji " + s1.indexOf("drugi"));
		} else {
			System.out.println("String \"" + s2 + "\" ne sadrži podstring \"drugi\"");
		}
		
		// Uzimanje karaktera iz stringa
		System.out.println("5. karakter u stringu \"" + s1 + "\" je '" + s1.charAt(4) +"'");
		
		// Uzimanje podstringa iz stringa
		System.out.println("Prvih 6 karaktera stringa \"" + s1 + "\" su \"" + s1.substring(0, 6) + "\"");
		
		// Velika i mala slova
		System.out.println("s1.toLowerCase() = " + s1.toLowerCase());
		System.out.println("s1.toUpperCase() = " + s1.toUpperCase());
		
		// Dužina stringa
		System.out.println("s1 ima " + s1.length() + " karaktera");
		
		// Deljenje stringova
		String s6 = "Ovo.je.test.String";
		String[] s = s6.split("\\.");
		System.out.println("Podstringovi razdvojeni sa '.' u stringu \"" + s6 + "\"");
		for (int i = 0; i < s.length; i++) {
			System.out.println(i + " : " + s[i]);
		}
		
	}
	
}
