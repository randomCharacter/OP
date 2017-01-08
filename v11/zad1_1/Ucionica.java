package zad1_1;

import java.util.ArrayList;

public class Ucionica {
	
	// Polja
	private int kapacitet = 5;
	private ArrayList<Student> lista = new ArrayList<Student>();
	
	public boolean dodajStudenta(Student st) {
		if (lista.size() < kapacitet) {
			lista.add(new Student(st));
			return true;
		}
		return false;
	}
	
	public Student ukloniStudenta(String indeks) {
		for (int i = 0; i < lista.size(); i++) {
			if (lista.get(i).getIndeks().equals(indeks)) {
				return lista.remove(i);
			}
		}
		return null;
	}
	
	public void isprazniUcionicu() {
		lista.clear();
	}

	@Override
	public String toString() {
		return "Ucionica [kapacitet=" + kapacitet + ", lista=" + lista + "]";
	}
	
}
