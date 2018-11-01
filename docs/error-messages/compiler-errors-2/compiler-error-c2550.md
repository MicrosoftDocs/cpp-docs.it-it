---
title: Errore del compilatore C2550
ms.date: 11/04/2016
f1_keywords:
- C2550
helpviewer_keywords:
- C2550
ms.assetid: 3293f53e-ee66-4035-920d-34e115c3a24c
ms.openlocfilehash: 2df6ae70be31bc519e6cfd826646073becf1ad61
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462673"
---
# <a name="compiler-error-c2550"></a>Errore del compilatore C2550

'identifier': gli elenchi di inizializzatori di costruttore sono consentiti solo nella definizione del costruttore

Un elenco di inizializzatori di classe di base viene usato nella definizione di una funzione che non è un costruttore.

L'esempio seguente genera l'errore C2550:

```
// C2550.cpp
// compile with: /c
class C {
public:
   C();
};

class D : public C {
public:
   D();
   void func();
};

void D::func() : C() {}  // C2550
D::D() : C() {}   // OK
```