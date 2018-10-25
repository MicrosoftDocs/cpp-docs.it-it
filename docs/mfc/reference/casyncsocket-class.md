---
title: Classe CAsyncSocket | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAsyncSocket
- AFXSOCK/CAsyncSocket
- AFXSOCK/CAsyncSocket::CAsyncSocket
- AFXSOCK/CAsyncSocket::Accept
- AFXSOCK/CAsyncSocket::AsyncSelect
- AFXSOCK/CAsyncSocket::Attach
- AFXSOCK/CAsyncSocket::Bind
- AFXSOCK/CAsyncSocket::Close
- AFXSOCK/CAsyncSocket::Connect
- AFXSOCK/CAsyncSocket::Create
- AFXSOCK/CAsyncSocket::Detach
- AFXSOCK/CAsyncSocket::FromHandle
- AFXSOCK/CAsyncSocket::GetLastError
- AFXSOCK/CAsyncSocket::GetPeerName
- AFXSOCK/CAsyncSocket::GetPeerNameEx
- AFXSOCK/CAsyncSocket::GetSockName
- AFXSOCK/CAsyncSocket::GetSockNameEx
- AFXSOCK/CAsyncSocket::GetSockOpt
- AFXSOCK/CAsyncSocket::IOCtl
- AFXSOCK/CAsyncSocket::Listen
- AFXSOCK/CAsyncSocket::Receive
- AFXSOCK/CAsyncSocket::ReceiveFrom
- AFXSOCK/CAsyncSocket::ReceiveFromEx
- AFXSOCK/CAsyncSocket::Send
- AFXSOCK/CAsyncSocket::SendTo
- AFXSOCK/CAsyncSocket::SendToEx
- AFXSOCK/CAsyncSocket::SetSockOpt
- AFXSOCK/CAsyncSocket::ShutDown
- AFXSOCK/CASyncSocket::Socket
- AFXSOCK/CAsyncSocket::OnAccept
- AFXSOCK/CAsyncSocket::OnClose
- AFXSOCK/CAsyncSocket::OnConnect
- AFXSOCK/CAsyncSocket::OnOutOfBandData
- AFXSOCK/CAsyncSocket::OnReceive
- AFXSOCK/CAsyncSocket::OnSend
- AFXSOCK/CAsyncSocket::m_hSocket
dev_langs:
- C++
helpviewer_keywords:
- CAsyncSocket [MFC], CAsyncSocket
- CAsyncSocket [MFC], Accept
- CAsyncSocket [MFC], AsyncSelect
- CAsyncSocket [MFC], Attach
- CAsyncSocket [MFC], Bind
- CAsyncSocket [MFC], Close
- CAsyncSocket [MFC], Connect
- CAsyncSocket [MFC], Create
- CAsyncSocket [MFC], Detach
- CAsyncSocket [MFC], FromHandle
- CAsyncSocket [MFC], GetLastError
- CAsyncSocket [MFC], GetPeerName
- CAsyncSocket [MFC], GetPeerNameEx
- CAsyncSocket [MFC], GetSockName
- CAsyncSocket [MFC], GetSockNameEx
- CAsyncSocket [MFC], GetSockOpt
- CAsyncSocket [MFC], IOCtl
- CAsyncSocket [MFC], Listen
- CAsyncSocket [MFC], Receive
- CAsyncSocket [MFC], ReceiveFrom
- CAsyncSocket [MFC], ReceiveFromEx
- CAsyncSocket [MFC], Send
- CAsyncSocket [MFC], SendTo
- CAsyncSocket [MFC], SendToEx
- CAsyncSocket [MFC], SetSockOpt
- CAsyncSocket [MFC], ShutDown
- CASyncSocket [MFC], Socket
- CAsyncSocket [MFC], OnAccept
- CAsyncSocket [MFC], OnClose
- CAsyncSocket [MFC], OnConnect
- CAsyncSocket [MFC], OnOutOfBandData
- CAsyncSocket [MFC], OnReceive
- CAsyncSocket [MFC], OnSend
- CAsyncSocket [MFC], m_hSocket
ms.assetid: cca4d5a1-aa0f-48bd-843e-ef0e2d7fc00b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 562f4920da6eff5af665b8424471ca847de169c7
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50082274"
---
# <a name="casyncsocket-class"></a>CAsyncSocket (classe)

Rappresenta un Socket di Windows, ovvero un endpoint di comunicazione di rete.

## <a name="syntax"></a>Sintassi

