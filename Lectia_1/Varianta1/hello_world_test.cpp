// Include the header file with the definitions of the functions you create.
#include "hello_world.h"
// Include the test framework.
#ifdef EXERCISM_TEST_SUITE
#include <catch2/catch.hpp> // hpp este header pentru cpp (asta inseamna ca poate contine si cod C, nu doar C++) ; framework de testare numit "Catch2" pentru a crea și executa teste ; Codul tău utilizează framework-ul de testare "Catch2", care este un instrument puternic și flexibil pentru a crea și rula teste unitare în C++. Acesta permite scrierea de teste cu expresii clare și ușor de citit, precum REQUIRE(hello_world::hello() == "Hello, World!");, și generează rapoarte detaliate despre rezultatele testelor.
#else
#include "test/catch.hpp"
#endif
// Declares a single test.
TEST_CASE("test_hello") // Această linie definește un nou test folosind framework-ul de testare. Testul are numele "test_hello". Numele testului trebuie să fie unic în cadrul proiectului și ajută la identificarea testului în cazul în care acesta eșuează.
{
    // Check if your function returns "Hello, World!".
    REQUIRE(hello_world::hello() == "Hello, World!"); // Acesta este conținutul testului. Cu ajutorul macro-ului "REQUIRE", se verifică dacă rezultatul apelului funcției hello_world::hello() este egal cu șirul "Hello, World!". Dacă această condiție nu este îndeplinită (adică funcția hello() nu returnează "Hello, World!"), testul va eșua și va genera un mesaj de eroare în raportul de testare.
}

//Codul pe care l-ai furnizat face parte dintr-un test pentru funcția hello() definită în "hello_world.cpp". Acesta utilizează un framework de testare numit "Catch2" pentru a crea și executa teste pentru codul tău. Extensia fisierului în sine nu este importantă în acest context, dar convențional, astfel de fișiere de testare au extensia .cpp.

// Iată câteva observații legate de tipul și extensia fișierului folosit pentru testare:

// Extensie de fișier: De obicei, fișierele care conțin teste au extensia .cpp, pentru a le diferenția clar de fișierele header sau sursă. Cu toate acestea, nu există o regulă strictă pentru extensia fișierului de testare, și aceasta poate varia în funcție de convenția folosită în proiectul tău sau în mediul de dezvoltare. Ceea ce contează cel mai mult este conținutul și organizarea testelor în interiorul fișierului.

// Framework de testare: Codul tău utilizează framework-ul de testare "Catch2", care este un instrument puternic și flexibil pentru a crea și rula teste unitare în C++. Acesta permite scrierea de teste cu expresii clare și ușor de citit, precum REQUIRE(hello_world::hello() == "Hello, World!");, și generează rapoarte detaliate despre rezultatele testelor.

// Directiva preprocesorului: Observă utilizarea directivelor preprocesorului #ifdef și #else pentru a gestiona includerea corectă a framework-ului de testare. Acest lucru permite comutarea între utilizarea framework-ului "Catch2" (#include <catch2/catch.hpp>) și utilizarea unui alt framework personalizat (#include "test/catch.hpp") în funcție de contextul de dezvoltare sau de setările de compilare.

// În esență, extensia fișierului în care sunt scrise testele poate varia, dar conținutul și framework-ul de testare pe care îl folosești sunt elementele esențiale pentru testarea corectă și eficientă a codului tău.
//În esență, acest cod de testare include fișierul header, alege framework-ul de testare în funcție de setările de compilare, definește un test numit "test_hello", și verifică dacă funcția hello() returnează "Hello, World!". Dacă testul este executat cu succes, acesta confirmă că funcția hello() funcționează corect.
