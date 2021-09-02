
#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include <iostream>
#include <chrono>

class TimeManager {
    TimeManager();
    ~TimeManager();
private:
    static TimeManager singleton;
public:
    void Start();
    void Update();
    unsigned int GetElapsedTime() const;
    unsigned int GetStartedTime() const;
    TimeManager(const TimeManager&) = delete;
    TimeManager& operator=(const TimeManager&) = delete;
    static TimeManager& GetInstance();

};


#endif //TIMEMANAGER_H