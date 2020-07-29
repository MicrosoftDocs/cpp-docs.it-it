---
title: Errore del compilatore C3491
ms.date: 11/04/2016
f1_keywords:
- C3491
helpviewer_keywords:
- C3491
ms.assetid: 7f0e71b2-46a0-4d25-bd09-6158a280f509
ms.openlocfilehash: f6f20d9af424fdd4254fc15e0580d62b9dfba144
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87184475"
---
# <a name="compiler-error-c3491"></a>Errore del compilatore C3491

'var': impossibile modificare un'acquisizione per valore in un'espressione lambda non modificabile

Un'espressione lambda non modificabile non può modificare il valore di una variabile che viene acquisita per valore.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Dichiarare l'espressione lambda con la **`mutable`** parola chiave oppure

- Passare la variabile mediante riferimento all'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3491 perché il corpo di un'espressione lambda non modificabile modifica la variabile di acquisizione `m`:

```cpp
// C3491a.cpp

int main()
{
   int m = 55;
   [m](int n) { m = n; }(99); // C3491
}
```

## <a name="example"></a>Esempio

L'esempio seguente risolve C3491 dichiarando l'espressione lambda con la **`mutable`** parola chiave:

```cpp
// C3491b.cpp

int main()
{
   int m = 55;
   [m](int n) mutable { m = n; }(99);
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
