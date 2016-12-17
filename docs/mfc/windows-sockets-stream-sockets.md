---
title: "Windows Sockets: socket di flusso | Microsoft Docs"
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
  - "socket [C++], socket di flusso"
  - "socket di flusso [C++]"
  - "Windows Sockets [C++], socket di flusso"
ms.assetid: 31faaa34-a995-493f-a30b-b8115293d619
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: socket di flusso
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo descrive i socket di flusso, uno dei due tipi di socket Windows disponibili. \(L'altro tipo è il [socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)\).  
  
 I socket di flusso prevedono un flusso di dati senza limiti di record: un flusso di byte che può essere bidirezionale \(l'applicazione è full duplex: può sia trasmettere che ricevere tramite il blocco\).  I flussi possono essere utilizzati per inviare dati ordinati e non duplicati. \("Ordinato" significa che i pacchetti arrivano a destinazione nell'ordine di invio. "Non ridondanza" significa che un determinato pacchetto viene visualizzato solo una volta.\) La ricezione dei messaggi del flusso è garantita, inoltre i flussi sono adatti a gestire grandi quantità di dati.  
  
 Il livello di trasporto della rete può spezzare o raggruppare i dati in pacchetti di dimensione ragionevole.  La classe `CSocket` gestirà la compressione e la decomprimere automaticamente.  
  
 I flussi sono basati su connessioni esplicite: la socket A richiede una connessione ad una socket B; la socket B accetta o rifiuta la richiesta di connessione.  
  
 Una telefonata fornisce una buona analogia per un flusso.  In condizioni normali, la parte ricevente sente cosa si dice nell'ordine in cui lo si dice, senza duplicazione o perdita.  I socket di flusso sono appropriati, ad esempio, per implementazioni come il protocollo FTP \(FTP\), che facilita il trasferimento di file ASCII o di file binari di dimensione arbitraria.  
  
 I socket di flusso sono preferibili ai socket di datagramma quando l'arrivo dei dati deve essere garantito e quando la dimensioni dei dati è grande.  Per ulteriori informazioni sui socket di flusso, vedere la specifica di Windows Sockets.  La definizione è disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 L'utilizzo di socket di flusso può essere superiore alle applicazioni progettate per utilizzare una socket di datagramma per la trasmissione a tutte le socket riceventi nella rete perché  
  
-   Il modello di trasmissione è soggetto a problemi di inondazione di rete \(o "tempesta"\).  
  
-   Il modello client\-server adottato successivamente è più efficiente.  
  
-   Il modello flusso garantisce il trasferimento affidabile dei dati, nel modello datagramma non è garantito.  
  
-   Il modello finale sfrutta la capacità di comunicazione tra il formato Unicode e applicazioni di socket ANSI che la classe CArchive conferisce alla classe CSocket.  
  
    > [!NOTE]
    >  Se si utilizza la classe `CSocket`, è necessario utilizzare un flusso.  Un'asserzione MFC ha esito negativo se si specifica il tipo di socket come **SOCK\_DGRAM**.  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)