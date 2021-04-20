#include "originator.h"
#include "caretaker.h"

int main(){

    // 打游戏前
    Originator o{100, 100, 100};
    o.stateDisplay();

    // 保存进度
    CareTaker c;
    c.setMemo(o.saveState());

    // 游戏失败
    o.fight();
    o.stateDisplay();

    // 恢复
    o.recoveryState(c.getMemo());
    o.stateDisplay();

    return 0;
}