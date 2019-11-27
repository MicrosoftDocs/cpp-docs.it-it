---
title: Matrici (C++)
ms.date: 11/14/2019
helpviewer_keywords:
- declaring arrays [C++], about declaring arrays
- multidimensional arrays [C++]
- arrays [C++]
ms.assetid: 3f5986aa-485c-4ba4-9502-67e2ef924238
ms.openlocfilehash: 91c57a9c4ef190dcace1813dd81739ac72e6b358
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74188995"
---
# <a name="arrays-c"></a>Matrici (C++)

Una matrice è una sequenza di oggetti dello stesso tipo che occupano un'area di memoria contigua. Le matrici di tipo C tradizionali sono l'origine di molti bug, ma sono ancora comuni, soprattutto nelle basi di codice precedenti. In Modern C++è consigliabile usare [std:: Vector](../standard-library/vector-class.md) o [std:: Array](../standard-library/array-class-stl.md) anziché le matrici di tipo C descritte in questa sezione. Entrambi i tipi di libreria standard archiviano gli elementi come un blocco di memoria contiguo, ma garantiscono una maggiore indipendenza dai tipi insieme agli iteratori che fanno riferimento a una posizione valida all'interno della sequenza. Per ulteriori informazioni, vedere [contenitori (moderni C++)](containers-modern-cpp.md).

## <a name="stack-declarations"></a>Dichiarazioni dello stack

In una C++ dichiarazione di matrice, la dimensione della matrice viene specificata dopo il nome della variabile, non dopo il nome del tipo come in altri linguaggi. Nell'esempio seguente viene dichiarata una matrice di 1000 Double da allocare nello stack. Il numero di elementi deve essere specificato come valore letterale intero o in caso contrario come espressione costante perché il compilatore deve conoscere la quantità di spazio dello stack da allocare. non può utilizzare un valore calcolato in fase di esecuzione. A ogni elemento nella matrice viene assegnato il valore predefinito 0. Se non si assegna un valore predefinito, ogni elemento conterrà inizialmente tutti i valori casuali che si trovano in tale posizione.

```cpp
    constexpr size_t size = 1000;

    // Declare an array of doubles to be allocated on the stack
    double numbers[size] {0};

    // Assign a new value to the first element
    numbers[0] = 1;

    // Assign a value to each subsequent element
    // (numbers[1] is the second element in the array.)
    for (size_t i = 1; i < size; i++)
    {
        numbers[i] = numbers[i-1] * 1.1;
    }

    // Access each element
    for (size_t i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }
```

Il primo elemento della matrice è l'elemento 0A e l'ultimo elemento è l'elemento (*n*-1), dove *n* è il numero di elementi che la matrice può contenere. Il numero di elementi nella dichiarazione deve essere di un tipo integrale e deve essere maggiore di 0. È responsabilità dell'utente garantire che il programma non passi mai un valore all'operatore di pedice maggiore di `(size - 1)`.

Una matrice di dimensioni zero è valida solo quando la matrice è l'ultimo campo in uno **struct** o un' **Unione** e quando le estensioni Microsoft (/Ze) sono abilitate.

Le matrici basate su stack sono più veloci da allocare e accedere alle matrici basate su heap, ma il numero di elementi non può essere così elevato da usare una quantità eccessiva di memoria dello stack. La quantità eccessiva dipende dal programma. È possibile usare gli strumenti di profilatura per determinare se una matrice è troppo grande.

## <a name="heap-declarations"></a>Dichiarazioni heap

Se è necessaria una matrice troppo grande per essere allocata nello stack o le cui dimensioni non sono note in fase di compilazione, è possibile allocarla nell'heap con una nuova espressione [\[\]](new-operator-cpp.md) . L'operatore restituisce un puntatore al primo elemento. È possibile utilizzare l'operatore di indice con la variabile puntatore Analogamente a una matrice basata su stack. È inoltre possibile utilizzare l' [aritmetica dei puntatori](../c-language/pointer-arithmetic.md) per spostare il puntatore a tutti gli elementi arbitrari nella matrice. È responsabilità dell'utente verificare che:

