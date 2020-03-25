---
title: Errore del compilatore C2362
ms.date: 06/03/2019
f1_keywords:
- C2362
helpviewer_keywords:
- C2362
ms.assetid: 7aafecbc-b3cf-45a6-9ec3-a17e3f222511
ms.openlocfilehash: 330932f53627f8ba09e9e089cec7809eeeb6ab1c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80206076"
---
# <a name="compiler-error-c2362"></a>Errore del compilatore C2362

> l'inizializzazione di '*Identifier*' è stata ignorata da' GOTO *Label*'

Quando viene compilato usando [/za](../../build/reference/za-ze-disable-language-extensions.md), un salto all'etichetta impedisce l'inizializzazione dell'identificatore.

È possibile saltare una dichiarazione solo con un inizializzatore se la dichiarazione è racchiusa in un blocco che non è stato immesso o se la variabile è già stata inizializzata.

L'esempio seguente genera l'C2362:

```cpp
// C2362.cpp
// compile with: /Za
int main() {
   goto label1;
   int i = 1;      // C2362, initialization skipped
label1:;
}
```

Possibile soluzione:

```cpp
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
