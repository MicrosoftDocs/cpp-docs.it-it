---
title: CSocket (classe)
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
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323960"
---
# <a name="csocket-class"></a>CSocket (classe)

Deriva da `CAsyncSocket`eredita il relativo incapsulamento dell'API di socket di Windows e rappresenta un livello superiore di astrazione rispetto a quello di un `CAsyncSocket` oggetto.

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
|[CSocket::Attach](#attach)|Associa un handle del SOCKET a un `CSocket` oggetto.|
|[CSocket::CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco che è attualmente in corso.|
|[CSocket::Create](#create)|Crea un socket.|
|[CSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CSocket` oggetto, specificato un handle SOCKET.|
|[CSocket::IsBlocking](#isblocking)|Determina se una chiamata di blocco è in corso.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CSocket::OnMessagePending](#onmessagepending)|Chiamato per elaborare messaggi in sospeso durante l'attesa di una chiamata di blocco per il completamento.|

## <a name="remarks"></a>Note

`CSocket` funziona con le classi `CSocketFile` e `CArchive` per gestire l'invio e ricezione dei dati.

Oggetto `CSocket` oggetto fornisce inoltre il blocco, che è essenziale per l'operazione sincrona di `CArchive`. Il blocco di funzioni, ad esempio `Receive`, `Send`, `ReceiveFrom`, `SendTo`, e `Accept` (tutte ereditate da `CAsyncSocket`), non restituiscono un `WSAEWOULDBLOCK` errore in `CSocket`. Queste funzioni attendere invece il completamento dell'operazione. Inoltre, la chiamata originale verrà terminata con l'errore WSAEINTR se `CancelBlockingCall` viene chiamato mentre una di queste funzioni bloccano.

Usare un `CSocket` dell'oggetto, chiamare il costruttore, quindi chiamare `Create` per creare l'handle del SOCKET sottostante (tipo di SOCKET). I parametri predefiniti di `Create` creare un socket di flusso, tuttavia, se non si usa il socket con un `CArchive` oggetto, è possibile specificare un parametro per creare invece un socket di datagramma, o per creare un socket server associati a una porta specifica. Connettersi a un socket client usando `Connect` sul lato client e `Accept` sul lato server. Quindi creare un `CSocketFile` dell'oggetto e associarlo al `CSocket` dell'oggetto nel `CSocketFile` costruttore. A questo punto, creare un `CArchive` oggetto per l'invio e uno per la ricezione di dati (se necessario), quindi la loro associazione con il `CSocketFile` dell'oggetto nel `CArchive` costruttore. Dopo avvengono complete le comunicazioni, eliminare definitivamente il `CArchive`, `CSocketFile`, e `CSocket` oggetti. In questo articolo viene descritto il tipo di dati SOCKET [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).

Quando si usa `CArchive` con `CSocketFile` e `CSocket`, è possibile che si verifichi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. Infatti, socket di Windows consentono solo una chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per ogni FD_READ. Se si verifica un FD_READ quando non sono presenti dati da leggere, si blocca l'applicazione. Se non si verifica mai FD_READ un'altra, l'applicazione interrompe la comunicazione tramite socket.

È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete in genere 1096 almeno byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere che tutti i dati da ricevere e solo a questo punto avviare l'operazione di lettura.

Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che si dichiararla altrove nel codice.

[!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]

> [!NOTE]
>  Quando si usa socket MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.

Per altre informazioni, vedere [socket di Windows in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: Funzionamento dei socket con archivi](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: Sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: Esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAsyncSocket](../../mfc/reference/casyncsocket-class.md)

`CSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** AfxSock

##  <a name="attach"></a>  CSocket:: Attach

Chiamare questa funzione membro per collegare il `hSocket` handle per un `CSocket` oggetto.

```
BOOL Attach(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Note

L'handle del SOCKET viene archiviato dell'oggetto [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) (membro dati).

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCSocketThread#1](../../mfc/reference/codesnippet/cpp/csocket-class_2.h)]

[!code-cpp[NVC_MFCSocketThread#2](../../mfc/reference/codesnippet/cpp/csocket-class_3.cpp)]

[!code-cpp[NVC_MFCSocketThread#3](../../mfc/reference/codesnippet/cpp/csocket-class_4.cpp)]

##  <a name="cancelblockingcall"></a>  CSocket::CancelBlockingCall

Chiamare questa funzione membro per annullare una chiamata di blocco attualmente in corso.

```
void CancelBlockingCall();
```

### <a name="remarks"></a>Note

Questa funzione Annulla qualsiasi operazione di blocco in sospeso per questo socket. La chiamata di blocco originale terminerà presto con l'errore WSAEINTR.

Nel caso di un blocco `Connect` operazione, l'implementazione di Windows Sockets arresterà la chiamata di blocco, non appena possibile, ma potrebbe non essere possibile per le risorse di socket essere rilasciato solo quando la connessione è completata (e quindi è stata reimpostata) o il timeout. Questa condizione potrebbe essere significativo solo se l'applicazione tenta immediatamente di aprire un nuovo socket (se non socket sono disponibili) oppure per la connessione per lo stesso peer.

Annullare qualsiasi operazione diversa `Accept` può lasciare il socket in uno stato indeterminato. Se un'applicazione Annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere la possibilità di eseguire nel socket è una chiamata a `Close`, anche se altre operazioni potrebbero funzionare in alcune implementazioni di Windows Sockets. Se lo si desidera la portabilità massima per l'applicazione, è necessario prestare attenzione per non dipendere dall'esecuzione di operazioni dopo un annullamento.

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="create"></a>  CSocket::Create

Chiamare il **Create** funzione membro dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nSocketPort*<br/>
Una porta specifica da usare con i socket oppure 0 se si desidera che MFC per selezionare una porta.

*nSocketType*<br/>
SOCK_STREAM o SOCK_DGRAM.

*lpszSocketAddress*<br/>
Un puntatore a una stringa contenente l'indirizzo di rete del socket connessi, un numero separato da punti, ad esempio "128.56.22.8". Passando il carattere NULL di stringa per questo parametro indica il `CSocket` deve restare in attesa di un'istanza dell'attività dei client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando `GetLastError`.

### <a name="remarks"></a>Note

`Create` chiama quindi `Bind` per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM fornisce sequenziata, flussi di byte affidabili, a due vie e orientati alla connessione. Usa controllo TCP (Transmission Protocol) per la famiglia di indirizzi Internet.

- SOCK_DGRAM supporta datagrammi, che sono buffer senza connessione, non affidabili di lunghezza massima fissa (generalmente piccola). Usa protocollo UDP (User Datagram) per la famiglia di indirizzi Internet. Per usare questa opzione, non è necessario usare il socket con un `CArchive` oggetto.

    > [!NOTE]
    >  Il `Accept` membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare `Accept`. Tenere presente che se l'oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare `Create` per questo nuovo oggetto socket.

Per altre informazioni sui socket di flusso e datagramma, vedere gli articoli [Windows Sockets: In background](../../mfc/windows-sockets-background.md), [Windows Sockets: Porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md), e [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="csocket"></a>  CSocket::CSocket

Costruisce un oggetto `CSocket`.

```
CSocket();
```

### <a name="remarks"></a>Note

Dopo la costruzione, è necessario chiamare il `Create` funzione membro.

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="fromhandle"></a>  CSocket::FromHandle

Restituisce un puntatore a un `CSocket` oggetto.

```
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CSocket` dell'oggetto, o NULL se non esiste alcun `CSocket` oggetto connesso a *hSocket*.

### <a name="remarks"></a>Note

Quando viene specificato un handle del SOCKET, se un `CSocket` oggetto non è connesso all'handle, la funzione membro restituisce NULL e non crea un oggetto temporaneo.

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="isblocking"></a>  CSocket::IsBlocking

Chiamare questa funzione membro per determinare se una chiamata di blocco è in corso.

```
BOOL IsBlocking();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il socket sta bloccando; in caso contrario 0.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

##  <a name="onmessagepending"></a>  CSocket::OnMessagePending

Eseguire l'override di questa funzione membro per cercare determinati messaggi da Windows e rispondere di conseguenza il socket.

```
virtual BOOL OnMessagePending();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato gestito; in caso contrario 0.

### <a name="remarks"></a>Note

Si tratta di un'avanzata sottoponibile a override.

Il framework chiama `OnMessagePending` mentre il socket è visualizzazione messaggi di Windows per offrirti la possibilità di gestire i messaggi di interesse per l'applicazione. Per esempi di come è possibile usare `OnMessagePending`, vedere l'articolo [Windows Sockets: Derivazione dalle classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).

Per altre informazioni, vedere [Windows Sockets: Utilizzo di socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="see-also"></a>Vedere anche

[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CAsyncSocket](../../mfc/reference/casyncsocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