- si mantiene sempre una copia dell'indirizzo del puntatore originale, in modo che sia possibile eliminare la memoria quando la matrice non è più necessaria.
- non si incrementa o decrementa l'indirizzo del puntatore oltre i limiti della matrice.

Nell'esempio seguente viene illustrato come definire una matrice nell'heap in fase di esecuzione e come accedere agli elementi della matrice utilizzando l'operatore di indice o utilizzando l'aritmetica dei puntatori:

```cpp

void do_something(size_t size)
{
    // Declare an array of doubles to be allocated on the heap
    double* numbers = new double[size]{ 0 };

    // Assign a new value to the first element
    numbers[0] = 1;

    // Assign a value to each subsequent element
    // (numbers[1] is the second element in the array.)
    for (size_t i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 1.1;
    }

    // Access each element with subscript operator
    for (size_t i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    // Access each element with pointer arithmetic
    // Use a copy of the pointer for iterating
    double* p = numbers;

    for (size_t i = 0; i < size; i++)
    {
        // Dereference the pointer, then increment it
        std::cout << *p++ << " ";
    }

    // Alternate method:
    // Reset p to numbers[0]:
    p = numbers;

    // Use address of pointer to compute bounds.
    // The compiler computes size as the number
    // of elements * (bytes per element).
    while (p < (numbers + size))
    {
        // Dereference the pointer, then increment it
        std::cout << *p++ << " ";
    }

    delete[] numbers; // don't forget to do this!

}
int main()
{
    do_something(108);
}

```

## <a name="initializing-arrays"></a>Inizializzazione di matrici

È possibile inizializzare una matrice in un ciclo, un elemento alla volta o in un'unica istruzione. Il contenuto delle due matrici seguenti è identico:

```cpp
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i + 1;
    }

    int b[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
```

## <a name="passing-arrays-to-functions"></a>Passaggio di matrici a funzioni

Quando una matrice viene passata a una funzione, viene passata come puntatore al primo elemento. Questo vale sia per le matrici basate su stack sia per quelle basate su heap. Il puntatore non contiene informazioni aggiuntive sul tipo o sulle dimensioni. Questo comportamento viene definito *decadimento del puntatore*. Quando si passa una matrice a una funzione, è sempre necessario specificare il numero di elementi in un parametro separato. Questo comportamento implica anche che gli elementi della matrice non vengano copiati quando la matrice viene passata a una funzione. Per impedire che la funzione modifichi gli elementi, specificare il parametro come puntatore a elementi **const** .

Nell'esempio seguente viene illustrata una funzione che accetta una matrice e una lunghezza. Il puntatore punta alla matrice originale, non a una copia. Poiché il parametro non è **const**, la funzione può modificare gli elementi della matrice.

```cpp
void process(double p*, const size_t len)
{
    std::cout << "process:\n";
    for (size_t i = 0; i < len; ++i)
    {
        // do something with p[i]
    }
}
```

Dichiarare la matrice come const per renderla di sola lettura all'interno del blocco della funzione:

```cpp
void process(const double p*, const size_t len);
```

La stessa funzione può anche essere dichiarata in questi modi, senza alcuna modifica del comportamento. La matrice viene ancora passata come puntatore al primo elemento:

```cpp
// Unsized array
void process(const double p[] const size_t len);

// Fixed-size array. Length must still be specified explicitly.
void process(const double p[1000], const size_t len);
```

## <a name="multidimensional-arrays"></a>Matrici multidimensionali

Le matrici generate da altre matrici sono matrici multidimensionali. Queste matrici multidimensionali sono specificate posizionando più espressioni costanti tra parentesi in sequenza. Ad esempio, considerare la dichiarazione riportata di seguito:

```cpp
int i2[5][7];
```

Specifica una matrice di tipo **int**, concettualmente disposta in una matrice bidimensionale di cinque righe e sette colonne, come illustrato nella figura seguente:

