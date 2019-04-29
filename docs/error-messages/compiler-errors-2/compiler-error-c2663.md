---
title: Errore del compilatore C2663
ms.date: 11/04/2016
f1_keywords:
- C2663
helpviewer_keywords:
- C2663
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
ms.openlocfilehash: d74326e49edd980896276e2c6e67526d8d769cb7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62360294"
---
# <a name="compiler-error-c2663"></a>Errore del compilatore C2663

'function': numero overload non presentano conversioni valide per puntatore 'this'

Il compilatore non è stato possibile convertire `this` a una delle versioni di overload della funzione membro.

Questo errore può dipendere da richiamare non -`const` funzione membro su un `const` oggetto.  Possibili risoluzioni:

1. Rimuovere il `const` dalla dichiarazione dell'oggetto.

1. Aggiungere `const` su uno degli overload di funzione del membro.

L'esempio seguente genera l'errore C2663:

```
// C2663.cpp
struct C {
   void f() volatile {}
   void f() {}
};

struct D {
   void f() volatile;
   void f() const {}
};

const C *pcc;
const D *pcd;

int main() {
   pcc->f();    // C2663
   pcd->f();    // OK
}
```