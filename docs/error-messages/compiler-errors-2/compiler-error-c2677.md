---
description: 'Altre informazioni su: errore del compilatore C2677'
title: Errore del compilatore C2677
ms.date: 11/04/2016
f1_keywords:
- C2677
helpviewer_keywords:
- C2677
ms.assetid: 76bc0b65-f52a-45a6-b6d6-0555f89da9a8
ms.openlocfilehash: 6a7570fa972897658c9ffa81052148e9ce7cd6cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97267807"
---
# <a name="compiler-error-c2677"></a>Errore del compilatore C2677

' operator ' binario: non è stato trovato alcun operatore globale che accetta il tipo ' type ' (oppure non esiste alcuna conversione accettabile)

Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.

L'esempio seguente genera l'C2677:

```cpp
// C2677.cpp
class C {
public:
   C(){}
} c;

class D {
public:
   D(){}
   operator int(){return 0;}
} d;

int main() {
   int i = 1 >> c;   // C2677
   int j = 1 >> d;   // OK operator int() defined
}
```
