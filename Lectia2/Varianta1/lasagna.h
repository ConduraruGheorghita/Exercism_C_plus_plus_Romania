#ifndef LASAGNA_H
#define LASAGNA_H

#include <string>
#include <utility>

namespace lasagna {

// Funcția pentru timpul de coacere (doar pentru scopuri de testare)
int ovenTime();

// Funcția pentru timpul rămas în cuptor (pentru testare)
int remainingOvenTime(int actualMinutesInOven);

// Funcția pentru timpul de pregătire (pentru testare)
int preparationTime(int numberOfLayers);

// Funcția pentru timpul total (pentru testare)
int elapsedTime(int numberOfLayers, int actualMinutesInOven);

}  // namespace lasagna

#endif // LASAGNA_H
