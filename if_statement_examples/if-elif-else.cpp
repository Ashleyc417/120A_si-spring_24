#include <iostream>

int main()
{
  int score = 85;

  // Condition 1
  if (score >= 90)
  {
    std::cout << "Grade: A" << std::endl;
  }
  // Condition 2
  else if (score >= 80)
  {
    std::cout << "Grade: B" << std::endl;
  }
  // Condition 3
  else if (score >= 70)
  {
    std::cout << "Grade: C" << std::endl;
  }
  // Condition 4
  else if (score >= 60)
  {
    std::cout << "Grade: D" << std::endl;
  }
  // Condition 5
  else
  {
    std::cout << "Grade: F" << std::endl;
  }

  return 0;
}
