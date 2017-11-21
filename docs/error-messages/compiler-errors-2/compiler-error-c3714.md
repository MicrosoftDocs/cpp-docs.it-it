---
title: Errore del compilatore C3714 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3714
dev_langs: C++
helpviewer_keywords: C3714
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7d58e06d99975fd4ccff9ea4bace755ff1d758cb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3714"></a>Errore del compilatore C3714
'method': un metodo del gestore eventi deve avere la stessa convenzione di chiamata dell'origine 'metodo'  
  
 È stato definito un metodo del gestore eventi che non utilizza la stessa convenzione di chiamata del metodo di evento di origine. Per correggere l'errore, fornire il metodo del gestore eventi le stesse convenzioni di chiamata a quelli del metodo dell'origine eventi. Ad esempio, effettuare le convenzioni di chiamata di codice riportato di seguito, `handler1` e `event1` corrispondono ([cdecl](../../cpp/cdecl.md) o [stdcall](../../cpp/stdcall.md) o di altri utenti). Rimozione di parole chiave delle convenzioni di chiamata da entrambe le dichiarazioni verrà inoltre risolvere il problema e causare `event1` e `handler1` per impostazione predefinita il [thiscall](../../cpp/thiscall.md) convenzione di chiamata. Vedere [convenzioni di chiamata](../../cpp/calling-conventions.md) per ulteriori informazioni.  
  
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