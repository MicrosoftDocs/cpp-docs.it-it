---
description: 'Altre informazioni su: errore del compilatore C3285'
title: Errore del compilatore C3285
ms.date: 11/04/2016
f1_keywords:
- C3285
helpviewer_keywords:
- C3285
ms.assetid: 04e8f210-d67e-4810-b153-e1efe2986c8f
ms.openlocfilehash: d5b57b878ed47118e1857558b9d633bb5ef7286c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339332"
---
# <a name="compiler-error-c3285"></a>Errore del compilatore C3285

istruzione 'for each' non utilizzabile con variabili di tipo 'type'

L'istruzione `for each` ripete un gruppo di istruzioni incorporate per ciascun elemento di una matrice o di una raccolta di oggetti.

Per altre informazioni, vedere [for each, in](../../dotnet/for-each-in.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3285.

```cpp
// C3285.cpp
// compile with: /clr
int main() {
   for each (int i in 0) {}   // C3285

   array<int> ^p = { 1, 2, 3 };
   for each (int j in p) {}   // OK
}
```
