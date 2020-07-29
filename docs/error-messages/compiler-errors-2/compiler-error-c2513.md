---
title: Errore del compilatore C2513
ms.date: 11/04/2016
f1_keywords:
- C2513
helpviewer_keywords:
- C2513
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
ms.openlocfilehash: 96f2ccc29eed5c1fa4e29f69d18ae6503417f211
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212722"
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

In alternativa, è possibile eliminare **`typedef`** per definire una variabile con un elenco di inizializzatori di aggregazione, ma questa operazione non è consigliata perché creerà una variabile con lo stesso nome del tipo e nasconderà il nome del tipo.
