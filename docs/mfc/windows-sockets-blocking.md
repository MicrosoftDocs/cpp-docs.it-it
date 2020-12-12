---
description: 'Altre informazioni su: Windows Sockets: blocco'
title: 'Windows Sockets: Blocco'
ms.date: 11/04/2016
helpviewer_keywords:
- sockets [MFC], blocking mode
- Windows Sockets [MFC], Windows platforms
- Windows Sockets [MFC], blocking mode
- sockets [MFC], behavior on different Windows platforms
- blocking mode sockets
ms.assetid: 10aca9b1-bfba-41a8-9c55-ea8082181e63
ms.openlocfilehash: 21d1a2fb635f3d45e639c950a7ad1748dc3dda74
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197452"
---
# <a name="windows-sockets-blocking"></a>Windows Sockets: Blocco

In questo articolo e nei due articoli correlati vengono illustrati diversi problemi che si presentano nella programmazione Windows Sockets. Questo articolo descrive il blocco. Gli altri problemi sono trattati negli articoli: [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md) e [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).

Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi manualmente. Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.

## <a name="blocking"></a>Processi bloccati

Un socket può essere in "modalità blocco" o in "modalità non di blocco". Le funzioni dei socket in modalità blocco (o sincrona) non restituiscono risultati finché non possono completare la propria azione. Si parla in questo caso di blocco perché il socket, la cui funzione è stata chiamata, non può eseguire alcuna operazione (è bloccato) finché la chiamata non restituisce il risultato. Una chiamata alla `Receive` funzione membro, ad esempio, potrebbe richiedere un tempo arbitrariamente lungo per essere completata durante l'attesa dell'invio da parte dell'applicazione mittente, ovvero se si utilizza o si `CSocket` utilizza `CAsyncSocket` with blocking. Se un `CAsyncSocket` oggetto è in modalità non di blocco (operando in modo asincrono), la chiamata restituisce immediatamente un risultato e il codice di errore corrente, recuperabile con la funzione membro [GetLastError](../mfc/reference/casyncsocket-class.md#getlasterror) , è **WSAEWOULDBLOCK**, che indica che la chiamata avrebbe dovuto essere bloccata e non restituita immediatamente a causa della modalità. `CSocket`non restituisce mai **WSAEWOULDBLOCK**. La classe gestisce automaticamente il blocco.

Il comportamento dei socket è diverso nei sistemi operativi a 32 e a 64 bit (quali Windows 95 o Windows 98) rispetto ai sistemi operativi a 16 bit (quali Windows 3.1). A differenza dei sistemi operativi a 16 bit, i sistemi operativi a 32 e a 64 bit utilizzano il multitasking di tipo preemptive e forniscono il multithreading. Nei sistemi operativi a 32 e a 64 bit è possibile inserire i socket in thread di lavoro distinti. Un socket in un thread può bloccarsi senza interferire con le altre attività dell'applicazione e senza impiegare il tempo di calcolo nel blocco. Per informazioni sulla programmazione multithread, vedere l'articolo [multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

> [!NOTE]
> Nelle applicazioni multithreading è possibile utilizzare la natura del blocco di `CSocket` per semplificare la progettazione del programma senza influenzare la velocità di risposta dell'interfaccia utente. Gestendo le interazioni utente nel thread principale e l'elaborazione di `CSocket` in thread differenti, è possibile separare queste operazioni logiche. In un'applicazione che non è multithreading, queste due attività devono essere combinate e gestite come un singolo thread, che in genere significa utilizzare `CAsyncSocket` in modo da poter gestire le richieste di comunicazione su richiesta oppure eseguire l'override di `CSocket::OnMessagePending` per gestire le azioni dell'utente durante un'attività sincrona di lunga durata.

Il resto di questa discussione è rivolto ai programmatori che utilizzano sistemi operativi a 16 bit:

In genere, se si utilizza `CAsyncSocket`, è consigliabile eseguire operazioni asincrone anziché utilizzare operazioni di blocco. Nelle operazioni asincrone, dal punto in cui si riceve un codice di errore **WSAEWOULDBLOCK** dopo aver chiamato `Receive` , ad esempio, si attende `OnReceive` che venga chiamata la funzione membro per notificare che è possibile leggere di nuovo. Le chiamate asincrone vengono effettuate richiamando la funzione di notifica di callback appropriata del socket, ad esempio [OnReceive](../mfc/reference/casyncsocket-class.md#onreceive).

In Windows, le chiamate di blocco sono considerate pratiche non corrette. Per impostazione predefinita, [CAsyncSocket](../mfc/reference/casyncsocket-class.md) supporta le chiamate asincrone ed è necessario gestire il blocco usando le notifiche di callback. La classe [CSocket](../mfc/reference/csocket-class.md), d'altra parte, è sincrona. Immette i messaggi di Windows e gestisce il blocco automaticamente.

Per ulteriori informazioni sul blocco, vedere la specifica di Windows Sockets. Per ulteriori informazioni sulle funzioni "on", vedere [Windows Sockets: socket Notifications](../mfc/windows-sockets-socket-notifications.md) and [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md).

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Sfondo](../mfc/windows-sockets-background.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CAsyncSocket:: OnSend](../mfc/reference/casyncsocket-class.md#onsend)
