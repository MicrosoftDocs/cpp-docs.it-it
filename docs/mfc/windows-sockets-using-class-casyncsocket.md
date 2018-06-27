---
title: 'Windows Sockets: Utilizzo della classe CAsyncSocket | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CAsyncSocket
dev_langs:
- C++
helpviewer_keywords:
- CAsyncSocket class [MFC], programming model
- Windows Sockets [MFC], asynchronous
- sockets [MFC], converting between Unicode and MBCS strings
- SOCKET handle
- sockets [MFC], asynchronous operation
- Windows Sockets [MFC], converting Unicode and MBCS strings
ms.assetid: 825dae17-7c1b-4b86-8d6c-da7f1afb5d8d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dc461a0a2325f768711f6d7529949ee24a1b4a25
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954884"
---
# <a name="windows-sockets-using-class-casyncsocket"></a>Windows Sockets: utilizzo della classe CAsyncSocket
Questo articolo illustra come utilizzare la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md). Tenere presente che questa classe incapsula Windows Sockets API a un livello molto basso. `CAsyncSocket` deve essere utilizzato dai programmatori che conosce le comunicazioni di rete in modo dettagliato ma si desidera la praticità di callback per la notifica degli eventi di rete. Basato su questo presupposto, questo articolo fornisce solo istruzioni di base. È consigliabile probabilmente usare `CAsyncSocket` se si desidera semplicità di Windows Sockets di gestione di più protocolli di rete in un'applicazione MFC, ma non si desidera sacrificare la flessibilità. Potrebbe inoltre ritieni che è possibile ottenere una maggiore efficienza programmazione delle comunicazioni più diretta rispetto Impossibile utilizzando il modello alternativo più generale della classe `CSocket`.  
  
 `CAsyncSocket` è documentato nel *riferimenti alla libreria MFC*. Visual C++ fornisce anche la specifica Windows Sockets, che si trova in Windows SDK. I dettagli vengono lasciati all'utente. Visual C++ non fornisce un'applicazione di esempio per `CAsyncSocket`.  
  
 Se si non conoscono elevata delle comunicazioni di rete e si desidera una semplice soluzione, usare una classe [CSocket](../mfc/reference/csocket-class.md) con un `CArchive` oggetto. Vedere [Windows Sockets: utilizzo dei socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md) per altre informazioni.  
  
 Questo articolo illustra le attività seguenti:  
  
-   Creazione e utilizzo di un `CAsyncSocket` oggetto.  
  
