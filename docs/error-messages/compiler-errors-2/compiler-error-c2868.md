---
title: Errore del compilatore C2868
ms.date: 11/04/2016
f1_keywords:
- C2868
helpviewer_keywords:
- C2868
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
ms.openlocfilehash: 4cb259ed0f43831226fb7e1a1ccf7b28bcef7819
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614773"
---
# <a name="compiler-error-c2868"></a>Errore del compilatore C2868

> «*identificatore*': sintassi non valida per la dichiarazione using; previsto nome completo

Oggetto [dichiarazioneusing](../../cpp/using-declaration.md) richiede un *nome completo*, un operatore di ambito (`::`) separati sequenza dei nomi dello spazio dei nomi, classe o di enumerazione che termina con il nome dell'identificatore. Un operatore di risoluzione ambito singolo consente di introdurre un nome dello spazio dei nomi globali.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2868 e anche illustrato l'utilizzo corretto:

```cpp
// C2868.cpp
class X {
public:
   int i;
};

class Y : X {
public:
   using X::i;   // OK
};

int main() {
   using X;   // C2868
}
```