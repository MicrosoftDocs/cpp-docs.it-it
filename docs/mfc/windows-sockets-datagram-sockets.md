---
title: "Windows Sockets: socket di datagramma | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "socket di datagrammi [C++]"
  - "socket [C++], flusso di dati bidirezionale"
  - "socket [C++], datagramma"
  - "Windows Sockets [C++], flusso di dati bidirezionale"
  - "Windows Sockets [C++], datagramma"
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: socket di datagramma
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono descritti i socket di datagramma, uno dei due tipi di socket di windows disponibili. \(L'altro tipo è [socket di flusso](../mfc/windows-sockets-stream-sockets.md)\).  
  
 I socket di datagramma supportano un flusso di dati bidirezionale che non verrà sicuramente ordinato o per unduplicated.  I Datagrams inoltre non sono garantiti per essere affidabili; può non riuscire una situazione.  I dati di Datagram possono verificarsi tainted e possibilmente duplicato, ma i limiti del record nei dati vengono mantenuti, purché i record sono minori del limite interno della dimensione del ricevitore.  È responsabile dell'ordinamento e dell'affidabilità gestire. \(Affidabilità tende a essere valida le reti \[LAN\] ma in minore quindi su Widi Area Network \[WAN\], ad esempio internet.\)  
  
 I Datagrams sono "privi di connessione", ovvero, alcuna connessione viene stabilita esplicita; invia un messaggio di datagram a un socket specificato e ricevere messaggi da un socket specificato.  
  
 Un esempio di un blocco di datagramma è un'applicazione che mantiene i clock di sistema nella rete sincronizzati.  Viene illustrata una funzionalità aggiuntiva sockets di datagramma almeno in alcune impostazioni: messaggi di trasmettere a un numero elevato degli indirizzi di rete.  
  
 I socket di datagramma sono migliori sockets di flusso per i dati orientati a record.  Per ulteriori informazioni sui socket di datagramma, vedere la specifica di Windows Sockets, disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)