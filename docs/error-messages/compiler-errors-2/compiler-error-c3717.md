---
description: 'Altre informazioni su: errore del compilatore C3717'
title: Errore del compilatore C3717
ms.date: 11/04/2016
f1_keywords:
- C3717
helpviewer_keywords:
- C3717
ms.assetid: ae4fceb1-2583-4577-b2f1-40971a017055
ms.openlocfilehash: fecd417af1eceb40ef8b8e48fda40b3ec5e5b36a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189431"
---
# <a name="compiler-error-c3717"></a>Errore del compilatore C3717

' Method ': Impossibile definire un metodo che genera eventi

È stato dichiarato un metodo di evento che include un'implementazione di. Una dichiarazione di metodo [__event](../../cpp/event.md) non può avere una definizione. Per correggere l'errore, assicurarsi che nessuna dichiarazione di metodo di evento includa definizioni. Nel codice riportato di seguito, ad esempio, rimuovere il corpo della funzione dalla `event1` dichiarazione come indicato dai commenti.

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
