---
title: Errore del compilatore C2362
ms.date: 11/04/2016
f1_keywords:
- C2362
helpviewer_keywords:
- C2362
ms.assetid: 7aafecbc-b3cf-45a6-9ec3-a17e3f222511
ms.openlocfilehash: 17656b2a48a3680a9269d3ca300fd4188eda6b84
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661110"
---
# <a name="compiler-error-c2362"></a>Errore del compilatore C2362

inizializzazione di 'identifier' ignorata da 'goto label'

Durante la compilazione con [/Za](../../build/reference/za-ze-disable-language-extensions.md), il passaggio all'etichetta impedisce l'identificatore di inizializzazione.

Non può iniziare oltre una dichiarazione con un inizializzatore a meno che non la dichiarazione è racchiuso in un blocco che non viene immesso o la variabile è già stata inizializzata.

L'esempio seguente genera l'errore C2326:

```
// C2362.cpp
// compile with: /Za
int main() {
   goto label1;
   int i = 1;      // C2362, initialization skipped
label1:;
}
```

Possibile soluzione:

```
// C2362b.cpp
// compile with: /Za
int main() {
   goto label1;
   {
      int j = 1;   // OK, this block is never entered
   }
label1:;
}
```