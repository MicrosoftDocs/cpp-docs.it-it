---
title: Errore del compilatore C3717
ms.date: 11/04/2016
f1_keywords:
- C3717
helpviewer_keywords:
- C3717
ms.assetid: ae4fceb1-2583-4577-b2f1-40971a017055
ms.openlocfilehash: cd9a97f1b0d9c9eecfa6a42f735f21a42fd846e9
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74753237"
---
# <a name="compiler-error-c3717"></a>Errore del compilatore C3717

' Method ': Impossibile definire un metodo che genera eventi

È stato dichiarato un metodo di evento che include un'implementazione di. Una dichiarazione di metodo [__event](../../cpp/event.md) non può avere una definizione. Per correggere l'errore, assicurarsi che nessuna dichiarazione di metodo di evento includa definizioni. Nel codice riportato di seguito, ad esempio, rimuovere il corpo della funzione dalla dichiarazione `event1` come indicato dai commenti.

L'esempio seguente genera l'C3717:

```cpp
// C3717.cpp
[event_source(native)]
class CEventSrc {
public:
   __event void event1() {   // C3717
   }

   // remove definition for event1 and substitute following declaration
   // __event void event1();
};

[event_receiver(native)]
class CEventRec {
public:
   void handler1() {
   }

   void HookEvents(CEventSrc* pSrc) {
      __hook(CEventSrc::event1, pSrc, CEventRec::handler1);
   }

   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(CEventSrc::event1, pSrc, CEventRec::handler1);
   }
};

int main() {
}
```
