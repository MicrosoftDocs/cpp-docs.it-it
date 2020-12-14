---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4624'
title: Avviso del compilatore (livello 1) C4624
ms.date: 11/04/2016
f1_keywords:
- C4624
helpviewer_keywords:
- C4624
ms.assetid: 14f61769-d92e-482b-9515-debd87b30a66
ms.openlocfilehash: d5869742b548c4a54efe08e686571123fc570517
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281457"
---
# <a name="compiler-warning-level-1-c4624"></a>Avviso del compilatore (livello 1) C4624

'derived class': il distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe di base è inaccessibile o è stato eliminato

Un distruttore non è accessibile o è stato eliminato in una classe di base e quindi non è stato generato per una classe derivata. Qualsiasi tentativo di creare un oggetto di questo tipo nello stack causerà un errore del compilatore.

L'esempio seguente genera l'errore C4624 e mostra come risolverlo:

```cpp
// C4624.cpp
// compile with: /W1 /c
class B {
// Uncomment the following line to fix.
// public:
   ~B();
};

class D : public B {};   // C4624 B's destructor not public
```
