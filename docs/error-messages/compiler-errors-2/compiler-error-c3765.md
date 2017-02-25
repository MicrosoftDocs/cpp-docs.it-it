---
title: "Errore del compilatore C3765 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3765"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3765"
ms.assetid: feadee7a-fcfb-402c-af2f-0e656f814a13
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3765
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'evento': impossibile definire un evento in una classe\/struttura 'tipo' contrassegnata come event\_receiver  
  
 Se una classe è contrassegnata con l'attributo [event\_receiver](../../windows/event-receiver.md), non può contenere una dichiarazione [\_\_event](../../cpp/event.md).  
  
 Il seguente codice di esempio genera l'errore C3765:  
  
```  
// C3765.cpp  
[event_receiver(native)]  
struct ER2 {  
   __event void f();   // C3765  
   __event void b(int);   // C3765  
};  
```