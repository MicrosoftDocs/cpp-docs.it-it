---
title: "Windows Sockets: blocco | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "socket in modalità blocco"
  - "socket [C++], comportamento su piattaforme Windows diverse"
  - "socket [C++], modalità blocco"
  - "Windows Sockets [C++], modalità blocco"
  - "Windows Sockets [C++], piattaforme Windows"
ms.assetid: 10aca9b1-bfba-41a8-9c55-ea8082181e63
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: blocco
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo e nei due articoli correlati vengono illustrati i diversi problemi nella programmazione Windows Sockets.  Questo articolo descrive il blocco.  Gli altri problemi vengono analizzati negli articoli: [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md) e [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md).  
  
 Se si utilizza o si deriva dalla classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md), sarà necessario gestire questi problemi.  Se si utilizza o si deriva dalla classe [CSocket](../mfc/reference/csocket-class.md), MFC li gestisce automaticamente.  
  
## Blocco  
 Un socket può essere in "modalità bloccante" o in "modalità non bloccante". Le funzioni dei sockets in modalità bloccante \(o sincrona\) non ritornano finché non possano completare la loro azione.  Si parla in questo caso di blocco perché il socket, la cui funzione è stata chiamata, non può eseguire nessuna operazione \(è bloccato\) finché la chiamata non ritorna.  Una chiamata alla funzione membro **Receive**, ad esempio, potrebbe richiedere un tempo arbitrariamente lungo per il completamento poiché deve attendere l'invio dall'applicazione mittente \(se si utilizza `CSocket`, oppure `CAsyncSocket` con il blocco\).  Se un oggetto `CAsyncSocket` è in modalità non bloccante \(opera in modo asincrono\), la chiamata ritorna immediatamente e il codice di errore corrente, recuperabile con la funzione membro [GetLastError](../Topic/CAsyncSocket::GetLastError.md), è **WSAEWOULDBLOCK**, che indica che la chiamata lo avrebbe bloccato se non fosse ritornato immediatamente a causa della modalità. \(`CSocket` non restituisce mai **WSAEWOULDBLOCK**.  La classe gestisce automaticamente il blocco.\)  
  
 Il comportamento dei socket è diverso nei sistemi operativi a 32 e 64 bit \(quali Windows 95 o Windows 98\) rispetto ai sistemi operativi a 16 bit \(quali Windows 3.1\).  A differenza dei sistemi operativi a 16 bit, i sistemi operativi a 32 e 64 bit utilizzano il multitasking di tipo preemptive e forniscono il multithreading.  Nella versione dei sistemi operativi a 32 e 64 bit, è possibile inserire i socket in thread di lavoro distinti.  Un socket in un thread può bloccarsi senza interferire con le altre attività dell'applicazione e senza impiegare il tempo di calcolo nel blocco.  Per informazioni sulla programmazione multithreading, vedere l'articolo [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
> [!NOTE]
>  Nelle applicazioni multithreading, è possibile utilizzare la natura del blocco di `CSocket` per semplificare la progettazione del programma senza influenzare la velocità di risposta dell'interfaccia utente.  Gestendo le interazioni utente nel thread principale e l'elaborazione di `CSocket` in thread differenti, è possibile separare queste operazioni logiche.  In un'applicazione che non è multithreading, queste due attività devono essere combinate e gestite come un singolo thread, che usualmente significa utilizzare `CAsyncSocket` in modo da poter gestire le richieste di comunicazione su richiesta oppure eseguire l'override di `CSocket::OnMessagePending` per gestire le azioni dell'utente durante un'attività sincrona di lunga durata.  
  
 Il resto di questa discussione è rivolto ai programmatori che utilizzano sistemi operativi a 16 bit:  
  
 In genere, se si utilizza `CAsyncSocket`, è consigliabile eseguire operazioni asincrone anziché utilizzare operazioni bloccanti.  Nelle operazioni asincrone, dal punto in cui viene ricevuto un codice di errore **WSAEWOULDBLOCK** dopo aver chiamato **Receive**, ad esempio, si attende finché la funzione membro `OnReceive` non viene chiamata per indicare che è possibile leggere nuovamente.  Le chiamate asincrone vengono eseguite chiamando la funzione di notifica di callback appropriata del socket, come [OnReceive](../Topic/CAsyncSocket::OnReceive.md).  
  
 In Windows, le chiamate bloccanti sono considerate non corrette.  Per impostazione predefinita, [CAsyncSocket](../mfc/reference/casyncsocket-class.md) supporta le chiamate asincrone ed è necessario gestire il blocco manualmente utilizzando le notifiche di callback.  La classe [CSocket](../mfc/reference/csocket-class.md) è invece sincrona.  Immette i messaggi di Windows e gestisce il blocco automaticamente.  
  
 Per ulteriori informazioni sul blocco, vedere la specifica di Windows Sockets.  Per ulteriori informazioni sulle funzioni "On", vedere [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md) e [Windows Sockets: derivazione dalle classi Socket](../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: sfondo](../mfc/windows-sockets-background.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [CAsyncSocket::OnSend](../Topic/CAsyncSocket::OnSend.md)