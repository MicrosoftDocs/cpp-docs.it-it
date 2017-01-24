---
title: "Windows Sockets: utilizzo di socket con archivi | Microsoft Docs"
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
  - "archivi [C++], e Windows Sockets"
  - "CSocket (classe), modello di programmazione"
  - "socket [C++], con archivi"
  - "Windows Sockets [C++], archivi"
ms.assetid: 17e71a99-a09e-4e1a-9fda-13d62805c824
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: utilizzo di socket con archivi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto il [Modello di programmazione di CSocket](#_core_the_csocket_programming_model).  La classe [CSocket](../mfc/reference/csocket-class.md) fornisce il supporto di socket a un livello di astrazione più elevato che definisce le [CAsyncSocket](../mfc/reference/casyncsocket-class.md).  `CSocket` utilizza una versione del protocollo di serializzazione MFC per passare i dati a e da un oggetto socket tramite un oggetto MFC [CArchive](../mfc/reference/carchive-class.md).  `CSocket` fornisce il blocco \(durante la gestione di elaborazione in background dei messaggi di Windows\) e consente di accedere a `CArchive`, che consente di gestire molti aspetti di comunicazione che è necessario farsi da soli usando le API non elaborate o la classe `CAsyncSocket`.  
  
> [!TIP]
>  È possibile utilizzare la classe `CSocket` da sola, come versione più semplice di `CAsyncSocket`, ma il modello di programmazione più semplice consiste nell'utilizzare `CSocket` con un oggetto `CArchive`.  
  
 Per ulteriori informazioni sull'implementazione di socket con attività di archivio, vedere [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md).  Per visualizzare il codice di esempio, vedere [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) e [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md).  Per informazioni su altre funzionalità che è possibile ottenere derivando classi personalizzate dalle classi di socket, vedere [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
> [!NOTE]
>  Se si scrive un programma MFC client per comunicare con server consolidati \(non MFC\), non inviare oggetti C\+\+ attraverso l'archivio.  A meno che il server sia un'applicazione MFC che individua i tipi di oggetti che si desidera inviare, non sarà possibile ricevere e deserializzare gli oggetti.  Per materiale correlato in materia di comunicazione con le applicazioni non MFC, vedere inoltre l'articolo [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md).  
  
##  <a name="_core_the_csocket_programming_model"></a> Il modello di programmazione di CSocket  
 L'utilizzo di un oggetto `CSocket` include creare e associare insieme diversi oggetti MFC class.  Nella procedura generale, ogni operazione viene effettuata dal socket server e dal socket client, ad eccezione del passaggio 3, in cui ogni tipo di socket richiede un'azione diversa.  
  
> [!TIP]
>  In fase di esecuzione, l'applicazione server in genere inizia prima di essere pronta e "ascolta" quando l'applicazione client individua una connessione.  Se il server non è pronto quando il client tenta di connettersi, in genere si richiede che l'applicazione utente tenti di connettersi nuovamente in un secondo momento.  
  
#### Impostare la comunicazione tra un socket server e un socket client  
  
1.  Costruire un oggetto [CSocket](../mfc/reference/csocket-class.md).  
  
2.  Utilizzare l'oggetto per creare un handle **SOCKET** sottostante.  
  
     Per un oggetto client `CSocket`, è necessario in genere utilizzare parametri predefiniti in [Create](../Topic/CAsyncSocket::Create.md), a meno che non sia necessario un socket di datagramma.  Per un oggetto server `CSocket`, è necessario specificare una porta nella chiamata **Create**.  
  
    > [!NOTE]
    >  `CArchive` non ha effetto sui socket di datagramma.  Se si desidera utilizzare `CSocket` per un socket di datagramma, è necessario utilizzare la classe come se si utilizzasse `CAsyncSocket`, ovvero, senza un archivio.  Poiché i datagrammi sono inaffidabili \(non è garantito l'arrivo e può essere ripetuto o fuori sequenza\), non sono compatibili con la serializzazione tramite un archivio.  Richiedere un'operazione di serializzazione per completare in modo affidabile e in sequenza.  Se si tenta di utilizzare `CSocket` con un oggetto `CArchive` per un datagramma, un'asserzione MFC non funziona.  
  
3.  Se il socket è un client, chiamare [CAsyncSocket::Connect](../Topic/CAsyncSocket::Connect.md) per connettere l'oggetto socket a un socket del server.  
  
     \- oppure \-  
  
     Se il socket è un server, chiamare [CAsyncSocket::Listen](../Topic/CAsyncSocket::Listen.md) per iniziare l'ascolto di tentativi di connessione da parte di un client.  Quando si riceve una richiesta di connessione, accettarla chiamando [CAsyncSocket::Accept](../Topic/CAsyncSocket::Accept.md).  
  
    > [!NOTE]
    >  La funzione membro **Accept** accetta un riferimento a un nuovo oggetto, vuoto `CSocket` come parametro.  È necessario costruire l'oggetto prima di chiamare **Accept**.  Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa.  Non chiamare **Create** per questo nuovo oggetto socket.  
  
4.  Creare un oggetto [CSocketFile](../mfc/reference/csocketfile-class.md) associando, l'oggetto `CSocket` con esso.  
  
5.  Creare un oggetto [CArchive](../mfc/reference/carchive-class.md) per caricare \(ricezione\) o archiviare i dati \(invio\).  L'archivio è associato con l'oggetto `CSocketFile`.  
  
     Tenere presente che `CArchive` non ha effetto sui socket di datagramma.  
  
6.  Utilizzare l'oggetto `CArchive` per passare dati tra i socket client e server.  
  
     Tenere presente che un determinato oggetto `CArchive` converte i dati in una sola direzione: per il caricamento \(ricevere\) o archiviazione \(inviare\).  In alcuni casi, si utilizzeranno due oggetti `CArchive` : uno per inviare i dati, l'altro per ricevere messaggi di riconoscimento.  
  
     Dopo avere accettato la connessione e l'installazione dell'archivio, è possibile eseguire attività come convalidare password.  
  
7.  Eliminare l'archivio, il file di socket e gli oggetti socket.  
  
    > [!NOTE]
    >  La classe `CArchive` fornisce la funzione membro `IsBufferEmpty` in modo specifico per l'utilizzo con la classe `CSocket`.  Se il buffer contiene messaggi dati multipli, ad esempio, è necessario eseguire un ciclo per leggerli tutti e liberare il buffer.  In caso contrario, la notifica seguente che vi sono dati da ricevere può essere ritardata indefinitamente.  Utilizzare `IsBufferEmpty` per garantire il recupero dei dati.  
  
 L'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) illustra entrambi i lati di questo processo con il codice di esempio.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [CSocket::Create](../Topic/CSocket::Create.md)