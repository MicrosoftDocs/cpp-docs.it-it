---
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
ms.openlocfilehash: d3fc32d9da54d9cf8c79e9e5de45b81c2ef64a6e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371961"
---
# <a name="windows-sockets-using-class-casyncsocket"></a>Windows Sockets: utilizzo della classe CAsyncSocket

In questo articolo viene illustrato come utilizzare la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md). Tenere presente che questa classe incapsula l'API di Windows Sockets a un livello molto basso. `CAsyncSocket`è per l'uso da parte di programmatori che conoscono le comunicazioni di rete in dettaglio, ma vogliono la comodità di callback per la notifica di eventi di rete. Sulla base di questo presupposto, questo articolo fornisce solo istruzioni di base. È probabilmente `CAsyncSocket` consigliabile utilizzare se si desidera Windows Sockets di gestione di più protocolli di rete in un'applicazione MFC, ma non si desidera sacrificare la flessibilità. Si potrebbe anche sentire che è possibile ottenere una migliore efficienza programmando le `CSocket`comunicazioni più direttamente da soli di quanto si potrebbe utilizzando il modello alternativo più generale di classe .

`CAsyncSocket`è documentato nella Guida *di riferimento a MFC*. In Visual Cè è inoltre disponibile la specifica windows Sockets, disponibile in Windows SDK. I dettagli sono lasciati a voi. Non è in grado di fornire `CAsyncSocket`un'applicazione di esempio per .

Se non si è molto informati sulle comunicazioni di rete e `CArchive` si desidera una soluzione semplice, utilizzare la classe [CSocket](../mfc/reference/csocket-class.md) con un oggetto. Per ulteriori informazioni, vedere [Windows Sockets: Using Sockets with Archives (Utilizzo](../mfc/windows-sockets-using-sockets-with-archives.md) di socket con archivi).

Questo articolo riguarda:

- Creazione e `CAsyncSocket` utilizzo di un oggetto.

- [Le tue responsabilità con CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).

## <a name="creating-and-using-a-casyncsocket-object"></a><a name="_core_creating_and_using_a_casyncsocket_object"></a>Creazione e utilizzo di un oggetto CAsyncSocketCreating and Using a CAsyncSocket Object

#### <a name="to-use-casyncsocket"></a>Per utilizzare CAsyncSocket

1. Costruire un [oggetto CAsyncSocket](../mfc/reference/casyncsocket-class.md) e utilizzare l'oggetto per creare l'handle **SOCKET** sottostante.

   La creazione di un socket segue il modello MFC di costruzione in due fasi.

   Ad esempio:

   [!code-cpp[NVC_MFCSimpleSocket#3](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_1.cpp)]

     -oppure-

   [!code-cpp[NVC_MFCSimpleSocket#4](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_2.cpp)]

   Il primo costruttore `CAsyncSocket` precedente crea un oggetto nello stack. Il secondo costruttore crea un `CAsyncSocket` nell'heap. La prima chiamata [Create](../mfc/reference/casyncsocket-class.md#create) precedente utilizza i parametri predefiniti per creare un socket di flusso. La `Create` seconda chiamata crea un socket di datagramma con una porta e un indirizzo specificati. (È possibile `Create` utilizzare entrambe le versioni con entrambi i metodi di costruzione.)

   I parametri `Create` per essere:

   - Una "porta": un numero intero breve.

      Per un socket server, è necessario specificare una porta. Per un socket client, in genere si accetta il valore predefinito per questo parametro, che consente a Windows Sockets di selezionare una porta.

   - Un tipo di socket: **SOCK_STREAM** (impostazione predefinita) o **SOCK_DGRAM**.

   - Un "indirizzo" socket, ad esempio "ftp.microsoft.com" o "128.56.22.8".

      Questo è l'indirizzo IP (Internet Protocol) sulla rete. Probabilmente si farà sempre affidamento sul valore predefinito per questo parametro.

   I termini "porta" e "indirizzo socket" sono illustrati in [Windows Sockets: Porte e Indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md).

1. Se il socket è un client, connettere l'oggetto socket a un socket server, utilizzando [CAsyncSocket::Connect](../mfc/reference/casyncsocket-class.md#connect).

     -oppure-

   Se il socket è un server, impostare il socket per iniziare l'ascolto (con [CAsyncSocket::Listen](../mfc/reference/casyncsocket-class.md#listen)) per i tentativi di connessione da un client. Alla ricezione di una richiesta di connessione, accettarla con [CAsyncSocket::Accept](../mfc/reference/casyncsocket-class.md#accept).

   Dopo aver accettato una connessione, è possibile eseguire attività quali la convalida delle password.

    > [!NOTE]
    >  La `Accept` funzione membro accetta un riferimento `CSocket` a un nuovo oggetto vuoto come parametro. È necessario costruire questo `Accept`oggetto prima di chiamare . Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare `Create` per questo nuovo oggetto socket. Per un esempio, vedere l'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).

1. Eseguire comunicazioni con altri socket `CAsyncSocket` chiamando le funzioni membro dell'oggetto che incapsulano le funzioni API di Windows Sockets.

   Vedere la specifica di Windows Sockets e la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) in *Riferimenti a MFC*.

1. Distruggi l'oggetto. `CAsyncSocket`

   Se è stato creato l'oggetto socket nello stack, il relativo distruttore viene chiamato quando la funzione contenitore esce dall'ambito. Se l'oggetto socket è stato creato nell'heap, utilizzando l'operatore **new,** si è responsabili dell'utilizzo dell'operatore **delete** per eliminare l'oggetto.

   Il distruttore chiama la funzione membro [Close](../mfc/reference/casyncsocket-class.md#close) dell'oggetto prima di eliminare l'oggetto.

Per un esempio di questa sequenza `CSocket` nel codice (in realtà per un oggetto), vedere [Windows Sockets: Sequence of Operations](../mfc/windows-sockets-sequence-of-operations.md).

## <a name="your-responsibilities-with-casyncsocket"></a><a name="_core_your_responsibilities_with_casyncsocket"></a>Le tue responsabilità con CAsyncSocket

Quando si crea un oggetto della classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), l'oggetto incapsula un handle **Socket** di Windows e fornisce le operazioni su tale handle. Quando si `CAsyncSocket`utilizza , è necessario gestire tutti i problemi che potrebbero verificarsi se si utilizza direttamente l'API. Ad esempio:

- Scenari di "blocco".

- Differenze nell'ordine dei byte tra le macchine di invio e ricezione.

- Conversione tra Unicode e stringhe di set di caratteri multibyte (MBCS).

Per le definizioni di questi termini e informazioni aggiuntive, vedere [Windows Sockets: Blocking](../mfc/windows-sockets-blocking.md), [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md), [Windows Sockets: Converting Strings](../mfc/windows-sockets-converting-strings.md).

Nonostante questi problemi, la classe `CAsycnSocket` può essere la scelta giusta per te se l'applicazione richiede tutta la flessibilità e il controllo che puoi ottenere. In caso contrario, `CSocket` è consigliabile utilizzare la classe. `CSocket`nasconde un sacco di dettagli da voi: pompa i messaggi di `CArchive`Windows durante le chiamate di blocco e ti dà accesso a , che gestisce le differenze di ordine dei byte e la conversione delle stringhe per voi.

Per altre informazioni, vedere:

- [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
