//fisier header hello_world.h

// This is an include guard.
// You could alternatively use '#pragma once'
// See https://en.wikipedia.org/wiki/Include_guard

//Aceasta este o tehnica "include guard" care previne includerea repetata a aceluiasi fisier header intr-un proiect C++
//Alternativ se poate folosi '#pragma once'

#if !defined(HELLO_WORLD_H)
    #define HELLO_WORLD_H
    
    // Include the string header so that we have access to 'std::string'
    //  Include fișierul header <string>, care este necesar pentru a avea acces la clasa std::string din biblioteca standard C++. Acest lucru este important, deoarece funcția hello() declarată mai jos va returna un obiect de tip std::string.
    #include <string>
    
    // Declare a namespace for the function(s) we are exporting.
    // https://en.cppreference.com/w/cpp/language/namespace
    // Deschide un spațiu de nume numit "hello_world". Spațiile de nume sunt utilizate pentru a grupa funcții, clase și alte entități în cadrul unui nume specific, astfel încât să nu existe conflicte de nume cu alte părți ale codului. Toate entitățile definite în interiorul acestui spațiu de nume vor fi accesibile utilizând prefixul hello_world::
    namespace hello_world {
    
    // Declare the 'hello()' function, which takes no arguments and returns a 'std::string'. The function itself is defined in the hello_world.cpp source file. Because it is inside of the 'hello_world' namespace, it's full name is 'hello_world::hello()'.
    // Funcția std::string hello(); este declarată în spațiul de nume "hello_world". Această funcție se numește "hello" și nu are argumente. Ea este declarată aici, dar este implementată într-un alt fișier sursă (în mod probabil, în "hello_world.cpp"). Această funcție va returna un obiect de tip std::string.
    std::string hello();
    
    }  // namespace hello_world
       // Linia } închide spațiul de nume "hello_world".

#endif

// În rezumat, acest fișier header definește un spațiu de nume "hello_world" și declară o funcție numită "hello()" care va fi implementată în altă parte. Include, de asemenea, fișierul header <string> pentru a avea acces la clasa std::string. Utilizează "include guard" pentru a se asigura că fișierul este inclus o singură dată într-un proiect, evitând astfel erorile de redefinire.
