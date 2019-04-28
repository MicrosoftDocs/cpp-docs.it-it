---
title: Errore del compilatore C2971
ms.date: 11/04/2016
f1_keywords:
- C2971
helpviewer_keywords:
- C2971
ms.assetid: fdb5467b-9a41-41ef-ac20-2e9428d5a4fc
ms.openlocfilehash: 09f3578bff5806fc32a3b5599dcfa8caa3696974
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62256323"
---
# <a name="compiler-error-c2971"></a>Errore del compilatore C2971

'class': parametro di modello 'param': 'arg': una variabile locale non può essere utilizzata come un argomento non di tipo

È possibile usare il nome o l'indirizzo di una variabile locale come argomento di modello.

L'esempio seguente genera l'errore C2971:

```
// C2971.cpp
template <int *pi>
class Y {};

int global_var = 0;

int main() {
   int local_var = 0;
   Y<&local_var> aY;   // C2971
   // try the following line instead
   // Y<&global_var> aY;
}
```