---
description: 'Altre informazioni su: errore del compilatore C2087'
title: Errore del compilatore C2087
ms.date: 11/04/2016
f1_keywords:
- C2087
helpviewer_keywords:
- C2087
ms.assetid: 89761e83-415a-4468-a4c6-b6dedfd1dd6a
ms.openlocfilehash: 98e54a8df8f06230f1adca1cb6d2f23f80acff8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252038"
---
# <a name="compiler-error-c2087"></a>Errore del compilatore C2087

' Identifier ': indice mancante

Per la definizione di una matrice con più indici manca un valore di indice per una dimensione maggiore di 1.

L'esempio seguente genera l'C2087:

```cpp
// C2087.cpp
int main() {
   char a[10][];   // C2087
}
```

Possibile soluzione:

```cpp
// C2087b.cpp
int main() {
   char b[4][5];
}
```
