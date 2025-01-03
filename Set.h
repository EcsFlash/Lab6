#pragma once
#include <string>
#include <sstream>
using namespace std;

template<typename T>
class Set {
private:
	T* content;
	int len;
	bool contains(T el) const {
		for (int i = 0; i < len; i++) {
			if (content[i] == el) {
				return true;
			}
		}
		return false;
	}
	//int count(int*arr,int len,int el);
public:
	Set(T* a, int count){
		len = 0;
		content = new T[0];
		for (int i = 0; i < count; i++) {
			add(a[i]);
		}
	}
	Set() {
		len = 0;
		content = new T[0];
	}
	Set(const Set& set) {
		len = set.len;
		content = new T[len];
		for (int i = 0; i < len; i++) {
			content[i] = set.content[i];
		}
	}
	~Set() {
		delete[] content;
		content = nullptr;
	}
	void add(const T el) {
		if (!contains(el)) {
			len += 1;
			T* temp = new T[len - 1];
			for (int i = 0; i < len - 1; i++) {
				temp[i] = content[i];
				//cout << "temp i: " << temp[i] << endl;
			}
			delete[] content;
			content = new T[len];
			for (int i = 0; i < len - 1; i++) {
				content[i] = temp[i];
			}
			content[len - 1] = el;
			delete[] temp;
		}
	}
	void remove(const T el) {
		if (contains(el)) {
			T* temp = new T[len];
			len--;
			for (int i = 0; i < len + 1; i++) {
				temp[i] = content[i];
			}
			delete[] content;
			content = new T[len];
			int k = 0;
			for (int i = 0; i < len + 1; i++) {
				if (temp[i] != el) {
					content[k] = temp[i];
					k++;
				}
			}
			delete[] temp;
		}
	}
	Set Intersection(const Set& set) {
		Set temp;
		if (len >= set.len) {
			for (int i = 0; i < len; i++) {
				if (set.contains(content[i])) {
					temp.add(content[i]);
				}
			}
		}
		else {
			for (int i = 0; i < set.len; i++) {
				if (contains(set.content[i])) {
					temp.add(set.content[i]);
				}
			}
		}

		return temp;
	}
	bool isSubsetOf(const Set& set) {
		for (int i = 0; i < len; i++) {
			if (!set.contains(content[i])) {
				return false;
			}
		}
		return true;
	}

	Set Complement(const Set& A, const Set& B) {
		return B.Without(A);
	}

	Set Without(const Set& set) {
		Set temp;
		for (int i = 0; i < len; i++) {
			if (!set.contains(content[i])) {
				temp.add(content[i]);
			}
		}
		return temp;
	}
	//��������, ����������, �� ������

	Set Union(const Set& set) {
		Set temp;
		for (int i = 0; i < len; i++) {
			temp.add(content[i]);
		}
		for (int i = 0; i < set.len; i++) {
			temp.add(set.content[i]);
		}
		return temp;
	}
	Set& operator=(const Set& set) {
		len = set.len;
		content = new T[len];
		for (int i = 0; i < len; i++) {
			content[i] = set.content[i];
		}
		return *this;
	}
	bool operator==(const Set& set) {
		if (len == set.len) {
			for (int i = 0; i < len; i++) {
				if (!set.contains(content[i])) {
					return false;
				}
			}
			return true;
		}
		else {
			return false;
		}
	}
	/*bool operator!=(Set& set); {
		if (len == set.len) {
			for (int i = 0; i < len; i++) {
				if (!set.contains(content[i])) {
					return true;
				}
			}
			return false;
		}
		else {
			return true;
		}
	}*/
	
	friend ostream& operator<<(ostream& os, const Set& set) {
		stringstream ss;
		for (int i = 0; i < set.len; i++) {
			ss << set.content[i] << '\t';
		}
		return os << ss.str();
	}
	
};

