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
ms.openlocfilehash: cb340554bc20516175400c4d14a5d0dba934a313
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188961"
---
# <a name="__restrict"></a>__restrict

Come il modificatore **__declspec ( [Restrict](../cpp/restrict.md) )** , la parola chiave **__restrict** indica che un simbolo non è associato a un alias nell'ambito corrente. La parola chiave **__restrict** differisce dal modificatore di `__declspec ( restrict )` nei modi seguenti:

- La parola chiave **__restrict** è valida solo per le variabili e `__declspec ( restrict )` è valida solo per le dichiarazioni di funzione e le definizioni.

- **__restrict** è simile a **limitarsi** dalla specifica C99, ma è possibile usare **__restrict** nei C++ programmi o C.

- Quando si usa **__restrict** , il compilatore non propaga la proprietà No-alias di una variabile. Ovvero, se si assegna una variabile di **__restrict** a una variabile non **__restrict** , il compilatore consentirà comunque l'aliasing della variabile non __restrict. Questo comportamento è diverso da quello della parola chiave **Restrict** della specifica C99.

In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.

Per compatibilità con le versioni precedenti, **_restrict** è un sinonimo di **__restrict** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

In Visual Studio 2015 e versioni successive è possibile usare **__restrict** nei C++ riferimenti.

> [!NOTE]
>  Se usato in una variabile che include anche la parola chiave [volatile](../cpp/volatile-cpp.md) , **volatile** avrà la precedenza.

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
