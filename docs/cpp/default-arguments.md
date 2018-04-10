---
title: Argomenti predefiniti | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- arguments [C++], function
- function declarators
- functions [C++], default arguments
- declaring functions [C++], declarators
- default arguments
- arguments [C++], default
- defaults [C++], arguments
ms.assetid: d32cf516-05cb-4d4d-b169-92f5649fdfa2
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 88c341abab34595da58d435be28f50e86cb47403
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="default-arguments"></a>Argomenti predefiniti
In molti casi, le funzioni presentano argomenti che vengono usati talmente raramente che un valore predefinito basterebbe. Per risolvere questo problema, la funzionalità argomento predefinito consente di specificare solo quegli argomenti di una funzione che sono significativi in una chiamata specificata. Per illustrare questo concetto, si consideri l'esempio presentato [overload di funzioni](../cpp/function-overloading.md).  
  
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
  
 L'implementazione del `print` funzione viene modificata leggermente per riflettere il fatto che solo una funzione di questo tipo esiste per tipo **doppie**:  
  
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
  
-   Gli argomenti predefiniti vengono usati solo nelle chiamate di funzione in cui gli argomenti finali vengono omessi: devono essere gli ultimi argomenti. Pertanto, il codice seguente non è consentito:  
  
    ```  
    int print( double dvalue = 0.0, int prec );  
    ```  
  
-   Un argomento predefinito non può essere ridefinito nelle dichiarazioni successive anche se la ridefinizione è identica all'originale. Il codice seguente, quindi, provoca un errore:  
  
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
  
-   Gli argomenti predefiniti possono essere forniti per puntatori a funzioni. Ad esempio:  
  
    ```  
    int (*pShowIntVal)( int i = 0 );  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 