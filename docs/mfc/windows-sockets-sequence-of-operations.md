---
description: 'Altre informazioni su: Windows Sockets: sequenza di operazioni'
title: 'Windows Sockets: sequenza di operazioni'
ms.date: 11/04/2016
helpviewer_keywords:
- Windows Sockets [MFC], operations
- Windows Sockets [MFC], stream sockets
- sockets [MFC], stream sockets
- sockets [MFC], operations
- stream sockets [MFC]
ms.assetid: 43ce76f5-aad3-4247-b8a6-16cc7d012796
ms.openlocfilehash: 89870de642abcc8e0584c2c5dc93860eda9785e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263374"
---
# <a name="windows-sockets-sequence-of-operations"></a>Windows Sockets: sequenza di operazioni

Questo articolo illustra, Side-by-Side, la sequenza di operazioni per un socket server e un socket client. Poiché i socket utilizzano `CArchive` oggetti, sono necessariamente [socket di flusso](../mfc/windows-sockets-stream-sockets.md).

## <a name="sequence-of-operations-for-a-stream-socket-communication"></a>Sequenza di operazioni per la comunicazione di un socket di flusso

Fino al punto di costruzione di un `CSocketFile` oggetto, la sequenza seguente è precisa (con alcune differenze di parametro) sia per `CAsyncSocket` che per `CSocket` . Da questo punto in poi, la sequenza è rigorosamente per `CSocket` . Nella tabella seguente viene illustrata la sequenza di operazioni per la configurazione della comunicazione tra un client e un server.

### <a name="setting-up-communication-between-a-server-and-a-client"></a>Impostazione della comunicazione tra un server e un client

|Server|Client|
|------------|------------|
|`// construct a socket`<br /><br /> `CSocket sockSrvr;`|`// construct a socket`<br /><br /> `CSocket sockClient;`|
|`// create the SOCKET`<br /><br /> `sockSrvr.Create(nPort);`1,2|`// create the SOCKET`<br /><br /> `sockClient.Create( );`2|
|`// start listening`<br /><br /> `sockSrvr.Listen( );`||
||`// seek a connection`<br /><br /> `sockClient.Connect(strAddr, nPort);`3,4|
|`// construct a new, empty socket`<br /><br /> `CSocket sockRecv;`<br /><br /> `// accept connection`<br /><br /> `sockSrvr.Accept( sockRecv );` 5||
|`// construct file object`<br /><br /> `CSocketFile file(&sockRecv);`|`// construct file object`<br /><br /> `CSocketFile file(&sockClient);`|
|`// construct an archive`<br /><br /> `CArchive arIn(&file, CArchive::load);`<br /><br /> -oppure-<br /><br /> `CArchive arOut(&file, CArchive::store);`<br /><br /> o entrambi-|`// construct an archive`<br /><br /> `CArchive arIn(&file, CArchive::load);`<br /><br /> -oppure-<br /><br /> `CArchive arOut(&file, CArchive::store);`<br /><br /> o entrambi-|
|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> -oppure-<br /><br /> `arOut << dwValue;`6|`// use the archive to pass data:`<br /><br /> `arIn >> dwValue;`<br /><br /> -oppure-<br /><br /> `arOut << dwValue;`6|

1. Dove *NPort* è un numero di porta. Per informazioni dettagliate sulle porte, vedere [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md) .

2. Il server deve sempre specificare una porta, in modo che i client possano connettersi. La `Create` chiamata talvolta specifica anche un indirizzo. Sul lato client usare i parametri predefiniti, che richiedono a MFC di usare qualsiasi porta disponibile.

3. Dove *NPort* è un numero di porta e *strAddr* è un indirizzo del computer o un indirizzo IP (Internet Protocol).

4. Gli indirizzi del computer possono assumere diverse forme: "ftp.microsoft.com", "microsoft.com". Per gli indirizzi IP viene utilizzato il formato "127.54.67.32" del "numero punteggiato". La `Connect` funzione verifica se l'indirizzo è un numero punteggiato (anche se non verifica che il numero sia un computer valido nella rete). In caso contrario, `Connect` presuppone il nome di un computer di uno degli altri form.

5. Quando si chiama `Accept` sul lato server, si passa un riferimento a un nuovo oggetto Socket. È necessario prima costruire questo oggetto, ma non chiamarlo `Create` . Tenere presente che se l'oggetto socket esce dall'ambito, la connessione viene chiusa. MFC connette il nuovo oggetto a un handle di **socket** . È possibile costruire il socket nello stack, come illustrato o nell'heap.

6. L'archivio e il file socket vengono chiusi quando escono dall'ambito. Il distruttore dell'oggetto Socket chiama anche la funzione membro [Close](../mfc/reference/casyncsocket-class.md#close) per l'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.

## <a name="additional-notes-about-the-sequence"></a>Note aggiuntive sulla sequenza

La sequenza di chiamate mostrate nella tabella precedente è per un socket di flusso. I socket di datagramma, che sono senza connessione, non richiedono le chiamate [CAsyncSocket:: Connect](../mfc/reference/casyncsocket-class.md#connect), [Listen](../mfc/reference/casyncsocket-class.md#listen)e [Accept](../mfc/reference/casyncsocket-class.md#accept) (anche se è possibile usare facoltativamente `Connect` ). Se invece si utilizza `CAsyncSocket` la classe, i socket di datagramma utilizzano le `CAsyncSocket::SendTo` `ReceiveFrom` funzioni membro e. Se si usa `Connect` con un socket di datagramma, si usano `Send` e `Receive` . Poiché non `CArchive` funziona con datagrammi, non usare `CSocket` con un archivio se il socket è un datagramma.

[CSocketFile](../mfc/reference/csocketfile-class.md) non supporta tutte le `CFile` funzionalità di `CFile` . i membri come `Seek` , che non hanno senso per la comunicazione con socket, non sono disponibili. Per questo motivo, alcune funzioni MFC predefinite `Serialize` non sono compatibili con `CSocketFile` . Questa operazione è particolarmente valida per la `CEditView` classe. Non tentare di serializzare `CEditView` i dati tramite un `CArchive` oggetto collegato a un `CSocketFile` oggetto utilizzando. in `CEditView::SerializeRaw` alternativa, utilizzare `CEditView::Serialize` (non documentato). La funzione [SerializeRaw](../mfc/reference/ceditview-class.md#serializeraw) prevede che l'oggetto file disponga di funzioni, ad esempio `Seek` , che `CSocketFile` non supporta.

Per altre informazioni, vedere:

- [Windows Sockets: utilizzo di socket con archivi](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: utilizzo della classe CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: porte e indirizzi socket](../mfc/windows-sockets-ports-and-socket-addresses.md)

- [Windows Sockets: socket di flusso](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: socket di datagramma](../mfc/windows-sockets-datagram-sockets.md)

## <a name="see-also"></a>Vedi anche

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[Classe CSocket](../mfc/reference/csocket-class.md)<br/>
[CAsyncSocket::Create](../mfc/reference/casyncsocket-class.md#create)<br/>
[CAsyncSocket:: Close](../mfc/reference/casyncsocket-class.md#close)
