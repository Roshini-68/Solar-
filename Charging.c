#include <stdio.h>
#include <stdlib.h>

// Simulated ADC function to read solar panel voltage
int readSolarPanelVoltage() {
    // In real hardware, this would use an ADC
    return rand() % 20;  // Simulating voltage between 0-20V
}

// Function to control charging
void controlCharging(int voltage) {
    if (voltage > 12 && voltage < 18) {
        printf("Charging ON: Voltage = %dV\n", voltage);
    } else {
        printf("Charging OFF: Voltage = %dV (Unsafe)\n", voltage);
    }
}

int main() {
    while (1) {
        int solarVoltage = readSolarPanelVoltage();  // Read voltage
        controlCharging(solarVoltage);  // Check and control charging

        // Simulate delay (in real hardware, use a proper delay function)
        for (volatile long i = 0; i < 1000000; i++);
    }
    
    return 0;
}
