#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

//---dilarang menambah kode di atas batas ini-----

map<int, string> nama_SPBU;

int SPBU_terefisien(){
     int n = 5;
     int stok[] = {1, 2, 3, 4, 5};
     int konsumsi_solar[] = {3, 4, 5, 1, 2};

     int result = -1;
     int max_stock = -1;

     for (int i = 0; i < n; ++i) {
          int current_stock = 0;
          bool can_complete_cycle = true;
 
          for (int j = 0; j < n; ++j) {
              current_stock = current_stock - konsumsi_solar [(i + j) % n] + stok[(i + j) % n];

            if (current_stock < 0) {
                can_complete_cycle = false;
                break;
            }
        }
          
     if (can_complete_cycle && current_stock > max_stock) {
            max_stock = current_stock;
            result = i;
        }
    }
     
//CODE
     return result;
}

int main(){
     nama_SPBU = {{0, "SPBU_A"}, {1, "SPBU_B"}, {2, "SPBU_C"}, {3, "SPBU_D"}, {4, "SPBU_E"}};

  int most_efficient_station = SPBU_terefisien();

  if (most_efficient_station != -1) {  
       cout << "SPBU paling efisien: " << nama_SPBU[most_efficient_station] << endl;
    } else {
       cout << "No Gass!" << endl;
   }

return 0;
}
