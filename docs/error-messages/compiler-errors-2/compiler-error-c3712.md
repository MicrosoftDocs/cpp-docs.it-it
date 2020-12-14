---
description: 'Altre informazioni su: errore del compilatore C3712'
title: Errore del compilatore C3712
ms.date: 11/04/2016
f1_keywords:
- C3712
helpviewer_keywords:
- C3712
ms.assetid: 65b1fcaf-be89-4c55-9e40-25ec03457253
ms.openlocfilehash: 530666d72ff72abef1286d594922dc877907b4e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241664"
---
# <a name="compiler-error-c3712"></a>Errore del compilatore C3712

' Method ': un metodo del gestore eventi deve restituire lo stesso tipo dell'origine ' Method '

È stato definito un metodo del gestore eventi che non ha restituito lo stesso tipo del metodo dell'evento di origine. Per correggere l'errore, assegnare al metodo del gestore dell'evento lo stesso tipo restituito del metodo dell'evento di origine.

L'esempio seguente genera l'C3712:

```cpp
// C3712.cpp
// compile with: /c
[event_source(native)]
class CEventSrc {
public:
   __event void event1();
};

[event_receiver(native)]
class CEventRec {
public:
   int handler1() { return 0; }
   // try the following line instead
   // void handler1() {}

   void HookEvents(CEventSrc* pSrc) {
      __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3712
   }
   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3712
   }
};
```
