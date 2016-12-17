---
title: "CommandHandler | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CommandHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CommandHandler function"
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
caps.latest.revision: 13
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CommandHandler
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CommandHandler` è la funzione identificata dal terzo parametro di una macro `COMMAND_HANDLER` nella mappa messaggi.  
  
## Sintassi  
  
```  
  
      LRESULT   
      CommandHandler  
      (  
   WORD wNotifyCode,  
   WORD wID,  
   HWND hWndCtl,  
   BOOL& bHandled   
);  
```  
  
#### Parametri  
 `wNotifyCode`  
 Il codice della notifica.  
  
 *wID*  
 Identificatore della voce di menu, controllo, o dei tasti di scelta rapida.  
  
 *hWndCtl*  
 Handle a un controllo finestra.  
  
 `bHandled`  
 Imposta `bHandled` della mappa messaggi a **TRUE** prima `CommandHandler` viene chiamato.  Se `CommandHandler` completamente non gestisce il messaggio, deve impostare `bHandled` a **FALSE** per indicare un'ulteriore elaborazione delle necessità del messaggio.  
  
## Valore restituito  
 Il risultato di elaborazione dei messaggi.  0 se ha esito positivo.  
  
## Note  
 Per un esempio di utilizzo di questo gestore messaggi in una mappa messaggi, vedere [COMMAND\_HANDLER](../Topic/COMMAND_HANDLER.md).  
  
## Vedere anche  
 [Implementing a Window](../atl/implementing-a-window.md)   
 [Message Maps](../atl/message-maps-atl.md)   
 [WM\_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)