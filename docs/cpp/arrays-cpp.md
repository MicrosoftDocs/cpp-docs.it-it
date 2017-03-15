---
title: "Matrici (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++]"
  - "dichiarazione di matrici, informazioni sulle dichiarazione di matrici"
  - "multidimensionali (matrici)"
ms.assetid: 3f5986aa-485c-4ba4-9502-67e2ef924238
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Matrici (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una matrice è una raccolta di oggetti simili.  Il caso più semplice di una matrice è un vettore che può essere dichiarato dalla seguente sequenza:  
  
```  
  
      decl-specifier identifier [ constant-expression ]  
decl-specifier identifier []  
decl-specifier identifer [][ constant-expression] . . .  
decl-specifier identifier [ constant-expression ]  
[ constant-expression ] . . .  
```  
  
 1.  Identificatore di dichiarazione:  
  
-   Identificatore della classe di archiviazione facoltativo.  
  
-   Identificatori **const** e\/o `volatile` opzionali.  
  
-   Nome del tipo degli elementi della matrice.  
  
 2.  Dichiaratore:  
  
-   Identificatore.  
  
-   Espressione costante di tipo integrale racchiusa tra parentesi quadre, **\[\].** Se vengono dichiarate più dimensioni utilizzando altre parentesi, l'espressione costante può essere omessa sul primo set di parentesi.  
  
-   Parentesi aggiuntive facoltative che includono espressioni costanti.  
  
 3.  Inizializzatore facoltativo.  Vedere [Inizializzatori](../cpp/initializers.md).  
  
 Il numero di elementi nella matrice è dato dall'espressione costante.  Il primo elemento della matrice è l'elemento zero e l'ultimo elemento è l'elemento \(*n*\-1\), dove *n* è il numero di elementi che la matrice può contenere.  *constant\-expression* deve essere di tipo integrale e deve essere maggiore di 0.  Una matrice di dimensioni zero è valida solo quando è l'ultimo campo in `struct` o in **union** e quando le estensioni Microsoft \(\/Ze\) sono abilitate.  
  
 Nell'esempio seguente viene illustrato come definire una matrice in fase di esecuzione:  
  
```  
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
  
 Le matrici sono tipi derivati e possono pertanto essere generate da qualsiasi altro tipo derivato o fondamentale tranne che dalle funzioni, dai riferimenti e da `void`.  
  
 Le matrici generate da altre matrici sono matrici multidimensionali.  Queste matrici multidimensionali sono specificate posizionando più espressioni costanti tra parentesi in sequenza.  Ad esempio, considerare la dichiarazione riportata di seguito:  
  
```  
int i2[5][7];  
```  
  
 Specifica una matrice di tipo `int`, disposta concettualmente in una matrice bidimensionale di cinque righe e sette colonne, come illustrato nella seguente immagine:  
  
 ![Layout concettuale di una matrice multidimensionale](../cpp/media/vc38rc1.png "vc38RC1")  
Layout concettuale di matrice multidimensionale  
  
 Nelle dichiarazioni delle matrici a più dimensioni con un elenco di inizializzatori \(come descritto in [Inizializzatori](../cpp/initializers.md)\), l'espressione costante che specifica i limiti della prima dimensione può essere omessa.  Ad esempio:  
  
```  
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
  
 La dichiarazione precedente definisce una matrice costituita da tre righe e da quattro colonne.  Le righe rappresentano le ditte e le colonne rappresentano i mercati di destinazione delle ditte.  I valori sono i costi di trasporto dalle ditte ai mercati.  La prima dimensione della matrice viene lasciata fuori, ma il compilatore la completa esaminando l'inizializzatore.  
  
 Argomenti contenuti in questa sezione:  
  
-   [Utilizzo delle matrici](../cpp/using-arrays-cpp.md)  
  
-   [Matrici nelle espressioni](../cpp/arrays-in-expressions.md)  
  
-   [Interpretazione dell'operatore di indice](../cpp/interpretation-of-subscript-operator.md)  
  
-   [Riferimento indiretto sui tipi di matrice](../cpp/indirection-on-array-types.md)  
  
-   [Ordine delle matrici C\+\+](../cpp/ordering-of-cpp-arrays.md)  
  
## Esempio  
 La tecnica di omettere la specifica dei limiti per la prima dimensione di una matrice multidimensionale può essere utilizzata solo nelle dichiarazioni di funzione come segue:  
  
```  
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
  
  **Il costo minimo per il mercato 3 è: 17,29**   
## Commenti  
 La funzione `FindMinToMkt` viene scritta in modo che l'aggiunta di nuove ditte non richieda alcuna modifica al codice, ma solo la ricompilazione.  
  
## Vedere anche  
 [C\+\+ Abstract Declarators](http://msdn.microsoft.com/it-it/e7e18c18-0cad-4450-942b-d27e1d4dd088)