#include <iostream>
#include <string>
#include <vector>
#include "trainer.h"
#include "esp.h"
#include "aimbot.h"

int main() {
    std::cout << "Escape from Tarkov - Tool" << std::endl;
    std::cout << "Starting trainer..." << std::endl;
    
    // Initialize trainer components
    Trainer trainer;
    ESP espSystem;
    Aimbot aimSystem;
    
    // Main loop (non-functional)
    while (true) {
        // Process trainer features
        trainer.update();
        espSystem.render();
        aimSystem.process();
        
        // Sleep to prevent high CPU usage
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
    
    return 0;
}