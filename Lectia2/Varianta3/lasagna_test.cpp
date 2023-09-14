#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "lasagna.h" // Include fișierul header pentru funcțiile lasagna

TEST_CASE("Test pentru funcția ovenTime") {
    SECTION("Test pentru ovenTime") {
        int actual = 40;
        int expected = lasagna::ovenTime();

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Test pentru funcția remainingOvenTime") {
    SECTION("Scenariu 1: timeSpendInOven este 0") {
        int timeSpendInOven = 0;
        int neededBakeTime = 40;
        int actual = lasagna::remainingOvenTime(timeSpendInOven);
        int expected{neededBakeTime - timeSpendInOven};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2: timeSpendInOven este 20") {
        int timeSpendInOven = 20;
        int neededBakeTime = 40;
        int actual = lasagna::remainingOvenTime(timeSpendInOven);
        int expected{neededBakeTime - timeSpendInOven};

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Test pentru funcția preparationTime") {
    SECTION("Scenariu 1: layers este 6") {
        int timePerLayer = 2;
        int layers = 6;
        int actual = lasagna::preparationTime(layers);
        int expected{timePerLayer * layers};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2: layers este 11") {
        int timePerLayer = 2;
        int layers = 11;
        int actual = lasagna::preparationTime(layers);
        int expected{timePerLayer * layers};

        REQUIRE(expected == actual);
    }
}

TEST_CASE("Test pentru funcția elapsedTime") {
    SECTION("Scenariu 1 pentru elapsedTime") {
        int timeSpendInOven = 0;
        int timePerLayer = 2;
        int layers = 11;
        int actual = lasagna::elapsedTime(layers, timeSpendInOven);
        int expected{timePerLayer * layers + timeSpendInOven};

        REQUIRE(expected == actual);
    }

    SECTION("Scenariu 2 pentru elapsedTime") {
        int timeSpendInOven = 39;
        int timePerLayer = 2;
        int layers = 5;
        int actual = lasagna::elapsedTime(layers, timeSpendInOven);
        int expected{timePerLayer * layers + timeSpendInOven};

        REQUIRE(expected == actual);
    }
}
