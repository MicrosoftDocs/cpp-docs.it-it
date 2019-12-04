---
title: Errore del compilatore C2513
ms.date: 11/04/2016
f1_keywords:
- C2513
helpviewer_keywords:
- C2513
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
ms.openlocfilehash: 093a5856fdcfa6311fcef93214672b035c91b4fc
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74746526"
---
# <a name="compiler-error-c2513"></a>Errore del compilatore C2513

' type ': nessuna variabile dichiarata prima di ' ='

L'identificatore di tipo viene visualizzato nella dichiarazione senza identificatore di variabile.

L'esempio seguente genera l'C2513:

```cpp
// C2513.cpp
int main() {
   int = 9;   // C2513
   int i = 9;   // OK
}
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: l'inizializzazione di un typedef non è più consentita. L'inizializzazione di un typedef non è consentita dallo standard e ora genera un errore del compilatore.

```cpp
// C2513b.cpp
// compile with: /c
typedef struct S {
   int m_i;
} S = { 1 };   // C2513
// try the following line instead
// } S;
```

Un'alternativa consiste nell'eliminare `typedef` per definire una variabile con un elenco di inizializzatori di aggregazione, ma questa operazione non è consigliata perché creerà una variabile con lo stesso nome del tipo e nasconderà il nome del tipo.
