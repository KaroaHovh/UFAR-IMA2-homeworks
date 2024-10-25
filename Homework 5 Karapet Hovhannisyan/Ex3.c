#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    union SensorData {
        int temperature;
        float pressure;
        float humidity;
    } sensor_measurement;

    char sensor_name[50];
    char input[50];  
    int is_float = 0;  

   
    printf("Enter the name of your sensor: ");
    scanf("%s", sensor_name);

    printf("Please input the measurement of your sensor: ");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            is_float = 1;
            break;
        }
    }

    if (is_float) {
        sensor_measurement.pressure = atof(input); 
        printf("The measurement of your %s is %.2f\n", sensor_name, sensor_measurement.pressure);  
    } else {
        sensor_measurement.temperature = atoi(input);  
        printf("The measurement of your %s is %d\n", sensor_name, sensor_measurement.temperature); 
    }

    return 0;
}
