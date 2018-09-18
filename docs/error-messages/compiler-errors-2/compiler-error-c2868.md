---
title: Errore del compilatore C2868 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2868
dev_langs:
- C++
helpviewer_keywords:
- C2868
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2de22b34f9dc564ef89d7776af86718af70d51eb
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46037866"
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