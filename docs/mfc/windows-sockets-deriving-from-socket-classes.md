---
title: "Windows Sockets: derivazione dalle classi Socket | Microsoft Docs"
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
  - "classi derivate, da classi socket"
  - "socket [C++], derivazione da classi socket"
  - "Windows Sockets [C++], derivazione da classi socket"
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: derivazione dalle classi Socket
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo vengono descritte alcune delle funzionalità che è possibile ottenere derivando una classe da una delle classi socket.  
  
 È possibile derivare le proprie classi socket da [CAsyncSocket](../mfc/reference/casyncsocket-class.md) o [CSocket](../mfc/reference/csocket-class.md) per aggiungere la propria funzionalità.  In particolare, queste classi forniscono alcune funzioni membro virtuali di cui è possibile eseguire l'override.  Queste funzioni includono [OnReceive](../Topic/CAsyncSocket::OnReceive.md), [OnSend](../Topic/CAsyncSocket::OnSend.md), [OnAccept](../Topic/CAsyncSocket::OnAccept.md), [OnConnect](../Topic/CAsyncSocket::OnConnect.md) e [OnClose](../Topic/CAsyncSocket::OnClose.md).  È possibile eseguire l'override delle funzioni nella classe socket derivata per sfruttare le notifiche che esse forniscono quando si verificano eventi di rete.  Il framework chiama queste funzioni di callback di notifica per ricevere notifiche di eventi importanti riguardanti i socket, come la ricezione di dati di cui è possibile iniziare lettura.  Per ulteriori informazioni sulle funzioni di notifica, vedere [Windows Sockets: notifiche socket](../mfc/windows-sockets-socket-notifications.md).  
  
 Inoltre, la classe `CSocket` fornisce la funzione membro [OnMessagePending](../Topic/CSocket::OnMessagePending.md) \(una funzione avanzata di cui è possibile eseguire l'override\).  MFC chiama tale funzione mentre il socket sta distribuendo messaggi basati su Windows.  È possibile eseguire l'override di `OnMessagePending` per cercare particolari messaggi di Windows e per rispondere ad essi.  
  
 La versione predefinita di `OnMessagePending` fornita nella classe `CSocket` esamina la coda dei messaggi per i messaggi `WM_PAINT` mentre è in attesa di una chiamata di blocco per completare.  Essa invia i messaggi di disegno per migliorare la qualità di visualizzazione.  Oltre a fare qualcosa di utile, viene mostrato un modo con cui si potrebbe eseguire l'override della funzione per conto proprio.  Come esempio ulteriore, considerare l'utilizzo di `OnMessagePending` per l'attività seguente.  Si supponga di visualizzare una finestra di dialogo non modale durante l'attesa una transazione di rete per completare.  La finestra di dialogo contiene un pulsante Annulla che l'utente può utilizzare per annullare transazioni di blocco che impiegano troppo tempo.  L'override di `OnMessagePending` potrebbe distribuire i messaggi relativi a questa finestra di dialogo non modale.  
  
 Nell'override di `OnMessagePending`, restituire **TRUE** o un valore restituito da una chiamata alla versione della classe base di `OnMessagePending`.  Chiamare la versione della classe base se essa esegue il lavoro che si desidera venga fatto.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: ordinamento dei byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)