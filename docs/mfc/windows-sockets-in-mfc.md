---
title: "Windows Sockets in MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], Windows Sockets"
  - "socket [C++], MFC"
  - "socket [C++], modelli di programmazione"
  - "Windows Sockets [C++], supporto MFC"
  - "Windows Sockets [C++], modelli di programmazione"
  - "WINSOCK.DLL"
  - "WSOCK32.DLL"
ms.assetid: 1f3c476a-9c68-49fe-9a25-d22971a334d0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Windows Sockets in MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  MFC supporta le Windows Sockets 1 ma non supporta le [Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  Le Windows Sockets 2 innanzitutto sono state introdotte con Windows 98 ed è la versione inclusa con Windows 2000.  
  
 MFC fornisce due modelli per la scrittura di programmi di comunicazione di rete tramite Windows Sockets, inclusi in due classi MFC.  In questo articolo vengono descritti questi modelli e ulteriori dettagli sul supporto delle socket MFC.  Una "socket" è un endpoint di comunicazione: un oggetto tramite il quale l'applicazione comunica con altre applicazioni Windows Sockets attraverso una rete.  
  
 Per informazioni sulle Windows Sockets, inclusa una spiegazione del concetto di socket, vedere [Windows Sockets: Background](../mfc/windows-sockets-background.md).  
  
##  <a name="_core_sockets_programming_models"></a> Modelli di programmazione socket  
 I due modelli di programmazione MFC Windows Sockets sono supportati dalle seguenti classi:  
  
-   `CAsyncSocket`  
  
     Questa classe è incapsulata nelle Windows Sockets API.  [CAsyncSocket](../mfc/reference/casyncsocket-class.md) è per i programmatori che conoscono la programmazione di rete consentendo flessibilità nella programmazione diretta con le socket API, ma inoltre consentono la comodità dell'utilizzo delle funzioni di callback per la notifica degli eventi di rete.  Diversamente dalla creazione dei pacchetti socket in un formato orientato agli oggetti per l'utilizzo in C\+\+, l'unica astrazione aggiuntiva che questa classe fornisce è la conversione delle socket relative a Windows in callback.  Per ulteriori informazioni, vedere [Windows Sockets: Notifiche di socket](../mfc/windows-sockets-socket-notifications.md).  
  
-   `CSocket`  
  
     Questa classe, derivata da `CAsyncSocket`, fornisce un'astrazione di livello superiore per l'utilizzo di socket tramite un oggetto MFC [CArchive](../mfc/reference/carchive-class.md).  Utilizza una socket con un archivio che assomiglia notevolmente all'utilizzo di un protocollo di serializzazione di un file MFC.  Ciò semplifica l'utilizzo del modello `CAsyncSocket`.  [CSocket](../mfc/reference/csocket-class.md) ereditano numerose funzioni membro da `CAsyncSocket` che incapsulano le API Windows Sockets; sarà necessario utilizzare alcune di queste funzioni e comprendere la programmazione con le socket in generale.  Ma `CSocket` gestisce molti aspetti della comunicazione che altrimenti sarebbe necessario gestire manualmente utilizzando le API o la classe `CAsyncSocket`.  Ancora più importante, `CSocket`, fornisce il blocco \(per l'elaborazione in background dei messaggi di windows\), che è essenziale per l'operazione di sincronizzazione di `CArchive`.  
  
 La creazione e l'utilizzo degli oggetti `CSocket` e `CAsyncSocket` vengono descritti in [Windows Sockets: Utilizzo di socket con gli archivi](../mfc/windows-sockets-using-sockets-with-archives.md) e in [Windows Sockets: Utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md).  
  
##  <a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a> Windows Sockets DLLs  
 Il sistema operativo Microsoft Windows supporta le Librerie a collegamento dinamico Windows Sockets \(DLL\).  Visual C\+\+ include i file di intestazione e le librerie appropriate e le specifiche delle Windows Sockets.  
  
> [!NOTE]
>  In Windows NT e Windows 2000, il supporto alle Windows Sockets per applicazioni a 16 bit è basato su WINSOCK.DLL.  Per le applicazioni a 32 bit, il supporto è in WSOCK32.DLL.  Le API fornite sono identiche tranne che nelle versioni a 32 bit dispongono di parametri estesi a 32 bit.  In Win32, è fornito il thread safety.  
  
 Per ulteriori informazioni sulle Windows Sockets, vedere .  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: sequenza di operazioni](../mfc/windows-sockets-sequence-of-operations.md)  
  
-   [Windows Sockets: esempio di socket che utilizzano archivi](../mfc/windows-sockets-example-of-sockets-using-archives.md)  
  
-   [Windows Sockets: funzionamento dei socket con archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md)  
  
-   [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
-   [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)  
  
## Vedere anche  
 [Windows Sockets](../mfc/windows-sockets.md)