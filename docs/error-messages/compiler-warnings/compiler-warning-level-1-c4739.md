---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4739'
title: Avviso del compilatore (livello 1) C4739
ms.date: 11/04/2016
f1_keywords:
- C4739
helpviewer_keywords:
- C4739
ms.assetid: 600873b3-7c85-4cd4-944e-cd8e01bfcbb0
ms.openlocfilehash: 03473c8bb5434e8ee05778f40c2cf773de1b64da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228547"
---
# <a name="compiler-warning-level-1-c4739"></a>Avviso del compilatore (livello 1) C4739

il riferimento alla variabile 'var' supera lo spazio di archiviazione

È stato assegnato un valore a una variabile, ma il valore è maggiore della dimensione della variabile. La scrittura in memoria supererà la posizione di memoria della variabile ed è possibile che si verifichi una perdita di dati.

Per risolvere il problema, assegnare un valore solo a una variabile con una dimensione tale da poter contenere il valore.

L'esempio seguente genera l'errore C4739:

```cpp
// C4739.cpp
// compile with: /RTCs /Zi /W1 /c
char *pc;
int main() {
   char c;
   *(int *)&c = 1;   // C4739

   // OK
   *(char *)&c = 1;
}
```
