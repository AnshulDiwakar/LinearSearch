// Personal project template
#include <iostream>
using namespace std;
//
template <typename T>
void show_arr(T arr[], const int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

//поиск первого вхождения First Entering
template<typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;//элимент не обнаружен element not found.
}
	// Последнее вхождения  Last entry.
	template<typename T>
	int search_last_index(T arr[], const int length, T value) {
		for (int i = length - 1; i > 0; i--)
			if (arr[i] == value)
				return i;
		return -1;

	}
	template<typename T>
	int search_last_index(T arr[], const int length, T value, int begin) {
		for (int i = begin; i > 0; i--)
			if (arr[i] == value)
				return i;
		return -1;

	}
	// вывод подслова subword output.
	void subword(char arr[], const int length, char sym) {
		int index = search_index(arr, length, sym);
		if (index == -1)// if dont have symbole in Arrays 
			cout << "ERROR\n";
		else {
			for (int i = index; i < length; i++)
				cout << arr[i];
			cout << endl;
		}
	}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//линейный поиск linear search
	const int size = 6;
	int arr[size]{ 4,7,-1,8,7,0 };
	cout << "Массив:\n";
	show_arr(arr, size);

	//поиск первого вхождения search for the first occurrence.
	cout << "Enter Number: ";
	cin >> n;
	if (search_index(arr, size, n, 2) == -1)
		cout << "This kind of number is not in Arrays\n\n";
	else 
	cout << "Position Number of Arrays: " << 
		search_index(arr, size, n, 2) << "\n\n";
	
	
	
	// Последнее вхождения  Last entry.
	if (search_last_index(arr, size, n, 3) == -1)
		cout << "This kind of number is not in Arrays\n\n";
	else
		cout << "Position Number of Arrays: " <<
		search_last_index(arr, size, n, 3) << "\n\n";
	
		
		//задание "подслово" task "subword"
	const int word_size = 8;
	char word[word_size]{ 'f','u','n','c','t','i','o','n' 
	
	};
	cout << "Enter Symbol: ";
	char sym;
	cin >>sym;
	cout << " Subword : \n ";
	subword(word, word_size, sym);
		cout << endl;


	return 0;
}