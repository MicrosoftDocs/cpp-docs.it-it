---
description: 'Altre informazioni su: errore del compilatore C3714'
title: Errore del compilatore C3714
ms.date: 11/04/2016
f1_keywords:
- C3714
helpviewer_keywords:
- C3714
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
ms.openlocfilehash: a01544558a156b746c16e731584e30bab7a77825
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241625"
---
# <a name="compiler-error-c3714"></a>Errore del compilatore C3714

' Method ': un metodo del gestore eventi deve avere la stessa convenzione di chiamata dell'origine ' Method '

È stato definito un metodo del gestore eventi che non usa la stessa convenzione di chiamata del metodo dell'evento di origine. Per correggere l'errore, assegnare al metodo del gestore dell'evento le stesse convenzioni di chiamata di quelle del metodo dell'evento di origine. Nel codice riportato di seguito, ad esempio, le convenzioni di chiamata di `handler1` e `event1` corrispondono ([__cdecl](../../cpp/cdecl.md) o [__stdcall](../../cpp/stdcall.md) o altri). La rimozione delle parole chiave della convenzione di chiamata da entrambe le dichiarazioni consente inoltre di risolvere il problema, causando `event1` e `handler1` per impostazione predefinita sulla convenzione di chiamata [thiscall](../../cpp/thiscall.md) . Per ulteriori informazioni, vedere [convenzioni di chiamata](../../cpp/calling-conventions.md) .

L'esempio seguente genera l'C3714:

```cpp
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
