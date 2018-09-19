---
title: Errore del compilatore C2663 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2663
dev_langs:
- C++
helpviewer_keywords:
- C2663
ms.assetid: 1e93e368-fd52-42bf-9908-9b6df467c8c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fed35dcce056eb3d2a660c154e94b8058563dba7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083691"
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