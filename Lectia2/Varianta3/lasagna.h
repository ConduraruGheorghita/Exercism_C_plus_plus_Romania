#ifndef LASAGNA_H
#define LASAGNA_H

namespace lasagna {

// Funcția pentru timpul de coacere
int ovenTime();

// Funcția pentru timpul rămas în cuptor
int remainingOvenTime(int actualMinutesInOven);

// Funcția pentru timpul de pregătire
int preparationTime(int numberOfLayers);

// Funcția pentru timpul total
int elapsedTime(int numberOfLayers, int actualMinutesInOven);

} // namespace lasagna

#endif // LASAGNA_H
