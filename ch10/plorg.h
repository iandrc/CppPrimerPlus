#ifndef PLORG_H_
#define PLORG_H_

class Plorg {
  private:
    static const int LEN = 20;
    char name[LEN];
    int CI;
  public:
    Plorg(const char* plorgName = "Plorga", int contentmentIndex = 50);
    void show() const;
    void setCI(int contentmentIndex);
};

#endif
