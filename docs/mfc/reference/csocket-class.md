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
ms.openlocfilehash: 730bea34354b008d641ecc28e7368f79efad12a7
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751161"
---
# <a name="csocket-class"></a>Classe CSocket

Deriva da `CAsyncSocket`, eredita l'incapsulamento dell'API Windows Sockets e rappresenta un livello `CAsyncSocket` di astrazione superiore a quello di un oggetto.

## <a name="syntax"></a>Sintassi

```
class CSocket : public CAsyncSocket
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocket::CSocket](#csocket)|Costruisce un oggetto `CSocket`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSocket::Attach](#attach)|Associa un handle SOCKET `CSocket` a un oggetto.|
|[CSocket::CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco attualmente in corso.|
|[CSocket::Crea](#create)|Crea un socket.|
|[CSocket::FromHandle](#fromhandle)|Restituisce un `CSocket` puntatore a un oggetto, dato un handle SOCKET.|
|[CSocket::IsBlocking](#isblocking)|Determina se è in corso una chiamata di blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSocket::OnMessagePending](#onmessagepending)|Chiamato per elaborare i messaggi in sospeso durante l'attesa del completamento di una chiamata di blocco.|

## <a name="remarks"></a>Osservazioni

`CSocket`funziona con `CSocketFile` `CArchive` le classi e per gestire l'invio e la ricezione dei dati.

Un `CSocket` oggetto fornisce anche il blocco, che `CArchive`è essenziale per l'operazione sincrona di . Le funzioni di `Receive` `Send`blocco, `SendTo`ad `Accept` esempio , `CAsyncSocket`, `ReceiveFrom`, e `WSAEWOULDBLOCK` (tutte ereditate da ), non restituiscono un errore in `CSocket`. Al contrario, queste funzioni attendere fino al completamento dell'operazione. Inoltre, la chiamata originale terminerà con l'errore `CancelBlockingCall` WSAEINTR se viene chiamato mentre una di queste funzioni è il blocco.

Per utilizzare `CSocket` un oggetto, chiamare `Create` il costruttore, quindi chiamare per creare l'handle SOCKET sottostante (tipo SOCKET). I parametri `Create` predefiniti per creare un socket di flusso, `CArchive` ma se non si utilizza il socket con un oggetto, è possibile specificare un parametro per creare un socket di datagramma o eseguire l'associazione a una porta specifica per creare un socket server. Connettersi a un `Connect` socket client `Accept` utilizzando sul lato client e sul lato server. Creare quindi `CSocketFile` un oggetto e `CSocket` associarlo `CSocketFile` all'oggetto nel costruttore. Successivamente, creare `CArchive` un oggetto per l'invio e uno per `CSocketFile` la ricezione `CArchive` dei dati (se necessario), quindi associarli all'oggetto nel costruttore. Una volta completate `CArchive`le `CSocketFile`comunicazioni, eliminare gli `CSocket` oggetti , e . Il tipo di dati SOCKET è descritto nell'articolo [Windows Sockets: Background](../../mfc/windows-sockets-background.md).

Quando si `CArchive` `CSocketFile` utilizza `CSocket`with e , `CSocket::Receive` è possibile che `PumpMessages(FD_READ)`si verifichi una situazione in cui entra in un ciclo (da ) in attesa della quantità di byte richiesta. Ciò è dovuto al fatto che i socket `CSocketFile` di `CSocket` Windows consentono una sola chiamata recv per notifica di FD_READ, ma e consentono più chiamate recv per FD_READ. Se si ottiene un FD_READ quando non sono presenti dati da leggere, l'applicazione si blocca. Se non si ottiene mai un altro FD_READ, l'applicazione smette di comunicare tramite il socket.

È possibile risolvere questo problema come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamare `CAsyncSocket::IOCtl(FIONREAD, ...)` `Serialize` prima di chiamare il metodo della classe messaggio quando i dati previsti da leggere dal socket superano la dimensione di un pacchetto TCP (unità di trasmissione massima del supporto di rete, in genere almeno 1096 byte). Se le dimensioni dei dati disponibili sono inferiori a quelle necessarie, attendere che tutti i dati vengano ricevuti e quindi avviare l'operazione di lettura.

Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente prevede di ricevere. Si presuppone che venga dichiarato in un altro punto del codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]

> [!NOTE]
> Quando si utilizzano socket MFC in thread secondari in `AfxSocketInit` un'applicazione MFC collegata in modo statico, è necessario chiamare ogni thread che utilizza i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread primario.

Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), Windows [Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: How Sockets with Archives Work](../../mfc/windows-sockets-how-sockets-with-archives-work.md), Windows [Sockets: Sequence of Operations](../../mfc/windows-sockets-sequence-of-operations.md), Windows [Sockets: Example of Sockets Using Archives](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAsyncSocket](../../mfc/reference/casyncsocket-class.md)

`CSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock.h

## <a name="csocketattach"></a><a name="attach"></a>CSocket::Attach

Chiamare questa funzione membro `hSocket` per `CSocket` collegare l'handle a un oggetto.

