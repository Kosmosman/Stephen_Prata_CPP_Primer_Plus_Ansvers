#include <cstring>
#include <iostream>

int main() {
  using namespace std;
  const char* vovel = "aeiouyAEIOUY";
  cout << "Enter words (q to exit): " << endl;
  string word;
  int count_vovel = 0, count_consonant = 0, count_other = 0;
  while (cin >> word && word != "q") {
    if (isalpha(word[0])) {
      if (strchr(vovel, word[0]))
        ++count_vovel;
      else
        ++count_consonant;
    } else {
      ++count_other;
    }
  }
  cout << "Vovel - " << count_vovel << endl;
  cout << "Consonant - " << count_consonant << endl;
  cout << "Other - " << count_other << endl;
}
