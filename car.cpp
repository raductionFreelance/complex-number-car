#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct car{
    double len;
    double high;
    double v;
    double powerful;
    double d;
    string color;
    string type;
};

void newCar(vector<car>& cars){
    double len;
    double high;
    double v;
    double powerful;
    double d;
    string color;
    string type;
    
    cout << "Введіть довжину авто" << endl;
    cin >> len;
    cout << "Введіть кліренс авто" << endl;
    cin >> high;
    cout << "Введіть обʼєм двигуна авто" << endl;
    cin >> v;
    cout << "Введіть потужність двигуна авто" << endl;
    cin >> powerful;
    cout << "Введіть діаметр коліс авто" << endl;
    cin >> d;
    cout << "Введіть колір авто" << endl;
    cin >> color;
    cout << "Введіть тип коробки передач авто" << endl;
    cin >> type;
    
    cars.push_back({len, high, v, powerful, d, color, type});
}

void printInfo(const vector<car>& cars, int i){
    cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
}

void searchByNumber(const vector<car>& cars, string text, double value){
    for (int i=0; i<cars.size(); i++){
        if (text=="length"){
            if (cars[i].len==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }else if (text=="clearance"){
            if (cars[i].high==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }else if (text=="v"){
            if (cars[i].v==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }
        else if (text=="powerful"){
            if (cars[i].powerful==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }
        else if (text=="d"){
            if (cars[i].d==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }
    }
}
void searchByString(const vector<car>& cars, string text, string value){
    for (int i=0; i<cars.size(); i++){
        if (text=="type"){
            if (cars[i].type==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }
        else if (text=="color"){
            if (cars[i].color==value){
                cout << "Car's length:" << cars[i].len << ", clearance: " << cars[i].high << ", V: " << cars[i].v << ", engine's powerful: " << cars[i].powerful << ", wheel's diametr: " << cars[i].d << ", color: " << cars[i].color << "gearbox's type: " << cars[i].type << endl;
            }
        }
    }
}

int main(){
    vector<car> cars = {
            {4.5, 0.18, 2.0, 150, 17, "red", "manual"},
            {4.7, 0.20, 2.5, 180, 18, "blue", "automatic"},
            {4.2, 0.16, 1.6, 120, 16, "white", "manual"},
            {4.9, 0.22, 3.0, 250, 19, "black", "automatic"},
            {4.3, 0.17, 1.8, 140, 17, "gray", "CVT"}
        };
    
    newCar(cars);

    for (int i = 0; i < cars.size(); i++) {
        printInfo(cars, i);
    }

    cout << "\nПошук за довжиною (len = 4.5):\n";
    searchByNumber(cars, "length", 4.5);

    cout << "\nПошук за типом коробки передач (type = auto):\n";
    searchByString(cars, "type", "auto");
    return 0;
}
