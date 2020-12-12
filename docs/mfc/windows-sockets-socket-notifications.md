---
description: 'Altre informazioni su: Windows Sockets: notifiche socket'
title: 'Windows Sockets: notifiche socket'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], notifications
- notifications [MFC], socket
- sockets [MFC], notifications
ms.assetid: 87d5bf70-6e77-49a9-9a64-aaadee2ad018
ms.openlocfilehash: 856e954050753545a7ff64d3e111c648dc0284d7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207657"
---
# <a name="windows-sockets-socket-notifications"></a>Windows Sockets: notifiche socket

Questo articolo descrive le funzioni di notifica nelle classi del socket. Queste funzioni membro sono funzioni di callback chiamate dal Framework per notificare all'oggetto Socket gli eventi importanti. Le funzioni di notifica sono:

- [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive): notifica a questo socket che sono presenti dati nel buffer da recuperare chiamando [Receive](../mfc/reference/casyncsocket-class.md#receive).

- [OnSend](../mfc/reference/casyncsocket-class.md#onsend): notifica a questo socket che ora può inviare dati chiamando [Send](../mfc/reference/casyncsocket-class.md#send).

- [OnAccept](../mfc/reference/casyncsocket-class.md#onaccept): notifica a questo socket di ascolto che può accettare richieste di connessione in sospeso chiamando [Accept](../mfc/reference/casyncsocket-class.md#accept).

- [OnConnect](../mfc/reference/casyncsocket-class.md#onconnect): notifica a questo socket di connessione che il tentativo di connessione è stato completato, forse correttamente o forse in errore.

- [OnClose](../mfc/reference/casyncsocket-class.md#onclose): notifica a questo socket che il socket a cui è connesso è stato chiuso.

    > [!NOTE]
    >  Una funzione di notifica aggiuntiva è [OnOutOfBandData](../mfc/reference/casyncsocket-class.md#onoutofbanddata). Questa notifica indica al socket di ricezione che il socket di invio ha dati fuori banda da inviare. I dati fuori banda sono un canale logicamente indipendente associato a ogni coppia di socket di flusso connessi. Il canale fuori banda viene in genere usato per inviare dati "urgenti". MFC supporta i dati fuori banda. Per gli utenti avanzati che lavorano con la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) potrebbe essere necessario usare il canale fuori banda, ma gli utenti della classe [CSocket](../mfc/reference/csocket-class.md) sono sconsigliati di usarlo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di tali dati. Per ulteriori informazioni sui dati fuori banda, vedere la specifica di Windows Sockets, disponibile nel Windows SDK.

Se si deriva dalla classe `CAsyncSocket` , è necessario eseguire l'override delle funzioni di notifica per gli eventi di rete di interesse per l'applicazione. Se si deriva una classe dalla classe `CSocket` , è possibile scegliere se eseguire l'override delle funzioni di notifica di interesse. È anche possibile usare `CSocket` se stesso, nel qual caso le funzioni di notifica predefinite non eseguiranno alcuna operazione.

Queste funzioni sono funzioni di callback sottoponibili a override. `CAsyncSocket` e `CSocket` convertono i messaggi in notifiche, ma è necessario implementare il modo in cui le funzioni di notifica rispondono se si desidera utilizzarle. Le funzioni di notifica vengono chiamate nel momento in cui il socket riceve una notifica di un evento di interesse, ad esempio la presenza di dati da leggere.

MFC chiama le funzioni di notifica per consentire di personalizzare il comportamento del socket al momento della notifica. Ad esempio, è possibile chiamare `Receive` dalla `OnReceive` funzione di notifica, ovvero, quando si riceve la notifica che sono presenti dati da leggere, si chiama `Receive` per leggerli. Questo approccio non è necessario, ma è uno scenario valido. In alternativa, è possibile utilizzare la funzione di notifica per tenere traccia dello stato di avanzamento, stampare i messaggi di **traccia** e così via.

È possibile sfruttare queste notifiche eseguendo l'override delle funzioni di notifica in una classe Socket derivata e fornendo un'implementazione.

Durante un'operazione come la ricezione o l'invio di dati, un `CSocket` oggetto diventa sincrono. Durante lo stato sincrono, le notifiche destinate ad altri socket vengono accodate mentre il socket corrente attende la notifica che desidera. Ad esempio, durante una `Receive` chiamata, il socket desidera una notifica per la lettura. Una volta che il socket ha completato l'operazione sincrona e diventa nuovamente asincrono, altri socket possono iniziare a ricevere le notifiche in coda.

> [!NOTE]
> In `CSocket` la `OnConnect` funzione di notifica non viene mai chiamata. Per le connessioni, viene chiamato `Connect` , che verrà restituito quando la connessione viene completata (correttamente o in caso di errore). Il modo in cui vengono gestite le notifiche di connessione è un dettaglio di implementazione MFC.

Per informazioni dettagliate su ogni funzione di notifica, vedere la funzione `CAsyncSocket` in classe in *riferimenti a MFC*. Per informazioni sul codice sorgente e sugli esempi di MFC, vedere [esempi di MFC](../overview/visual-cpp-samples.md#mfc-samples).

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: derivazione da classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: ordinamento byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
