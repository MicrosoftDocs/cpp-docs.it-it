---
title: "Windows Sockets: porte e indirizzi socket | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "indirizzi [C++], socket"
  - "porte [C++]"
  - "porte [C++], definizione"
  - "socket [C++], indirizzi"
  - "socket [C++], porte"
  - "Windows Sockets [C++], indirizzi"
  - "Windows Sockets [C++], porte"
ms.assetid: e050261a-9285-4f31-a1c5-6c8033af5b4a
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: porte e indirizzi socket
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra i termini "porta" e "address" riferito a Windows Sockets.  
  
##  <a name="_core_port"></a> Porta  
 Una porta identifica un processo univoco per il quale un servizio può essere fornito.  Nel contesto corrente, una porta è associata a un'applicazione che supporta i Windows Sockets.  L'idea è identificare ogni applicazione Windows Sockets in modo univoco in modo che sia possibile avere più di un'applicazione in esecuzione Windows Sockets in un computer contemporaneamente.  
  
 Determinate porte sono riservate per i servizi comuni, quali FTP.  Evitare l'utilizzo di tali porte a meno che non si stia fornendo il tipo di servizio.  La specifica di Windows Sockets dettaglio queste porte riservate.  Il file WINSOCK.H anche le elenco.  
  
 Per consentire alla DLL Windows Sockets selezionare una porta utilizzato dall'utente, il passaggio 0 come valore della porta.  MFC selezionare decimale 1.024 del valore di porta un valore superiore.  È possibile recuperare il valore di porta utilizzato da MFC ha selezionato chiamando la funzione membro di [CAsyncSocket::GetSockName](../Topic/CAsyncSocket::GetSockName.md).  
  
##  <a name="_core_socket_address"></a> Indirizzo di socket  
 Ogni oggetto socket è associato a un indirizzo di \(IP\) del protocollo Internet in rete.  In genere, l'indirizzo è un nome del computer, ad esempio "ftp.microsoft.com", o un numero dotted, ad esempio "128.56.22.8".  
  
 Quando si cercano creare un socket, in genere non è necessario specificare un indirizzo.  
  
> [!NOTE]
>  È possibile che il computer disponga di più schede di rete o possibile qualsiasi giorno eseguita su tale computer\), ognuna delle quali rappresenta una rete diverso.  In questo caso, potrebbe essere necessario fornire un indirizzo per specificare che una scheda di rete il blocco utilizzata.  Ciò dipende essere un utilizzo avanzato e un possibile problema di portabilità.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: Come socket con il lavoro degli archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)