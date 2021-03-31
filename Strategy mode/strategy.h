#pragma once

class Strategy{
public:
    virtual void getData() = 0;
    const virtual double getResult() = 0;
};
