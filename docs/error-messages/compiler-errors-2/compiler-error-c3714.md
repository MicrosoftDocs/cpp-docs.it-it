---
title: Errore del compilatore C3714
ms.date: 11/04/2016
f1_keywords:
- C3714
helpviewer_keywords:
- C3714
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
ms.openlocfilehash: 9bfdf8b26ab599ef1a28483af7ebc28f0dbc1912
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328341"
---
# <a name="compiler-error-c3714"></a>Errore del compilatore C3714

'method': un metodo del gestore eventi deve avere la stessa convenzione di chiamata dell'origine 'method'

È definito un metodo del gestore eventi che non usa la stessa convenzione di chiamata del metodo di eventi di origine. Per correggere questo errore, fornire il metodo del gestore eventi le stesse convenzioni di chiamata a quelli del metodo dell'origine eventi. Ad esempio, nel codice seguente, effettuare le convenzioni di chiamata di `handler1` e `event1` corrispondenti ([cdecl](../../cpp/cdecl.md) oppure [stdcall](../../cpp/stdcall.md) o da altri). Rimozione di parole chiave di convenzione di chiamata da entrambe le dichiarazioni verranno inoltre risolvere il problema e può provocare `event1` e `handler1` sul valore predefinito per il [thiscall](../../cpp/thiscall.md) convenzione di chiamata. Visualizzare [convenzioni di chiamata](../../cpp/calling-conventions.md) per altre informazioni.

L'esempio seguente genera l'errore C3714:

```
// C3714.cpp
// compile with: /c
// processor: x86
[event_source(native)]
class CEventSrc {
public:
   __event void __cdecl event1();
   // try the following line instead
   // __event void __stdcall event1();
};

[event_receiver(native)]
class CEventRec {
public:
   void __stdcall handler1() {}

   void HookEvents(CEventSrc* pSrc) {
      __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3714
   }

   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1); // C3714
   }
};
```