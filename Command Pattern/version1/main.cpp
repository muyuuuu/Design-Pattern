#include "concretecmd.h"
#include "waiter.h"

int main() {

    // 开店前
    Barbecuer b;
    BakeMuttonCmd mutton{b};
    std::cout << &mutton << std::endl;
    BakeChickenCmd chicken{b};

    Waiter w;

    // 来客人了
    w.setOrder(&mutton);
    w.notify();

    w.setOrder(&chicken);
    w.notify();

    return 0;
}