#include "prime-generator.h"


int main() {
  auto start = std::chrono::high_resolution_clock::now();

  // Generate 400 primes starting from 100000000000000 using 2 threads. Format the numbers, and don't log as they get generated.
  std::vector<std::string> primes = generatePrimesThreads(2, 400, "100000000000000", true, false);

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = end - start;
  std::cout << "Time Taken: " << std::fixed << std::setprecision(2) << elapsed.count() * 1000 << " ms" << std::endl;

  // Print all the numbers
  for (std::string prime : primes) {
    std::cout << prime << std::endl;
  }

  return 0;
}