#include <vector>
#include<iostream>

int main()
{
std::vector<int> x = { 7, 5, 1};

x.push_back(13); // Insert at end

// Print out the vector
std::cout << "x = { ";
for (int i = 0; i < x.size(); i++)
std::cout << x[i] << ", ";

std::cout << "};\n";
}