#pragma once

class Stock {
public:
    const virtual void buy() = 0;
    const virtual void sell() = 0;
};