```
class CAsyncSocket : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::CAsyncSocket](#casyncsocket)|Costruisce un oggetto `CAsyncSocket`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: Accept](#accept)|Accetta una connessione sul socket.|
|[CAsyncSocket::AsyncSelect](#asyncselect)|Notifica degli eventi di richieste per il socket.|
|[CAsyncSocket::Attach](#attach)|Associa un handle del socket a un `CAsyncSocket` oggetto.|
|[CAsyncSocket::Bind](#bind)|Associa il socket di un indirizzo locale.|
|[CAsyncSocket::Close](#close)|Chiude il socket.|
|[CAsyncSocket:: Connect](#connect)|Stabilisce una connessione a un socket di peer.|
|[CAsyncSocket::Create](#create)|Crea un socket.|
|[CAsyncSocket::Detach](#detach)|Scollega un handle del socket da un `CAsyncSocket` oggetto.|
|[CAsyncSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CAsyncSocket` oggetto, specificato un handle di socket.|
|[CAsyncSocket::GetLastError](#getlasterror)|Ottiene lo stato di errore per l'ultima operazione non riuscita.|
|[CAsyncSocket::GetPeerName](#getpeername)|Ottiene l'indirizzo del socket peer a cui è connesso il socket.|
|[CAsyncSocket::GetPeerNameEx](#getpeernameex)|Ottiene l'indirizzo del socket peer a cui il socket è connesso (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::GetSockName](#getsockname)|Ottiene il nome locale per un socket.|
|[CAsyncSocket::GetSockNameEx](#getsocknameex)|Ottiene il nome locale per un socket (handle indirizzi IPv6).|
|[CAsyncSocket::GetSockOpt](#getsockopt)|Recupera un'opzione di socket.|
|[CAsyncSocket::IOCtl](#ioctl)|Controlla la modalità del socket.|
|[CAsyncSocket:: Listen](#listen)|Consente di stabilire un socket per ascoltare le richieste di connessione in ingresso.|
|[CAsyncSocket::Receive](#receive)|Riceve i dati dal socket.|
|[CAsyncSocket::ReceiveFrom](#receivefrom)|Riceve un datagramma e memorizza l'indirizzo di origine.|
|[CAsyncSocket::ReceiveFromEx](#receivefromex)|Riceve un datagramma e memorizza l'indirizzo di origine (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::Send](#send)|Invia i dati a un socket connesso.|
|[CAsyncSocket:: SendTo](#sendto)|Invia dati a una destinazione specifica.|
|[CAsyncSocket::SendToEx](#sendtoex)|Invia dati a una destinazione specifica (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::SetSockOpt](#setsockopt)|Imposta un'opzione di socket.|
|[CAsyncSocket::ShutDown](#shutdown)|Consente di disattivare `Send` e/o `Receive` chiama sul socket.|
|[CASyncSocket::Socket](#socket)|Alloca un handle del socket.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::OnAccept](#onaccept)|Notifica a un socket in ascolto che può accettare richieste di connessione in sospeso chiamando `Accept`.|
|[CAsyncSocket::OnClose](#onclose)|Notifica a un socket connesso il socket è chiuso.|
|[CAsyncSocket::OnConnect](#onconnect)|Notifica a un socket di connessione che il tentativo di connessione sia completo se con esito positivo o errore.|
|[CAsyncSocket::OnOutOfBandData](#onoutofbanddata)|Notifica a un socket di ricezione che sono disponibili dati fuori banda da leggere nel socket, in genere un messaggio ad alta priorità.|
|[CAsyncSocket::OnReceive](#onreceive)|Notifica a un socket di ascolto di dati deve essere recuperato chiamando `Receive`.|
|[CAsyncSocket::OnSend](#onsend)|Notifica a un socket che può inviare dati tramite una chiamata `Send`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::operator =](#operator_eq)|Assegna un nuovo valore per un `CAsyncSocket` oggetto.|
|[CAsyncSocket::operator SOCKET](#operator_socket)|Utilizzare questo operatore per recuperare l'handle del SOCKET del `CAsyncSocket` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::m_hSocket](#m_hsocket)|Indica l'handle del SOCKET associato a questo `CAsyncSocket` oggetto.|

## <a name="remarks"></a>Note

Classe `CAsyncSocket` incapsula l'API di funzioni di Socket di Windows, che fornisce un'astrazione orientate a oggetti per i programmatori che intendono usare i socket di Windows in combinazione con MFC.

Questa classe si basa sul presupposto di aver compreso le comunicazioni di rete. Si è responsabili della gestione di blocco, le differenze di ordine byte, e le conversioni tra Unicode e impostare le stringhe (MBCS). Se si desidera che un'interfaccia più pratica che gestisce automaticamente questi problemi, vedere la classe [CSocket](../../mfc/reference/csocket-class.md).

Usare un `CAsyncSocket` dell'oggetto, chiamare il relativo costruttore, quindi chiamare il [Create](#create) funzione per creare l'handle del socket sottostante (tipo `SOCKET`), tranne che sui socket accettato. Per una chiamata di socket server il [ascolto](#listen) funzione di membro e per una chiamata di socket client il [Connect](#connect) funzione membro. Il socket server che deve chiamare il [Accept](#accept) funzione dopo aver ricevuto una richiesta di connessione. Usare i restanti `CAsyncSocket` funzioni per le comunicazioni tra i socket. Al termine, eliminare definitivamente il `CAsyncSocket` dell'oggetto se è stato creato nell'heap; il distruttore chiama automaticamente il [Chiudi](#close) (funzione). In questo articolo viene descritto il tipo di dati SOCKET [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).

> [!NOTE]
>  Quando si usa socket MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.

Per altre informazioni, vedere [Windows Sockets: uso della classe CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) e relativi articoli., nonché [API Windows Sockets versione 2](/windows/desktop/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAsyncSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** AfxSock

##  <a name="accept"></a>  CAsyncSocket:: Accept

Chiamare questa funzione membro per accettare una connessione su un socket.

```
virtual BOOL Accept(
    CAsyncSocket& rConnectedSocket,
    SOCKADDR* lpSockAddr = NULL,
    int* lpSockAddrLen = NULL);
```

### <a name="parameters"></a>Parametri

*rConnectedSocket*<br/>
Un riferimento che identifica un nuovo socket che è disponibile per la connessione.

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve l'indirizzo di connessione del socket, come nota nella rete. Il formato esatto delle *lpSockAddr* argomento è determinato dalla famiglia di indirizzi definita quando il socket è stato creato. Se *lpSockAddr* e/o *lpSockAddrLen* equivalgono a NULL, viene restituita alcuna informazione sull'indirizzo remoto del socket accettato.

*lpSockAddrLen*<br/>
Un puntatore alla lunghezza dell'indirizzo nella *lpSockAddr* in byte. Il *lpSockAddrLen* è un parametro del valore risultato: inizialmente deve contenere la quantità di spazio a cui punta *lpSockAddr*; in caso di esito conterrà la lunghezza effettiva (in byte) dell'indirizzo restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* argomento è troppo piccolo (minore delle dimensioni di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).

- WSAEINPROGRESS A che chiamare blocco Windows Sockets è in corso.

- WSAEINVAL `Listen` non è stato richiamato prima dell'accettazione.

- WSAEMFILE la coda è vuota dopo l'inserimento di accettare e non i descrittori sono disponibili.

- Spazio nel buffer WSAENOBUFS non è disponibile.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP il socket di cui viene fatto riferimento non è un tipo che supporta orientato alla connessione del servizio.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e non vi sono connessioni presente per essere accettata.

### <a name="remarks"></a>Note

Questa routine estrae la prima connessione nella coda di connessioni in sospeso, crea un nuovo socket con le stesse proprietà di questo socket e lo collega al *rConnectedSocket*. Se non sono presenti nella coda, le connessioni in sospeso `Accept` restituisce zero e `GetLastError` restituisce un errore. Il socket accettato ( *rConnectedSocket)* non possono essere utilizzati per accettare più connessioni. Il socket originale rimane aperta e in ascolto.

L'argomento *lpSockAddr* è un parametro del risultato che viene compilato con l'indirizzo del socket che esegue la connessione, come noto a livello di comunicazioni. `Accept` viene usato con i tipi di socket orientati alla connessione, ad esempio SOCK_STREAM.

##  <a name="asyncselect"></a>  CAsyncSocket::AsyncSelect

Chiamare questa funzione membro per richiedere una notifica di evento per un socket.

```
BOOL AsyncSelect(long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*lEvent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete in cui è interessata l'applicazione.

- FD_READ desidera ricevere notifiche di conformità per la lettura.

- FD_WRITE desidera ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati out-of-band.

- FD_ACCEPT desidera ricevere una notifica di connessioni in ingresso.

- FD_CONNECT desidera ricevere una notifica di risultati di connessione.

- FD_CLOSE desidera ricevere una notifica quando un socket è stata chiusa da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEINVAL indica che uno dei parametri specificati non è valido.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata per specificare quali funzioni di notifica di MFC callback verranno chiamate per il socket. `AsyncSelect` imposta automaticamente questo socket in modalità non di blocco. Per altre informazioni, vedere l'articolo [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="attach"></a>  CAsyncSocket::Attach

Chiamare questa funzione membro per collegare il *hSocket* handle per un `CAsyncSocket` oggetto.

```
BOOL Attach(
    SOCKET hSocket, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

*lEvent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete in cui è interessata l'applicazione.

- FD_READ desidera ricevere notifiche di conformità per la lettura.

- FD_WRITE desidera ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati out-of-band.

- FD_ACCEPT desidera ricevere una notifica di connessioni in ingresso.

- FD_CONNECT desidera ricevere una notifica di risultati di connessione.

- FD_CLOSE desidera ricevere una notifica quando un socket è stata chiusa da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Note

L'handle del SOCKET viene archiviato dell'oggetto [m_hSocket](#m_hsocket) (membro dati).

##  <a name="bind"></a>  CAsyncSocket::Bind

Chiamare questa funzione membro per associare un indirizzo locale con i socket.

```
BOOL Bind(
    UINT nSocketPort,
    LPCTSTR lpszSocketAddress = NULL);

BOOL Bind (
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen);
```

### <a name="parameters"></a>Parametri

*nSocketPort*<br/>
La porta che identifica l'applicazione di socket.

*lpszSocketAddress*<br/>
L'indirizzo di rete, un numero separato da punti, ad esempio "128.56.22.8". Passando il carattere NULL di stringa per questo parametro indica il `CAsyncSocket` deve restare in attesa di un'istanza dell'attività dei client su tutte le interfacce di rete.

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo da assegnare a questo socket.

*nSockAddrLen*<br/>
La lunghezza dell'indirizzo nella *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEADDRINUSE l'indirizzo specificato è già in uso. (Vedere l'opzione di socket SO_REUSEADDR sotto [SetSockOpt](#setsockopt).)

- WSAEFAULT il *nSockAddrLen* argomento è troppo piccolo (minore delle dimensioni di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).

- WSAEINPROGRESS A che chiamare blocco Windows Sockets è in corso.

- WSAEAFNOSUPPORT la famiglia di indirizzi specificato non è supportata da questa porta.

- WSAEINVAL il socket è già associato a un indirizzo.

- Non WSAENOBUFS sufficientemente memorizza nel buffer disponibile, numero eccessivo di connessioni.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

Questa routine viene utilizzata in precedenza in un datagramma non connessa o un socket di flusso, le successive `Connect` o `Listen` chiamate. Prima che può accettare le richieste di connessione, un socket in attesa di server deve selezionare un numero di porta e renderlo noti per i socket di Windows tramite una chiamata `Bind`. `Bind` Consente di stabilire l'associazione locale (numero indirizzo/porta host) del socket assegnando un nome locale a un socket senza nome.

##  <a name="casyncsocket"></a>  CAsyncSocket::CAsyncSocket

Costruisce un oggetto socket vuoto.

```
CAsyncSocket();
```

### <a name="remarks"></a>Note

Al termine della creazione dell'oggetto, è necessario chiamare relativo `Create` funzione membro per creare la struttura dei dati SOCKET e associare il relativo indirizzo. (Sul lato di una comunicazione Windows Sockets, quando il socket di ascolto crea un socket da utilizzare nel server di `Accept` chiamata, non è necessario chiamare `Create` per tale socket.)

##  <a name="close"></a>  CAsyncSocket::Close

Chiude il socket.

```
virtual void Close();
```

### <a name="remarks"></a>Note

Questa funzione rilascia il descrittore di socket in modo che ulteriormente i riferimenti a esso avrà esito negativo con l'errore WSAENOTSOCK. Se questo è l'ultimo riferimento al socket sottostante, vengono rimosse le informazioni di denominazione associate e i dati nella coda. Chiamate del distruttore dell'oggetto socket `Close` automaticamente.

Per la `CAsyncSocket`, ma non per `CSocket`, la semantica di `Close` sono influenzate dalle opzioni di socket SO_LINGER e SO_DONTLINGER. Per altre informazioni, vedere la funzione membro `GetSockOpt`.

##  <a name="connect"></a>  CAsyncSocket:: Connect

Chiamare questa funzione membro per stabilire una connessione a un socket di datagramma o un flusso non connesso.

```
BOOL Connect(
    LPCTSTR lpszHostAddress,
    UINT nHostPort);

BOOL Connect(
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen);
```

### <a name="parameters"></a>Parametri

*lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com", o un numero separato da punti, ad esempio "128.56.22.8".

*nHostPort*<br/>
La porta che identifica l'applicazione di socket.

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo del socket connesso.

*nSockAddrLen*<br/>
La lunghezza dell'indirizzo nella *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se è presente un codice di errore di WSAEWOULDBLOCK e l'applicazione usa i metodi di callback sottoponibile a override, l'applicazione riceverà un `OnConnect` messaggio durante l'operazione di connessione è stata completata. Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEADDRINUSE l'indirizzo specificato è già in uso.

- WSAEINPROGRESS A che chiamare blocco Windows Sockets è in corso.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Indirizzi WSAEAFNOSUPPORT della famiglia specificata non possono essere usati con questo socket.

- WSAECONNREFUSED il tentativo di connessione è stata rifiutata.

- Indirizzo di destinazione WSAEDESTADDRREQ A è obbligatorio.

- WSAEFAULT il *nSockAddrLen* argomento non è corretto.

- Indirizzo host WSAEINVAL non valido.

- WSAEISCONN il socket è già connesso.

- No WSAEMFILE sono disponibili altri descrittori di file.

- WSAENETUNREACH la rete non può essere raggiunto da questo host in questo momento.

- Spazio nel buffer WSAENOBUFS non è disponibile. Il socket non può essere connesso.

- WSAENOTSOCK il descrittore non è un socket.

- Timeout del tentativo WSAETIMEDOUT connettersi senza stabilire una connessione.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e non è possibile completare immediatamente la connessione.

### <a name="remarks"></a>Note

Se il socket è non associato, valori univoci vengono assegnati all'associazione locale dal sistema e il socket è contrassegnato come associato. Si noti che se il campo indirizzo della struttura di nome è zeri, `Connect` restituirà zero. Per ottenere informazioni sull'errore, chiamare il `GetLastError` funzione membro.

Per i socket di flusso (Tipo SOCK_STREAM), una connessione attiva viene avviata per l'host esterna. Quando la chiamata di socket viene completato correttamente, il socket è pronto per inviare e ricevere dati.

Per un socket di datagramma (tipo SOCK_DGRAM), una destinazione predefinita è impostata, che verrà usato in successive `Send` e `Receive` chiamate.

##  <a name="create"></a>  CAsyncSocket::Create

Chiamare il `Create` funzione membro dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nSocketPort*<br/>
Una porta nota per l'uso con i socket oppure 0 se si desidera che Windows Sockets per selezionare una porta.

*nSocketType*<br/>
SOCK_STREAM o SOCK_DGRAM.

*lEvent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete in cui è interessata l'applicazione.

- FD_READ desidera ricevere notifiche di conformità per la lettura.

- FD_WRITE desidera ricevere notifiche di conformità per la scrittura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati out-of-band.

- FD_ACCEPT desidera ricevere una notifica di connessioni in ingresso.

- FD_CONNECT desidera ricevere una notifica della connessione completato.

- FD_CLOSE desidera ricevere una notifica di chiusura del socket.

*lpszSockAddress*<br/>
Un puntatore a una stringa contenente l'indirizzo di rete del socket connessi, un numero separato da punti, ad esempio "128.56.22.8". Passando il carattere NULL di stringa per questo parametro indica il `CAsyncSocket` deve restare in attesa di un'istanza dell'attività dei client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEAFNOSUPPORT la famiglia di indirizzi specificato non è supportato.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- No WSAEMFILE sono disponibili altri descrittori di file.

- Spazio nel buffer WSAENOBUFS non è disponibile. Impossibile creare il socket.

- WSAEPROTONOSUPPORT la porta specificata non è supportato.

- WSAEPROTOTYPE la porta specificata è un tipo errato per questo socket.

- WSAESOCKTNOSUPPORT il tipo di socket specificato non è supportata in questa famiglia di indirizzi.

### <a name="remarks"></a>Note

`Create` le chiamate [Socket](#socket) e, se ha esito positivo, chiama [associare](#bind) per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM fornisce sequenziata, flussi di byte affidabili full duplex, basato sulla connessione. Usa il protocollo TCP (Transmission Control) per la famiglia di indirizzi Internet.

- SOCK_DGRAM supporta datagrammi, che sono pacchetti senza connessione, non affidabili di lunghezza massima fissa (generalmente piccola). Usa il protocollo UDP (User Datagram) per la famiglia di indirizzi Internet.

    > [!NOTE]
    >  Il `Accept` membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare `Accept`. Tenere presente che se l'oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare `Create` per questo nuovo oggetto socket.

> [!IMPORTANT]
> `Create` viene **non** thread-safe.  Se si chiama, in un ambiente a thread multipli in cui si poteva essere richiamato contemporaneamente da thread diversi, assicurarsi di proteggere ogni chiamata con un mutex o un altro blocco di sincronizzazione.

Per altre informazioni sui socket di flusso e datagramma, vedere gli articoli [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md) e [Windows Sockets: porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md) e [Windows API Sockets versione 2](/windows/desktop/WinSock/windows-sockets-start-page-2).

##  <a name="detach"></a>  CAsyncSocket::Detach

Chiamare questa funzione membro per scollegare l'handle del SOCKET nel *m_hSocket* membro dati dalle `CAsyncSocket` dell'oggetto e impostare *m_hSocket* su NULL.

```
SOCKET Detach();
```

##  <a name="fromhandle"></a>  CAsyncSocket::FromHandle

Restituisce un puntatore a un `CAsyncSocket` oggetto.

```
static CAsyncSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Un puntatore a un `CAsyncSocket` dell'oggetto, o NULL se non esiste alcun `CAsyncSocket` oggetto connesso a *hSocket*.

### <a name="remarks"></a>Note

Quando viene specificato un handle del SOCKET, se un `CAsyncSocket` oggetto non è connesso all'handle, la funzione membro restituisce NULL.

##  <a name="getlasterror"></a>  CAsyncSocket::GetLastError

Chiamare questa funzione membro per ottenere lo stato di errore per l'ultima operazione non riuscita.

```
static int PASCAL GetLastError();
```

### <a name="return-value"></a>Valore restituito

Il valore restituito indica il codice di errore per l'ultima routine Windows Sockets API eseguita da questo thread.

### <a name="remarks"></a>Note

Quando una funzione membro specifica indica che si è verificato un errore, `GetLastError` deve essere chiamato per recuperare il codice di errore appropriato. Vedere le descrizioni di funzione dei singoli membri per un elenco dei codici di errore applicabile.

Per altre informazioni sui codici di errore, vedere [API Windows Sockets versione 2](/windows/desktop/WinSock/windows-sockets-start-page-2).

##  <a name="getpeername"></a>  CAsyncSocket::GetPeerName

Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui è connesso questo socket.

```
BOOL GetPeerName(
    CString& rPeerAddress,
    UINT& rPeerPort);

BOOL GetPeerName(
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen);
```

### <a name="parameters"></a>Parametri

*rPeerAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rPeerPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Un puntatore per il [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve il nome del socket peer.

*lpSockAddrLen*<br/>
Un puntatore alla lunghezza dell'indirizzo nella *lpSockAddr* in byte. In fase di restituzione, il *lpSockAddrLen* argomento contiene le dimensioni effettive del *lpSockAddr* restituiti in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* l'argomento non è sufficientemente grande.

- WSAEINPROGRESS A che chiamare blocco Windows Sockets è in corso.

- WSAENOTCONN il socket non connesso.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetPeerNameEx](#getpeernameex).

##  <a name="getpeernameex"></a>  CAsyncSocket::GetPeerNameEx

Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui il socket è connesso (gestisce gli indirizzi IPv6).

```
BOOL GetPeerNameEx(
    CString& rPeerAddress,
    UINT& rPeerPort);
```

### <a name="parameters"></a>Parametri

*rPeerAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rPeerPort*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* l'argomento non è sufficientemente grande.

- WSAEINPROGRESS A che chiamare blocco Windows Sockets è in corso.

- WSAENOTCONN il socket non connesso.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

Questa funzione equivale [CAsyncSocket::GetPeerName](#getpeername) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.

##  <a name="getsockname"></a>  CAsyncSocket::GetSockName

Chiamare questa funzione membro per ottenere il nome locale per un socket.

```
BOOL GetSockName(
    CString& rSocketAddress,
    UINT& rSocketPort);

BOOL GetSockName(
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen);
```

### <a name="parameters"></a>Parametri

*rSocketAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve l'indirizzo del socket.

*lpSockAddrLen*<br/>
Un puntatore alla lunghezza dell'indirizzo nella *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* l'argomento non è sufficientemente grande.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAENOTSOCK il descrittore non è un socket.

- Il socket non è stato associato a un indirizzo con WSAEINVAL `Bind`.

### <a name="remarks"></a>Note

Questa chiamata è particolarmente utile quando un `Connect` senza tale operazione è stata effettuata chiamata un `Bind` innanzitutto; questa chiamata rappresenta l'unico mezzo che consente di determinare l'associazione locale che è stato impostato dal sistema.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetSockNameEx](#getsocknameex)

##  <a name="getsocknameex"></a>  CAsyncSocket::GetSockNameEx

Chiamare questa funzione membro per ottenere il nome locale per un socket (handle indirizzi IPv6).

```
BOOL GetSockNameEx(
    CString& rSocketAddress,
    UINT& rSocketPort);
```

### <a name="parameters"></a>Parametri

*rSocketAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* l'argomento non è sufficientemente grande.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAENOTSOCK il descrittore non è un socket.

- Il socket non è stato associato a un indirizzo con WSAEINVAL `Bind`.

### <a name="remarks"></a>Note

Questa chiamata è identico [CAsyncSocket::GetSockName](#getsockname) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.

Questa chiamata è particolarmente utile quando un `Connect` senza tale operazione è stata effettuata chiamata un `Bind` innanzitutto; questa chiamata rappresenta l'unico mezzo che consente di determinare l'associazione locale che è stato impostato dal sistema.

##  <a name="getsockopt"></a>  CAsyncSocket::GetSockOpt

Chiamare questa funzione membro per recuperare un'opzione di socket.

```
BOOL GetSockOpt(
    int nOptionName,
    void* lpOptionValue,
    int* lpOptionLen,
    int nLevel = SOL_SOCKET);
```

### <a name="parameters"></a>Parametri

*nOptionName*<br/>
L'opzione di socket per il quale è necessario recuperare il valore.

*lpOptionValue*<br/>
Un puntatore al buffer in cui deve essere restituito il valore per l'opzione richiesta. Viene restituito il valore associato all'opzione selezionata nel buffer *lpOptionValue*. Il valore integer a cui punta *lpOptionLen* originariamente deve contenere le dimensioni del buffer in byte; e in fase di restituzione, verrà impostato per la dimensione del valore restituito. Per SO_LINGER, questa sarà la dimensione di un `LINGER` struttura; per tutte le altre opzioni saranno le dimensioni di un valore booleano o un' **int**, a seconda dell'opzione. Visualizzare l'elenco delle opzioni e le relative dimensioni nella sezione Osservazioni.

*lpOptionLen*<br/>
Un puntatore alla dimensione dei *lpOptionValue* buffer in byte.

*nLevel*<br/>
Il livello in corrispondenza del quale viene definita l'opzione; gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se non è stato ancora impostata un'opzione con `SetSockOpt`, quindi `GetSockOpt` restituisce il valore predefinito per l'opzione. Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpOptionLen* argomento non è valido.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- L'opzione WSAENOPROTOOPT è sconosciuto o non è supportato. In particolare, SO_BROADCAST non è supportata sui socket di tipo SOCK_STREAM, mentre SO_ACCEPTCONN SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportate sui socket di tipo SOCK_DGRAM.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

`GetSockOpt` Recupera il valore corrente per un'opzione di socket associato a un socket di qualsiasi tipo, in qualsiasi stato e archivia il risultato nel *lpOptionValue*. Opzioni di influire sulle operazioni di socket, ad esempio il routing dei pacchetti, il trasferimento dei dati out-of-band e così via.

Le opzioni seguenti sono supportate per `GetSockOpt`. Il tipo identifica il tipo di dati indirizzati dalla *lpOptionValue*. L'opzione TCP_NODELAY utilizza livello IPPROTO_TCP; tutte le altre opzioni utilizzano livello SOL_SOCKET.

|Valore|Tipo|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket è in ascolto.|
|SO_BROADCAST|BOOL|Socket è configurato per la trasmissione dei messaggi trasmessi.|
|SO_DEBUG|BOOL|Debug abilitato.|
|SO_DONTLINGER|BOOL|Se true, l'opzione SO_LINGER è disabilitata.|
|SO_DONTROUTE|BOOL|Il routing è disabilitato.|
|SO_ERROR|**int**|Recuperare lo stato di errore e cancellare.|
|SO_KEEPALIVE|BOOL|Keep-Alive vengono inviati.|
|SO_LINGER|`struct LINGER`|Restituisce le opzioni di ritardo corrente.|
|SO_OOBINLINE|BOOL|Vengono ricevuti dati out-of-band nel flusso di dati normali.|
|SO_RCVBUF|int|Dimensione del buffer per riceve.|
|SO_REUSEADDR|BOOL|Il socket può essere associato a un indirizzo che è già in uso.|
|SO_SNDBUF|**int**|Dimensioni del buffer di Invia.|
|SO_TYPE|**int**|Tipo di socket (ad esempio, SOCK_STREAM).|
|TCP_NODELAY|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Non è supportate per le opzioni di Berkeley Software Distribution (BSD) `GetSockOpt` sono:

|Valore|Tipo|Significato|
|-----------|----------|-------------|
|SO_RCVLOWAT|**int**|Ricevere il limite minimo.|
|SO_RCVTIMEO|**int**|Timeout di ricezione.|
|SO_SNDLOWAT|**int**|Inviare il limite minimo.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|IP_OPTIONS||Ottenere le opzioni nell'intestazione IP.|
|TCP_MAXSEG|**int**|Ottenere le dimensioni massime segmento TCP.|

La chiamata `GetSockOpt` con un'opzione non supportata comporterà un codice di errore di WSAENOPROTOOPT restituito dalla `GetLastError`.

##  <a name="ioctl"></a>  CAsyncSocket::IOCtl

Chiamare questa funzione membro per controllare la modalità di un socket.

```
BOOL IOCtl(
    long lCommand,
    DWORD* lpArgument);
```

### <a name="parameters"></a>Parametri

*lCommand*<br/>
Il comando da eseguire sul socket.

*lpArgument*<br/>
Un puntatore a un parametro per *lCommand*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEINVAL *lCommand* non è un comando valido, o *lpArgument* non è un parametro per accettabile *lCommand*, o il comando non è applicabile al tipo di socket specificato .

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

Questa routine è utilizzabile in qualsiasi socket in qualsiasi stato. Utilizzato per ottenere o recuperare parametri operativi associati al socket, indipendente dal sottosistema di protocollo e le comunicazioni. Sono supportati i comandi seguenti:

- FIONBIO abilitare o disabilitare la modalità non di blocco nel socket. Il *lpArgument* punta il parametro in un `DWORD`, che è diverso da zero se è necessario abilitare la modalità non di blocco e zero se deve essere disabilitata. Se `AsyncSelect` è stata eseguita su un socket, quindi provare a usare `IOCtl` per impostare il socket nuovamente alla modalità di blocco avrà esito negativo con WSAEINVAL. Per impostare il socket torna alla modalità di blocco e impedire l'errore WSAEINVAL, un'applicazione è necessario prima disabilitare `AsyncSelect` chiamando `AsyncSelect` con il *lEvent* parametro uguale a 0, quindi chiamare `IOCtl`.

- FIONREAD determinare il numero massimo di byte che possono essere letti con uno `Receive` chiamare da questo socket. Il *lpArgument* punta il parametro in un `DWORD` in cui `IOCtl` archivia il risultato. Se il socket è di tipo SOCK_STREAM, FIONREAD restituisce la quantità totale di dati che possono essere letti in una singola `Receive`; si tratta in genere lo stesso come la quantità totale di dati in coda sul socket. Se il socket è di tipo SOCK_DGRAM, FIONREAD restituisce che le dimensioni del primo datagramma in coda sul socket.

- SIOCATMARK determinare se è stato letto tutti i dati out-of-band. Questo vale solo per un socket di tipo SOCK_STREAM che è stato configurato per la ricezione di tutti i dati out-of-band (SO_OOBINLINE) inline. Se nessun dato di out-of-band è in attesa di essere letti, l'operazione restituisce diverso da zero. In caso contrario, restituisce 0 e la successiva `Receive` o `ReceiveFrom` eseguite su socket verrà recuperati alcuni o tutti i dati che precede il "segno"; l'applicazione deve utilizzare l'operazione SIOCATMARK per determinare se rimangono dei dati. Se sono presenti dati normali che precede i dati (out-of-band) "urgenti", si verrà ricevuto in ordine. (Si noti che un `Receive` o `ReceiveFrom` verrà non combinare mai dati normali e out-of-band nella stessa chiamata.) Il *lpArgument* punta il parametro in un `DWORD` in cui `IOCtl` archivia il risultato.

Questa funzione è un subset di `ioctl()` utilizzata al socket Berkeley. In particolare, non vi è alcun comando che equivale a FIOASYNC, mentre SIOCATMARK è il comando solo livello di socket che è supportato.

##  <a name="listen"></a>  CAsyncSocket:: Listen

Chiamare questa funzione membro per l'ascolto delle richieste di connessione in ingresso.

```
BOOL Listen(int nConnectionBacklog = 5);
```

### <a name="parameters"></a>Parametri

*nConnectionBacklog*<br/>
La lunghezza massima che può raggiungere la coda di connessioni in sospeso. Intervallo valido è compreso tra 1 e 5.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- È diventato WSAEADDRINUSE un tentativo di rimanere in ascolto su un indirizzo in uso.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- Il socket non è stato associato a WSAEINVAL `Bind` o è già connesso.

- WSAEISCONN il socket è già connesso.

- No WSAEMFILE sono disponibili altri descrittori di file.

- Spazio nel buffer WSAENOBUFS non è disponibile.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP il socket di cui viene fatto riferimento non è di un tipo che supporta il `Listen` operazione.

### <a name="remarks"></a>Note

Per accettare le connessioni, il socket viene innanzitutto creato con `Create`, specificato con un backlog per le connessioni in ingresso `Listen`, e quindi vengono accettate le connessioni con `Accept`. `Listen` si applica solo per i socket che supportano le connessioni, vale a dire, quelli di tipo SOCK_STREAM. Il socket viene inserito la modalità "passiva" in cui le connessioni in ingresso vengono riconosciute e accodate in attesa di accettazione da parte del processo.

Questa funzione viene in genere utilizzata dal server (o qualsiasi applicazione che desidera accettare le connessioni) che può avere più di una richiesta di connessione alla volta: se arriva una richiesta di connessione con la coda completa, il client riceverà un errore con un'indicazione di WSAECONNREFUSED.

`Listen` è stato effettuato un tentativo di continuare a funzionare in modo razionale quando nessuna porta disponibile (descrittori). Verranno accettate connessioni fino a quando non lo svuotamento della coda. Se le porte diventano disponibili, una chiamata successiva a `Listen` o `Accept` verrà ricaricare la coda corrente o più recente "backlog," se possibile e riprendere in ascolto delle connessioni in ingresso.

##  <a name="m_hsocket"></a>  CAsyncSocket::m_hSocket

Contiene l'handle del SOCKET per il socket incapsulato da questo `CAsyncSocket` oggetto.

```
SOCKET m_hSocket;
```

##  <a name="onaccept"></a>  CAsyncSocket::OnAccept

Chiamato dal framework per notificare a un socket in ascolto che può accettare richieste di connessione in sospeso chiamando il [Accept](#accept) funzione membro.

```
virtual void OnAccept(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. I codici di errore seguente si applica al `OnAccept` funzione membro:

- **0** la funzione eseguita correttamente.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onclose"></a>  CAsyncSocket::OnClose

Chiamato dal framework per notificare il socket che i socket connesso viene chiusa dal processo.

```
virtual void OnClose(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. Codici di errore seguenti si applicano al `OnClose` funzione membro:

- **0** la funzione eseguita correttamente.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAECONNRESET la connessione è stata reimpostata dal lato remoto.

- WSAECONNABORTED la connessione è stata interrotta a causa di un timeout o un altro errore.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onconnect"></a>  CAsyncSocket::OnConnect

Chiamato dal framework per notificare questo socket che il tentativo di connessione è stato completato, se l'esito positivo o errore.

```
virtual void OnConnect(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. Codici di errore seguenti si applicano al `OnConnect` funzione membro:

- **0** la funzione eseguita correttamente.

- WSAEADDRINUSE l'indirizzo specificato è già in uso.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Indirizzi WSAEAFNOSUPPORT della famiglia specificata non possono essere usati con questo socket.

- È stato respinto in WSAECONNREFUSED il tentativo di connessione.

- Indirizzo di destinazione WSAEDESTADDRREQ A è obbligatorio.

- WSAEFAULT il *lpSockAddrLen* argomento non è corretto.

- WSAEINVAL il socket è già associato a un indirizzo.

- WSAEISCONN il socket è già connesso.

- No WSAEMFILE sono disponibili altri descrittori di file.

- WSAENETUNREACH la rete non può essere raggiunto da questo host in questo momento.

- Spazio nel buffer WSAENOBUFS non è disponibile. Il socket non può essere connesso.

- WSAENOTCONN il socket non connesso.

- WSAENOTSOCK il descrittore è un file, non un socket.

- Il tentativo di connessione WSAETIMEDOUT timeout senza stabilire una connessione.

### <a name="remarks"></a>Note

> [!NOTE]
>  Nelle [CSocket](../../mfc/reference/csocket-class.md), il `OnConnect` funzione di notifica non viene mai chiamato. Per le connessioni, è sufficiente chiamare `Connect`, che verrà restituito quando la connessione è stata completata (esito positivo o errore). Modalità di gestione delle notifiche di connessione è un dettaglio di implementazione di MFC.

Per altre informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#1](../../mfc/reference/codesnippet/cpp/casyncsocket-class_1.cpp)]

##  <a name="onoutofbanddata"></a>  CAsyncSocket::OnOutOfBandData

Chiamato dal framework per notificare il socket ricevente il socket di invio con dati out-of-band da inviare.

```
virtual void OnOutOfBandData(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. Codici di errore seguenti si applicano al `OnOutOfBandData` funzione membro:

- **0** la funzione eseguita correttamente.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

### <a name="remarks"></a>Note

Out-of-band dati sono un canale logicamente indipendente che è associato a ogni coppia di socket connessi typu SOCK_STREAM. Il canale viene in genere usato per inviare dati ad alta priorità.

MFC supporta i dati out-of-band, ma gli utenti della classe `CAsyncSocket` consigliabile evitare di utilizzarlo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di questo tipo di dati. Per altre informazioni sui dati out-of-band, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onreceive"></a>  CAsyncSocket::OnReceive

Chiamato dal framework per notificare il socket che vi sia i dati nel buffer che può essere recuperato chiamando il `Receive` funzione membro.

```
virtual void OnReceive(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. Codici di errore seguenti si applicano al `OnReceive` funzione membro:

- **0** la funzione eseguita correttamente.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#2](../../mfc/reference/codesnippet/cpp/casyncsocket-class_2.cpp)]

##  <a name="onsend"></a>  CAsyncSocket::OnSend

Chiamato dal framework per notificare il socket che ora possibile inviare dati chiamando il `Send` funzione membro.

```
virtual void OnSend(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
L'errore più recente in un socket. Codici di errore seguenti si applicano al `OnSend` funzione membro:

- **0** la funzione eseguita correttamente.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#3](../../mfc/reference/codesnippet/cpp/casyncsocket-class_3.cpp)]

##  <a name="operator_eq"></a>  CAsyncSocket::operator =

Assegna un nuovo valore per un `CAsyncSocket` oggetto.

```
void operator=(const CAsyncSocket& rSrc);
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Un riferimento a un oggetto esistente `CAsyncSocket` oggetto.

### <a name="remarks"></a>Note

Chiamare questa funzione per copiare un oggetto esistente `CAsyncSocket` a un altro oggetto `CAsyncSocket` oggetto.

##  <a name="operator_socket"></a>  CAsyncSocket::operator SOCKET

Utilizzare questo operatore per recuperare l'handle del SOCKET del `CAsyncSocket` oggetto.

```
operator SOCKET() const;
```

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, l'handle dell'oggetto SOCKET. in caso contrario, NULL.

### <a name="remarks"></a>Note

È possibile usare l'handle per chiamare direttamente le API di Windows.

##  <a name="receive"></a>  CAsyncSocket::Receive

Chiamare questa funzione membro per ricevere dati da un socket.

```
virtual int Receive(
    void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer per i dati in ingresso.

*nBufLen*<br/>
La lunghezza di *lpBuf* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_PEEK legge i dati in ingresso. I dati vengono copiati nel buffer, ma non viene rimosso dalla coda di input.

- Dati out-of-band MSG_OOB processo.

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `Receive` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAENOTCONN il socket non connesso.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `Receive` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e `Receive` blocca l'operazione.

- WSAEMSGSIZE il datagramma è troppo grande per rientrare nel buffer specificato ed è stato troncato.

- Il socket non è stato associato a WSAEINVAL `Bind`.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

### <a name="remarks"></a>Note

Questa funzione viene usata per i socket di datagramma o flusso connessi e viene usata per leggere i dati in ingresso.

Per i socket di tipo SOCK_STREAM, viene restituite quante più informazioni perché è attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione di dati out-of-band (opzione di socket SO_OOBINLINE) inline e i dati fuori banda non sono stato letti, verranno restituiti solo i dati out-of-band. L'applicazione può usare la `IOCtlSIOCATMARK` opzione oppure [OnOutOfBandData](#onoutofbanddata) per determinare se tutti i dati più out-of-band rimangono da leggere.

Per i socket di datagramma, vengono estratti dati il primo datagramma, fino alla dimensione del buffer fornito. Se il datagramma è maggiore del buffer specificato, viene riempito il buffer con la prima parte del datagramma, i dati in eccesso vengono persi, e `Receive` restituisce un valore di SOCKET_ERROR con il codice di errore è impostato su WSAEMSGSIZE. Se non in ingresso sono disponibili dati al socket, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il [OnReceive](#onreceive) funzione di callback può essere utilizzata per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `Receive` verrà terminata immediatamente con 0 byte ricevuti. Se la connessione è stata reimpostata, un `Receive` avrà esito negativo con l'errore WSAECONNRESET.

`Receive` deve essere chiamato solo una volta per ogni volta che [CAsyncSocket::OnReceive](#onreceive) viene chiamato.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAsyncSocket::OnReceive](#onreceive).

##  <a name="receivefrom"></a>  CAsyncSocket::ReceiveFrom

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nel [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura o nella *rSocketAddress*.

```
int ReceiveFrom(
    void* lpBuf,
    int nBufLen,
    CString& rSocketAddress,
    UINT& rSocketPort,
    int nFlags = 0);

int ReceiveFrom(
    void* lpBuf,
    int nBufLen,
    SOCKADDR* lpSockAddr,
    int* lpSockAddrLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer per i dati in ingresso.

*nBufLen*<br/>
La lunghezza di *lpBuf* in byte.

*rSocketAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo di origine al momento della restituzione.

*lpSockAddrLen*<br/>
Un puntatore alla lunghezza dell'indirizzo di origine nella *lpSockAddr* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_PEEK legge i dati in ingresso. I dati vengono copiati nel buffer, ma non viene rimosso dalla coda di input.

- Dati out-of-band MSG_OOB processo.

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `ReceiveFrom` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando `GetLastError`. Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* argomento non è valido: il *lpSockAddr* buffer è troppo piccolo per contenere l'indirizzo del peer.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- Il socket non è stato associato a WSAEINVAL `Bind`.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `ReceiveFrom` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e `ReceiveFrom` blocca l'operazione.

- WSAEMSGSIZE il datagramma è troppo grande per rientrare nel buffer specificato ed è stato troncato.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata per leggere i dati in ingresso in un socket (probabilmente connesso) e acquisire l'indirizzo da cui i dati sono stati inviati.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::ReceiveFromEx](#receivefromex).

Per i socket di tipo SOCK_STREAM, viene restituite quante più informazioni perché è attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione di dati out-of-band (opzione di socket SO_OOBINLINE) inline e i dati fuori banda non sono stato letti, verranno restituiti solo i dati out-of-band. L'applicazione può usare la `IOCtlSIOCATMARK` opzione o `OnOutOfBandData` per determinare se tutti i dati più out-of-band rimangono da leggere. Il *lpSockAddr* e *lpSockAddrLen* i parametri vengono ignorati per i socket SOCK_STREAM.

Per i socket di datagramma, vengono estratti dati il primo datagramma, fino alla dimensione del buffer fornito. Se il datagramma è maggiore del buffer specificato, viene riempito il buffer con la prima parte del messaggio, i dati in eccesso vengono persi, e `ReceiveFrom` restituisce un valore di SOCKET_ERROR con il codice di errore è impostato su WSAEMSGSIZE.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, viene copiato l'indirizzo di rete del socket che ha inviato i dati per il corrispondente [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura. Il valore a cui punta *lpSockAddrLen* viene inizializzata per la dimensione della struttura e viene modificato in fase di restituzione per indicare le dimensioni effettive dell'indirizzo archiviato vengono eliminati. Se non è disponibile alcun dato in ingresso al socket, il `ReceiveFrom` chiamata in attesa di dati in arrivo, a meno che il socket non bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il `OnReceive` callback può essere utilizzato per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `ReceiveFrom` verrà terminata immediatamente con 0 byte ricevuti.

##  <a name="receivefromex"></a>  CAsyncSocket::ReceiveFromEx

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nel [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura o nella *rSocketAddress* (gestisce gli indirizzi IPv6).

```
int ReceiveFromEx(
    void* lpBuf,
    int nBufLen,
    CString& rSocketAddress,
    UINT& rSocketPort,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer per i dati in ingresso.

*nBufLen*<br/>
La lunghezza di *lpBuf* in byte.

*rSocketAddress*<br/>
Fare riferimento a un `CString` oggetto che riceve un indirizzo IP numerico punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_PEEK legge i dati in ingresso. I dati vengono copiati nel buffer, ma non viene rimosso dalla coda di input.

- Dati out-of-band MSG_OOB processo.

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `ReceiveFromEx` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando `GetLastError`. Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT il *lpSockAddrLen* argomento non è valido: il *lpSockAddr* buffer è troppo piccolo per contenere l'indirizzo del peer.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- Il socket non è stato associato a WSAEINVAL `Bind`.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `ReceiveFromEx` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e `ReceiveFromEx` blocca l'operazione.

- WSAEMSGSIZE il datagramma è troppo grande per rientrare nel buffer specificato ed è stato troncato.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata per leggere i dati in ingresso in un socket (probabilmente connesso) e acquisire l'indirizzo da cui i dati sono stati inviati.

Questa funzione equivale [CAsyncSocket::ReceiveFrom](#receivefrom) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.

Per i socket di tipo SOCK_STREAM, viene restituite quante più informazioni perché è attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione di dati out-of-band (opzione di socket SO_OOBINLINE) inline e i dati fuori banda non sono stato letti, verranno restituiti solo i dati out-of-band. L'applicazione può usare la `IOCtlSIOCATMARK` opzione o `OnOutOfBandData` per determinare se tutti i dati più out-of-band rimangono da leggere. Il *lpSockAddr* e *lpSockAddrLen* i parametri vengono ignorati per i socket SOCK_STREAM.

Per i socket di datagramma, vengono estratti dati il primo datagramma, fino alla dimensione del buffer fornito. Se il datagramma è maggiore del buffer specificato, viene riempito il buffer con la prima parte del messaggio, i dati in eccesso vengono persi, e `ReceiveFromEx` restituisce un valore di SOCKET_ERROR con il codice di errore è impostato su WSAEMSGSIZE.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, viene copiato l'indirizzo di rete del socket che ha inviato i dati per il corrispondente [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura. Il valore a cui punta *lpSockAddrLen* viene inizializzata per la dimensione della struttura e viene modificato in fase di restituzione per indicare le dimensioni effettive dell'indirizzo archiviato vengono eliminati. Se non è disponibile alcun dato in ingresso al socket, il `ReceiveFromEx` chiamata in attesa di dati in arrivo, a meno che il socket non bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il `OnReceive` callback può essere utilizzato per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `ReceiveFromEx` verrà terminata immediatamente con 0 byte ricevuti.

##  <a name="send"></a>  CAsyncSocket::Send

Chiamare questa funzione membro per l'invio dei dati in un socket connesso.

```
virtual int Send(
    const void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer contenente i dati da trasmettere.

*nBufLen*<br/>
La lunghezza dei dati in *lpBuf* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_DONTROUTE specifica che i dati non devono essere soggetti a routing. Un fornitore di socket di Windows possa scegliere di ignorare questo flag.

- Inviare MSG_OOB out-of-band dati (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `Send` restituisce il numero totale di caratteri inviati. (Si noti che questo può essere minore di quello indicato dal *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEACCES dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAEFAULT il *lpBuf* argomento non è in una parte valida dello spazio degli indirizzi utente.

- WSAENETRESET la connessione deve essere reimpostato perché ha rilasciato l'implementazione di Windows Sockets.

- Implementazione dei socket di Windows il WSAENOBUFS rileva un deadlock del buffer.

- WSAENOTCONN il socket non connesso.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `Send` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e blocca l'operazione richiesta.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- Il socket non è stato associato a WSAEINVAL `Bind`.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

### <a name="remarks"></a>Note

`Send` Consente di scrivere dati in uscita sul flusso connessa o i socket di datagramma. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal `iMaxUdpDg` elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura restituita dalla `AfxSocketInit`. Se i dati sono troppo lunghi da passare in modo atomico tramite il protocollo sottostante, WSAEMSGSIZE viene restituito l'errore tramite `GetLastError`, e non vengono trasmessi dati.

Si noti che per un datagramma socket corretto completamento di un `Send` non indica che i dati è stati recapitati correttamente.

In `CAsyncSocket` gli oggetti di tipo SOCK_STREAM, il numero di byte scritti può essere compreso tra 1 e la lunghezza richiesta, a seconda della disponibilità del buffer su entrambi gli host sia locale che esterni.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAsyncSocket::OnSend](#onsend).

##  <a name="sendto"></a>  CAsyncSocket:: SendTo

Chiamare questa funzione membro per inviare dati a una destinazione specifica.

```
int SendTo(
    const void* lpBuf,
    int nBufLen,
    UINT nHostPort,
    LPCTSTR lpszHostAddress = NULL,
    int nFlags = 0);

int SendTo(
    const void* lpBuf,
    int nBufLen,
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer contenente i dati da trasmettere.

*nBufLen*<br/>
La lunghezza dei dati in *lpBuf* in byte.

*nHostPort*<br/>
La porta che identifica l'applicazione di socket.

*lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com", o un numero separato da punti, ad esempio "128.56.22.8".

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_DONTROUTE specifica che i dati non devono essere soggetti a routing. Un fornitore di socket di Windows possa scegliere di ignorare questo flag.

- Inviare MSG_OOB out-of-band dati (solo SOCK_STREAM).

*lpSockAddr*<br/>
Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo del socket destinazione.

*nSockAddrLen*<br/>
La lunghezza dell'indirizzo nella *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `SendTo` restituisce il numero totale di caratteri inviati. (Si noti che questo può essere minore di quello indicato dal *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEACCES dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAEFAULT il *lpBuf* oppure *lpSockAddr* parametri non fanno parte dello spazio di indirizzi, utente o la *lpSockAddr* argomento è troppo piccolo (minore delle dimensioni di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).

- WSAEINVAL il nome host non è valido.

- WSAENETRESET la connessione deve essere reimpostato perché ha rilasciato l'implementazione di Windows Sockets.

- Implementazione dei socket di Windows il WSAENOBUFS rileva un deadlock del buffer.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `SendTo` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e blocca l'operazione richiesta.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Indirizzi WSAEAFNOSUPPORT della famiglia specificata non possono essere usati con questo socket.

- Indirizzo di destinazione WSAEDESTADDRREQ A è obbligatorio.

- WSAENETUNREACH la rete non può essere raggiunto da questo host in questo momento.

### <a name="remarks"></a>Note

`SendTo` Consente di scrivere dati in uscita su un socket viene utilizzata sui socket di datagramma o nel flusso. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal `iMaxUdpDg` elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura compilati dagli [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi da passare in modo atomico tramite il protocollo sottostante, viene restituito l'errore WSAEMSGSIZE e non vengono trasmessi dati.

Si noti che il completamento di un `SendTo` non indica che i dati è stati recapitati correttamente.

`SendTo` viene usato solo su un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal *lpSockAddr* parametro.

Per inviare una trasmissione (su un SOCK_DGRAM solo), l'indirizzo nel *lpSockAddr* parametro deve essere creato usando l'indirizzo IP speciale INADDR_BROADCAST (definita nel file di intestazione WINSOCK di Windows Sockets. H) insieme con il numero di porta previsto. In alternativa, se il *lpszHostAddress* parametro è NULL, il socket è configurato per la trasmissione. Non è in genere consigliabile per un datagramma broadcast supera la dimensione in cui può verificarsi la frammentazione, che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::SendToEx](#sendtoex).

##  <a name="sendtoex"></a>  CAsyncSocket::SendToEx

Chiamare questa funzione membro per inviare dati a una destinazione specifica (gestisce gli indirizzi IPv6).

```
int SendToEx(
    const void* lpBuf,
    int nBufLen,
    UINT nHostPort,
    LPCTSTR lpszHostAddress = NULL,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Un buffer contenente i dati da trasmettere.

*nBufLen*<br/>
La lunghezza dei dati in *lpBuf* in byte.

*nHostPort*<br/>
La porta che identifica l'applicazione di socket.

*lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com", o un numero separato da punti, ad esempio "128.56.22.8".

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e il *nFlags* parametro. Quest'ultimo viene costruito mediante la combinazione di uno qualsiasi dei valori seguenti con C++ **o** operatore:

- MSG_DONTROUTE specifica che i dati non devono essere soggetti a routing. Un fornitore di socket di Windows possa scegliere di ignorare questo flag.

- Inviare MSG_OOB out-of-band dati (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se si verifica alcun errore, `SendToEx` restituisce il numero totale di caratteri inviati. (Si noti che questo può essere minore di quello indicato dal *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEACCES dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAEFAULT il *lpBuf* oppure *lpSockAddr* parametri non fanno parte dello spazio di indirizzi, utente o la *lpSockAddr* argomento è troppo piccolo (minore delle dimensioni di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).

- WSAEINVAL il nome host non è valido.

- WSAENETRESET la connessione deve essere reimpostato perché ha rilasciato l'implementazione di Windows Sockets.

- Implementazione dei socket di Windows il WSAENOBUFS rileva un deadlock del buffer.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- WSAEOPNOTSUPP MSG_OOB è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- È stato arrestato il socket WSAESHUTDOWN; non è possibile chiamare `SendToEx` su un socket dopo `ShutDown` è stata richiamata con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e blocca l'operazione richiesta.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED circuito virtuale è stata interrotta a causa di un timeout o un altro errore.

- WSAECONNRESET circuito virtuale reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Indirizzi WSAEAFNOSUPPORT della famiglia specificata non possono essere usati con questo socket.

- Indirizzo di destinazione WSAEDESTADDRREQ A è obbligatorio.

- WSAENETUNREACH la rete non può essere raggiunto da questo host in questo momento.

### <a name="remarks"></a>Note

Questo metodo è identico [CAsyncSocket:: SendTo](#sendto) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.

`SendToEx` Consente di scrivere dati in uscita su un socket viene utilizzata sui socket di datagramma o nel flusso. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal `iMaxUdpDg` elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura compilati dagli [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi da passare in modo atomico tramite il protocollo sottostante, viene restituito l'errore WSAEMSGSIZE e non vengono trasmessi dati.

Si noti che il completamento di un `SendToEx` non indica che i dati è stati recapitati correttamente.

`SendToEx` viene usato solo su un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal *lpSockAddr* parametro.

Per inviare una trasmissione (su un SOCK_DGRAM solo), l'indirizzo nel *lpSockAddr* parametro deve essere creato usando l'indirizzo IP speciale INADDR_BROADCAST (definita nel file di intestazione WINSOCK di Windows Sockets. H) insieme con il numero di porta previsto. In alternativa, se il *lpszHostAddress* parametro è NULL, il socket è configurato per la trasmissione. Non è in genere consigliabile per un datagramma broadcast supera la dimensione in cui può verificarsi la frammentazione, che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.

##  <a name="setsockopt"></a>  CAsyncSocket::SetSockOpt

Chiamare questa funzione membro per impostare un'opzione di socket.

```
BOOL SetSockOpt(
    int nOptionName,
    const void* lpOptionValue,
    int nOptionLen,
    int nLevel = SOL_SOCKET);
```

### <a name="parameters"></a>Parametri

*nOptionName*<br/>
L'opzione di socket per il quale è necessario impostare il valore.

*lpOptionValue*<br/>
Un puntatore al buffer in cui viene fornito il valore per l'opzione richiesta.

*nOptionLen*<br/>
Le dimensioni dei *lpOptionValue* buffer in byte.

*nLevel*<br/>
Il livello in corrispondenza del quale viene definita l'opzione; gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEFAULT *lpOptionValue* non si trova in una parte valida dello spazio di indirizzi del processo.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAEINVAL *nLevel* non è valido, o le informazioni contenute in *lpOptionValue* non è valido.

- Quando è impostata SO_KEEPALIVE WSAENETRESET connessione è scaduta.

- L'opzione WSAENOPROTOOPT è sconosciuto o non è supportato. In particolare, SO_BROADCAST non è supportata sui socket di tipo SOCK_STREAM, mentre SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportate sui socket di tipo SOCK_DGRAM.

- Connessione WSAENOTCONN è stata reimpostata quando SO_KEEPALIVE è impostata.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

`SetSockOpt` Imposta il valore corrente per un'opzione di socket associato a un socket di qualsiasi tipo, in qualsiasi stato. Anche se le opzioni possono essere presenti più livelli di protocollo, questa specifica definisce solo le opzioni che esistono a livello di socket di più in alto"". Opzioni di influire sulle operazioni di socket, ad esempio se i dati accelerati viene ricevuti nel flusso di dati normali, se i messaggi trasmessi possono essere inviati nel socket e così via.

Esistono due tipi di opzioni di socket: le opzioni booleane che abilita o disabilita una funzionalità o comportamento e le opzioni che richiedono un valore intero o una struttura. Per abilitare un'opzione booleana *lpOptionValue* punta a un intero diverso da zero. Per disabilitare l'opzione *lpOptionValue* punta a un numero intero pari a zero. *nOptionLen* deve essere uguale a `sizeof(BOOL)` per le opzioni booleane. Per altre opzioni *lpOptionValue* punta al numero intero o una struttura che contiene il valore desiderato per l'opzione, e *nOptionLen* è la lunghezza del valore intero o della struttura.

SO_LINGER controlla l'azione eseguita quando l'invio di dati non è in coda su un socket e `Close` funzione viene chiamata per chiudere il socket.

Per impostazione predefinita, non è possibile associare un socket (vedere [associare](#bind)) a un indirizzo locale che è già in uso. In alcuni casi, tuttavia, potrebbe essere auspicabile "reuse" un indirizzo in questo modo. Poiché ogni connessione viene identificata in modo univoco dalla combinazione di indirizzi locali e remoti, non determina alcun problema dalla presenza di due socket associato allo stesso indirizzo locale, purché gli indirizzi remoti sono diversi.

Per informare l'implementazione di Windows Sockets che un `Bind` chiamata su un socket non dovrebbe essere impedita poiché l'indirizzo desiderato è già in uso da un altro socket, l'applicazione deve impostare l'opzione di socket SO_REUSEADDR per il socket prima di rilasciare il `Bind` chiamare. Si noti che l'opzione viene interpretata solo al momento della `Bind` chiamare: non è quindi necessario (ma innocuo) per impostare l'opzione su un socket che non deve essere associato a un indirizzo esistente, e impostare o reimpostare l'opzione dopo il `Bind` è chiamata Nessun effetto in questa o in un altro socket.

Un'applicazione può richiedere che l'implementazione dei socket di Windows abilita l'uso di pacchetti "keep-alive" nelle connessioni di protocollo TCP (Transmission Control) attivando l'opzione di socket SO_KEEPALIVE. Un'implementazione di socket di Windows non deve necessariamente supportare l'uso di keep-alive: in caso affermativo, la semantica precisa sono specifici dell'implementazione, ma devono essere conformi a RFC 1122 sezione 4.2.3.6: "requisiti per l'host in Internet, ovvero i livelli di comunicazione." Se una connessione viene rimossa come risultato di "keep-alive" errore WSAENETRESET viene restituito il codice a tutte le chiamate in corso sul socket e tutte le chiamate successive avranno esito negativo con WSAENOTCONN.

L'opzione TCP_NODELAY disabilita l'algoritmo Nagle nei confronti. L'algoritmo Nagle viene usato per ridurre il numero di piccoli pacchetti inviati da un host grazie al buffering dei dati non riconosciuti trasmissione fino a quando non può essere inviato un pacchetto con dimensioni normali. Tuttavia, per alcune applicazioni di questo algoritmo può influire sulle prestazioni e TCP_NODELAY può essere utilizzato per disattivare tale funzionalità. Gli autori di applicazioni non impostare TCP_NODELAY, a meno che l'impatto di tale operazione è ben noto e desiderato, in quanto impostazione TCP_NODELAY può avere un impatto negativo sulle prestazioni di rete. TCP_NODELAY è l'unica opzione di socket che utilizza livello IPPROTO_TCP; è supportato tutte le altre opzioni utilizzano livello SOL_SOCKET.

Se l'opzione SO_DEBUG viene impostata da un'applicazione, alcune implementazioni di alimentazione di Windows Sockets output le informazioni di debug.

Le opzioni seguenti sono supportate per `SetSockOpt`. Il tipo identifica il tipo di dati indirizzati dalla *lpOptionValue*.

|Valore|Tipo|Significato|
|-----------|----------|-------------|
|SO_BROADCAST|BOOL|Consentire la trasmissione di messaggi trasmessi sul socket.|
|SO_DEBUG|BOOL|Registra informazioni di debug.|
|SO_DONTLINGER|BOOL|Non bloccare `Close` in attesa di invio di dati da inviare. Impostando questa opzione equivale all'impostazione SO_LINGER con `l_onoff` impostato su zero.|
|SO_DONTROUTE|BOOL|Non indirizzare: invia direttamente all'interfaccia.|
|SO_KEEPALIVE|BOOL|Keep-alive di trasmissione.|
|SO_LINGER|`struct LINGER`|Ritarda la `Close` se unsent sono presenti dati.|
|SO_OOBINLINE|BOOL|Ricevere dati out-of-band nel flusso di dati normali.|
|SO_RCVBUF|**int**|Specificare dimensioni del buffer per ricevere.|
|SO_REUSEADDR|BOOL|Consenti il socket deve essere associato a un indirizzo a cui è già in uso. (Vedere [associare](#bind).)|
|SO_SNDBUF|**int**|Specificare dimensioni del buffer di invio.|
|TCP_NODELAY|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Non è supportate per le opzioni di Berkeley Software Distribution (BSD) `SetSockOpt` sono:

|Valore|Tipo|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket è in ascolto|
|SO_ERROR|**int**|Ottenere lo stato di errore e cancellare.|
|SO_RCVLOWAT|**int**|Ricevere il limite minimo.|
|SO_RCVTIMEO|**int**|Timeout di ricezione|
|SO_SNDLOWAT|**int**|Inviare il limite minimo.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|SO_TYPE|**int**|Tipo di socket.|
|IP_OPTIONS||Impostare le opzioni campo nell'intestazione IP.|

##  <a name="shutdown"></a>  CAsyncSocket::ShutDown

Invia, questa funzione membro per disabilitare la chiamata riceve, o entrambi sul socket.

```
BOOL ShutDown(int nHow = sends);
```

### <a name="parameters"></a>Parametri

*nHow*<br/>
Un flag che descrive i tipi di operazione non potrà essere, usando i valori enumerati seguenti:

- **riceve = 0**

- **Invia = 1**

- **sia = 2**

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:

- WSANOTINITIALISED A ha esito positivo [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.

- Implementazione dei socket di Windows il WSAENETDOWN ha rilevato che il sottosistema di rete non è riuscita.

- WSAEINVAL *nHow* non è valido.

- Operazione di socket di Windows blocco WSAEINPROGRESS A è in corso.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Note

`ShutDown` viene usata in tutti i tipi di socket per disabilitare la ricezione, trasmissione o a entrambi. Se *nHow* è 0, riceverà successivi al socket non sarà consentito. Ciò non influisce sui livelli inferiori di protocollo.

Per protocollo TCP (Transmission Control), la finestra TCP non verrà modificata e dati in arrivo verranno accettati (ma non riconosciuto) fino a quando la finestra è esaurita. Per protocollo UDP (User Datagram), datagrammi in ingresso vengono accettati e accodati. In nessun caso verrà generato un pacchetto di errore ICMP. Se *nHow* è 1, invii successivi non sono consentiti. Per i socket TCP, verrà inviato un FIN. L'impostazione *nHow* 2 Disabilita entrambi Invia e riceve come descritto in precedenza.

Si noti che `ShutDown` non chiudere il socket e le risorse collegate al socket non verranno liberate finché `Close` viene chiamato. Un'applicazione non deve basarsi sulla possibilità di riutilizzare un socket dopo che è stato arrestato. In particolare, un'implementazione di socket di Windows non è necessario per supportare l'uso di `Connect` su un socket di questo tipo.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CAsyncSocket::OnReceive](#onreceive).

##  <a name="socket"></a>  CASyncSocket::Socket

Alloca un handle del socket.

```
BOOL Socket(
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    int nProtocolType = 0,
    int nAddressFormat = PF_INET);
```

### <a name="parameters"></a>Parametri

*nSocketType*<br/>
Specifica `SOCK_STREAM` o `SOCK_DGRAM`.

*lEvent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete in cui è interessata l'applicazione.

- `FD_READ`: Utile ricevere notifiche di conformità per la lettura.

- `FD_WRITE`: Utile ricevere notifiche di conformità per la scrittura.

- `FD_OOB`: Utile ricevere una notifica dell'arrivo dei dati out-of-band.

- `FD_ACCEPT`: Utile ricevere una notifica di connessioni in ingresso.

- `FD_CONNECT`: Utile ricevere la notifica della connessione completato.

- `FD_CLOSE`: Utile ricevere una notifica di chiusura del socket.

*nProtocolType*<br/>
Protocollo da usare con i socket che è specifico per la famiglia di indirizzi indicato.

*nAddressFormat*<br/>
Specifica della famiglia di indirizzi.

### <a name="return-value"></a>Valore restituito

Restituisce `TRUE` in caso di esito positivo, `FALSE` in caso di errore.

### <a name="remarks"></a>Note

Questo metodo consente di allocare un handle del socket. Non effettua una chiamata [CAsyncSocket::Bind](#bind) per associare il socket a un indirizzo specificato, pertanto è necessario chiamare `Bind` in un secondo momento per associare il socket a un indirizzo specificato. È possibile usare [CAsyncSocket::SetSockOpt](#setsockopt) per impostare l'opzione di socket prima che venga associato.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
