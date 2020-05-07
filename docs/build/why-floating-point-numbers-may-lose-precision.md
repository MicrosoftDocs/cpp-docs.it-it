---
title: Causa della possibile perdita di precisione dei numeri a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- DBL_EPSILON constant
- FLT_EPSILON constant
- floating-point numbers, precision
ms.assetid: 1acb1add-ac06-4134-a2fd-aff13d8c4c15
ms.openlocfilehash: 373ce9fa2c2c96fac349940076873a4a637a9dbe
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75298714"
---
# <a name="why-floating-point-numbers-may-lose-precision"></a>Causa della possibile perdita di precisione dei numeri a virgola mobile

I valori decimali a virgola mobile non dispongono in genere di una rappresentazione binaria esatta. Questo è un effetto collaterale del modo in cui la CPU rappresenta i dati a virgola mobile. Per questo motivo, è possibile che si verifichi una perdita di precisione e che alcune operazioni a virgola mobile possano produrre risultati imprevisti.

Questo comportamento è il risultato di uno degli elementi seguenti:

- La rappresentazione binaria del numero decimale potrebbe non essere esatta.

- Mancata corrispondenza del tipo tra i numeri usati, ad esempio la combinazione di float e Double.

Per risolvere il problema, la maggior parte dei programmatori assicurano che il valore sia maggiore o minore di quello necessario oppure che ottengano e usino una libreria BCD (Binary Coded Decimal) che manterrà la precisione.

La rappresentazione binaria dei valori a virgola mobile influiscono sulla precisione e sull'accuratezza dei calcoli a virgola mobile. Microsoft Visual C++ usa il [formato a virgola mobile IEEE](ieee-floating-point-representation.md).

## <a name="example"></a>Esempio

```c
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

Per EPSILON, è possibile usare le costanti FLT_EPSILON, che è definito per float come 1.192092896 e-07F, o DBL_EPSILON, che è definito per Double come 2.2204460492503131 e-016. Per queste costanti è necessario includere float. h. Queste costanti sono definite come il numero positivo più piccolo x, in modo che x + 1.0 non sia uguale a 1,0. Poiché si tratta di un numero molto ridotto, è consigliabile utilizzare la tolleranza definita dall'utente per i calcoli che coinvolgono numeri molto grandi.

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](optimizing-your-code.md)