```
BOOL Attach(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Osservazioni

L'handle SOCKET viene archiviato nel membro dati [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) dell'oggetto.

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSocketThread#1](../../mfc/reference/codesnippet/cpp/csocket-class_2.h)]

[!code-cpp[NVC_MFCSocketThread#2](../../mfc/reference/codesnippet/cpp/csocket-class_3.cpp)]

[!code-cpp[NVC_MFCSocketThread#3](../../mfc/reference/codesnippet/cpp/csocket-class_4.cpp)]

## <a name="csocketcancelblockingcall"></a><a name="cancelblockingcall"></a>CSocket::CancelBlockingCall

Chiamare questa funzione membro per annullare una chiamata di blocco attualmente in corso.

```cpp
void CancelBlockingCall();
```

### <a name="remarks"></a>Osservazioni

Questa funzione annulla qualsiasi operazione di blocco in sospeso per questo socket. La chiamata di blocco originale terminerà appena possibile con l'errore WSAEINTR.

Nel caso di `Connect` un'operazione di blocco, l'implementazione di Windows Sockets terminerà la chiamata di blocco appena possibile, ma potrebbe non essere possibile rilasciare le risorse socket fino al completamento della connessione (e quindi alla reimpostazione) o al timeout. È probabile che ciò sia evidente solo se l'applicazione tenta immediatamente di aprire un nuovo socket (se non sono disponibili socket) o di connettersi allo stesso peer.

L'annullamento di `Accept` qualsiasi operazione diversa da può lasciare il socket in uno stato indeterminato. Se un'applicazione annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere dalla possibilità di eseguire sul socket è una chiamata a `Close`, anche se altre operazioni possono funzionare su alcune implementazioni di Windows Sockets. Se si desidera la massima portabilità per l'applicazione, è necessario fare attenzione a non dipendere dall'esecuzione di operazioni dopo un annullamento.

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="csocketcreate"></a><a name="create"></a>CSocket::Crea

Chiamare la funzione membro **Create** dopo aver creato un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nPortapresa*<br/>
Una porta specifica da utilizzare con il socket oppure 0 se si desidera che MFC selezioni una porta.

*nTipoDi corrente*<br/>
SOCK_STREAM o SOCK_DGRAM.

*Indirizzo lpszSocketAddress*<br/>
Puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero punteggiato, ad esempio "128.56.22.8". Il passaggio della stringa NULL `CSocket` per questo parametro indica che l'istanza deve restare in ascolto dell'attività client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un `GetLastError`codice di errore specifico può essere recuperato chiamando .

### <a name="remarks"></a>Osservazioni

`Create`quindi `Bind` chiamate per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM fornisce flussi di byte in sequenza, affidabili, bidirezionali e basati sulla connessione. Utilizza il protocollo TCP (Transmission Control Protocol) per la famiglia di indirizzi Internet.

- SOCK_DGRAM supporta datagrammi, che sono buffer senza connessione e inaffidabili di una lunghezza massima fissa (in genere piccola). Utilizza il protocollo UDP (User Datagram Protocol) per la famiglia di indirizzi Internet. Per utilizzare questa opzione, non è `CArchive` necessario utilizzare il socket con un oggetto.

    > [!NOTE]
    >  La `Accept` funzione membro accetta un riferimento `CSocket` a un nuovo oggetto vuoto come parametro. È necessario costruire questo `Accept`oggetto prima di chiamare . Tenere presente che se questo oggetto socket esce dall'ambito, la connessione viene chiusa. Non chiamare `Create` per questo nuovo oggetto socket.

Per ulteriori informazioni sui socket di flusso e di datagramma, vedere gli articoli [Windows Sockets: Background](../../mfc/windows-sockets-background.md), [Windows Sockets: Ports and Socket Addresses](../../mfc/windows-sockets-ports-and-socket-addresses.md)e Windows [Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="csocketcsocket"></a><a name="csocket"></a>CSocket::CSocket

Costruisce un oggetto `CSocket`.

```
CSocket();
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione, `Create` è necessario chiamare la funzione membro.

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="csocketfromhandle"></a><a name="fromhandle"></a>CSocket::FromHandle

Restituisce un `CSocket` puntatore a un oggetto.

```
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Puntatore a `CSocket` un oggetto oppure `CSocket` NULL se a *hSocket*non è associato alcun oggetto .

### <a name="remarks"></a>Osservazioni

Quando viene fornito un `CSocket` handle SOCKET, se un oggetto non è associato all'handle, la funzione membro restituisce NULL e non crea un oggetto temporaneo.

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="csocketisblocking"></a><a name="isblocking"></a>CSocket::IsBlocking

Chiamare questa funzione membro per determinare se è in corso una chiamata di blocco.

```
BOOL IsBlocking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il socket è bloccato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="csocketonmessagepending"></a><a name="onmessagepending"></a>CSocket::OnMessagePending

Eseguire l'override di questa funzione membro per cercare messaggi specifici da Windows e rispondere a essi nel socket.

```
virtual BOOL OnMessagePending();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Si tratta di un oggetto sottoponibile a override avanzato.

Il framework `OnMessagePending` chiama mentre il socket sta pompando messaggi di Windows per dare la possibilità di gestire i messaggi di interesse per l'applicazione. Per esempi di `OnMessagePending`utilizzo, vedere l'articolo Windows [Sockets: Derivazione da classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).

Per ulteriori informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="see-also"></a>Vedere anche

[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
