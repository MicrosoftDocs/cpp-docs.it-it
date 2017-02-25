---
title: "Struttura SOCKADDR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SOCKADDR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SOCKADDR (struttura)"
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Struttura SOCKADDR
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `SOCKADDR` viene utilizzata per l'archiviazione di un indirizzo IP per un computer che fa parte di una comunicazione Windows Sockets.  
  
## Sintassi  
  
```  
  
      struct sockaddr {  
   unsigned short sa_family;  
   char sa_data[14];  
};  
```  
  
#### Parametri  
 *sa\_family*  
 Famiglia degli indirizzi di una socket.  
  
 *sa\_data*  
 Dimensione massima di tutte le strutture differenti di un indirizzo di una socket.  
  
## Note  
 Il kit dello sviluppatore Microsoft TCP\/IP Sockets supporta solo i domini dell'indirizzo Internet.  Per riempire effettivamente i valori di ciascuna parte di un indirizzo, utilizzare la struttura dati `SOCKADDR_IN`, che è specifica per questo formato di indirizzo.  `SOCKADDR` e le strutture dati `SOCKADDR_IN` sono la stessa dimensione.  Eseguire il cast semplice per passare tra i due tipi di struttura.  
  
## Requisiti  
 **Intestazione:** winsock2.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura SOCKADDR\_IN](../../mfc/reference/sockaddr-in-structure.md)   
 [CAsyncSocket::Create](../Topic/CAsyncSocket::Create.md)   
 [CSocket::Create](../Topic/CSocket::Create.md)