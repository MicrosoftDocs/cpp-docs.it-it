---
title: Windows Sockets in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- WINSOCK.DLL
- sockets [MFC], programming models
- MFC, Windows Sockets
- Windows Sockets [MFC], MFC support
- Windows Sockets [MFC], programming models
- WSOCK32.DLL
- sockets [MFC], MFC
ms.assetid: 1f3c476a-9c68-49fe-9a25-d22971a334d0
ms.openlocfilehash: 44a4838a1cd863bd484701966a156be9f61f8988
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69510623"
---
# <a name="windows-sockets-in-mfc"></a>Windows Sockets in MFC

> [!NOTE]
>  MFC supporta Windows Sockets 1 ma non supporta [Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2). Windows Sockets 2 è stato prima fornito con Windows 98 ed è la versione inclusa in Windows 2000.

MFC fornisce due modelli per la scrittura di programmi di comunicazione di rete con Windows Sockets, incorporati in due classi MFC. Questo articolo descrive questi modelli e altri dettagli sul supporto dei socket MFC. Un "socket" è un endpoint di comunicazione: un oggetto attraverso il quale l'applicazione comunica con altre applicazioni Windows Sockets in rete.

Per informazioni su Windows Sockets, inclusa una spiegazione del concetto di socket, [vedere Windows Sockets: Sfondo](../mfc/windows-sockets-background.md).

##  <a name="_core_sockets_programming_models"></a>Modelli di programmazione Sockets

I due modelli di programmazione Windows Sockets MFC sono supportati dalle classi seguenti:

- `CAsyncSocket`

   Questa classe incapsula l'API Windows Sockets. [CAsyncSocket](../mfc/reference/casyncsocket-class.md) è destinata ai programmatori che conoscono la programmazione di rete e desiderano la flessibilità della programmazione diretta per l'API Sockets, ma desiderano anche la convenienza delle funzioni di callback per la notifica degli eventi di rete. Oltre alla creazione di pacchetti di socket nel formato orientato a C++oggetti per l'utilizzo in, l'unica astrazione aggiuntiva fornita da questa classe consiste nella conversione di alcuni messaggi di Windows correlati al socket in callback. Per ulteriori informazioni, vedere [Windows Sockets: Notifiche](../mfc/windows-sockets-socket-notifications.md)socket.

- `CSocket`

   Questa classe, derivata da `CAsyncSocket`, fornisce un'astrazione di livello superiore per l'utilizzo dei socket tramite un oggetto [CArchive](../mfc/reference/carchive-class.md) MFC. L'uso di un socket con un archivio è molto simile all'uso del protocollo di serializzazione dei file di MFC. In questo modo è più semplice utilizzare rispetto `CAsyncSocket` al modello. [CSocket](../mfc/reference/csocket-class.md) eredita molte funzioni membro da `CAsyncSocket` che incapsulano le API di Windows Sockets. è necessario usare alcune di queste funzioni e comprendere in generale la programmazione dei socket. Ma `CSocket` gestisce molti aspetti della comunicazione che sarebbe necessario eseguire manualmente usando l'API o la classe `CAsyncSocket`non elaborata. Soprattutto, `CSocket` fornisce un blocco (con elaborazione in background dei messaggi di Windows), essenziale per l'operazione sincrona di `CArchive`.

La creazione e `CSocket` l' `CAsyncSocket` utilizzo di oggetti e [sono descritti in Windows Sockets: Uso di socket con](../mfc/windows-sockets-using-sockets-with-archives.md) archivi [e Windows Sockets: Uso della classe](../mfc/windows-sockets-using-class-casyncsocket.md)CAsyncSocket.

##  <a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a>Dll Windows Sockets

I sistemi operativi Microsoft Windows forniscono le librerie di collegamento dinamico (DLL) di Windows Sockets. L' C++ oggetto visivo fornisce le librerie e i file di intestazione appropriati e la specifica di Windows Sockets.

Per ulteriori informazioni su Windows Sockets, vedere:

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagrammi](../mfc/windows-sockets-datagram-sockets.md)

- [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: sequenza delle operazioni](../mfc/windows-sockets-sequence-of-operations.md)

- [Windows Sockets: esempio di socket che usano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: derivazione da classi socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: notifiche dei socket](../mfc/windows-sockets-socket-notifications.md)

- [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: ordine dei byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

- [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets](../mfc/windows-sockets.md)
