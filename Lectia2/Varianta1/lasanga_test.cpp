#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

// Funcția pentru timpul de coacere (doar pentru scopuri de testare)
int ovenTime() {
    return 40;
}

// Funcția pentru timpul rămas în cuptor (pentru testare)
int remainingOvenTime(int actualMinutesInOven) {
    return 40 - actualMinutesInOven;
}

// Funcția pentru timpul de pregătire (pentru testare)
int preparationTime(int numberOfLayers) {
    int minutes_per_layer{2};
    return numberOfLayers * minutes_per_layer;
}

// Funcția pentru timpul total (pentru testare)
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    int minutes_per_layer{2};
    return numberOfLayers * minutes_per_layer + actualMinutesInOven;
}

TEST_CASE("Teste pentru functia ovenTime") {
    SECTION("Test pentru ovenTime") {
        int actual = 40;
        int expected = ovenTime();

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Teste pentru functia remainingOvenTime") {
    SECTION("Scenariu 1: timeSpendInOven este 0") {
        int timeSpendInOven = 0;
        int neededBakeTime = 40;
        int actual = remainingOvenTime(timeSpendInOven);
        int expected{neededBakeTime - timeSpendInOven};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2: timeSpendInOven este 20") {
        int timeSpendInOven = 20;
        int neededBakeTime = 40;
        int actual = remainingOvenTime(timeSpendInOven);
        int expected{neededBakeTime - timeSpendInOven};

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Teste pentru functia preparationTime") {
    SECTION("Scenariu 1: layers este 6") {
        int timePerLayer = 2;
        int layers = 6;
        int actual = preparationTime(layers);
        int expected{timePerLayer * layers};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2: layers este 11") {
        int timePerLayer = 2;
        int layers = 11;
        int actual = preparationTime(layers);
        int expected{timePerLayer * layers};

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Teste pentru functia elapsedTime") {
    SECTION("Scenariu 1 pentru elapsedTime") {
        int timeSpendInOven = 0;
        int timePerLayer = 2;
        int layers = 11;
        int actual = elapsedTime(layers, timeSpendInOven);
        int expected{timePerLayer * layers + timeSpendInOven};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2 pentru elapsedTime") {
        int timeSpendInOven = 39;
        int timePerLayer = 2;
        int layers = 5;
        int actual = elapsedTime(layers, timeSpendInOven);
        int expected{timePerLayer * layers + timeSpendInOven};

        REQUIRE(expected == actual);
    }
}
