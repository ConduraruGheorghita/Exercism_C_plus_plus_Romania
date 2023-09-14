#include <iostream>

// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    int time{40};
    return time;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    int time = ovenTime();
    int remaining = time - actualMinutesInOven;
        return remaining >= 0 ? remaining : 0; // Asigură-te că timpul rămas nu devine negativ.
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    int minutes_per_layer{2};
    return numberOfLayers * minutes_per_layer;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
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
