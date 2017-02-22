---
title: "Windows Sockets: notifiche socket | Microsoft Docs"
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
  - "notifiche, socket"
  - "socket [C++], notifiche"
  - "Windows Sockets [C++], notifiche"
ms.assetid: 87d5bf70-6e77-49a9-9a64-aaadee2ad018
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Windows Sockets: notifiche socket
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo vengono descritte le funzioni di notifica nelle classi di socket.  Queste funzioni membro sono funzioni di callback che il framework chiama per notificare all'oggetto socket degli eventi importanti.  Le funzioni di notifica sono:  
  
-   [OnReceive](../Topic/CAsyncSocket::OnReceive.md): Notifica questo blocco che sono presenti dati nel buffer affinché recuperi chiamando [Di ricezione](../Topic/CAsyncSocket::Receive.md).  
  
-   [OnSend](../Topic/CAsyncSocket::OnSend.md): Notifica questo blocco che ora può inviare dati chiamando [Invia](../Topic/CAsyncSocket::Send.md).  
  
-   [OnAccept](../Topic/CAsyncSocket::OnAccept.md): Notifica questo socket condizione in ascolto in grado di accettare in attesa di richieste di connessione chiamando [Accetta](../Topic/CAsyncSocket::Accept.md).  
  
-   [OnConnect](../Topic/CAsyncSocket::OnConnect.md): Notifica il connettore che il tentativo di connessione ha completato: forse correttamente o eventualmente in errore.  
  
-   [OnClose](../Topic/CAsyncSocket::OnClose.md): Notifica questo blocco che il blocco connesso a chiuso.  
  
    > [!NOTE]
    >  Una funzione di notifica aggiuntiva è [OnOutOfBandData](../Topic/CAsyncSocket::OnOutOfBandData.md).  Questa notifica indica al blocco di ricezione che il blocco inviando dispone di dati "fuori banda" da inviare.  I dati fuori banda sono un canale logicamente indipendente associato a ogni coppia di socket di flusso collegati.  Il canale fuori banda in genere utilizzato per inviare i dati "urgenti".  Dati fuori banda di MFC supporta.  Gli utenti avanzati che utilizzano la classe [CAsyncSocket](../mfc/reference/casyncsocket-class.md) potrebbe essere necessario utilizzare il canale fuori banda, ma gli utenti di classe [CSocket](../mfc/reference/csocket-class.md) non sono consigliati progetti di utilizzarli.  Il modo più semplice consiste nel creare un secondo socket per passare tali dati.  Per ulteriori informazioni sui dati fuori banda, vedere la specifica di Windows Sockets, disponibile in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Se si deriva dalla classe `CAsyncSocket`, è necessario eseguire l'override delle funzioni di notifica degli eventi della rete di interesse all'applicazione.  Se si deriva una classe dalla classe `CSocket`, è la scelta se eseguire l'override delle funzioni di notifica di interesse.  È inoltre possibile utilizzare `CSocket` stesso, nel qual caso l'impostazione predefinita di funzioni di notifica a non viene eseguita alcuna operazione.  
  
 Queste funzioni sono funzioni di callback sottoponibili a override.  `CAsyncSocket` e `CSocket` convertono i messaggi in notifiche, ma è necessario implementare come funzioni di notifica rispondono se si desidera utilizzarli.  Le funzioni di notifica vengono richiamate quando il blocco riceve una notifica di un evento di interesse, quali la presenza di dati da leggere.  
  
 MFC chiama le funzioni di notifica che consentono di personalizzare il comportamento del blocco quando riceve una notifica.  Ad esempio, è possibile chiamare **Ricezione** dalla funzione di notifica di `OnReceive`, ovvero, su essere notificati vi sono dati da leggere, chiamare **Ricezione** per leggerlo.  Questo approccio non è necessario, ma è uno scenario valido.  In alternativa, è possibile utilizzare la funzione di notifica per tenere traccia dello stato di avanzamento, messaggi di **TRACCIA** di stampa, e così via.  
  
 È possibile usufruire delle notifiche eseguire l'override delle funzioni di notifica in una classe derivata di socket e fornendo un'implementazione.  
  
 Durante un'operazione come ricevere o inviare dati, un oggetto `CSocket` diventa sincrono.  Durante lo stato sincrono, tutte le notifiche per applicare altri socket vengono messe in coda mentre attende correnti di socket la notifica desiderati. Ad esempio, durante una chiamata di **Ricezione**, il blocco desidera una notifica per indicare\). Una volta che il blocco completa la relativa operazione sincrona e asincrona diventa nuovamente, altri socket possono iniziare ricezione di notifiche in coda.  
  
> [!NOTE]
>  In `CSocket`, la funzione di notifica di `OnConnect` non è mai chiamata.  Per le connessioni, chiamare **Connetti**, che restituiranno quando la connessione viene completato \(correttamente o per errore\).  Come notifiche di connessione vengono gestite è un dettaglio di implementazione MFC.  
  
 Per informazioni dettagliate su ogni funzione di notifica, vedere la funzione in una classe `CAsyncSocket` nel *Riferimento MFC*.  Per il codice sorgente e le informazioni su esempi di MFC, vedere [Esempi di MFC](../top/visual-cpp-samples.md).  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: Deriva da classi di socket](../mfc/windows-sockets-deriving-from-socket-classes.md)  
  
-   [Windows Sockets: Come socket con il lavoro degli archivi](../mfc/windows-sockets-how-sockets-with-archives-work.md)  
  
-   [Windows Sockets: Blocco](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: Ordinamento di byte](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: Conversione di stringhe](../mfc/windows-sockets-converting-strings.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)