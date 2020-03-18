---
title: Classe CSocket
ms.date: 11/04/2016
f1_keywords:
- CSocket
- AFXSOCK/CSocket
- AFXSOCK/CSocket::CSocket
- AFXSOCK/CSocket::Attach
- AFXSOCK/CSocket::CancelBlockingCall
- AFXSOCK/CSocket::Create
- AFXSOCK/CSocket::FromHandle
- AFXSOCK/CSocket::IsBlocking
- AFXSOCK/CSocket::OnMessagePending
helpviewer_keywords:
- CSocket [MFC], CSocket
- CSocket [MFC], Attach
- CSocket [MFC], CancelBlockingCall
- CSocket [MFC], Create
- CSocket [MFC], FromHandle
- CSocket [MFC], IsBlocking
- CSocket [MFC], OnMessagePending
ms.assetid: 7f23c081-d24d-42e3-b511-8053ca53d729
ms.openlocfilehash: a861e557b7368d13d615aaf796faded93c72b040
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421170"
---
# <a name="csocket-class"></a>Classe CSocket

Deriva da `CAsyncSocket`, eredita l'incapsulamento dell'API Windows Sockets e rappresenta un livello di astrazione più elevato rispetto a quello di un oggetto `CAsyncSocket`.

## <a name="syntax"></a>Sintassi

```
class CSocket : public CAsyncSocket
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocket:: CSocket](#csocket)|Costruisce un oggetto `CSocket`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocket:: Connetti](#attach)|Connette un handle di SOCKET a un oggetto `CSocket`.|
|[CSocket:: CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco attualmente in corso.|
|[CSocket:: create](#create)|Crea un socket.|
|[CSocket:: FromHandle](#fromhandle)|Restituisce un puntatore a un oggetto `CSocket`, dato un handle di SOCKET.|
|[CSocket:: Unblocking](#isblocking)|Determina se è in corso una chiamata di blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSocket:: OnMessagePending](#onmessagepending)|Chiamato per elaborare i messaggi in sospeso durante l'attesa del completamento di una chiamata di blocco.|

## <a name="remarks"></a>Osservazioni

`CSocket` funziona con le classi `CSocketFile` e `CArchive` per gestire l'invio e la ricezione di dati.

Un oggetto `CSocket` fornisce anche il blocco, essenziale per il funzionamento sincrono di `CArchive`. Le funzioni di blocco, ad esempio `Receive`, `Send`, `ReceiveFrom`, `SendTo`e `Accept` (tutte ereditate da `CAsyncSocket`), non restituiscono un errore `WSAEWOULDBLOCK` in `CSocket`. Al contrario, queste funzioni attendono il completamento dell'operazione. Inoltre, la chiamata originale verrà terminata con l'errore WSAEINTR se `CancelBlockingCall` viene chiamato mentre una di queste funzioni è bloccata.

Per usare un oggetto `CSocket`, chiamare il costruttore, quindi chiamare `Create` per creare l'handle del SOCKET sottostante (tipo SOCKET). I parametri predefiniti di `Create` creare un socket di flusso, ma se non si usa il socket con un oggetto `CArchive`, è possibile specificare un parametro per creare un socket di datagramma oppure eseguire l'associazione a una porta specifica per creare un socket del server. Connettersi a un socket client usando `Connect` sul lato client e `Accept` sul lato server. Creare quindi un oggetto `CSocketFile` e associarlo all'oggetto `CSocket` nel costruttore di `CSocketFile`. Successivamente, creare un oggetto `CArchive` per l'invio e uno per la ricezione dei dati (in base alle esigenze), quindi associarli all'oggetto `CSocketFile` nel costruttore di `CArchive`. Al termine delle comunicazioni, eliminare gli oggetti `CArchive`, `CSocketFile`e `CSocket`. Il tipo di dati SOCKET è descritto nell'articolo [Windows Sockets: background](../../mfc/windows-sockets-background.md).

Quando si usa `CArchive` con `CSocketFile` e `CSocket`, è possibile che si verifichi una situazione in cui `CSocket::Receive` immette un ciclo (per `PumpMessages(FD_READ)`) in attesa della quantità di byte richiesta. Il motivo è che Windows Sockets consente solo una chiamata ricezione per ogni FD_READ notifica, ma `CSocketFile` e `CSocket` consentire più chiamate ricezione per FD_READ. Se si ottiene un FD_READ quando non sono presenti dati da leggere, l'applicazione si blocca. Se non si ottiene mai un'altra FD_READ, l'applicazione smette di comunicare tramite il socket.

È possibile risolvere questo problema come indicato di seguito. Nel metodo `OnReceive` della classe Socket chiamare `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il metodo `Serialize` della classe Message quando i dati previsti da leggere dal socket superano le dimensioni di un pacchetto TCP (unità di trasmissione massima del supporto di rete, in genere almeno 1096 byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere la ricezione di tutti i dati e avviare l'operazione di lettura.

Nell'esempio seguente `m_dwExpected` è il numero approssimativo di byte che l'utente prevede di ricevere. Si presuppone che venga dichiarata in un'altra posizione nel codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]

> [!NOTE]
>  Quando si usano socket MFC nei thread secondari in un'applicazione MFC collegata in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie del socket. Per impostazione predefinita, `AfxSocketInit` viene chiamata solo nel thread primario.

Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: funzionamento dei socket con archivi](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAsyncSocket](../../mfc/reference/casyncsocket-class.md)

`CSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock. h

##  <a name="attach"></a>CSocket:: Connetti

Chiamare questa funzione membro per alleghi il `hSocket` handle a un oggetto `CSocket`.

```
BOOL Attach(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle per un socket.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Osservazioni

L'handle del SOCKET viene archiviato nel membro dati [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) dell'oggetto.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSocketThread#1](../../mfc/reference/codesnippet/cpp/csocket-class_2.h)]

[!code-cpp[NVC_MFCSocketThread#2](../../mfc/reference/codesnippet/cpp/csocket-class_3.cpp)]

[!code-cpp[NVC_MFCSocketThread#3](../../mfc/reference/codesnippet/cpp/csocket-class_4.cpp)]

##  <a name="cancelblockingcall"></a>CSocket:: CancelBlockingCall

Chiamare questa funzione membro per annullare una chiamata di blocco attualmente in corso.

```
void CancelBlockingCall();
```

### <a name="remarks"></a>Osservazioni

Questa funzione Annulla tutte le operazioni di blocco in attesa per il socket. La chiamata di blocco originale verrà terminata appena possibile con l'errore WSAEINTR.

Nel caso di un'operazione di blocco `Connect`, l'implementazione di Windows Sockets termina la chiamata di blocco il prima possibile, ma potrebbe non essere possibile rilasciare le risorse del socket finché la connessione non è stata completata (e quindi reimpostata) o si è verificato un timeout. Questo è probabile che sia evidente solo se l'applicazione tenta immediatamente di aprire un nuovo socket (se non sono disponibili socket) o di connettersi allo stesso peer.

L'annullamento di qualsiasi operazione diversa da `Accept` può lasciare il socket in uno stato indeterminato. Se un'applicazione annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere dall'esecuzione sul socket è una chiamata a `Close`, sebbene altre operazioni possano funzionare in alcune implementazioni di Windows Sockets. Se si desidera la massima portabilità per l'applicazione, è necessario prestare attenzione a non dipendere dall'esecuzione di operazioni dopo un'operazione di annullamento.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="create"></a>CSocket:: create

Chiamare la funzione membro **create** dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nSocketPort*<br/>
Una porta specifica da utilizzare con il socket oppure 0 se si desidera che MFC selezioni una porta.

*nSocketType*<br/>
SOCK_STREAM o SOCK_DGRAM.

*lpszSocketAddress*<br/>
Puntatore a una stringa che contiene l'indirizzo di rete del socket connesso, un numero punteggiato, ad esempio "128.56.22.8". Il passaggio della stringa NULL per questo parametro indica che l'istanza di `CSocket` deve restare in ascolto dell'attività del client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando `GetLastError`.

### <a name="remarks"></a>Osservazioni

`Create` chiama quindi `Bind` per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM fornisce flussi di byte sequenziati, affidabili, bidirezionali e basati sulla connessione. USA Transmission Control Protocol (TCP) per la famiglia di indirizzi Internet.

- SOCK_DGRAM supporta datagrammi, ovvero buffer senza connessione e non affidabili di una lunghezza massima fissa (in genere piccola). Usa il protocollo UDP (User Datagram Protocol) per la famiglia di indirizzi Internet. Per usare questa opzione, non è necessario usare il socket con un oggetto `CArchive`.

    > [!NOTE]
    >  La funzione membro `Accept` accetta un riferimento a un nuovo oggetto `CSocket` vuoto come parametro. È necessario costruire questo oggetto prima di chiamare `Accept`. Tenere presente che se l'oggetto socket esce dall'ambito, la connessione viene chiusa. Non chiamare `Create` per questo nuovo oggetto Socket.

Per ulteriori informazioni sui socket di flusso e datagramma, vedere gli articoli [Windows Sockets: background](../../mfc/windows-sockets-background.md), [Windows Sockets: porte e indirizzi socket](../../mfc/windows-sockets-ports-and-socket-addresses.md)e [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="csocket"></a>CSocket:: CSocket

Costruisce un oggetto `CSocket`.

```
CSocket();
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione, è necessario chiamare la funzione membro `Create`.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="fromhandle"></a>CSocket:: FromHandle

Restituisce un puntatore a un oggetto `CSocket`.

```
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle per un socket.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CSocket` o NULL se non è presente alcun oggetto `CSocket` associato a *hSocket*.

### <a name="remarks"></a>Osservazioni

Quando si specifica un handle di SOCKET, se un oggetto `CSocket` non è collegato all'handle, la funzione membro restituisce NULL e non crea un oggetto temporaneo.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="isblocking"></a>CSocket:: Unblocking

Chiamare questa funzione membro per determinare se è in corso una chiamata di blocco.

```
BOOL IsBlocking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il socket è bloccato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="onmessagepending"></a>CSocket:: OnMessagePending

Eseguire l'override di questa funzione membro per cercare messaggi specifici da Windows e rispondere a tali messaggi nel socket.

```
virtual BOOL OnMessagePending();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato gestito; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Si tratta di un oggetto avanzato sottoponibile a override.

Il Framework chiama `OnMessagePending` mentre il socket sta distribuendo messaggi di Windows per offrire la possibilità di gestire i messaggi di interesse per l'applicazione. Per esempi di come è possibile usare `OnMessagePending`, vedere l'articolo [Windows Sockets: derivazione dalle classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="see-also"></a>Vedere anche

[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
