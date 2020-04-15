---
title: __restrict
ms.date: 10/10/2018
f1_keywords:
- __restrict_cpp
- __restrict
- _restrict
helpviewer_keywords:
- __restrict keyword [C++]
ms.assetid: 2d151b4d-f930-49df-bd16-d8757ec7fa83
ms.openlocfilehash: 27ac76251456d9a0bf5908ad6d1fc2bee7534e9f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360808"
---
# <a name="__restrict"></a>__restrict

Analogamente al modificatore **__declspec ( [restrict](../cpp/restrict.md) ),** la parola chiave **__restrict** indica che un simbolo non ha alias nell'ambito corrente. La **__restrict** parola chiave __restrict `__declspec ( restrict )` è diversa dal modificatore nei modi seguenti:

- La parola chiave **__restrict** è `__declspec ( restrict )` valida solo per le variabili ed è valida solo per le definizioni e le dichiarazioni di funzione.

- **__restrict** è simile a **limitare** dalla specifica C99, ma **__restrict** può essere utilizzato nei programmi C o C.

- Quando viene utilizzato **__restrict,** il compilatore non propagherà la proprietà no-alias di una variabile. Ovvero, se si assegna una variabile **__restrict** a una variabile**non __restrict,** il compilatore consentirà comunque la variabile non __restrict da alias. Questo comportamento è diverso dal comportamento della parola chiave **restrict** dalla specifica C99.

In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.

Per compatibilità con le versioni precedenti, **_restrict** è un sinonimo di **__restrict,** a meno che non venga specificata l'opzione del compilatore [ \(/-A Disable( )](../build/reference/za-ze-disable-language-extensions.md) .

In Visual Studio 2015 e versioni successive, **__restrict** può essere usato nei riferimenti di C.

> [!NOTE]
> Se utilizzato su una variabile che ha anche la parola chiave [volatile,](../cpp/volatile-cpp.md) **volatile** avrà la precedenza.

## <a name="example"></a>Esempio

```cpp
// __restrict_keyword.c
// compile with: /LD
// In the following function, declare a and b as disjoint arrays
// but do not have same assurance for c and d.
void sum2(int n, int * __restrict a, int * __restrict b,
          int * c, int * d) {
   int i;
   for (i = 0; i < n; i++) {
      a[i] = b[i] + c[i];
      c[i] = b[i] + d[i];
    }
}

// By marking union members as __restrict, tell compiler that
// only z.x or z.y will be accessed in any given scope.
union z {
   int * __restrict x;
   double * __restrict y;
};
```

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
