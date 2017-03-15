---
title: "Struttura SOCKADDR_IN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SOCKADDR_IN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SOCKADDR_IN (struttura)"
ms.assetid: e8cd7c34-78bd-4e28-a990-eb3ca070b7a6
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Struttura SOCKADDR_IN
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella famiglia degli indirizzi Internet, la struttura `SOCKADDR_IN` viene utilizzata da Windows Sockets per specificare un indirizzo endpoint locale o remoto a cui connettere un socket.  
  
## Sintassi  
  
```  
  
      struct sockaddr_in{  
   short sin_family;  
   unsigned short sin_port;  
   struct in_addr sin_addr;  
   char sin_zero[8];  
};  
```  
  
#### Parametri  
 *sin\_family*  
 Famiglia di indirizzi \(deve essere **AF\_INET**\).  
  
 *sin\_port*  
 Porta IP.  
  
 *sin\_addr*  
 Indirizzo IP.  
  
 *sin\_zero*  
 Riempimento per impostare la struttura alla stessa dimensione di `SOCKADDR`.  
  
## Note  
 Si tratta del form della struttura `SOCKADDR` specifica alla famiglia degli indirizzi Internet e può essere sottoposto al cast in `SOCKADDR`.  
  
 Il componente indirizzo IP della struttura è di tipo **IN\_ADDR**.  La struttura **IN\_ADDR** è definita nel file di intestazione WINSOCK.H di Windows Sockets come segue:  
  
 `struct   in_addr {`  
  
 `union   {`  
  
 `struct{`  
  
 `unsigned  char   s_b1,`  
  
 `s_b2,`  
  
 `s_b3,`  
  
 `s_b4;`  
  
 `}  S_un_b;`  
  
 `struct  {`  
  
 `unsigned  short  s_w1,`  
  
 `s_w2;`  
  
 `}  S_un_w;`  
  
 `unsigned long  S_addr;`  
  
 `} S_un;`  
  
 `};`  
  
## Requisiti  
 **Intestazione:** winsock2.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura SOCKADDR](../../mfc/reference/sockaddr-structure.md)