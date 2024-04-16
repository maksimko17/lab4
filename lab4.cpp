#include <iostream>
#include <string>
using namespace std;
class Transport {
public:
  virtual void yihaty() = 0;
  virtual void galmuvaty() = 0;
};
class Automobile : public Transport {
private:
  string marka;
  string model;
  int year;
  int probig;
public:
  Automobile(const string& _marka, const string& _model, int _year, int _probig = 0)
      : marka(_marka), model(_model), year(_year), probig(_probig) {}
  void yihaty() override {
    cout << "Автомобіль " << marka << " " << model << " (" << year << ") їде. (Пробіг: " << probig << " км)" << endl;
  }
  void galmuvaty() override {
    cout << "Автомобіль " << marka << " " << model << " (" << year << ") гальмує." << endl;
  }
  int getProbig() const { return probig; }
  void setProbig(int _probig) { probig = _probig; }
};
int main() {
  Automobile skoda("Skoda", "Octavia", 2023, 50000);
  skoda.yihaty();
  skoda.galmuvaty();
  cout << "Поточний пробіг: " << skoda.getProbig() << " км" << endl;
  skoda.setProbig(70000);
  cout << "Новий пробіг: " << skoda.getProbig() << " км" << endl;
  return 0;
}
