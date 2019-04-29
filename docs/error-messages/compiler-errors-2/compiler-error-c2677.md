---
title: Errore del compilatore C2677
ms.date: 11/04/2016
f1_keywords:
- C2677
helpviewer_keywords:
- C2677
ms.assetid: 76bc0b65-f52a-45a6-b6d6-0555f89da9a8
ms.openlocfilehash: 1be3701c2befbacc11d6a3dea4b99547375286d5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395417"
---
# <a name="compiler-error-c2677"></a>Errore del compilatore C2677

'operator' binario: è stato trovato alcun operatore globale che accetti il tipo 'type' (o nessuna conversione accettabili)

Per usare l'operatore, è necessario eseguirne l'overload per il tipo specificato o definire una conversione in un tipo per cui l'operatore è definito.

L'esempio seguente genera l'errore C2677:

```
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