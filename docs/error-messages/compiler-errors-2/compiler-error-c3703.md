---
title: Errore del compilatore C3703
ms.date: 11/04/2016
f1_keywords:
- C3703
helpviewer_keywords:
- C3703
ms.assetid: 7e3677d9-f2be-4c26-998f-423564e9023c
ms.openlocfilehash: 0b34760bc3f5b23148ce84cf590685efad2008df
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324636"
---
# <a name="compiler-error-c3703"></a>Errore del compilatore C3703

'gestore dell'evento': un metodo del gestore eventi deve avere la stessa classe di archiviazione di origine 'event'

Un' [evento](../../cpp/event-handling.md) dispone di una classe di archiviazione diverso rispetto a cui è associato il gestore dell'evento. Ad esempio, questo errore si verifica se il gestore dell'evento è una funzione membro statica e l'evento non è statico. Per correggere questo errore, assegnare l'evento e il gestore dell'evento la stessa classe di archiviazione.

L'esempio seguente genera l'errore C3703:

```
// C3703.cpp
// C3703 expected
#include <stdio.h>

[event_source(type=native)]
class CEventSrc {
public:
   __event static void MyEvent();
};

[event_receiver(type=native)]
class CEventHandler {
public:
   // delete the following line to resolve
   void MyHandler() {}

   // try the following line instead
   // static void MyHandler() {}

   void HookIt(CEventSrc* pSource) {
      __hook(CEventSrc::MyEvent, pSource, &CEventHandler::MyHandler);
   }

   void UnhookIt(CEventSrc* pSource) {
      __unhook(CEventSrc::MyEvent, pSource, &CEventHandler::MyHandler);
   }
};

int main() {
   CEventSrc src;
   CEventHandler hnd;

   hnd.HookIt(&src);
   __raise src.MyEvent();
   hnd.UnhookIt(&src);
}
```