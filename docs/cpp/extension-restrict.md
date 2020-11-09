---
title: '`__restrict`'
description: Descrive la `__restrict` parola chiave Microsoft Visual C++.
ms.date: 11/6/2020
f1_keywords:
- __restrict_cpp
- __restrict
- _restrict
helpviewer_keywords:
- __restrict keyword [C++]
ms.openlocfilehash: f23574f49712928e0095f29a3b88b0c05b185eab
ms.sourcegitcommit: 3f0c1dcdcce25865d1a1022bcc5b9eec79f69025
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2020
ms.locfileid: "94381571"
---
# `__restrict`

Come il modificatore **`__declspec` ( [`restrict`](../cpp/restrict.md) )** , la **`__restrict`** parola chiave (due caratteri di sottolineatura iniziali ' _') indica che un simbolo non è associato a un alias nell'ambito corrente. La **`__restrict`** parola chiave differisce dal `__declspec (restrict)` modificatore nei modi seguenti:

- La **`__restrict`** parola chiave è valida solo per le variabili ed `__declspec (restrict)` è valida solo per le dichiarazioni e le definizioni di funzione.

- **`__restrict`** è simile a [`restrict`](../c-language/type-qualifiers.md#restrict) per C a partire da C99, ma **`__restrict`** può essere usato nei programmi C++ e C.

- Quando **`__restrict`** si usa, il compilatore non propaga la proprietà No-alias di una variabile. Ovvero, se si assegna una **`__restrict`** variabile a una variabile non **`__restrict`** variabile, il compilatore consentirà comunque l'aliasing della variabile non __restrict. Questo comportamento è diverso dal comportamento della parola chiave del linguaggio C C99 **`restrict`** .

In genere, se si desidera influire sul comportamento di un'intera funzione, utilizzare **`__declspec (restrict)`** invece della parola chiave.

Per compatibilità con le versioni precedenti, **`_restrict`** è un sinonimo di, a **`__restrict`** meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

In Visual Studio 2015 e versioni successive, **`__restrict`** può essere usato nei riferimenti C++.

> [!NOTE]
> Se usato in una variabile che ha anche la [`volatile`](../cpp/volatile-cpp.md) parola chiave, **`volatile`** avrà la precedenza.

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
