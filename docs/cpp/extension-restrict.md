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
ms.openlocfilehash: 6318e6d78f6c4c4bb6827a79d26bca028dfe3f3f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233743"
---
# <a name="__restrict"></a>__restrict

Come il modificatore **__declspec ( [Restrict](../cpp/restrict.md) )** , la **`__restrict`** parola chiave indica che un simbolo non è associato a un alias nell'ambito corrente. La **`__restrict`** parola chiave differisce dal `__declspec ( restrict )` modificatore nei modi seguenti:

- La **`__restrict`** parola chiave è valida solo per le variabili ed `__declspec ( restrict )` è valida solo per le dichiarazioni e le definizioni di funzione.

- **`__restrict`** è simile a **`restrict`** dalla specifica C99, ma **`__restrict`** può essere usato nei programmi C++ o C.

- Quando **`__restrict`** si usa, il compilatore non propaga la proprietà No-alias di una variabile. Ovvero, se si assegna una **`__restrict`** variabile a una variabile non **`__restrict`** variabile, il compilatore consentirà comunque l'aliasing della variabile non __restrict. Questo comportamento è diverso da quello della **`restrict`** parola chiave della specifica C99.

In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.

Per compatibilità con le versioni precedenti, **_restrict** è un sinonimo di, a **`__restrict`** meno che non sia specificata l'opzione del compilatore [/za \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

In Visual Studio 2015 e versioni successive, **`__restrict`** può essere usato nei riferimenti C++.

> [!NOTE]
> Se usato in una variabile che ha anche la parola chiave [volatile](../cpp/volatile-cpp.md) , **`volatile`** avrà la precedenza.

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
