package zad1;

import java.util.HashMap;

public class XCDStorageMap {
	
	// Polja
	private HashMap<Integer, CDDisk> map;
	
	// Konstruktor bez parametara
	public XCDStorageMap() {
		map = new HashMap<Integer, CDDisk>();
	}
	
	public boolean add(CDDisk cd) {
		if (map.containsKey(cd.getId())) {
			return false;
		} else {
			map.put(cd.getId(), new CDDisk(cd));
			return true;
		}
	}
	
	public CDDisk remove(int id) {
		return map.remove(id);
	}
	
	public CDDisk find(int id) {
		return map.get(id);
	}
	
	public void erase() {
		map.clear();
	}

	@Override
	public String toString() {
		return "XCDStorageMap [map=" + map + "]";
	}

}
