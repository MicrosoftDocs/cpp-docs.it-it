---
title: Errore del compilatore C3714 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3714
dev_langs:
- C++
helpviewer_keywords:
- C3714
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7102378acc2fe12335f1f2b3579f93cf02161b16
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109652"
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