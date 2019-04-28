---
title: Causa della possibile perdita di precisione dei numeri a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- DBL_EPSILON constant
- FLT_EPSILON constant
- floating-point numbers, precision
ms.assetid: 1acb1add-ac06-4134-a2fd-aff13d8c4c15
ms.openlocfilehash: 387b2f4a7156e42e59bd70c5a6f747943fb54ca7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62313584"
---
# <a name="why-floating-point-numbers-may-lose-precision"></a>Causa della possibile perdita di precisione dei numeri a virgola mobile

Valori a virgola mobile decimali in genere non è una rappresentazione binaria esatta. Si tratta di un effetto collaterale del modo in cui la CPU rappresenta dati a virgola mobile. Per questo motivo, che si verifichi una perdita di precisione e alcune operazioni a virgola mobile possono produrre risultati imprevisti.

Questo comportamento è il risultato di una delle operazioni seguenti:

- La rappresentazione binaria del numero decimale potrebbe non essere esatta.

- È presente un tipo non corrispondente tra i numeri utilizzati (ad esempio, combinazione float e double).

Per risolvere il problema, molti programmatori che assicurano che il valore è maggiore o minore di ciò che serve, oppure ottenere e usare una libreria Binary Coded Decimal (BCD) che manterrà la precisione.

Rappresentazione binaria di valori a virgola mobile influisce sulla precisione e accuratezza dei calcoli a virgola mobile. Microsoft Visual C++ vengono usati [formato a virgola mobile IEEE](ieee-floating-point-representation.md).

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

Per EPSILON, è possibile usare le costanti FLT_EPSILON, che viene definito per float come 1.192092896e-07F o DBL_EPSILON, che viene definito per la doppia come 2.2204460492503131e-016. È necessario includere float. h per queste costanti. Queste costanti sono definite come positivo più piccolo maggiore numero x, tale che x + 1.0 non è uguale a 1.0. Poiché si tratta di un numero molto ridotto, è consigliabile utilizzare tolleranza definita dall'utente per i calcoli che coinvolgono un numero molto elevato.

## <a name="see-also"></a>Vedere anche

[Ottimizzazione del codice](optimizing-your-code.md)
