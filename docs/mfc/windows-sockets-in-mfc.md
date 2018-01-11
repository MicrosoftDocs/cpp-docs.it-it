---
title: Windows Sockets di MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- WINSOCK.DLL
- sockets [MFC], programming models
- MFC, Windows Sockets
- Windows Sockets [MFC], MFC support
- Windows Sockets [MFC], programming models
- WSOCK32.DLL
- sockets [MFC], MFC
ms.assetid: 1f3c476a-9c68-49fe-9a25-d22971a334d0
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bdade770449b7ae5db9db9a170198b81cbeaf970
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-sockets-in-mfc"></a>Windows Sockets in MFC
> [!NOTE]
>  MFC supporta Windows Sockets 1 ma non supporta [Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673). Windows Sockets 2 innanzitutto fornito con Windows 98 ed è la versione inclusa in Windows 2000.  
  
 MFC fornisce due modelli per la scrittura di programmi di comunicazione di rete con i socket di Windows, rappresentate da due classi MFC. Questo articolo vengono descritti questi modelli e altri dettagli MFC socket supportati. Un "socket" è un endpoint di comunicazione: un oggetto attraverso il quale l'applicazione comunica con altre applicazioni di Windows Sockets in una rete.  
  
 Per informazioni sui socket di Windows, inclusa una spiegazione del concetto di socket, vedere [Windows Sockets: sfondo](../mfc/windows-sockets-background.md).  
  
##  <a name="_core_sockets_programming_models"></a>I modelli di programmazione di socket  
 Modelli di programmazione MFC Windows Sockets due sono supportati dalle classi seguenti:  
  
-   `CAsyncSocket`  
  
     Questa classe incapsula le API di Windows Sockets. [CAsyncSocket](../mfc/reference/casyncsocket-class.md) è per i programmatori che conoscono la programmazione di rete e necessario disporre della flessibilità di programmazione direttamente ai socket di API al contempo la praticità di funzioni di callback per la notifica degli eventi di rete. Invece di assemblare i socket in modulo orientata agli oggetti per l'utilizzo in C++, l'astrazione solo aggiuntive di che questa classe fornisce la conversione determinati messaggi di Windows socket correlati nel callback. Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../mfc/windows-sockets-socket-notifications.md).  
  
-   `CSocket`  
  
     Questa classe, derivata da `CAsyncSocket`, fornisce un'astrazione di livello superiore per l'utilizzo di socket tramite MFC [CArchive](../mfc/reference/carchive-class.md) oggetto. L'uso di un socket con un archivio notevolmente è simile all'utilizzo di protocollo di serializzazione di file MFC. Questo rende più semplice da utilizzare rispetto di `CAsyncSocket` modello. [CSocket](../mfc/reference/csocket-class.md) eredita molte funzioni di membro da `CAsyncSocket` che incapsulano le API di Windows Sockets; è necessario utilizzare alcune di queste funzioni e comprendere la programmazione in genere dei socket. Ma `CSocket` gestisce molti aspetti della comunicazione che occorre eseguire autonomamente usando l'API non elaborato o classe `CAsyncSocket`. In particolare, `CSocket` fornisce il blocco (con elaborazione in background dei messaggi di Windows), che sono essenziali per l'operazione sincrona di `CArchive`.  
  
 Creazione e utilizzo di `CSocket` e `CAsyncSocket` oggetti è descritto nella [Windows Sockets: utilizzo dei socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md).  
  
##  <a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a>DLL di Windows Sockets  
 I sistemi operativi Microsoft Windows fornisce le librerie di collegamento dinamico (DLL) di Windows Sockets. Visual C++ fornisce i file di intestazione appropriati e le librerie e la specifica Windows Sockets.  
  
> [!NOTE]
>  In Windows NT e Windows 2000, il supporto di Windows Sockets per applicazioni a 16 bit si basa su WINSOCK. DLL. Per le applicazioni a 32 bit, il supporto è in WSOCK32. DLL. Le API fornite sono identiche ad eccezione del fatto che le versioni a 32 bit i parametri sono estesi a 32 bit. In Win32, viene fornito sia thread-safe.  
  
 Per ulteriori informazioni sui socket di Windows, vedere:  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md)  
  
-   [Windows Sockets: esempio di socket che usano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md)  
  
-   [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
-   [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets](../mfc/windows-sockets.md)

