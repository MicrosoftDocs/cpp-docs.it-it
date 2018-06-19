---
title: Motivo per cui i numeri a virgola mobile con perdita di precisione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- DBL_EPSILON constant
- FLT_EPSILON constant
- floating-point numbers, precision
ms.assetid: 1acb1add-ac06-4134-a2fd-aff13d8c4c15
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eb673f087d98f6c7acdd1e98b5649cc84a48d277
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376137"
---
# <a name="why-floating-point-numbers-may-lose-precision"></a>Causa della possibile perdita di precisione dei numeri a virgola mobile
I valori decimali a virgola mobile in genere non sono una rappresentazione binaria esatta. Questo è un effetto collaterale del modo in cui la CPU rappresenta i dati a virgola mobile. Per questo motivo, si verifichi una perdita di precisione e alcune operazioni a virgola mobile possono produrre risultati imprevisti.  
  
 Questo comportamento è il risultato di una delle operazioni seguenti:  
  
-   La rappresentazione binaria del numero decimale potrebbe non essere esatto.  
  
-   È un tipo non corrispondente tra i numeri utilizzati (ad esempio, combinazione float e double).  
  
 Per risolvere il problema, oppure la maggior parte dei programmatori, che verificare che il valore è maggiore o minore di cosa è necessario ottenere e utilizzare una libreria Binary Coded Decimal (BCD) che manterrà la precisione.  
  
 Rappresentazione binaria di valori a virgola mobile influisce sulla precisione e accuratezza dei calcoli a virgola mobile. Microsoft Visual C++ utilizza [formato a virgola mobile IEEE](../../build/reference/ieee-floating-point-representation.md).  
  
## <a name="example"></a>Esempio  
  
```  
// Floating-point_number_precision.c  
// Compile options needed: none. Value of c is printed with a decimal   
// point precision of 10 and 6 (printf rounded value by default) to   
// show the difference  
#include <stdio.h>  
  
#define EPSILON 0.0001   // Define your own tolerance  
#define FLOAT_EQ(x,v) (((v - EPSILON) < x) && (x <( v + EPSILON)))  
  
int main() {  
   float a, b, c;  
  
   a = 1.345f;  
   b = 1.123f;  
   c = a + b;  
   // if (FLOAT_EQ(c, 2.468)) // Remove comment for correct result  
   if (c == 2.468)            // Comment this line for correct result  
      printf_s("They are equal.\n");  
   else  
      printf_s("They are not equal! The value of c is %13.10f "  
                "or %f",c,c);  
}  
```  
  
```Output  
They are not equal! The value of c is  2.4679999352 or 2.468000  
```  
  
## <a name="comments"></a>Commenti  
 Per EPSILON, è possibile utilizzare le costanti FLT_EPSILON, definita per float come 1.192092896e-07F, o DBL_EPSILON, definita per la doppia come 2, 2204460492503131e-016. È necessario includere float. h per queste costanti. Queste costanti sono definite come positivo più piccolo maggiore numero x, tale che x + 1.0 non è uguale a 1.0. Poiché si tratta di un numero molto piccolo, è consigliabile utilizzare tolleranza definita dall'utente per i calcoli che interessano un numero molto elevato.  
  
## <a name="see-also"></a>Vedere anche  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)