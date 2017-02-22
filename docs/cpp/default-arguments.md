---
title: "Argomenti predefiniti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "argomenti [C++], predefiniti"
  - "argomenti [C++], funzione"
  - "dichiarazione di funzioni, dichiaratori"
  - "argomenti predefiniti"
  - "impostazioni predefinite [C++], argomenti"
  - "dichiaratori di funzione"
  - "funzioni [C++], argomenti predefiniti"
ms.assetid: d32cf516-05cb-4d4d-b169-92f5649fdfa2
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Argomenti predefiniti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In molti casi, le funzioni presentano argomenti che vengono usati talmente raramente che un valore predefinito basterebbe.  Per risolvere questo problema, la funzionalità argomento predefinito consente di specificare solo quegli argomenti di una funzione che sono significativi in una chiamata specificata.  Per illustrare questo concetto, si consideri l'esempio illustrato in [Overload di funzione](../cpp/function-overloading.md).  
  
```  
// Prototype three print functions.  
int print( char *s );                  // Print a string.  
int print( double dvalue );            // Print a double.  
int print( double dvalue, int prec );  // Print a double with a  
//  given precision.  
```  
  
 In molte applicazioni, un'impostazione predefinita ragionevole può essere fornita per `prec`, eliminando la necessità di due funzioni:  
  
```  
// Prototype two print functions.  
int print( char *s );                    // Print a string.  
int print( double dvalue, int prec=2 );  // Print a double with a  
//  given precision.  
```  
  
 L'implementazione della funzione `print` viene modificata leggermente per riflettere il fatto che solo una funzione di quel genere esiste per tipo **double**:  
  
```  
// default_arguments.cpp  
// compile with: /EHsc /c  
  
// Print a double in specified precision.  
//  Positive numbers for precision indicate how many digits  
//  precision after the decimal point to show. Negative  
//  numbers for precision indicate where to round the number  
//  to the left of the decimal point.  
  
#include <iostream>  
#include <math.h>  
using namespace std;  
  
int print( double dvalue, int prec ) {  
   // Use table-lookup for rounding/truncation.  
   static const double rgPow10[] = {   
      10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1, 10E0,  
         10E1,  10E2,  10E3,  10E4, 10E5,  10E6  
   };  
   const int iPowZero = 6;  
   // If precision out of range, just print the number.  
   if( prec >= -6 && prec <= 7 )  
      // Scale, truncate, then rescale.  
      dvalue = floor( dvalue / rgPow10[iPowZero - prec] ) *  
      rgPow10[iPowZero - prec];  
   cout << dvalue << endl;  
   return cout.good();  
}  
```  
  
 Per richiamare la nuova funzione `print`, usare il codice come quello seguente:  
  
```  
print( d );    // Precision of 2 supplied by default argument.  
print( d, 0 ); // Override default argument to achieve other  
//  results.  
```  
  
 Si notino questi punti quando si usano argomenti predefiniti:  
  
-   Gli argomenti predefiniti vengono usati solo nelle chiamate di funzione in cui gli argomenti finali vengono omessi: devono essere gli ultimi argomenti.  Pertanto, il codice seguente non è consentito:  
  
    ```  
    int print( double dvalue = 0.0, int prec );  
    ```  
  
-   Un argomento predefinito non può essere ridefinito nelle dichiarazioni successive anche se la ridefinizione è identica all'originale.  Il codice seguente, quindi, provoca un errore:  
  
    ```  
    // Prototype for print function.  
    int print( double dvalue, int prec = 2 );  
  
    ...  
  
    // Definition for print function.  
    int print( double dvalue, int prec = 2 )  
    {  
    ...  
    }  
    ```  
  
     Il problema con questo codice è che la dichiarazione di funzione nella definizione ridefinisce l'argomento predefinito per `prec`.  
  
-   Gli argomenti predefiniti aggiuntivi possono essere aggiunti dalle dichiarazioni successive.  
  
-   Gli argomenti predefiniti possono essere forniti per puntatori a funzioni.  Ad esempio:  
  
    ```  
    int (*pShowIntVal)( int i = 0 );  
    ```  
  
## Vedere anche  
 [Dichiaratori astratti C\+\+](http://msdn.microsoft.com/it-it/e7e18c18-0cad-4450-942b-d27e1d4dd088)