---
title: "CSocket Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSocket"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSocket class"
  - "SOCKET handle"
  - "sockets classes"
  - "WinSock CSocket class"
ms.assetid: 7f23c081-d24d-42e3-b511-8053ca53d729
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CSocket Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Deriva da `CAsyncSocket`, eredita il relativo incapsulamento di Windows Sockets API e rappresenta un livello più elevato di astrazione che quello di un oggetto `CAsyncSocket`.  
  
## Sintassi  
  
```  
class CSocket : public CAsyncSocket  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket::CSocket](../Topic/CSocket::CSocket.md)|Costruisce un oggetto `CSocket`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket::Attach](../Topic/CSocket::Attach.md)|Associa gli handle **SOCKET** a un oggetto `CSocket`.|  
|[CSocket::CancelBlockingCall](../Topic/CSocket::CancelBlockingCall.md)|Annulla una chiamata di blocco che è in corso.|  
|[CSocket::Create](../Topic/CSocket::Create.md)|Crea un socket.|  
|[CSocket::FromHandle](../Topic/CSocket::FromHandle.md)|Restituisce un puntatore a un oggetto `CSocket`, dato un handle **SOCKET**.|  
|[CSocket::IsBlocking](../Topic/CSocket::IsBlocking.md)|Determina se una chiamata di blocco è in corso.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket::OnMessagePending](../Topic/CSocket::OnMessagePending.md)|Chiamato per elaborare in attesa dei messaggi mentre attesa di una chiamata di blocco per completare.|  
  
## Note  
 Funzionamento di`CSocket` con le classi `CSocketFile` e `CArchive` per gestire l'invio e la ricezione di dati.  
  
 Un oggetto `CSocket` fornisce anche il blocco, che è essenziale all'operazione sincrona `CArchive`.  Il blocco viene eseguito, come `Receive`, `Send`, `ReceiveFrom`, `SendTo`e `Accept` \(interamente ereditato da `CAsyncSocket`\), non restituisce un errore `WSAEWOULDBLOCK` in `CSocket`.  Invece, queste funzioni attende fino al completamento di quest'ultima.  Inoltre, la chiamata originale termina con l'errore `WSAEINTR` se `CancelBlockingCall` viene chiamato quando una di queste funzioni è bloccato.  
  
 Per utilizzare un oggetto `CSocket`, chiamare il costruttore, la chiamata `Create` per creare un handle sottostante `SOCKET` \(tipo `SOCKET`\).  I parametri predefiniti `Create` creano un socket di flusso, ma se non si utilizza un socket a un oggetto `CArchive`, è possibile specificare un parametro per creare un socket di datagramma invece, o associare a una porta specifica per creare un socket del server.  Connettersi a un socket client utilizzando `Connect` lato client e `Accept` lato server.  Creare quindi un oggetto `CSocketFile` un oggetto e associarlo all'oggetto `CSocket` nel costruttore `CSocketFile`.  Successivamente, creare un oggetto `CArchive` per l'invio e uno per ricevere dati \(se necessario\), quindi associli con l'oggetto `CSocketFile` nel costruttore `CArchive`.  Quando le comunicazioni completate, eliminare `CArchive`, `CSocketFile`e gli oggetti `CSocket`.  Il tipo di dati `SOCKET` è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
 Quando si utilizza `CArchive` con `CSocketFile` e `CSocket`, potrebbe verificarsi una situazione in cui `CSocket::Receive` immette un ciclo \(da `PumpMessages(FD_READ)`\) che attende la quantità richiesta di byte.  Questo perché i socket di Windows consente solo una chiamata di recv per notifica di FD\_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di recv per FD\_READ.  Se viene visualizzato un FD\_READ quando non vi sono dati da leggere, verrà bloccato.  Se non si ottengono mai un altro FD\_READ, l'applicazione termina la sessione di per comunicare su socket.  
  
 È possibile risolvere questo problema come segue.  Nel metodo `OnReceive` della classe di socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il metodo `Serialize` della classe di messaggio quando i dati previsti da leggere da socket supera la dimensione di un pacchetto TCP \(Maximum Transmission Unit il supporto della rete, in genere di almeno 1096 byte\).  Se la dimensione dei dati disponibili meno di quanto necessario, aspetti tutti i dati da ricevere solo e quindi avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero di byte approssimativo che l'utente prevede di ricevere.  Si presuppone che lo dichiara altrove nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/CPP/csocket-class_1.cpp)]  
  
> [!NOTE]
>  In utilizzare sockets MFC nei thread secondari in un'applicazione collegata in modo statico MFC, è necessario chiamare `AfxSocketInit` in ogni thread che utilizza i socket per inizializzare le librerie di socket.  Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread primario.  
  
 Per ulteriori informazioni, vedere [In Windows Sockets MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Utilizzo di socket con gli archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: Come socket con il lavoro degli archivi](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: Esempio di socket utilizzando gli archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAsyncSocket](../../mfc/reference/casyncsocket-class.md)  
  
 `CSocket`  
  
## Requisiti  
 **intestazione:** afxsock.h  
  
## Vedere anche  
 [CAsyncSocket Class](../../mfc/reference/casyncsocket-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket Class](../../mfc/reference/casyncsocket-class.md)   
 [CSocketFile Class](../../mfc/reference/csocketfile-class.md)