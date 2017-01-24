---
title: "Windows Sockets: sequenza di operazioni | Microsoft Docs"
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
  - "socket [C++], operazioni"
  - "socket [C++], socket di flusso"
  - "socket di flusso [C++]"
  - "Windows Sockets [C++], operazioni"
  - "Windows Sockets [C++], socket di flusso"
ms.assetid: 43ce76f5-aad3-4247-b8a6-16cc7d012796
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets: sequenza di operazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato, side\-by\-side, la sequenza delle operazioni per un socket del server e un blocco client.  Poiché i socket utilizzano oggetti di `CArchive`, sono necessariamente [socket di flusso](../mfc/windows-sockets-stream-sockets.md).  
  
## Sequenza delle operazioni per una comunicazione di socket di flusso  
 Fino al punto di costruzione dell'oggetto di `CSocketFile`, la seguente sequenza accurata \(con alcune differenze di parametro\) sia per `CAsyncSocket` che `CSocket`.  Da quel momento in poi, la sequenza è esclusivamente per `CSocket`.  Nella tabella riportata la sequenza delle operazioni per l'installazione di comunicazione tra un client e un server.  
  
### Comunicazione di setting up tra un server e un client  
  
|Server|Client|  
|------------|------------|  
|`// construct a socket`<br /><br /> `CSocket sockSrvr;`|`// construct a socket`<br /><br /> `CSocket sockClient;`|  
|`// create the SOCKET`<br /><br /> `sockSrvr.Create(nPort);`1,2|`// create the SOCKET`<br /><br /> `sockClient.Create( );`2|  
|`// start listening`<br /><br /> `sockSrvr.Listen( );`||  
||`// seek a connection`<br /><br /> `sockClient.Connect(strAddr, nPort);`3,4|  
|`// construct a new, empty socket`<br /><br /> `CSocket sockRecv;`<br /><br /> `// accept connection`<br /><br /> `sockSrvr.Accept( sockRecv );` 5||  
|`// construct file object`<br /><br /> `CSocketFile file(&sockRecv);`|`// construct file object`<br /><br /> `CSocketFile file(&sockClient);`|  
|`// construct an archive`<br /><br /> `CArchive arIn(&file,`  `CArchive::load);`<br /><br /> \- oppure \-<br /><br /> `CArchive arOut(&file,`  `CArchive::store);`<br /><br /> \- o entrambi \-|`// construct an archive`<br /><br /> `CArchive arIn(&file,`  `CArchive::load);`<br /><br /> \- oppure \-<br /><br /> `CArchive arOut(&file,`  `CArchive::store);`<br /><br /> \- o entrambi \-|  
|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> \- oppure \-<br /><br /> `arOut << dwValue;`6|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> \- oppure \-<br /><br /> `arOut << dwValue;`6|  
  
 1.  Dove `nPort` è un numero di porta.  Vedere [Windows Sockets: Porte e indirizzi di socket](../mfc/windows-sockets-ports-and-socket-addresses.md) per informazioni dettagliate sulle porte.  
  
 2.  Il server deve specificare sempre una porta in modo che i client possono connettersi.  La chiamata di **Crea** talvolta anche specificato un indirizzo.  Sul lato client, utilizzare i parametri predefiniti, che richiede a MFC di utilizzare qualsiasi porta disponibile.  
  
 3.  Dove `nPort` è un numero di porta e *uno strAddr* è l'indirizzo di un computer o un indirizzo di \(IP\) del protocollo Internet.  
  
 4.  Gli indirizzi reali possono assumere varie forme: "ftp.microsoft.com", "microsoft.com".  Gli indirizzi IP "utilizzano il formato "127.54.67.32" numero" tratteggiato.  Le verifiche di esecuzione di **Connetti** per verificare se l'indirizzo è un numero tratteggiato \(anche se non controlli per specificare il numero è valido un computer nella rete\).  In caso contrario, **Connetti** presuppone un nome del computer di uno degli altri form.  
  
 5.  Quando si chiama **Accetta** sul lato server, passare un riferimento a un nuovo oggetto socket.  È necessario costruire l'oggetto in primo luogo, ma non vengono chiamate per **Crea**.  Tenere presente che se questo oggetto socket dall'ambito, la connessione verrà chiusa.  MFC connette il nuovo oggetto a un handle di **SOCKET**.  È possibile costruire il blocco sullo stack, illustrata, o nell'heap.  
  
 6.  L'archivio e il file di socket siano chiusi quando escono di ambito.  Il distruttore di oggetti socket inoltre chiama la funzione membro di [Chiudi](../Topic/CAsyncSocket::Close.md) per l'oggetto socket quando l'oggetto dall'ambito o eliminato.  
  
## Note aggiuntive sulla sequenza  
 La sequenza di chiamate illustrate nella tabella precedente è relativo un socket di flusso.  I socket di datagramma, ovvero privi di connessione, non richiedono [CAsyncSocket::Connect](../Topic/CAsyncSocket::Connect.md), [È in ascolto](../Topic/CAsyncSocket::Listen.md) e chiamate di [Accetta](../Topic/CAsyncSocket::Accept.md) \(sebbene sia possibile utilizzare **Connetti**\).  Al contrario, se si utilizza la classe `CAsyncSocket`, sockets di datagramma utilizzano funzioni membro di `ReceiveFrom` e di `CAsyncSocket::SendTo`. Se si utilizza **Connetti** con un blocco di datagramma, utilizzare **Invia** e **Ricezione**\). Poiché `CArchive` non ha effetto sui datagrams, non utilizzare `CSocket` con un archivio se il blocco è un datagram.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md) non supporta tutte le funzionalità di `CFile` ; i membri di `CFile` come `Seek`, che non hanno un significato per una comunicazione di socket, non sono disponibili.  Per questo motivo, alcuni impostazione predefinita le funzioni MFC `Serialize` non sono compatibili con `CSocketFile`.  Ciò è particolarmente vero per la classe di `CEditView`.  Non tentare di serializzare i dati di `CEditView` tramite un oggetto di `CArchive` associato a un oggetto di `CSocketFile` utilizzando `CEditView::SerializeRaw`; utilizzo **CEditView::Serialize** invece non documentato\).  La funzione di [SerializeRaw](../Topic/CEditView::SerializeRaw.md) richiedere all'oggetto file per avere funzioni, come `Seek`, che `CSocketFile` non supporta.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: Porte e indirizzi di socket](../mfc/windows-sockets-ports-and-socket-addresses.md)  
  
-   [Windows Sockets: Socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: Socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## Vedere anche  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [CSocket Class](../mfc/reference/csocket-class.md)   
 [CAsyncSocket::Create](../Topic/CAsyncSocket::Create.md)   
 [CAsyncSocket::Close](../Topic/CAsyncSocket::Close.md)