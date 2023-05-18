#include <iostream>
#include <string>

void deleteItem(std::string* array, int& size, int index) {
    if (index < 0 || index >= size) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    // Shift the elements to fill the gap
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int findIndexAndDelete(std::string* array, int& size, const std::string& item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            deleteItem(array, size, i); // Delete the item at the found index
            return i; // Return the index
        }
    }
    return -1; // Return -1 if item is not found
}

int main() {
    const int INITIAL_SIZE = 5;
    std::string array[INITIAL_SIZE] = { "Apple", "Banana", "Orange", "Grape", "Mango" };
    int size = INITIAL_SIZE;
    std::string item;

    std::cout << "Enter the item to find and delete: ";
    std::cin >> item;

    int index = findIndexAndDelete(array, size, item);

    if (index != -1) {
        std::cout << "Item found at index: " << index << std::endl;
        std::cout << "Array after deleting item: ";
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Item not found!" << std::endl;
    }

    return 0;
}
