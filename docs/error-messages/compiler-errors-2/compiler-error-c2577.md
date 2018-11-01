---
title: Errore del compilatore C2577
ms.date: 11/04/2016
f1_keywords:
- C2577
helpviewer_keywords:
- C2577
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
ms.openlocfilehash: 4406aa90b26bc517308132ae9cccd003d44a9aad
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50530546"
---
# <a name="compiler-error-c2577"></a>Errore del compilatore C2577

'member': finalizzatore/un distruttore non può avere un tipo restituito

Un distruttore o un finalizzatore non può restituire un valore di `void` o qualsiasi altro tipo. Rimuovere il `return` istruzione dalla definizione del distruttore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2577.

```
// C2577.cpp
// compile with: /c
class A {
public:
   A() {}
   ~A(){
      return 0;   // C2577
   }
};
```