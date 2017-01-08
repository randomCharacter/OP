package zad1;

import java.util.ArrayList;

public class XCDStorage {
	
	// Polja
	private ArrayList<CDDisk> lista;
	
	// Konstruktor bez parametara
	public XCDStorage() {
		lista = new ArrayList<CDDisk>();
	}
	
	public boolean add(CDDisk cd) {
		if (lista.contains(cd)) {
			return false;
		} else {
			lista.add(new CDDisk(cd));
			return true;
		}		
	}
	
	public CDDisk remove(int id) {
		for (int i = 0; i < lista.size(); i++) {
			if (lista.get(i).getId() == id) {
				return lista.remove(i);
			}
		}
		return null;
	}
	
	public CDDisk find(int id) {
		for (int i = 0; i < lista.size(); i++) {
			if (lista.get(i).getId() == id) {
				return lista.get(i);
			}
		}
		return null;
	}
	
	public void erase() {
		lista.clear();
	}

	@Override
	public String toString() {
		return "XCDStorage [lista=" + lista + "]";
	}
	
	
}
