---
title: "Struttura LINGER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LINGER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LINGER (struttura)"
ms.assetid: 1fb1c5bf-a64e-4a6c-89d6-1734e4fdbb1b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura LINGER
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `LINGER` viene utilizzata per modificare le opzioni **SO\_DONTLINGER** e **SO\_LINGER** di `CAsyncSocket::GetSockOpt`.  
  
## Sintassi  
  
```  
  
      struct linger {  
   u_short l_onoff;            // option on/off  
   u_short l_linger;           // linger time  
};  
```  
  
## Note  
 Impostare l'opzione **SO\_DONTLINGER** impedisce il blocco su una funzione membro **Chiudi** in attesa dei dati non inviati da inviare.  Impostare questa opzione equivale a impostare **SO\_LINGER** con **l\_onoff** impostato su 0.  
  
## Requisiti  
 **Intestazione:** winsock2.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CAsyncSocket::GetSockOpt](../Topic/CAsyncSocket::GetSockOpt.md)   
 [CAsyncSocket::SetSockOpt](../Topic/CAsyncSocket::SetSockOpt.md)