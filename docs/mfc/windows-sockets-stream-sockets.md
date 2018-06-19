---
title: 'Windows Sockets: Socket di flusso | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], stream sockets
- sockets [MFC], stream sockets
- stream sockets [MFC]
ms.assetid: 31faaa34-a995-493f-a30b-b8115293d619
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e5499395e517f056ffb224c22c888a3cc0382133
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33386106"
---
# <a name="windows-sockets-stream-sockets"></a>Windows Sockets: socket di flusso
In questo articolo vengono descritti i socket di flusso, uno dei due tipi di socket Windows disponibili. (L'altro tipo è il [socket di datagramma](../mfc/windows-sockets-datagram-sockets.md).)  
  
 I socket di flusso forniscono un flusso di dati senza limiti di record: un flusso di byte che può essere bidirezionale (l'applicazione è full duplex: può sia trasmettere che ricevere attraverso il socket). I flussi possono essere utilizzati per inviare dati in sequenza non duplicati. "In sequenza" significa che i pacchetti arrivano a destinazione nell'ordine di invio. "Non duplicati" significa che un determinato pacchetto viene ricevuto solo una volta. La ricezione dei messaggi del flusso è garantita, inoltre i flussi sono adatti a gestire grandi quantità di dati.  
  
 Il livello di trasporto della rete può spezzare o raggruppare i dati in pacchetti di dimensioni ragionevoli. La classe `CSocket` gestirà la compressione e la decompressione automaticamente.  
  
 I flussi sono basati su connessioni esplicite: il socket A richiede una connessione a un socket B; il socket B accetta o rifiuta la richiesta di connessione.  
  
 Una telefonata rappresenta una valida analogia per un flusso. In condizioni normali, il ricevente ascolta ciò che viene detto nell'ordine in cui lo si dice, senza duplicazioni o perdite. I socket di flusso sono adatti, ad esempio, per le implementazioni come il protocollo FTP (File Transfer Protocol), che facilita il trasferimento di file ASCII o di file binari di dimensione arbitraria.  
  
 I socket di flusso sono preferibili ai socket di datagramma quando l'arrivo dei dati deve essere garantito e quando la dimensione dei dati è grande. Per ulteriori informazioni sui socket di flusso, vedere la specifica di Windows Sockets. La specifica è disponibile in Windows SDK.  
  
 L'utilizzo di socket di flusso può essere più utile rispetto alle applicazioni progettate per utilizzare un socket di datagramma per la trasmissione a tutti i socket riceventi nella rete perché:  
  
-   Il modello di trasmissione è soggetto ad attacchi flood della rete.  
  
-   Il modello client-server adottato successivamente è più efficiente.  
  
-   Il modello a flusso garantisce il trasferimento affidabile dei dati, al contrario del modello a datagramma.  
  
-   Il modello finale sfrutta la capacità di comunicazione tra le applicazioni socket Unicode e ANSI che la classe CArchive conferisce in prestito alla classe CSocket.  
  
    > [!NOTE]
    >  Se si utilizza la classe `CSocket`, è necessario utilizzare un flusso. Un'asserzione MFC ha esito negativo se si specifica il tipo di socket come **SOCK_DGRAM**.  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

