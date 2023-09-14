#include <iostream>

// Funcția care returnează timpul de coacere al lasagnei (40 de minute).
int ovenTime() {
    return 40;
}

// Funcția care calculează timpul rămas în cuptor pe baza timpului actual petrecut în cuptor.
int remainingOvenTime(int actualMinutesInOven) {
    int time = ovenTime();
    int remaining = time - actualMinutesInOven;
    return remaining >= 0 ? remaining : 0; // Asigură-te că timpul rămas nu devine negativ.
}

// Funcția care calculează timpul estimat de pregătire în funcție de numărul de straturi și timpul necesar per strat.
int preparationTime(int numberOfLayers) {
    int minutes_per_layer{2};
    return numberOfLayers * minutes_per_layer;
}

// Funcția care calculează timpul total petrecut pentru a crea și coace lasagna până în acest moment.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    int minutes_per_layer{2};
    return numberOfLayers * minutes_per_layer + actualMinutesInOven;
}

int main() {
    int numberOfLayers = 4; // Exemplu: 4 straturi de lasagna
    int actualMinutesInOven = 20; // Exemplu: 20 de minute în cuptor

    // Calcularea și afișarea timpului rămas în cuptor.
    int remainingTime = remainingOvenTime(actualMinutesInOven);
    std::cout << "Remaining time in oven: " << remainingTime << " minutes" << std::endl;

    // Calcularea și afișarea timpului estimat de pregătire.
    int prepTime = preparationTime(numberOfLayers);
    std::cout << "Estimated preparation time: " << prepTime << " minutes" << std::endl;

    // Calcularea și afișarea timpului total petrecut până în acest moment.
    int totalElapsedTime = elapsedTime(numberOfLayers, actualMinutesInOven);
    std::cout << "Total elapsed time: " << totalElapsedTime << " minutes" << std::endl;

    return 0;
}
