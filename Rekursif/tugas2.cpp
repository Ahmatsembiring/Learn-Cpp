#include <iostream>
#include <ctime>

using namespace std;

string getHari(int hari) {
  switch (hari) {
    case 0: return "Minggu";
    case 1: return "Senin";
    case 2: return "Selasa";
    case 3: return "Rabu";
    case 4: return "Kamis";
    case 5: return "Jumat";
    case 6: return "Sabtu";
    default: return "Hari tidak valid";
  }
}

string getHariRekursif(int hari, int i = 0) {
  if (i == 7) {
    return getHari(hari);
  } else {
    hari = (hari + 1) % 7;
    return getHariRekursif(hari, i + 1);
  }
}

int main() {
  time_t now = time(0);
  tm *t = localtime(&now);

  int hari = t->tm_wday;

  cout << getHariRekursif(hari) << endl;

  return 0;
}
