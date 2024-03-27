#include <iostream>
#include <vector>

int main() {
  // Create three vectors
  std::vector<int> vector1 = {1, 2, 3, 4, 5};
  std::vector<int> vector2;
  std::vector<int> vector3 = {6, 7, 8};

  // Access elements using .at() function
  std::cout << "Accessing elements of vector1 using .at() function:"
            << std::endl;
  std::cout << vector1.at(0) << " " << vector1.at(1) << " " << vector1.at(2)
            << " " << vector1.at(3) << " " << vector1.at(4) << std::endl;

  // Access elements using .front() and .back() functions
  std::cout << "First element of vector1: " << vector1.front() << std::endl;
  std::cout << "Last element of vector1: " << vector1.back() << std::endl;

  std::cout << "Is vector2 empty?\n";

  // Check if vector2 is empty
  std::cout << (vector2.empty()) << ".\n";

  // Print the size of vector3
  std::cout << "Size of vector3: " << vector3.size() << std::endl;

  // Clear vector2
  vector2.clear();

  // Print the size of vector2 after clearing
  std::cout << "Size of vector2 after clearing: " << vector2.size()
            << std::endl;

  // Push elements into vector2
  vector2.push_back(10);
  vector2.push_back(20);
  vector2.push_back(30);

  // Print the elements of vector2
  std::cout << "Elements of vector2 after pushing: ";
  std::cout << vector2.at(0) << " " << vector2.at(1) << " " << vector2.at(2)
            << std::endl;

  // Remove the last element from vector2
  vector2.pop_back();

  // Print the elements of vector2 after popping
  std::cout << "Elements of vector2 after popping: ";
  std::cout << vector2.at(0) << " " << vector2.at(1) << std::endl;

  return 0;
}