![Layout concettuale di una&#45;matrice multidimensionale](../cpp/media/vc38rc1.gif "Layout concettuale di una&#45;matrice multidimensionale") <br/>
Layout concettuale di una matrice multidimensionale

Nelle dichiarazioni di matrici multidimensionali che dispongono di un elenco di inizializzatori (come descritto in [inizializzatori](../cpp/initializers.md)), l'espressione costante che specifica i limiti della prima dimensione può essere omessa. Ad esempio:

```cpp
// arrays2.cpp
// compile with: /c
const int cMarkets = 4;
// Declare a float that represents the transportation costs.
double TransportCosts[][cMarkets] = {
   { 32.19, 47.29, 31.99, 19.11 },
   { 11.29, 22.49, 33.47, 17.29 },
   { 41.97, 22.09,  9.76, 22.55 }
};
```

La dichiarazione precedente definisce una matrice costituita da tre righe e da quattro colonne. Le righe rappresentano le ditte e le colonne rappresentano i mercati di destinazione delle ditte. I valori sono i costi di trasporto dalle ditte ai mercati. La prima dimensione della matrice viene lasciata fuori, ma il compilatore la completa esaminando l'inizializzatore.

L'uso dell'operatore di riferimento indiretto (*) su un tipo di matrice n-dimensionale produce una matrice di n-1 dimensionale. Se n è 1, viene generato un valore scalare (o elemento di matrice).

Le matrici C++ sono archiviate per lunghezza di riga. L'ordine per lunghezza di riga significa che l'ultimo indice varia più velocemente.

## <a name="example"></a>Esempio

La tecnica di omettere la specifica dei limiti per la prima dimensione di una matrice multidimensionale può essere utilizzata solo nelle dichiarazioni di funzione come segue:

```cpp
// multidimensional_arrays.cpp
// compile with: /EHsc
// arguments: 3
#include <limits>   // Includes DBL_MAX
#include <iostream>

const int cMkts = 4, cFacts = 2;

// Declare a float that represents the transportation costs
double TransportCosts[][cMkts] = {
   { 32.19, 47.29, 31.99, 19.11 },
   { 11.29, 22.49, 33.47, 17.29 },
   { 41.97, 22.09,  9.76, 22.55 }
};

// Calculate size of unspecified dimension
const int cFactories = sizeof TransportCosts /
                  sizeof( double[cMkts] );

double FindMinToMkt( int Mkt, double myTransportCosts[][cMkts], int mycFacts);

using namespace std;

int main( int argc, char *argv[] ) {
   double MinCost;

   if (argv[1] == 0) {
      cout << "You must specify the number of markets." << endl;
      exit(0);
   }
   MinCost = FindMinToMkt( *argv[1] - '0', TransportCosts, cFacts);
   cout << "The minimum cost to Market " << argv[1] << " is: "
       << MinCost << "\n";
}

double FindMinToMkt(int Mkt, double myTransportCosts[][cMkts], int mycFacts) {
   double MinCost = DBL_MAX;

   for( size_t i = 0; i < cFacts; ++i )
      MinCost = (MinCost < TransportCosts[i][Mkt]) ?
         MinCost : TransportCosts[i][Mkt];

   return MinCost;
}
```

```Output
The minimum cost to Market 3 is: 17.29
```

La funzione `FindMinToMkt` viene scritta in modo che l'aggiunta di nuove ditte non richieda alcuna modifica al codice, ma solo la ricompilazione.

## <a name="initializing-arrays"></a>Inizializzazione di matrici

Se una classe dispone di un costruttore, le matrici di tale classe vengono inizializzate da un costruttore. Se vi sono meno elementi nell'elenco di inizializzatori rispetto agli elementi nella matrice, il costruttore predefinito viene utilizzato per gli elementi rimanenti. Se nessun costruttore predefinito è definito per la classe, l'elenco di inizializzatori deve essere completo, ovvero deve esserci un inizializzatore per ogni elemento della matrice.

Si consideri la classe `Point` che definisce due costruttori:

```cpp
// initializing_arrays1.cpp
class Point
{
public:
   Point()   // Default constructor.
   {
   }
   Point( int, int )   // Construct from two ints
   {
   }
};

// An array of Point objects can be declared as follows:
Point aPoint[3] = {
   Point( 3, 3 )     // Use int, int constructor.
};

int main()
{
}
```

Il primo elemento `aPoint` viene costruito usando il costruttore `Point( int, int )`; i due elementi rimanenti vengono costruiti usando il costruttore predefinito.

Le matrici di membri statiche, sia **const** che non possono essere inizializzate nelle rispettive definizioni (all'esterno della dichiarazione di classe). Ad esempio:

```cpp
// initializing_arrays2.cpp
class WindowColors
{
public:
    static const char *rgszWindowPartList[7];
};

const char *WindowColors::rgszWindowPartList[7] = {
    "Active Title Bar", "Inactive Title Bar", "Title Bar Text",
    "Menu Bar", "Menu Bar Text", "Window Background", "Frame"   };
int main()
{
}
```

## <a name="accessing-array-elements"></a>Accesso agli elementi della matrice

È possibile accedere ai singoli elementi di una matrice tramite l'operatore di indice di matrice (`[ ]`). Se una matrice unidimensionale viene utilizzata in un'espressione senza indice, il nome della matrice restituisce un puntatore al primo elemento della matrice.

```cpp
// using_arrays.cpp
int main() {
   char chArray[10];
   char *pch = chArray;   // Evaluates to a pointer to the first element.
   char   ch = chArray[0];   // Evaluates to the value of the first element.
   ch = chArray[3];   // Evaluates to the value of the fourth element.
}
```

Quando si utilizzano matrici multidimensionali, è possibile utilizzare varie combinazioni nelle espressioni.

```cpp
// using_arrays_2.cpp
// compile with: /EHsc /W1
#include <iostream>
using namespace std;
int main() {
   double multi[4][4][3];   // Declare the array.
   double (*p2multi)[3];
   double (*p1multi);

   cout << multi[3][2][2] << "\n";   // C4700 Use three subscripts.
   p2multi = multi[3];               // Make p2multi point to
                                     // fourth "plane" of multi.
   p1multi = multi[3][2];            // Make p1multi point to
                                     // fourth plane, third row
                                     // of multi.
}
```

Nel codice precedente `multi` è una matrice tridimensionale di tipo **Double**. Il puntatore `p2multi` punta a una matrice di tipo **Double** di dimensioni tre. In questo esempio la matrice viene utilizzata con uno, due e tre indici. Sebbene sia più comune specificare tutti gli indici, come nell'istruzione `cout`, è talvolta utile selezionare un sottoinsieme specifico di elementi della matrice, come illustrato nelle istruzioni che seguono `cout`.

## <a name="overloading-subscript-operator"></a>Overload dell'operatore pedice

Analogamente ad altri operatori, l'operatore di indice (`[]`) può essere ridefinito dall'utente. Il comportamento predefinito dell'operatore di indice, se non sottoposto a overload, è di combinare il nome della matrice e l'indice utilizzando il seguente metodo:

`*((array_name) + (subscript))`

Come in qualsiasi aggiunta che include i tipi puntatore, il ridimensionamento viene eseguito automaticamente per regolare le dimensioni del tipo. Pertanto, il valore risultante non è *n* byte dall'origine di array-name; è invece l'elemento *n*della matrice. Per ulteriori informazioni su questa conversione, vedere [operatori additivi](additive-operators-plus-and.md).

Analogamente, per le matrici multidimensionali, l'indirizzo viene derivato utilizzando il seguente metodo:

`((array_name) + (subscript1 * max2 * max3 * ... * maxn) + (subscript2 * max3 * ... * maxn) + ... + subscriptn))`

## <a name="arrays-in-expressions"></a>Matrici nelle espressioni

Quando un identificatore di un tipo di matrice viene visualizzato in un'espressione diversa da `sizeof`, address-of (`&`) o l'inizializzazione di un riferimento, viene convertito in un puntatore al primo elemento della matrice. Ad esempio:

```cpp
char szError1[] = "Error: Disk drive not ready.";
char *psz = szError1;
```

Il puntatore `psz` fa riferimento al primo elemento della matrice `szError1`. Le matrici, a differenza dei puntatori, non sono valori l-value modificabili. Pertanto, la seguente assegnazione non è valida:

```cpp
szError1 = psz;
```

## <a name="see-also"></a>Vedere anche

[STD:: Array](../standard-library/array-class-stl.md)
