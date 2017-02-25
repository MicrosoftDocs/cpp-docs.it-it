---
title: "Errore del compilatore C3358 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3358"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3358"
ms.assetid: 180b93df-e78f-441a-91fb-1594c681f7f0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3358
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'symbol': simbolo non trovato  
  
 Il simbolo richiesto non è stato trovato.  
  
 L'esempio seguente genera l'errore C3358:  
  
```  
// C3358.cpp #define __ATLEVENT_H__ 1   // remove this line to resolve the error #define _ATL_ATTRIBUTES 1 #include "atlbase.h" #include "atlcom.h" [event_receiver(com)] struct A   // C3358 { void func(); }; int main() { }  
```