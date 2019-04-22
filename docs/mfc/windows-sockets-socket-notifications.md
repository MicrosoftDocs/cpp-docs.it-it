---
title: 'Windows Sockets: Notifiche socket'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], notifications
- notifications [MFC], socket
- sockets [MFC], notifications
ms.assetid: 87d5bf70-6e77-49a9-9a64-aaadee2ad018
ms.openlocfilehash: df7bfe8a95221682d0f7f4ebb123bd15b79144d5
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58774334"
---
# <a name="windows-sockets-socket-notifications"></a>Windows Sockets: Notifiche socket

Questo articolo descrive le funzioni di notifica nelle classi socket. Queste funzioni membro sono funzioni di callback chiamato dal framework per notificare all'oggetto socket di eventi importanti. Le funzioni di notifica sono:

- [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive): Notifica che sono presenti dati nel buffer per poter recuperare tramite una chiamata a questo socket [ricezione](../mfc/reference/casyncsocket-class.md#receive).

- [OnSend](../mfc/reference/casyncsocket-class.md#onsend): Notifica che ora possibile inviare dati tramite una chiamata a questo socket [inviare](../mfc/reference/casyncsocket-class.md#send).

- [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept): Notifica a questo socket in ascolto che può accettare richieste di connessione in sospeso chiamando [Accept](../mfc/reference/casyncsocket-class.md#accept).

- [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect): Notifica a questo socket che il tentativo di connessione completato: forse con esito positivo o forse in errore.

- [OnClose](../mfc/reference/casyncsocket-class.md#onclose): Notifica il socket che il socket a che è connesso è stata chiusa.

    > [!NOTE]
    >  È una funzione di notifica aggiuntiva [OnOutOfBandData](../mfc/reference/casyncsocket-class.md#onoutofbanddata). Questa notifica indica il socket di ricezione che il socket di invio "out-of-band" dei dati da inviare. Out-of-band dati sono un canale logicamente indipendente associato a ogni coppia di socket di flusso connessi. Il canale out-of-band viene in genere usato per inviare dati "urgenti". MFC supporta dati out-of-band. Advanced agli utenti che lavorano con la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) potrebbe essere necessario usare il canale di out-of-band, ma gli utenti della classe [CSocket](../mfc/reference/csocket-class.md) consigliabile evitare di utilizzarlo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di questo tipo di dati. Per altre informazioni sui dati out-of-band, vedere la specifica di Windows Sockets, disponibile nel SDK Windows.

Se esegue la derivazione dalla classe `CAsyncSocket`, è necessario eseguire l'override di funzioni di notifica per gli eventi di interesse per l'applicazione di rete. Se si deriva una classe dalla classe `CSocket`, è possibile scegliere se eseguire l'override delle funzioni di notifica di interesse. È anche possibile usare `CSocket` stesso, nel qual caso la notifica di funzioni predefinite per viene eseguita alcuna operazione.

Queste funzioni sono funzioni di callback sottoponibile a override. `CAsyncSocket` e `CSocket` convert messaggi per le notifiche, ma è necessario implementare la notifica di funzionamento di rispondere se si vuole usarli. Le funzioni di notifica vengono chiamate al momento che il socket riceve una notifica di un evento di interesse, ad esempio la presenza di dati da leggere.

MFC chiama le funzioni di notifica per consentono di personalizzare il comportamento del socket al momento che si riceve una notifica. Ad esempio, è possibile chiamare `Receive` dalle `OnReceive` funzione di notifica, vale a dire in being riceve una notifica che sono disponibili dati da leggere, si chiama `Receive` leggerlo. Questo approccio non è necessario, ma lo scenario è valido. In alternativa, è possibile utilizzare la funzione di notifica per tenere traccia dello stato, stampare **traccia** messaggi e così via.

È possibile sfruttare i vantaggi di queste notifiche si esegue l'override delle funzioni di notifica in una classe derivata socket e fornendo un'implementazione.

Durante un'operazione, ad esempio la ricezione o invio di dati, un `CSocket` oggetto diventa sincrona. Durante lo stato sincrono, le notifiche destinate ad altri socket vengono accodate quando il socket corrente è in attesa per la notifica desiderata. (Ad esempio durante un `Receive` chiamata, il socket richiede una notifica per la lettura.) Una volta il socket viene completata l'operazione sincrona e asincrono diventa nuovamente, altri sockets possano iniziare a ricevere le notifiche in coda.

> [!NOTE]
>  Nelle `CSocket`, il `OnConnect` funzione di notifica non viene mai chiamato. Per le connessioni, si chiama `Connect`, che verrà restituito quando la connessione è stata completata (esito positivo o errore). Modalità di gestione delle notifiche di connessione è un dettaglio di implementazione di MFC.

Per informazioni dettagliate su ogni funzione di notifica, vedere la funzione nella classe `CAsyncSocket` nella *riferimento MFC*. Per informazioni sugli esempi MFC e codice sorgente, vedere [esempi relativi a MFC](../overview/visual-cpp-samples.md).

Per altre informazioni, vedere:

- [Windows Sockets: Uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: Funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Il blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: L'ordine dei byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
