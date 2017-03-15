---
title: "MessageHandler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MessageHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MessageHandler function"
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# MessageHandler
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**MessageHandler** è il nome della funzione identificata dal secondo parametro di una macro `MESSAGE_HANDLER` nella mappa messaggi.  
  
## Sintassi  
  
```  
  
      LRESULT   
      MessageHandler  
      (  
   UINT uMsg,  
   WPARAM wParam,  
   LPARAM lParam,  
   BOOL& bHandled  
);  
```  
  
#### Parametri  
 `uMsg`  
 Specifica il messaggio.  
  
 `wParam`  
 Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 Ulteriori informazioni specifiche del messaggio.  
  
 `bHandled`  
 Imposta `bHandled` della mappa messaggi a **TRUE** prima `MessageHandler` viene chiamato.  Se `MessageHandler` completamente non gestisce il messaggio, deve impostare `bHandled` a **FALSE** per indicare un'ulteriore elaborazione delle necessità del messaggio.  
  
## Valore restituito  
 Il risultato di elaborazione dei messaggi.  0 se ha esito positivo.  
  
## Note  
 Per un esempio di utilizzo di questo gestore messaggi in una mappa messaggi, vedere [MESSAGE\_HANDLER](../Topic/MESSAGE_HANDLER.md).  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)   
 [Message Maps](../atl/message-maps-atl.md)   
 [WM\_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)