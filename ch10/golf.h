#ifndef GOLF_H_
#define GOLF_H_

class Golf {
  private:
    static const int LEN = 40;
    char fullname[LEN];
    int handicap;
  public:
    Golf();
    Golf(const char* name, int hc = 0);
    // function solicits name and handicap from user
    // and sets the members of g to the values entered
    // returns 1 if name is entered, 0 if name is empty string
    int setGolf();
    // function resets handicap to new value
    void setHandicap(int hc);
    // function displays class' data
    void showGolf() const;
};

#endif
