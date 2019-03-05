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
ms.openlocfilehash: 9992d2054c04eea1b3b63d591601acf0091acb5e
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57266784"
---
# <a name="windows-sockets-in-mfc"></a>Windows Sockets in MFC

> [!NOTE]
>  MFC supporta Windows Sockets 1 ma non supporta [Windows Sockets 2](/windows/desktop/WinSock/windows-sockets-start-page-2). Windows Sockets 2 prima di tutto forniti con Windows 98 e corrisponde alla versione inclusa in Windows 2000.

MFC fornisce due modelli per la scrittura di programmi di comunicazione di rete con i socket di Windows, rappresentate da due classi MFC. Questo articolo illustra questi modelli e altri dettagli MFC socket supportati. Un socket di"" è un endpoint di comunicazione: un oggetto attraverso il quale l'applicazione comunica con altre applicazioni di Windows Sockets in una rete.

Per informazioni sui socket di Windows, inclusa una spiegazione del concetto di socket, vedere [Windows Sockets: sfondo](../mfc/windows-sockets-background.md).

##  <a name="_core_sockets_programming_models"></a> Modelli di programmazione di socket

I socket di Windows di MFC due modelli di programmazione sono supportati dalle classi seguenti:

- `CAsyncSocket`

   Questa classe incapsula l'API di socket di Windows. [CAsyncSocket](../mfc/reference/casyncsocket-class.md) è per i programmatori che conoscono la programmazione di rete e si vuole la flessibilità della programmazione direttamente per l'API dei socket ma anche la praticità di funzioni di callback per la notifica degli eventi di rete. Invece di assemblare i socket in formato orientate a oggetti per l'uso in C++, l'astrazione solo altre che fornisce questa classe converte determinati messaggi di Windows basate su socket in callback. Per altre informazioni, vedere [Windows Sockets: Le notifiche di socket](../mfc/windows-sockets-socket-notifications.md).

- `CSocket`

   Questa classe, derivata da `CAsyncSocket`, fornisce un'astrazione di livello superiore per l'uso di socket attraverso un MFC [CArchive](../mfc/reference/carchive-class.md) oggetto. Uso di un socket con un archivio notevolmente è simile all'uso di protocollo di serializzazione di file di MFC. Questo rende più semplice da usare rispetto il `CAsyncSocket` modello. [CSocket](../mfc/reference/csocket-class.md) eredita molte funzioni di membro da `CAsyncSocket` che incapsulano le API di socket di Windows, è necessario utilizzare alcune di queste funzioni e comprendere la programmazione a livello generale dei socket. Ma `CSocket` gestisce molti aspetti della comunicazione che sarebbe necessario eseguire manualmente usando l'API di basso livello oppure classe `CAsyncSocket`. Soprattutto `CSocket` fornisce il blocco (con l'elaborazione in background dei messaggi di Windows), che è essenziale per l'operazione sincrona di `CArchive`.

Creazione e utilizzo `CSocket` e `CAsyncSocket` oggetti è descritto nella [Windows Sockets: Utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: Uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md).

##  <a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a> Windows Sockets DLL

I sistemi operativi Microsoft Windows fornisce librerie a collegamento dinamico (DLL) di Windows Sockets. Visual C++ fornisce i file di intestazione appropriato e le librerie e la specifica di Windows Sockets.

Per altre informazioni sui socket di Windows, vedere:

- [Windows Sockets: Socket di Stream](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

- [Windows Sockets: Utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Sequenza delle operazioni](../mfc/windows-sockets-sequence-of-operations.md)

- [Windows Sockets: Esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: Funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: Notifiche socket](../mfc/windows-sockets-socket-notifications.md)

- [Windows Sockets: Il blocco](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: L'ordine dei byte](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md)

- [Windows Sockets: Porte e indirizzi Socket](../mfc/windows-sockets-ports-and-socket-addresses.md)

## <a name="see-also"></a>Vedere anche

[Windows Sockets](../mfc/windows-sockets.md)
