---
title: 'Windows Sockets: Uso della classe CAsyncSocket'
ms.date: 11/04/2016
f1_keywords:
- CAsyncSocket
helpviewer_keywords:
- CAsyncSocket class [MFC], programming model
- Windows Sockets [MFC], asynchronous
- sockets [MFC], converting between Unicode and MBCS strings
- SOCKET handle
- sockets [MFC], asynchronous operation
- Windows Sockets [MFC], converting Unicode and MBCS strings
ms.assetid: 825dae17-7c1b-4b86-8d6c-da7f1afb5d8d
ms.openlocfilehash: 51274791393d95517bd8de5ae7248dc634018037
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399564"
---
# <a name="windows-sockets-using-class-casyncsocket"></a>Windows Sockets: Uso della classe CAsyncSocket

Questo articolo illustra come usare classi [CAsyncSocket](../mfc/reference/casyncsocket-class.md). Tenere presente che questa classe incapsula l'API di socket di Windows a un livello molto basso. `CAsyncSocket` deve essere utilizzato dai programmatori che conoscono le comunicazioni di rete in modo dettagliato ma vuole che la comodità di callback per la notifica degli eventi di rete. Basato su questo presupposto, questo articolo fornisce solo istruzioni di base. È probabilmente consigliabile usare `CAsyncSocket` se si desidera semplicità dei socket di Windows di gestione di più protocolli di rete in un'applicazione MFC, ma non si desidera sacrificare la flessibilità. Si potrebbe anche ritiene che è possibile ottenere un'efficienza maggiore per le altre comunicazioni di programmazione diretta rispetto è stato possibile usando il modello alternativo più generale della classe `CSocket`.

`CAsyncSocket` è documentato nel *riferimenti alla libreria MFC*. Visual C++ fornisce anche la specifica di Windows Sockets, che si trova in Windows SDK. I dettagli vengono lasciati all'utente. Visual C++ non fornisce un'applicazione di esempio per `CAsyncSocket`.

Se si vuole una soluzione semplice e non sono estremamente competente sulle comunicazioni di rete, usare una classe [CSocket](../mfc/reference/csocket-class.md) con un `CArchive` oggetto. Vedere [Windows Sockets: Utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md) per altre informazioni.

Questo articolo illustra le attività seguenti:

- Creazione e utilizzo di un `CAsyncSocket` oggetto.

- [Le responsabilità del cliente con CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).

##  <a name="_core_creating_and_using_a_casyncsocket_object"></a> Creazione e utilizzo di un oggetto CAsyncSocket

#### <a name="to-use-casyncsocket"></a>Usare CAsyncSocket

1. Creare un [CAsyncSocket](../mfc/reference/casyncsocket-class.md) dell'oggetto e l'oggetto utilizzato per creare l'oggetto sottostante **SOCKET** gestire.

   La creazione di un socket segue il modello MFC di costruzione in due fasi.

   Ad esempio:

   [!code-cpp[NVC_MFCSimpleSocket#3](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_1.cpp)]

     -oppure-

   [!code-cpp[NVC_MFCSimpleSocket#4](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_2.cpp)]

   Il primo costruttore crea un `CAsyncSocket` oggetto nello stack. Il secondo costruttore crea un `CAsyncSocket` nell'heap. Il primo [Create](../mfc/reference/casyncsocket-class.md#create) chiamata precedente Usa i parametri predefiniti per creare un socket di flusso. Il secondo `Create` chiamata crea un socket di datagramma con una porta specificata e l'indirizzo. (È possibile usare `Create` versione con uno dei due metodi di costruzione.)

   I parametri da `Create` sono:

   - "port": un valore short integer.

         For a server socket, you must specify a port. For a client socket, you typically accept the default value for this parameter, which lets Windows Sockets select a port.

   - Un tipo di socket: **SOCK_STREAM** (predefinito) o **SOCK_DGRAM**.

   - Un socket "address", ad esempio "ftp.microsoft.com" o "128.56.22.8".

         This is your Internet Protocol (IP) address on the network. You will probably always rely on the default value for this parameter.

   I termini "della porta" e "indirizzo socket" sono illustrati in [Windows Sockets: Porte e indirizzi Socket](../mfc/windows-sockets-ports-and-socket-addresses.md).

1. Se il socket è un client, connettere l'oggetto socket a un server socket, usando [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect).

     -oppure-

   Se il socket è un server, impostare il socket per iniziare l'ascolto (con [CAsyncSocket:: Listen](../mfc/reference/casyncsocket-class.md#listen)) per i tentativi di connessione da un client. Dopo aver ricevuto una richiesta di connessione, accettarla con [CAsyncSocket:: Accept](../mfc/reference/casyncsocket-class.md#accept).

   Dopo aver accettato una connessione, è possibile eseguire attività quali la convalida delle password.

    > [!NOTE]
    >  Il `Accept` membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare `Accept`. Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare `Create` per questo nuovo oggetto socket. Per un esempio, vedere l'articolo [Windows Sockets: Sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).

1. Eseguire le comunicazioni con altri socket chiamando il `CAsyncSocket` funzioni membro dell'oggetto che incapsulano le funzioni di Windows Sockets API.

   Vedere la specifica di Windows Sockets e una classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) nel *riferimento MFC*.

1. Eliminare definitivamente il `CAsyncSocket` oggetto.

   Se è stato creato l'oggetto socket nello stack, il relativo distruttore viene chiamato quando la funzione contenitore esce dall'ambito. Se è stato creato l'oggetto socket nell'heap, usando il **nuove** operatore, si è responsabile dell'uso il **eliminare** operatore da eliminare definitivamente l'oggetto.

   Il distruttore chiama l'oggetto [Chiudi](../mfc/reference/casyncsocket-class.md#close) funzione membro prima dell'eliminazione dell'oggetto.

Per un esempio di questa sequenza nel codice (effettivamente per una `CSocket` oggetto), vedere [Windows Sockets: Sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).

##  <a name="_core_your_responsibilities_with_casyncsocket"></a> Le responsabilità del cliente con CAsyncSocket

Quando si crea un oggetto della classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), l'oggetto incapsula un Windows **SOCKET** gestisce e fornisce le operazioni su tale handle. Quando si usa `CAsyncSocket`, si devono affrontare tutti i problemi che possono verificarsi se si usa direttamente l'API. Ad esempio:

- Scenari di "Blocco".

- Differenze nell'ordine di byte tra l'invio e ricezione macchine.

- Conversione tra caratteri Unicode e multibyte impostare le stringhe (MBCS).

Per le definizioni dei termini e altre informazioni, vedere [Windows Sockets: Bloccando](../mfc/windows-sockets-blocking.md), [Windows Sockets: L'ordine dei byte](../mfc/windows-sockets-byte-ordering.md), [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md).

Nonostante questi problemi, classe `CAsycnSocket` potrebbe essere la scelta giusta se l'applicazione richiede la flessibilità e controllo è possibile ottenere. Se non è comunque consigliabile classe `CSocket` invece. `CSocket` Consente di nascondere molti dettagli da parte dell'utente: it pompe messaggi durante le chiamate di blocco di Windows e ti offre l'accesso a `CArchive`, che gestisce le differenze nell'ordine dei byte e la conversione delle stringhe.

Per altre informazioni, vedere:

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagrammi](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
