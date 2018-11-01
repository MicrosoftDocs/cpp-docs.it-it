---
title: Errore del compilatore C2762
ms.date: 11/04/2016
f1_keywords:
- C2762
helpviewer_keywords:
- C2762
ms.assetid: 8b81a801-fd48-40a1-8bee-0748795b12e4
ms.openlocfilehash: 0cb05d0e111319ff135bdb48d51af6eb4a2f2353
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50574070"
---
# <a name="compiler-error-c2762"></a>Errore del compilatore C2762

'class': espressione non valida come argomento di modello per 'argument'

Quando si usa [/Za](../../build/reference/za-ze-disable-language-extensions.md), il compilatore non converte un valore integrale a un puntatore.

L'esempio seguente genera l'errore C2762:

```
// C2762.cpp
// compile with: /Za
template<typename T, T *pT>
class X2 {};

void f2() {
   X2<int, 0> x21;   // C2762
   // try the following line instead
   // X2<int, static_cast<int *>(0)> x22;
}
```