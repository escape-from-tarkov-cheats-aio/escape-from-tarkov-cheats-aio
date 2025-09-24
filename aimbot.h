#pragma once
#include <Windows.h>
#include <vector>

struct Target {
    float x, y, z;
    float distance;
    bool isVisible;
    bool isEnemy;
};

class Aimbot {
private:
    bool enabled;
    float fovRadius;
    float smoothness;
    bool visibilityCheck;
    int targetBone; // 0=head, 1=chest, 2=stomach
    
public:
    Aimbot();
    ~Aimbot();
    
    bool initialize();
    void process();
    void shutdown();
    
    // Configuration
    void setEnabled(bool enable);
    void setFOVRadius(float radius);
    void setSmoothness(float smooth);
    void setVisibilityCheck(bool check);
    void setTargetBone(int bone);
    
private:
    Target findBestTarget();
    void aimAtTarget(const Target& target);
    bool isTargetValid(const Target& target);
    float calculateDistance(const Target& target);
    std::vector<Target> getTargets();
};