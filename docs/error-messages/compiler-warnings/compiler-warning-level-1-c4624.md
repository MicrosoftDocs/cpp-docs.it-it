---
title: Compilatore avviso (livello 1) C4624 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4624
dev_langs:
- C++
helpviewer_keywords:
- C4624
ms.assetid: 14f61769-d92e-482b-9515-debd87b30a66
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dbc482fe693da366a3ba3ce7e53d5e8bbf23618c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118390"
---
# <a name="compiler-warning-level-1-c4624"></a>Avviso del compilatore (livello 1) C4624

'derived class': il distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe di base è inaccessibile o è stato eliminato

Un distruttore non è accessibile o è stato eliminato in una classe di base e quindi non è stato generato per una classe derivata. Qualsiasi tentativo di creare un oggetto di questo tipo nello stack causerà un errore del compilatore.

L'esempio seguente genera l'errore C4624 e mostra come risolverlo:

```
// C4624.cpp
// compile with: /W1 /c
class B {
// Uncomment the following line to fix.
// public:
   ~B();
};

class D : public B {};   // C4624 B's destructor not public
```