#include <iostream>

using namespace std;

void displayMenu() {
  cout << "==============================\n";
  cout << "         Calculator           \n";
  cout << "==============================\n";
  cout << "1. Sum \n";
  cout << "2. Subtract \n";
  cout << "3. Multiply \n";
  cout << "4. Divide \n";
  cout << "5. Exit Calculator \n";
  cout << "Masukkan Pilihan : ";
}

int main() {
  int pilihan;
  double angka1, angka2, hasil;

  do {
    displayMenu();
    cin >> pilihan;

    if (pilihan >= 1 && pilihan <= 4) {
      cout << "Masukkan Angka Pertama : ";
      cin >> angka1;
      cout << "Masukkan Angka Kedua : ";
      cin >> angka2;

      switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            cout << "Hasil Penjumlahan : " << hasil << endl;
            break;
        case 2:
            hasil = angka1 - angka2;
            cout << "Hasil Pengurangan : " << hasil << endl;
            break;
        case 3:
            hasil = angka1 * angka2;
            cout << "Hasil Perkalian : " << hasil << endl;
            break;
        case 4:
            if (angka2 != 0) {
              hasil = angka1 / angka2;
              cout << "Hasil Pembagian : " << hasil << endl;
            } else {
              cout << "Error : Pembagian dengan nol tidak diperbolehkan" << endl;
            }
            break;
        default:
            break;
      }
    } else if (pilihan == 5) {
      cout << "Keluar dari Program. Terima Kasih :)" << endl;
    } else {
      cout <<  "Pilihan tidak valid, Silahkan coba lagi" << endl;
    }
    
    cout << endl;
  } while(pilihan != 5);

  return 0;
}