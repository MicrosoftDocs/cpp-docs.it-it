---
title: "NotifyHandler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "NotifyHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NotifyHandler function"
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# NotifyHandler
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il nome della funzione identificata dal terzo parametro di una macro `NOTIFY_HANDLER` nella mappa messaggi.  
  
## Sintassi  
  
```  
  
      LRESULT   
      NotifyHandler  
      (  
   int idCtrl,  
   LPNMHDR pnmh,  
   BOOL& bHandled   
);  
```  
  
#### Parametri  
 `idCtrl`  
 L'identificatore del controllo che invia il messaggio.  
  
 *pnmh*  
 Indirizzo di una struttura [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) contenente il codice di notifica e informazioni aggiuntive.  Per alcuni messaggi di notifica, punti di questo parametro a una maggiore struttura con la struttura **NMHDR** come primo membro.  
  
 `bHandled`  
 La mappa messaggi imposta `bHandled` a **TRUE** prima *NotifyHandler* venga chiamato.  Se *NotifyHandler* completamente non gestisce il messaggio, deve impostare `bHandled` a **FALSE** per indicare un'ulteriore elaborazione delle necessità del messaggio.  
  
## Valore restituito  
 Il risultato di elaborazione dei messaggi.  0 se ha esito positivo.  
  
## Note  
 Per un esempio di utilizzo di questo gestore messaggi in una mappa messaggi, vedere [NOTIFY\_HANDLER](../Topic/NOTIFY_HANDLER.md).  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)   
 [Message Maps](../atl/message-maps-atl.md)   
 [WM\_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)