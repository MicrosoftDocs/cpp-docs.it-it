---
description: 'Ulteriori informazioni su: Windows Sockets: utilizzo di socket con archivi'
title: 'Windows Sockets: utilizzo di socket con archivi'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], archives
- sockets [MFC], with archives
- archives [MFC], and Windows Sockets
- CSocket class [MFC], programming model
ms.assetid: 17e71a99-a09e-4e1a-9fda-13d62805c824
ms.openlocfilehash: bd5f239a0fdcee4bf6c6141994c4ca5002bdc6b9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331334"
---
# <a name="windows-sockets-using-sockets-with-archives"></a>Windows Sockets: utilizzo di socket con archivi

Questo articolo descrive il [modello di programmazione CSocket](#_core_the_csocket_programming_model). La classe [CSocket](../mfc/reference/csocket-class.md) fornisce supporto socket a un livello di astrazione superiore rispetto alla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md). `CSocket` Usa una versione del protocollo di serializzazione MFC per passare i dati da e verso un oggetto socket tramite un oggetto [CArchive](../mfc/reference/carchive-class.md) MFC. `CSocket` fornisce il blocco (durante la gestione di elaborazione in background dei messaggi di Windows) e consente di accedere a `CArchive`, che gestisce molti aspetti della comunicazione che altrimenti occorrerebbe creare di persona utilizzando l'API non elaborata o la classe `CAsyncSocket`.

> [!TIP]
> È possibile utilizzare la classe `CSocket` da sola, come versione più semplice di `CAsyncSocket`, ma il modello di programmazione più semplice consiste nell'utilizzare `CSocket` con un oggetto `CArchive`.

Per ulteriori informazioni sul funzionamento dell'implementazione di socket con archivi, vedere [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md). Per un esempio di codice, vedere [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) e [Windows Sockets: esempio di socket che usano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md). Per informazioni su alcune delle funzionalità che è possibile ottenere derivando le proprie classi dalle classi Sockets, vedere [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md).

> [!NOTE]
> Se si scrive un programma MFC client per comunicare con server consolidati (non MFC), non inviare oggetti C++ attraverso l'archivio. A meno che il server non sia un'applicazione MFC che individua i tipi di oggetti che si desidera inviare, non sarà possibile ricevere e deserializzare gli oggetti. Per materiale correlato sull'oggetto della comunicazione con le applicazioni non MFC, vedere anche l'articolo [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md).

## <a name="the-csocket-programming-model"></a><a name="_core_the_csocket_programming_model"></a> Modello di programmazione CSocket

L'utilizzo di un oggetto `CSocket` implica la creazione e l'associazione di diversi oggetti classe MFC. Nella procedura generica indicata di seguito, ogni passaggio viene effettuato sia dal socket server sia dal socket client, ad eccezione del passaggio 3, in cui ciascun tipo di socket richiede un'azione diversa.

> [!TIP]
> In fase di esecuzione, l'applicazione server viene in genere avviata per prima in modo da essere pronta e "in ascolto" quando l'applicazione client cerca una connessione. Se il server non è pronto quando il client tenta di connettersi, in genere si richiede un nuovo tentativo di connessione da parte dell'applicazione dell'utente.

#### <a name="to-set-up-communication-between-a-server-socket-and-a-client-socket"></a>Per impostare la comunicazione tra un socket server e un socket client

1. Costruisce un oggetto [CSocket](../mfc/reference/csocket-class.md) .

1. Utilizzare l'oggetto per creare l'handle del **socket** sottostante.

   Per un `CSocket` oggetto client, in genere è necessario usare i parametri predefiniti per [creare](../mfc/reference/casyncsocket-class.md#create), a meno che non sia necessario un socket di datagramma. Per un `CSocket` oggetto server, è necessario specificare una porta nella `Create` chiamata.

    > [!NOTE]
    >  `CArchive` non funziona con i socket di datagramma. Se si desidera utilizzare `CSocket` per un socket di datagramma, è necessario utilizzare la classe come se si utilizzasse `CAsyncSocket`, ovvero, senza un archivio. Poiché i datagrammi sono inaffidabili (non è garantito l'arrivo e può essere ripetuto o fuori sequenza), non sono compatibili con la serializzazione tramite un archivio. Richiedere un'operazione di serializzazione per completare in modo affidabile e in sequenza. Se si tenta di utilizzare `CSocket` con un oggetto `CArchive` per un datagramma, un'asserzione MFC non funziona.

1. Se il socket è un client, chiamare [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect) per connettere l'oggetto socket a un socket del server.

     -oppure-

   Se il socket è un server, chiamare [CAsyncSocket:: Listen](../mfc/reference/casyncsocket-class.md#listen) per iniziare l'ascolto dei tentativi di connessione da un client. Al momento della ricezione di una richiesta di connessione, accettarla chiamando [CAsyncSocket:: Accept](../mfc/reference/casyncsocket-class.md#accept).

    > [!NOTE]
    >  La `Accept` funzione membro accetta come parametro un riferimento a un nuovo `CSocket` oggetto vuoto. È necessario costruire questo oggetto prima di chiamare `Accept` . Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare `Create` per questo nuovo oggetto Socket.

1. Creare un oggetto [CSocketFile](../mfc/reference/csocketfile-class.md) , associando l' `CSocket` oggetto.

1. Creare un oggetto [CArchive](../mfc/reference/carchive-class.md) per il caricamento (ricezione) o l'archiviazione di dati (invio). L'archivio è associato all'oggetto `CSocketFile`.

   Tenere presente che `CArchive` non funziona con i socket di datagramma.

1. Utilizzare l'oggetto `CArchive` per passare dati tra i socket client e server.

   Tenere presente che un determinato oggetto `CArchive` converte i dati in una sola direzione: per il caricamento (ricezione) o l'archiviazione (invio). In alcuni casi, si utilizzeranno due oggetti `CArchive`: uno per inviare i dati, l'altro per ricevere messaggi di riconoscimento.

   Dopo avere accettato la connessione e l'installazione dell'archivio, è possibile eseguire attività come la convalida delle password.

1. Eliminare definitivamente l'archivio, il file di socket e gli oggetti socket.

    > [!NOTE]
    >  La classe `CArchive` fornisce la funzione membro `IsBufferEmpty` in modo specifico per l'utilizzo con la classe `CSocket`. Se il buffer contiene più messaggi di dati, ad esempio, è necessario eseguire un ciclo per leggerli tutti e liberare il buffer. In caso contrario, la successiva notifica di ricezione di dati potrebbe essere ritardata a tempo indeterminato. Utilizzare `IsBufferEmpty` per garantire il recupero di tutti i dati.

L'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md) illustra entrambi i lati di questo processo con il codice di esempio.

Per altre informazioni, vedere:

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CSocket:: create](../mfc/reference/csocket-class.md#create)
