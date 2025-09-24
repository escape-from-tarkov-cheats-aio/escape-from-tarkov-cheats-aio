#pragma once
#include <Windows.h>
#include <iostream>
#include <vector>

class Trainer {
private:
    bool isActive;
    HWND gameWindow;
    
public:
    Trainer();
    ~Trainer();
    
    bool initialize();
    void update();
    void shutdown();
    
    // Combat features (non-functional)
    void enableAimbot(bool enable);
    void enableTriggerbot(bool enable);
    void enableRecoilControl(bool enable);
    
    // Utility features (non-functional)
    void enableBunnyhop(bool enable);
    void changeFOV(float fov);
    void enableStreamProof(bool enable);
    
private:
    void processHotkeys();
    bool findGameProcess();
};