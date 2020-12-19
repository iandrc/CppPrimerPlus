#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List {
  private:
    static const int MAX = 3;
    Item items[MAX];
    int index;
  public:
    List();
    void add(const Item& item);
    bool isEmpty() const;
    bool isFull() const;
    int size() const { return index; }
    void show() const;
    void visit(void (*pf)(Item& item));
};

#endif
