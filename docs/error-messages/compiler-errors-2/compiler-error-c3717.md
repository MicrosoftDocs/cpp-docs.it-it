---
title: Errore del compilatore C3717 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3717
dev_langs: C++
helpviewer_keywords: C3717
ms.assetid: ae4fceb1-2583-4577-b2f1-40971a017055
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f7256762ef4cf9c3850bd95bb09d23394c2e64f3
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3717"></a>Errore del compilatore C3717
'method': Impossibile definire un metodo che genera eventi  
  
 È stato dichiarato un metodo di evento che include un'implementazione. Un [event](../../cpp/event.md) dichiarazione di metodo non può avere una definizione. Per correggere l'errore, verificare che nessun dichiarazioni di metodo di eventi contengono le definizioni. Ad esempio, il codice riportato di seguito, il corpo della funzione da rimuovere il `event1` dichiarazione come indicato dai commenti.  
  
 L'esempio seguente genera l'errore C3717:  
  
```  
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