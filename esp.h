#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <vector>
#include <string>

struct Player {
    float x, y, z;
    std::string name;
    bool isEnemy;
    bool isVisible;
    float health;
    float distance;
};

class ESP {
private:
    bool enabled;
    float maxDistance;
    bool showPlayers;
    bool showLoot;
    bool showNames;
    bool showHealth;
    
public:
    ESP();
    ~ESP();
    
    bool initialize();
    void render();
    void shutdown();
    
    // Configuration
    void setEnabled(bool enable);
    void setMaxDistance(float distance);
    void setShowPlayers(bool show);
    void setShowLoot(bool show);
    void setShowNames(bool show);
    void setShowHealth(bool show);
    
private:
    void drawPlayerBox(const Player& player);
    void drawPlayerName(const Player& player);
    void drawHealthBar(const Player& player);
    std::vector<Player> getPlayers();
};