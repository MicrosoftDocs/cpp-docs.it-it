---
title: Matrici (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- declaring arrays [C++], about declaring arrays
- multidimensional arrays [C++]
- arrays [C++]
ms.assetid: 3f5986aa-485c-4ba4-9502-67e2ef924238
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60c7baaaf20158c29c34aea364e70c0d040a42e3
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943548"
---
# <a name="arrays-c"></a>Matrici (C++)
Una matrice è una raccolta di oggetti simili. Il caso più semplice di una matrice è un vettore che può essere dichiarato dalla seguente sequenza:  
  
```  
  
decl-specifier identifier [ constant-expression ]  
decl-specifier identifier []  
decl-specifier identifer [][ constant-expression] . . .  
decl-specifier identifier [ constant-expression ]  
[ constant-expression ] . . .  
```  
  
 1. Identificatore di dichiarazione:  
  
-   Identificatore della classe di archiviazione facoltativo.  
  
-   Facoltativo **const** e/o **volatile** identificatori.  
  
-   Nome del tipo degli elementi della matrice.  
  
 2. Dichiaratore:  
  
-   Identificatore.  
  
-   Un'espressione costante di tipo integrale racchiusa tra parentesi quadre **[]**. Se vengono dichiarate più dimensioni utilizzando altre parentesi, l'espressione costante può essere omessa sul primo set di parentesi quadre.  
  
-   Parentesi aggiuntive facoltative che includono espressioni costanti.  
  
 3. Inizializzatore facoltativo.  Visualizzare [inizializzatori](../cpp/initializers.md).  
  
 Il numero di elementi nella matrice è dato dall'espressione costante. Il primo elemento nella matrice è l'elemento 0 e l'ultimo elemento è la (*n*-1) elemento, dove *n* è il numero di elementi della matrice può contenere. Il *espressione costante* deve essere di tipo integrale e deve essere maggiore di 0. Una matrice con dimensione zero è valida solo quando la matrice è l'ultimo campo in un **struct** oppure **union** e quando sono abilitate le estensioni Microsoft (/Ze).  
  
 Nell'esempio seguente viene illustrato come definire una matrice in fase di esecuzione:  
  
```cpp 
// arrays.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main() {  
   using namespace std;  
   int size = 3, i = 0;  
  
   int* myarr = new int[size];  
  
   for (i = 0 ; i < size ; i++)  
      myarr[i] = 10;  
  
   for (i = 0 ; i < size ; i++)  
      printf_s("myarr[%d] = %d\n", i, myarr[i]);  
  
   delete [] myarr;  
}  
```  
  
 Le matrici sono tipi derivati e possono pertanto essere generate da un altro tipo derivato o fondamentale tranne le funzioni, riferimenti, e **void**.  
  
 Le matrici generate da altre matrici sono matrici multidimensionali. Queste matrici multidimensionali sono specificate posizionando più espressioni costanti tra parentesi in sequenza. Ad esempio, considerare la dichiarazione riportata di seguito:  
  
```cpp 
int i2[5][7];  
```  
  
 Specifica una matrice di tipo **int**, disposta concettualmente in una matrice bidimensionale di cinque righe e sette colonne, come illustrato nella figura seguente:  
  
 ![Layout concettuale di un più&#45;matrice dimensionale](../cpp/media/vc38rc1.gif "vc38RC1")  
Layout concettuale di matrice multidimensionale  
  
 Nelle dichiarazioni di matrici a più dimensioni con un elenco di inizializzatori (come descritto in [inizializzatori](../cpp/initializers.md)), l'espressione costante che specifica i limiti per la prima dimensione può essere omesso. Ad esempio:  
  
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
  
 Argomenti contenuti in questa sezione:  
  
-   [Uso delle matrici](../cpp/using-arrays-cpp.md)  
  
-   [Matrici nelle espressioni](../cpp/arrays-in-expressions.md)  
  
-   [Interpretazione dell'operatore di indice](../cpp/interpretation-of-subscript-operator.md)  
  
-   [Riferimento indiretto sui tipi di matrice](../cpp/indirection-on-array-types.md)  
  
-   [Ordine delle matrici C++](../cpp/ordering-of-cpp-arrays.md)  
  
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
  
   for( int i = 0; i < cFacts; ++i )  
      MinCost = (MinCost < TransportCosts[i][Mkt]) ?  
         MinCost : TransportCosts[i][Mkt];  
  
   return MinCost;  
}  
```  
  
```Output  
The minimum cost to Market 3 is: 17.29  
```  
  
## <a name="comments"></a>Commenti  
 La funzione `FindMinToMkt` viene scritta in modo che l'aggiunta di nuove ditte non richieda alcuna modifica al codice, ma solo la ricompilazione.  
  
## <a name="see-also"></a>Vedere anche  
 