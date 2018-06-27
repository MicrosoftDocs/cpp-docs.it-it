---
title: 'Windows Sockets: Sequenza di operazioni | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Sockets [MFC], operations
- Windows Sockets [MFC], stream sockets
- sockets [MFC], stream sockets
- sockets [MFC], operations
- stream sockets [MFC]
ms.assetid: 43ce76f5-aad3-4247-b8a6-16cc7d012796
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c27856b2bb6b843ce60404ea389c28082bf1dc5a
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953945"
---
# <a name="windows-sockets-sequence-of-operations"></a>Windows Sockets: sequenza di operazioni
Questo articolo illustra side-by-side, la sequenza di operazioni per un server e a un socket client. Poiché i socket utilizzano `CArchive` oggetti, sono necessariamente [socket di flusso](../mfc/windows-sockets-stream-sockets.md).  
  
## <a name="sequence-of-operations-for-a-stream-socket-communication"></a>Sequenza di operazioni per la comunicazione di un Socket di flusso  
 Fino al punto di creazione di un `CSocketFile` dell'oggetto, la sequenza seguente è accurata (con alcune differenze di parametro) per entrambi `CAsyncSocket` e `CSocket`. Da quel momento, la sequenza è rigorosamente per `CSocket`. Nella tabella seguente viene illustrata la sequenza di operazioni per l'impostazione delle comunicazioni tra un client e un server.  
  
### <a name="setting-up-communication-between-a-server-and-a-client"></a>Impostazione delle comunicazioni tra un Server e un Client  
  
|Server|Client|  
|------------|------------|  
|`// construct a socket`<br /><br /> `CSocket sockSrvr;`|`// construct a socket`<br /><br /> `CSocket sockClient;`|  
|`// create the SOCKET`<br /><br /> `sockSrvr.Create(nPort);`1,2|`// create the SOCKET`<br /><br /> `sockClient.Create( );`2|  
|`// start listening`<br /><br /> `sockSrvr.Listen( );`||  
||`// seek a connection`<br /><br /> `sockClient.Connect(strAddr, nPort);`3,4|  
|`// construct a new, empty socket`<br /><br /> `CSocket sockRecv;`<br /><br /> `// accept connection`<br /><br /> `sockSrvr.Accept( sockRecv );` 5||  
|`// construct file object`<br /><br /> `CSocketFile file(&sockRecv);`|`// construct file object`<br /><br /> `CSocketFile file(&sockClient);`|  
|`// construct an archive`<br /><br /> `CArchive arIn(&file, CArchive::load);`<br /><br /> oppure<br /><br /> `CArchive arOut(&file, CArchive::store);`<br /><br /> - o entrambe:|`// construct an archive`<br /><br /> `CArchive arIn(&file, CArchive::load);`<br /><br /> oppure<br /><br /> `CArchive arOut(&file, CArchive::store);`<br /><br /> - o entrambe:|  
|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> oppure<br /><br /> `arOut << dwValue;`6|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> oppure<br /><br /> `arOut << dwValue;`6|  
  
 1. In cui *nPort* è un numero di porta. Vedere [Windows Sockets: porte e indirizzi Socket](../mfc/windows-sockets-ports-and-socket-addresses.md) per informazioni dettagliate sulle porte.  
  
 2. Il server è necessario specificare sempre una porta in modo che i client possono connettersi. Il `Create` talvolta chiamata specifica un indirizzo. Sul lato client, utilizzare i parametri predefiniti, che richiedono MFC per utilizzare qualsiasi porta disponibile.  
  
 3. In cui *nPort* è un numero di porta e *strAddr* indirizzo di un computer o un indirizzo IP (Internet Protocol).  
  
 4. Gli indirizzi di computer possono assumere varie forme: "ftp.microsoft.com", "microsoft.com". Gli indirizzi IP usare la forma "puntata numero" "127.54.67.32". Il `Connect` funzione controlla se l'indirizzo è un numero separato da punti (anche se non consente di controllare per verificare che il numero è un computer valido sulla rete). In caso contrario, `Connect` presuppone un nome di computer di uno degli altri formati.  
  
 5. Quando si chiama `Accept` sul lato server, si passa un riferimento a un nuovo oggetto socket. È necessario costruire l'oggetto prima di tutto, ma non si chiama `Create` per esso. Tenere presente che se questo oggetto socket esce dall'ambito, la connessione verrà terminata. MFC si connette il nuovo oggetto da un **SOCKET** gestire. È possibile costruire il socket nello stack, come illustrato o nell'heap.  
  
 6. L'archivio e il file di socket vengono chiusi quando escono dall'ambito. Distruttore dell'oggetto socket chiama anche il [Chiudi](../mfc/reference/casyncsocket-class.md#close) funzione membro per l'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.  
  
## <a name="additional-notes-about-the-sequence"></a>Note aggiuntive sulla sequenza  
 La sequenza di chiamate illustrato nella tabella precedente è per un socket di flusso. I socket di datagramma, ovvero senza connessione, non richiedono la [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect), [ascolto](../mfc/reference/casyncsocket-class.md#listen), e [Accept](../mfc/reference/casyncsocket-class.md#accept) chiamate (sebbene sia possibile utilizzare facoltativamente `Connect`). Al contrario, se si utilizza una classe `CAsyncSocket`, i socket di datagramma utilizzano il `CAsyncSocket::SendTo` e `ReceiveFrom` funzioni membro. (Se si utilizza `Connect` con un socket di datagramma, utilizzare `Send` e `Receive`.) Poiché `CArchive` non funziona con i datagrammi, non utilizzare `CSocket` con un archivio se il socket è un datagramma.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md) non supporta tutte `CFile`della funzionalità. `CFile` membri, ad esempio `Seek`, che non è appropriata per garantire una comunicazione socket, di rendere non sono disponibili. Per questo motivo, alcuni predefinito MFC `Serialize` funzioni non sono compatibili con `CSocketFile`. Questo vale in particolare il `CEditView` classe. Non è consigliabile provare a serializzare `CEditView` dati tramite un `CArchive` oggetto connesso a un `CSocketFile` utilizzando `CEditView::SerializeRaw`; utilizzare `CEditView::Serialize` invece (non documentata). Il [funzione SerializeRaw](../mfc/reference/ceditview-class.md#serializeraw) funzione prevede l'oggetto di file di funzioni, ad esempio `Seek`, che `CSocketFile` non supporta.  
  
 Per altre informazioni, vedere:  
  
-   [Windows Sockets: uso di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: uso della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)  
  
-   [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)  
  
-   [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows Sockets di MFC](../mfc/windows-sockets-in-mfc.md)   
 [CSocket (classe)](../mfc/reference/csocket-class.md)   
 [CAsyncSocket::Create](../mfc/reference/casyncsocket-class.md#create)   
 [CAsyncSocket::Close](../mfc/reference/casyncsocket-class.md#close)

