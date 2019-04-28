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
ms.openlocfilehash: 76cdf9424e6eab33a3a92b3f98d9c2b0b04ff667
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62183752"
---
# <a name="restrict"></a>__restrict

Ad esempio il **declspec ( [limitare](../cpp/restrict.md) )** modificatore, la **Restrict** parola chiave indica che un simbolo non è associato un alias nell'ambito corrente. Il **Restrict** parola chiave è diverso dal `__declspec ( restrict )` modificatore nei modi seguenti:

- Il **Restrict** parola chiave è valida solo per variabili, e `__declspec ( restrict )` è valido solo nelle dichiarazioni di funzione e definizioni.

- **Restrict** è simile a **limitare** nella specifica C99, ma **Restrict** può essere usato in C++ o i programmi C.

- Quando **Restrict** viene utilizzato, il compilatore non trasferirà la proprietà noalias di una variabile. Vale a dire, se si assegna un **Restrict** variabile non -**Restrict** variabile, il compilatore consentirà comunque il non- Restrict variabile con un alias. Questo comportamento è diverso dal comportamento dei **limitare** parola chiave della specifica C99.

In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.

Per garantire la compatibilità con le versioni precedenti, **_restrict** è un sinonimo **Restrict** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

In Visual Studio 2015 e versioni successive **Restrict** può essere usato in C++ riferimenti.

> [!NOTE]
>  Quando viene usato in una variabile che ha il [volatile](../cpp/volatile-cpp.md) parola chiave **volatile** avrà la precedenza.

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