-   [Responsabilità dell'utente con CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).  
  
##  <a name="_core_creating_and_using_a_casyncsocket_object"></a> Creazione e utilizzo di un oggetto CAsyncSocket  
  
#### <a name="to-use-casyncsocket"></a>Per utilizzare CAsyncSocket  
  
1.  Costruire un [CAsyncSocket](../mfc/reference/casyncsocket-class.md) dell'oggetto e utilizzare l'oggetto per creare l'oggetto sottostante **SOCKET** gestire.  
  
     La creazione di un socket segue lo schema MFC di due fasi.  
  
     Ad esempio:  
  
     [!code-cpp[NVC_MFCSimpleSocket#3](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_1.cpp)]  
  
     oppure  
  
     [!code-cpp[NVC_MFCSimpleSocket#4](../mfc/codesnippet/cpp/windows-sockets-using-class-casyncsocket_2.cpp)]  
  
     Il primo costruttore crea un `CAsyncSocket` oggetto nello stack. Il secondo costruttore crea un `CAsyncSocket` nell'heap. Il primo [crea](../mfc/reference/casyncsocket-class.md#create) chiamata precedente Usa i parametri predefiniti per creare un socket di flusso. Il secondo `Create` chiamata crea un socket di datagramma con una porta specificata e l'indirizzo. (È possibile utilizzare `Create` versione con dei metodi di costruzione.)  
  
     I parametri per `Create` sono:  
  
    -   Una "porta": valore short integer.  
  
         Per un socket server, è necessario specificare una porta. Per un socket client, è in genere accettare il valore predefinito per questo parametro, che consente di selezionare una porta di Windows Sockets.  
  
    -   Un tipo di socket: **SOCK_STREAM** (impostazione predefinita) o **SOCK_DGRAM**.  
  
    -   Un socket "indirizzo", ad esempio "ftp.microsoft.com" o "128.56.22.8".  
  
         Questo è il tuo indirizzo IP (Internet Protocol) nella rete. Si utilizzerà probabilmente sempre il valore predefinito per questo parametro.  
  
     La porta"condizioni" e "indirizzo socket" sono illustrati in [Windows Sockets: porte e indirizzi Socket](../mfc/windows-sockets-ports-and-socket-addresses.md).  
  
2.  Se il socket è un client, connettere l'oggetto socket a un server socket, utilizzando [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect).  
  
     oppure  
  
     Se il socket è un server, impostare il socket a mettersi in ascolto (con [CAsyncSocket:: Listen](../mfc/reference/casyncsocket-class.md#listen)) per i tentativi di connessione da un client. Dopo aver ricevuto una richiesta di connessione, lo accetta con [CAsyncSocket:: Accept](../mfc/reference/casyncsocket-class.md#accept).  
  
     Dopo avere accettato la connessione, è possibile eseguire attività quali la convalida delle password.  
  
    > [!NOTE]
    >  Il `Accept` membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare `Accept`. Se l'oggetto socket esce dall'ambito, la connessione verrà chiusa. Non chiamare `Create` per questo nuovo oggetto socket. Per un esempio, vedere l'articolo [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).  
  
3.  Le comunicazioni con altri socket chiamando il `CAsyncSocket` funzioni membro dell'oggetto che incapsulano le funzioni API Windows Sockets.  
  
     Vedere la classe specifica Windows Sockets [CAsyncSocket](../mfc/reference/casyncsocket-class.md) nel *riferimenti alla libreria MFC*.  
  
4.  Eliminare definitivamente il `CAsyncSocket` oggetto.  
  
     Se l'oggetto socket è stato creato nello stack, il relativo distruttore viene chiamato quando la funzione contenitore esce dall'ambito. Se l'oggetto socket è stato creato nell'heap, utilizzando il **nuova** operatore, è responsabile per l'utilizzo di **eliminare** operatore da eliminare definitivamente l'oggetto.  
  
     Il distruttore chiama l'oggetto [Chiudi](../mfc/reference/casyncsocket-class.md#close) funzione membro prima dell'eliminazione dell'oggetto.  
  
 Per un esempio di questa sequenza di codice (effettivamente per una `CSocket` oggetto), vedere [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md).  
  
##  <a name="_core_your_responsibilities_with_casyncsocket"></a> Responsabilità dell'utente con CAsyncSocket  
 Quando si crea un oggetto della classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), l'oggetto incapsula Windows **SOCKET** gestire e fornisce le operazioni su tale handle. Quando si utilizza `CAsyncSocket`, è necessario gestire con tutti i problemi verificherebbero se Usa direttamente l'API. Ad esempio:  
  
-   Scenari di "Blocco".  
  
-   Differenze nell'ordine di byte compreso tra l'invio e ricezione macchine.  
  
-   Conversione tra caratteri Unicode e multibyte impostare le stringhe (MBCS).  
  
 Per le definizioni di questi termini e ulteriori informazioni, vedere [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md), [Windows Sockets: ordinamento dei Byte](../mfc/windows-sockets-byte-ordering.md), [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md) .  
  
 Nonostante questi problemi, classe `CAsycnSocket` potrebbe essere la scelta giusta per l'utente se l'applicazione richiede la flessibilità e controllo è possibile ottenere. Se non è consigliabile usare classe `CSocket` invece. `CSocket` nasconde una grande quantità di dettagli da parte dell'utente: it pump Windows messaggi durante le chiamate di blocco e consente l'accesso a `CArchive`, che gestisce le differenze nell'ordine di byte e la conversione delle stringhe.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

