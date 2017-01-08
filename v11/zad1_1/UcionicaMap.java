package zad1_1;

import java.util.HashMap;

public class UcionicaMap {
	
	// Polja
	private int kapacitet = 5;
	private HashMap<String, Student> map = new HashMap<String, Student>();
	
	public boolean dodajStudenta(Student st) {
		if (map.size() < kapacitet) {
			map.put(st.getIndeks(), new Student(st));
			return true;
		} else {
			return false;
		}
	}
	
	public Student ukloniStudenta(String indeks) {
		return map.remove(indeks);
	}
	
	public void isprazniUcionicu() {
		map.clear();
	}

	@Override
	public String toString() {
		return "UcionicaMap [kapacitet=" + kapacitet + ", map=" + map + "]";
	}
	
}
