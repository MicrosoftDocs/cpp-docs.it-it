---
title: 'Windows Sockets: Utilizzo di socket con archivi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], archives
- sockets [MFC], with archives
- archives [MFC], and Windows Sockets
- CSocket class [MFC], programming model
ms.assetid: 17e71a99-a09e-4e1a-9fda-13d62805c824
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b7ad4e5b94403582f9073e4d3bd3542f8aa75d08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="windows-sockets-using-sockets-with-archives"></a>Windows Sockets: utilizzo di socket con archivi
Questo articolo viene descritto il [modello di programmazione di CSocket](#_core_the_csocket_programming_model). Classe [CSocket](../mfc/reference/csocket-class.md) fornisce il supporto di socket a un livello superiore di astrazione rispetto a classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md). `CSocket` Usa una versione del protocollo di serializzazione MFC per passare dati verso e da un oggetto socket tramite MFC [CArchive](../mfc/reference/carchive-class.md) oggetto. `CSocket` fornisce il blocco (durante la gestione di elaborazione in background dei messaggi di Windows) e consente di accedere a `CArchive`, che gestisce molti aspetti della comunicazione che altrimenti occorrerebbe creare di persona utilizzando l'API non elaborata o la classe `CAsyncSocket`.  
  
> [!TIP]
>  È possibile utilizzare la classe `CSocket` da sola, come versione più semplice di `CAsyncSocket`, ma il modello di programmazione più semplice consiste nell'utilizzare `CSocket` con un oggetto `CArchive`.  
  
 Per ulteriori informazioni sul funzionamento dell'implementazione dei socket con archivi, vedere [Windows Sockets: funzionamento dei socket con archivi lavoro](../mfc/windows-sockets-how-sockets-with-archives-work.md). Ad esempio di codice, vedere [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) e [Windows Sockets: esempio di socket con gli archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md). Per informazioni su alcune delle funzionalità è possibile ottenere derivando le classi dalle classi socket, vedere [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
> [!NOTE]
>  Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server non sia un'applicazione MFC che individua i tipi di oggetti che si desidera inviare, non sarà possibile ricevere e deserializzare gli oggetti. Per informazioni relative all'oggetto di comunicazione con applicazioni non MFC, vedere l'articolo anche [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md).  
  
##  <a name="_core_the_csocket_programming_model"></a> Il modello di programmazione di CSocket  
 L'utilizzo di un oggetto `CSocket` implica la creazione e l'associazione di diversi oggetti classe MFC. Nella procedura generica indicata di seguito, ogni passaggio viene effettuato sia dal socket server sia dal socket client, ad eccezione del passaggio 3, in cui ciascun tipo di socket richiede un'azione diversa.  
  
> [!TIP]
>  In fase di esecuzione, l'applicazione server viene in genere avviata per prima in modo da essere pronta e "in ascolto" quando l'applicazione client cerca una connessione. Se il server non è pronto quando il client tenta di connettersi, in genere si richiede un nuovo tentativo di connessione da parte dell'applicazione dell'utente.  
  
#### <a name="to-set-up-communication-between-a-server-socket-and-a-client-socket"></a>Per impostare la comunicazione tra un socket server e un socket client  
  
1.  Costruire un [CSocket](../mfc/reference/csocket-class.md) oggetto.  
  
2.  Utilizzare l'oggetto per creare l'oggetto sottostante **SOCKET** gestire.  
  
     Per un `CSocket` oggetto client, in genere utilizzare i parametri predefiniti in [crea](../mfc/reference/casyncsocket-class.md#create), a meno che non è necessario un socket di datagramma. Per un `CSocket` oggetto server, è necessario specificare una porta nel **crea** chiamare.  
  
    > [!NOTE]
    >  `CArchive` non funziona con i socket di datagramma. Se si desidera utilizzare `CSocket` per un socket di datagramma, è necessario utilizzare la classe come se si utilizzasse `CAsyncSocket`, ovvero, senza un archivio. Poiché i datagrammi sono inaffidabili (non è garantito l'arrivo e può essere ripetuto o fuori sequenza), non sono compatibili con la serializzazione tramite un archivio. Richiedere un'operazione di serializzazione per completare in modo affidabile e in sequenza. Se si tenta di utilizzare `CSocket` con un oggetto `CArchive` per un datagramma, un'asserzione MFC non funziona.  
  
3.  Se il socket è un client, chiamare [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect) per connettere l'oggetto socket a un socket server.  
  
     oppure  
  
     Se il socket è un server, chiamare [CAsyncSocket:: Listen](../mfc/reference/casyncsocket-class.md#listen) iniziare l'attesa di tentativi di connessione da un client. Dopo aver ricevuto una richiesta di connessione, accettare chiamando [CAsyncSocket:: Accept](../mfc/reference/casyncsocket-class.md#accept).  
  
    > [!NOTE]
    >  Il **Accept** funzione membro accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare **Accept**. Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare **crea** per questo nuovo oggetto socket.  
  
4.  Creare un [CSocketFile](../mfc/reference/csocketfile-class.md) associandogli il `CSocket` oggetto con esso.  
  
5.  Creare un [CArchive](../mfc/reference/carchive-class.md) oggetto per il caricamento (ricezione) o l'archiviazione dei dati (invio). L'archivio è associato all'oggetto `CSocketFile`.  
  
     Tenere presente che `CArchive` non funziona con i socket di datagramma.  
  
6.  Utilizzare l'oggetto `CArchive` per passare dati tra i socket client e server.  
  
     Tenere presente che un determinato oggetto `CArchive` converte i dati in una sola direzione: per il caricamento (ricezione) o l'archiviazione (invio). In alcuni casi, si utilizzeranno due oggetti `CArchive`: uno per inviare i dati, l'altro per ricevere messaggi di riconoscimento.  
  
     Dopo avere accettato la connessione e l'installazione dell'archivio, è possibile eseguire attività come la convalida delle password.  
  
7.  Eliminare definitivamente l'archivio, il file di socket e gli oggetti socket.  
  
    > [!NOTE]
    >  La classe `CArchive` fornisce la funzione membro `IsBufferEmpty` in modo specifico per l'utilizzo con la classe `CSocket`. Se il buffer contiene più messaggi di dati, ad esempio, è necessario eseguire un ciclo per leggerli tutti e liberare il buffer. In caso contrario, la successiva notifica di ricezione di dati potrebbe essere ritardata a tempo indeterminato. Utilizzare `IsBufferEmpty` per garantire il recupero di tutti i dati.  
  
 L'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) illustra entrambi i lati di questo processo con codice di esempio.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [CSocket::Create](../mfc/reference/csocket-class.md#create)

