#pragma once

class proxyBase {
public:
    const virtual void giveMoney() = 0;
    const virtual void giveFlowers() = 0;
    const virtual void giveChocolate() = 0;
};