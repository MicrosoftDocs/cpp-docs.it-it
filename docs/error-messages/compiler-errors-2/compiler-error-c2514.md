---
title: Errore del compilatore C2514
ms.date: 11/04/2016
f1_keywords:
- C2514
helpviewer_keywords:
- C2514
ms.assetid: 4b7085e5-6714-4261-80b7-bc72e64ab3e8
ms.openlocfilehash: aef9df0718d013378f88c1a34d08d1b1e05e214c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62243771"
---
# <a name="compiler-error-c2514"></a>Errore del compilatore C2514

'class': classe non ha costruttori

La classe, struttura o unione non è nessun costruttore con un elenco di parametri che corrisponde ai parametri utilizzati per crearne un'istanza.

Una classe deve essere dichiarata completamente prima che è possibile creare istanze.

L'esempio seguente genera l'errore C2514:

```
// C2514.cpp
// compile with: /c
class f;

class g {
public:
    g (int x);
};

class fmaker {
   f *func1() {
      return new f(2);   // C2514
   }

   g *func2() {
      return new g(2);   // OK
   }
};
```