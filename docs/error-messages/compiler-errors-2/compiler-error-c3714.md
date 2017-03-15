---
title: "Errore del compilatore C3714 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3714"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3714"
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3714
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'metodo': un metodo per la gestione degli eventi deve avere la stessa convenzione di chiamata dell'origine 'metodo'  
  
 È stato definito un metodo per la gestione degli eventi che non utilizza la stessa convenzione di chiamata del metodo dell'origine eventi.  Per correggere questo errore, assegnare al metodo per la gestione degli eventi la stessa convenzione di chiamata del metodo dell'origine eventi.  Nel codice che segue, ad esempio, fare corrispondere le convenzioni di chiamata di `handler1` ed `event1` \([\_\_cdecl](../../cpp/cdecl.md), [\_\_stdcall](../../cpp/stdcall.md) o altre\).  La rimozione delle parole chiave delle convenzioni di chiamata da entrambe le dichiarazioni risolve il problema e fa in modo che `event1` e `handler1` utilizzino l'impostazione predefinita, ovvero la convenzione di chiamata [thiscall](../../cpp/thiscall.md).  Per ulteriori informazioni , vedere [Convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
 Il seguente codice di esempio genera l'errore C3714:  
  
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