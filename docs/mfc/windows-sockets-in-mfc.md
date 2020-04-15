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
ms.openlocfilehash: 8e5562b028d3d9b7cba4b47716b63fd1392c514f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371101"
---
# <a name="windows-sockets-in-mfc"></a>Windows Sockets in MFC

> [!NOTE]
> MFC supporta Windows Sockets 1 ma non [Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2). Windows Sockets 2 è stato fornito per la prima volta con Windows 98 ed è la versione inclusa in Windows 2000.

MFC fornisce due modelli per la scrittura di programmi di comunicazione di rete con Windows Sockets, incorporati in due classi MFC. In questo articolo vengono descritti questi modelli e ulteriori dettagli supporto socket MFC. Un "socket" è un endpoint di comunicazione: un oggetto attraverso il quale l'applicazione comunica con altre applicazioni Windows Sockets attraverso una rete.

Per informazioni su Windows Sockets, inclusa una spiegazione del concetto di socket, vedere [Windows Sockets: Background](../mfc/windows-sockets-background.md).

## <a name="sockets-programming-models"></a><a name="_core_sockets_programming_models"></a>Modelli di programmazione Sockets

I due modelli di programmazione MFC Windows Sockets sono supportati dalle seguenti classi:

- `CAsyncSocket`

   Questa classe incapsula l'API di Windows Sockets.This class encapsulates the Windows Sockets API. [CAsyncSocket](../mfc/reference/casyncsocket-class.md) è per i programmatori che conoscono la programmazione di rete e desiderano la flessibilità di programmazione direttamente all'API socket, ma vogliono anche la comodità delle funzioni di callback per la notifica degli eventi di rete. Oltre ai socket di creazione di pacchetti in formato orientato agli oggetti per l'utilizzo in C, l'unica astrazione aggiuntiva fornita da questa classe è la conversione di alcuni messaggi di Windows correlati ai socket in callback. Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md).

- `CSocket`

   Questa classe, `CAsyncSocket`derivata da , fornisce un'astrazione di livello superiore per l'utilizzo di socket tramite un oggetto [CArchive](../mfc/reference/carchive-class.md) MFC. L'utilizzo di un socket con un archivio è molto simile all'utilizzo del protocollo di serializzazione dei file di MFC. In questo modo è `CAsyncSocket` più facile da usare rispetto al modello. [CSocket](../mfc/reference/csocket-class.md) eredita molte funzioni `CAsyncSocket` membro che incapsulano le API di Windows Sockets; sarà necessario utilizzare alcune di queste funzioni e comprendere la programmazione socket in generale. Ma `CSocket` gestisce molti aspetti della comunicazione che si dovrebbe fare da `CAsyncSocket`soli utilizzando l'API non elaborata o classe . Ancora più `CSocket` importante, fornisce il blocco (con l'elaborazione in `CArchive`background dei messaggi di Windows), che è essenziale per il funzionamento sincrono di .

La creazione `CSocket` `CAsyncSocket` e l'utilizzo di oggetti è descritto in [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md) and [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md).

## <a name="windows-sockets-dlls"></a><a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a>DLL di Windows Sockets

I sistemi operativi Microsoft Windows forniscono le librerie a collegamento dinamico (DLL) di Windows Sockets. In Visual Cè sono stati forniti i file di intestazione e le librerie appropriati e la specifica di Windows Sockets.

Per ulteriori informazioni su Windows Sockets, vedere:

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md)

- [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md)

- [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

- [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets](../mfc/windows-sockets.md)
