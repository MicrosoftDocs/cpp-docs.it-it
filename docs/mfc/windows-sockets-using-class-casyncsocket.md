---
description: 'Ulteriori informazioni su: Windows Sockets: utilizzo della classe CAsyncSocket'
title: 'Windows Sockets: utilizzo della classe CAsyncSocket'
ms.date: 11/04/2016
helpviewer_keywords:
- CAsyncSocket class [MFC], programming model
- Windows Sockets [MFC], asynchronous
- sockets [MFC], converting between Unicode and MBCS strings
- SOCKET handle
- sockets [MFC], asynchronous operation
- Windows Sockets [MFC], converting Unicode and MBCS strings
ms.assetid: 825dae17-7c1b-4b86-8d6c-da7f1afb5d8d
ms.openlocfilehash: 9fbf385a2e327588685fdcb996465386628e5e4d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118602"
---
# <a name="windows-sockets-using-class-casyncsocket"></a>Windows Sockets: utilizzo della classe CAsyncSocket

Questo articolo illustra come usare la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md). Tenere presente che questa classe incapsula l'API Windows Sockets a un livello molto basso. `CAsyncSocket` viene usato dai programmatori che conoscono in dettaglio le comunicazioni di rete, ma vogliono la convenienza dei callback per la notifica degli eventi di rete. In base a questo presupposto, questo articolo fornisce solo istruzioni di base. È consigliabile considerare l'uso `CAsyncSocket` di se si vuole semplificare la gestione di più protocolli di rete in un'applicazione MFC, ma non si vuole sacrificare la flessibilità. È anche possibile che si possa ottenere una migliore efficienza tramite la programmazione delle comunicazioni in modo più diretto rispetto a quanto si può usare il modello alternativo più generale della classe `CSocket` .

`CAsyncSocket` è documentato nella Guida di *riferimento a MFC*. Visual C++ fornisce anche la specifica di Windows Sockets, che si trova nel Windows SDK. I dettagli sono stati lasciati dall'utente. Visual C++ non fornisce un'applicazione di esempio per `CAsyncSocket` .

Se non si dispone di un'elevata conoscenza delle comunicazioni di rete e si desidera una soluzione semplice, utilizzare la classe [CSocket](../mfc/reference/csocket-class.md) con un `CArchive` oggetto. Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md) .

Questo articolo riguarda:

- Creazione e utilizzo di un `CAsyncSocket` oggetto.

- [Responsabilità dell'utente con CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).

## <a name="creating-and-using-a-casyncsocket-object"></a><a name="_core_creating_and_using_a_casyncsocket_object"></a> Creazione e utilizzo di un oggetto CAsyncSocket

#### <a name="to-use-casyncsocket"></a>Per usare CAsyncSocket

1. Costruire un oggetto [CAsyncSocket](../mfc/reference/casyncsocket-class.md) e usare l'oggetto per creare l'handle del **socket** sottostante.

   La creazione di un socket segue il modello MFC della costruzione in due fasi.

   Ad esempio:

   [!code-cpp[NVC_MFCSimpleSocket#3](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_1.cpp)]

     -oppure-

   [!code-cpp[NVC_MFCSimpleSocket#4](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_2.cpp)]

   Il primo costruttore precedente crea un `CAsyncSocket` oggetto nello stack. Il secondo costruttore crea un oggetto nell' `CAsyncSocket` heap. La prima chiamata di [creazione](../mfc/reference/casyncsocket-class.md#create) precedente usa i parametri predefiniti per creare un socket di flusso. La seconda `Create` chiamata crea un socket di datagramma con una porta e un indirizzo specificati. È possibile usare entrambe `Create` le versioni con entrambi i metodi di costruzione.

   I parametri per `Create` sono:

   - "Port": valore short integer.

      Per un socket server è necessario specificare una porta. Per un socket client, in genere si accetta il valore predefinito per questo parametro, che consente a Windows Sockets di selezionare una porta.

   - Tipo di socket: **SOCK_STREAM** (impostazione predefinita) o **SOCK_DGRAM**.

   - Un socket "Address", ad esempio "ftp.microsoft.com" o "128.56.22.8".

      Si tratta dell'indirizzo IP (Internet Protocol) in rete. Probabilmente si utilizzerà sempre il valore predefinito per questo parametro.

   I termini "Port" e "socket address" sono illustrati in [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md).

1. Se il socket è un client, connettere l'oggetto socket a un socket del server usando [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect).

     -oppure-

   Se il socket è un server, impostare il socket per iniziare l'attesa (con [CAsyncSocket:: Listen](../mfc/reference/casyncsocket-class.md#listen)) per i tentativi di connessione da un client. Al momento della ricezione di una richiesta di connessione, accettarla con [CAsyncSocket:: Accept](../mfc/reference/casyncsocket-class.md#accept).

   Dopo aver accettato una connessione, è possibile eseguire attività come la convalida delle password.

    > [!NOTE]
    >  La `Accept` funzione membro accetta come parametro un riferimento a un nuovo `CSocket` oggetto vuoto. È necessario costruire questo oggetto prima di chiamare `Accept` . Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare `Create` per questo nuovo oggetto Socket. Per un esempio, vedere l'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).

1. Eseguire le comunicazioni con altri socket chiamando le `CAsyncSocket` funzioni membro dell'oggetto che incapsulano le funzioni dell'API Windows Sockets.

   Vedere la specifica di Windows Sockets e la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) nelle informazioni di *riferimento su MFC*.

1. Eliminare definitivamente l' `CAsyncSocket` oggetto.

   Se è stato creato l'oggetto socket nello stack, il relativo distruttore viene chiamato quando la funzione che lo contiene esce dall'ambito. Se l'oggetto Socket è stato creato nell'heap, utilizzando l' **`new`** operatore, si è responsabili dell'utilizzo dell' **`delete`** operatore per eliminare definitivamente l'oggetto.

   Il distruttore chiama la funzione membro [Close](../mfc/reference/casyncsocket-class.md#close) dell'oggetto prima di eliminare l'oggetto.

Per un esempio di questa sequenza nel codice (effettivamente per un `CSocket` oggetto), vedere [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).

## <a name="your-responsibilities-with-casyncsocket"></a><a name="_core_your_responsibilities_with_casyncsocket"></a> Responsabilità di CAsyncSocket

Quando si crea un oggetto della classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), l'oggetto incapsula un handle di **socket** di Windows e fornisce operazioni su tale handle. Quando si usa `CAsyncSocket` , è necessario gestire tutti i problemi che si possono affrontare se si usa direttamente l'API. Ad esempio:

- Scenari di "blocco".

- Differenze nell'ordine dei byte tra i computer di invio e ricezione.

- Conversione tra stringhe Unicode e Multibyte Character Set (MBCS).

Per le definizioni di questi termini e informazioni aggiuntive, vedere [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md), [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md), [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).

Nonostante questi problemi, `CAsycnSocket` la classe può essere la scelta migliore se l'applicazione richiede tutta la flessibilità e il controllo che è possibile ottenere. In caso contrario, è consigliabile usare invece la classe `CSocket` . `CSocket` viene nascosta una grande quantità di dettagli: viene eseguita la pompa dei messaggi di Windows durante le chiamate di blocco e viene concesso l'accesso a `CArchive` , che gestisce le differenze nell'ordine dei byte e la conversione delle stringhe.

Per altre informazioni, vedere:

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
