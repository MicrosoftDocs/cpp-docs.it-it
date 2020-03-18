---
title: Classe CAsyncSocket
ms.date: 09/03/2019
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
ms.openlocfilehash: 4e14052d400268a8852298113ba9b51fda713dc8
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418888"
---
# <a name="casyncsocket-class"></a>Classe CAsyncSocket

Rappresenta un socket di Windows, ovvero un endpoint della comunicazione di rete.

## <a name="syntax"></a>Sintassi

```
class CAsyncSocket : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: CAsyncSocket](#casyncsocket)|Costruisce un oggetto `CAsyncSocket`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: Accept](#accept)|Accetta una connessione sul socket.|
|[CAsyncSocket:: AsyncSelect](#asyncselect)|Richiede la notifica degli eventi per il socket.|
|[CAsyncSocket:: Connetti](#attach)|Connette un handle di socket a un oggetto `CAsyncSocket`.|
|[CAsyncSocket:: bind](#bind)|Associa un indirizzo locale al socket.|
|[CAsyncSocket:: Close](#close)|Chiude il socket.|
|[CAsyncSocket:: Connect](#connect)|Stabilisce una connessione a un socket peer.|
|[CAsyncSocket:: create](#create)|Crea un socket.|
|[CAsyncSocket::D etach](#detach)|Scollega un handle di socket da un oggetto `CAsyncSocket`.|
|[CAsyncSocket:: FromHandle](#fromhandle)|Restituisce un puntatore a un oggetto `CAsyncSocket`, dato un handle di socket.|
|[CAsyncSocket:: GetLastError](#getlasterror)|Ottiene lo stato di errore per l'ultima operazione non riuscita.|
|[CAsyncSocket:: getpeername](#getpeername)|Ottiene l'indirizzo del socket peer a cui è connesso il socket.|
|[CAsyncSocket:: GetPeerNameEx](#getpeernameex)|Ottiene l'indirizzo del socket peer a cui è connesso il socket (gestisce gli indirizzi IPv6).|
|[CAsyncSocket:: getsockname](#getsockname)|Ottiene il nome locale per un socket.|
|[CAsyncSocket:: GetSockNameEx](#getsocknameex)|Ottiene il nome locale per un socket (gestisce gli indirizzi IPv6).|
|[CAsyncSocket:: GetSockOpt](#getsockopt)|Recupera un'opzione di socket.|
|[CAsyncSocket:: IOCtl](#ioctl)|Controlla la modalità del socket.|
|[CAsyncSocket:: Listen](#listen)|Stabilisce un socket per l'ascolto delle richieste di connessione in ingresso.|
|[CAsyncSocket:: Receive](#receive)|Riceve i dati dal socket.|
|[CAsyncSocket:: ReceiveFrom](#receivefrom)|Riceve un datagramma e archivia l'indirizzo di origine.|
|[CAsyncSocket:: ReceiveFromEx](#receivefromex)|Riceve un datagramma e archivia l'indirizzo di origine (gestisce gli indirizzi IPv6).|
|[CAsyncSocket:: Send](#send)|Invia i dati a un socket connesso.|
|[CAsyncSocket:: SendTo](#sendto)|Invia dati a una destinazione specifica.|
|[CAsyncSocket:: SendToEx](#sendtoex)|Invia dati a una destinazione specifica (gestisce gli indirizzi IPv6).|
|[CAsyncSocket:: SetSockOpt](#setsockopt)|Imposta un'opzione del socket.|
|[CAsyncSocket:: ShutDown](#shutdown)|Disabilita le chiamate a `Send` e/o `Receive` sul socket.|
|[CASyncSocket:: socket](#socket)|Alloca un handle di socket.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: OnAccept](#onaccept)|Notifica a un socket di ascolto che può accettare richieste di connessione in sospeso chiamando `Accept`.|
|[CAsyncSocket:: OnClose](#onclose)|Notifica a un socket che il socket connesso è stato chiuso.|
|[CAsyncSocket:: OnConnect](#onconnect)|Notifica a un socket di connessione che il tentativo di connessione è stato completato, se correttamente o in errore.|
|[CAsyncSocket:: OnOutOfBandData](#onoutofbanddata)|Notifica a un socket di ricezione che sono presenti dati fuori banda da leggere sul socket, in genere un messaggio urgente.|
|[CAsyncSocket:: OnReceive](#onreceive)|Notifica a un socket in ascolto che sono presenti dati da recuperare chiamando `Receive`.|
|[CAsyncSocket:: OnSend](#onsend)|Notifica a un socket che può inviare dati chiamando `Send`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: operator =](#operator_eq)|Assegna un nuovo valore a un oggetto `CAsyncSocket`.|
|[SOCKET CAsyncSocket:: operator](#operator_socket)|Utilizzare questo operatore per recuperare l'handle del SOCKET dell'oggetto `CAsyncSocket`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket:: m_hSocket](#m_hsocket)|Indica l'handle del SOCKET associato a questo oggetto `CAsyncSocket`.|

## <a name="remarks"></a>Osservazioni

Classe `CAsyncSocket` incapsula l'API di funzioni socket di Windows, fornendo un'astrazione orientata agli oggetti per i programmatori che desiderano utilizzare Windows Sockets insieme a MFC.

Questa classe si basa sul presupposto che si conoscano le comunicazioni di rete. L'utente è responsabile della gestione di blocchi, differenze nell'ordine dei byte e conversioni tra stringhe Unicode e Multibyte Character Set (MBCS). Se si vuole un'interfaccia più comoda che gestisce questi problemi, vedere la classe [CSocket](../../mfc/reference/csocket-class.md).

Per usare un oggetto `CAsyncSocket`, chiamare il relativo costruttore, quindi chiamare la funzione [create](#create) per creare l'handle del socket sottostante (tipo `SOCKET`), ad eccezione dei socket accettati. Per un socket server, chiamare la funzione membro [Listen](#listen) e per un socket client chiamare la funzione membro [Connect](#connect) . Il socket del server deve chiamare la funzione [Accept](#accept) quando riceve una richiesta di connessione. Usare le funzioni di `CAsyncSocket` rimanenti per eseguire le comunicazioni tra i socket. Al termine, eliminare definitivamente l'oggetto `CAsyncSocket` se è stato creato nell'heap; il distruttore chiama automaticamente la funzione [Close](#close) . Il tipo di dati SOCKET è descritto nell'articolo [Windows Sockets: background](../../mfc/windows-sockets-background.md).

> [!NOTE]
>  Quando si usano socket MFC nei thread secondari in un'applicazione MFC collegata in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie del socket. Per impostazione predefinita, `AfxSocketInit` viene chiamata solo nel thread primario.

Per ulteriori informazioni, vedere [Windows Sockets: utilizzo della classe CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) e articoli correlati, nonché l' [API di Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAsyncSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock. h

##  <a name="accept"></a>CAsyncSocket:: Accept

Chiamare questa funzione membro per accettare una connessione in un socket.

```
virtual BOOL Accept(
    CAsyncSocket& rConnectedSocket,
    SOCKADDR* lpSockAddr = NULL,
    int* lpSockAddrLen = NULL);
```

### <a name="parameters"></a>Parametri

*rConnectedSocket*<br/>
Un riferimento che identifica un nuovo socket disponibile per la connessione.

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che riceve l'indirizzo del socket di connessione, come noto nella rete. Il formato esatto dell'argomento *lpSockAddr* è determinato dalla famiglia di indirizzi stabilita al momento della creazione del socket. Se *lpSockAddr* e/o *lpSockAddrLen* sono uguali a null, non vengono restituite informazioni sull'indirizzo remoto del socket accettato.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte. *LpSockAddrLen* è un parametro di risultato del valore: dovrebbe inizialmente contenere la quantità di spazio a cui punta *lpSockAddr*; al ritorno, conterrà la lunghezza effettiva (in byte) dell'indirizzo restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* è troppo piccolo (minore della dimensione di una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) ).

- WSAEINPROGRESS è in corso una chiamata blocco di Windows Sockets.

- WSAEINVAL `Listen` non è stato richiamato prima dell'accettazione.

- WSAEMFILE la coda è vuota alla voce da accettare e non sono disponibili descrittori.

- WSAENOBUFS non è disponibile spazio nel buffer.

- WSAENOTSOCK il descrittore non è un socket.

- ILWSAEOPNOTSUPP il socket a cui si fa riferimento non è un tipo che supporta il servizio orientato alla connessione.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e non è presente alcuna connessione da accettare.

### <a name="remarks"></a>Osservazioni

Questa routine estrae la prima connessione nella coda di connessioni in sospeso, crea un nuovo socket con le stesse proprietà di questo socket e lo collega a *rConnectedSocket*. Se nella coda non sono presenti connessioni in sospeso, `Accept` restituisce zero e `GetLastError` restituisce un errore. Il socket accettato ( *rConnectedSocket)* non può essere usato per accettare più connessioni. Il socket originale rimane aperto e in ascolto.

L'argomento *lpSockAddr* è un parametro di risultato compilato con l'indirizzo del socket di connessione, come noto al livello di comunicazione. `Accept` viene utilizzato con i tipi di socket basati sulla connessione, ad esempio SOCK_STREAM.

##  <a name="asyncselect"></a>CAsyncSocket:: AsyncSelect

Chiamare questa funzione membro per richiedere la notifica degli eventi per un socket.

```
BOOL AsyncSelect(long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*lEvent*<br/>
Maschera di maschera che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ desidera ricevere una notifica di preparazione per la lettura.

- FD_WRITE desidera ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPT desidera ricevere una notifica delle connessioni in ingresso.

- FD_CONNECT desidera ricevere la notifica dei risultati della connessione.

- FD_CLOSE desidera ricevere una notifica quando un socket è stato chiuso da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEINVAL indica che uno dei parametri specificati non è valido.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per specificare quali funzioni di notifica di callback MFC verranno chiamate per il socket. `AsyncSelect` imposta automaticamente questo socket sulla modalità di non blocco. Per ulteriori informazioni, vedere l'articolo [Windows Sockets: socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="attach"></a>CAsyncSocket:: Connetti

Chiamare questa funzione membro per alleghi l'handle *hSocket* a un oggetto `CAsyncSocket`.

```
BOOL Attach(
    SOCKET hSocket, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle per un socket.

*lEvent*<br/>
Maschera di maschera che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ desidera ricevere una notifica di preparazione per la lettura.

- FD_WRITE desidera ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPT desidera ricevere una notifica delle connessioni in ingresso.

- FD_CONNECT desidera ricevere la notifica dei risultati della connessione.

- FD_CLOSE desidera ricevere una notifica quando un socket è stato chiuso da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Osservazioni

L'handle del SOCKET viene archiviato nel membro dati [m_hSocket](#m_hsocket) dell'oggetto.

##  <a name="bind"></a>CAsyncSocket:: bind

Chiamare questa funzione membro per associare un indirizzo locale al socket.

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
Porta che identifica l'applicazione socket.

*lpszSocketAddress*<br/>
Indirizzo di rete, un numero punteggiato, ad esempio "128.56.22.8". Il passaggio della stringa NULL per questo parametro indica che l'istanza di `CAsyncSocket` deve restare in ascolto dell'attività del client su tutte le interfacce di rete.

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) contenente l'indirizzo da assegnare al socket.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). Nell'elenco seguente vengono illustrati alcuni degli errori che potrebbero essere restituiti. Per un elenco completo, vedere [codici di errore di Windows Sockets](/windows/win32/winsock/windows-sockets-error-codes-2).

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEADDRINUSE l'indirizzo specificato è già in uso. (Vedere l'opzione socket SO_REUSEADDR in [setsockopt](#setsockopt)).

- WSAEFAULT l'argomento *nSockAddrLen* è troppo piccolo (minore della dimensione di una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) ).

- WSAEINPROGRESS è in corso una chiamata blocco di Windows Sockets.

- WSAEAFNOSUPPORT la famiglia di indirizzi specificata non è supportata da questa porta.

- WSAEINVAL il socket è già associato a un indirizzo.

- WSAENOBUFS non sono disponibili buffer sufficienti, troppe connessioni.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa routine viene utilizzata su un datagramma o un socket di flusso non connesso, prima delle chiamate successive `Connect` o `Listen`. Prima di poter accettare le richieste di connessione, un socket del server di ascolto deve selezionare un numero di porta e renderlo noto ai socket Windows chiamando `Bind`. `Bind` stabilisce l'associazione locale (indirizzo host/numero di porta) del socket assegnando un nome locale a un socket senza nome.

##  <a name="casyncsocket"></a>CAsyncSocket:: CAsyncSocket

Costruisce un oggetto Socket vuoto.

```
CAsyncSocket();
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione dell'oggetto, è necessario chiamare la relativa funzione membro `Create` per creare la struttura dei dati del SOCKET e associarne l'indirizzo. Sul lato server di una comunicazione Windows Sockets, quando il socket in ascolto crea un socket da usare nella chiamata `Accept`, non viene chiamato `Create` per quel socket.

##  <a name="close"></a>CAsyncSocket:: Close

Chiude il socket.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Questa funzione rilascia il descrittore di socket in modo che altri riferimenti a esso non riusciranno con l'errore WSAENOTSOCK. Se questo è l'ultimo riferimento al socket sottostante, le informazioni di denominazione associate e i dati in coda vengono rimossi. Il distruttore dell'oggetto Socket chiama `Close`.

Per `CAsyncSocket`, ma non per `CSocket`, la semantica di `Close` è interessata dalle opzioni del socket SO_LINGER e SO_DONTLINGER. Per ulteriori informazioni, vedere `GetSockOpt`di funzioni membro.

##  <a name="connect"></a>CAsyncSocket:: Connect

Chiamare questa funzione membro per stabilire una connessione a un socket di flusso o di datagramma non connesso.

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
Indirizzo di rete del socket a cui è connesso questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com", o un numero punteggiato, ad esempio "128.56.22.8".

*nHostPort*<br/>
Porta che identifica l'applicazione socket.

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo del socket connesso.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). Se questo indica un codice di errore di WSAEWOULDBLOCK e l'applicazione usa i callback sottoponibili a override, l'applicazione riceverà un messaggio di `OnConnect` al termine dell'operazione di connessione. A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEADDRINUSE l'indirizzo specificato è già in uso.

- WSAEINPROGRESS è in corso una chiamata blocco di Windows Sockets.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Non è possibile usare gli indirizzi WSAEAFNOSUPPORT nel gruppo specificato con questo socket.

- WSAECONNREFUSED il tentativo di connessione è stato rifiutato.

- WSAEDESTADDRREQ è necessario un indirizzo di destinazione.

- WSAEFAULT l'argomento *nSockAddrLen* non è corretto.

- Indirizzo host WSAEINVAL non valido.

- WSAEISCONN il socket è già connesso.

- WSAEMFILE non sono disponibili altri descrittori di file.

- WSAENETUNREACH non è possibile raggiungere la rete da questo host in questo momento.

- WSAENOBUFS non è disponibile spazio nel buffer. Impossibile connettere il socket.

- WSAENOTSOCK il descrittore non è un socket.

- Timeout del tentativo di connessione di WSAETIMEDOUT senza stabilire una connessione.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e non è possibile completare la connessione immediatamente.

### <a name="remarks"></a>Osservazioni

Se il socket non è associato, i valori univoci vengono assegnati all'associazione locale dal sistema e il socket viene contrassegnato come associato. Si noti che se il campo Address della struttura Name è costituito da tutti zeri, `Connect` restituirà zero. Per ottenere informazioni estese sull'errore, chiamare la funzione membro `GetLastError`.

Per i socket di flusso (tipo SOCK_STREAM), viene avviata una connessione attiva all'host esterno. Quando la chiamata al socket viene completata correttamente, il socket è pronto per l'invio e la ricezione di dati.

Per un socket di datagramma (tipo SOCK_DGRAM), viene impostata una destinazione predefinita, che verrà usata nelle chiamate successive `Send` e `Receive`.

##  <a name="create"></a>CAsyncSocket:: create

Chiamare la funzione membro `Create` dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nSocketPort*<br/>
Una porta nota da usare con il socket oppure 0 se si desidera che Windows Sockets selezioni una porta.

*nSocketType*<br/>
SOCK_STREAM o SOCK_DGRAM.

*lEvent*<br/>
Maschera di maschera che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ desidera ricevere una notifica di preparazione per la lettura.

- FD_WRITE desidera ricevere una notifica della conformità per la scrittura.

- FD_OOB desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPT desidera ricevere una notifica delle connessioni in ingresso.

- FD_CONNECT desidera ricevere la notifica della connessione completata.

- FD_CLOSE desidera ricevere la notifica della chiusura del socket.

*lpszSockAddress*<br/>
Puntatore a una stringa che contiene l'indirizzo di rete del socket connesso, un numero punteggiato, ad esempio "128.56.22.8". Il passaggio della stringa NULL per questo parametro indica che l'istanza di `CAsyncSocket` deve restare in ascolto dell'attività del client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEAFNOSUPPORT la famiglia di indirizzi specificata non è supportata.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEMFILE non sono disponibili altri descrittori di file.

- WSAENOBUFS non è disponibile spazio nel buffer. Impossibile creare il socket.

- WSAEPROTONOSUPPORT la porta specificata non è supportata.

- WSAEPROTOTYPE la porta specificata è il tipo errato per questo socket.

- WSAESOCKTNOSUPPORT il tipo di socket specificato non è supportato in questa famiglia di indirizzi.

### <a name="remarks"></a>Osservazioni

`Create` chiama il [socket](#socket) e, in caso di esito positivo, chiama [Bind](#bind) per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM fornisce flussi di byte sequenziati, affidabili, full-duplex e basati sulla connessione. Usa la Transmission Control Protocol (TCP) per la famiglia di indirizzi Internet.

- SOCK_DGRAM supporta datagrammi, ovvero pacchetti senza connessione e non affidabili di una lunghezza massima fissa (in genere piccola). Usa il protocollo UDP (User Datagram Protocol) per la famiglia di indirizzi Internet.

    > [!NOTE]
    >  La funzione membro `Accept` accetta un riferimento a un nuovo oggetto `CSocket` vuoto come parametro. È necessario costruire questo oggetto prima di chiamare `Accept`. Tenere presente che se l'oggetto socket esce dall'ambito, la connessione viene chiusa. Non chiamare `Create` per questo nuovo oggetto Socket.

> [!IMPORTANT]
> `Create` **non** è thread-safe.  Se viene chiamato in un ambiente multithread in cui può essere richiamato simultaneamente da thread diversi, assicurarsi di proteggere ogni chiamata con un mutex o un altro blocco di sincronizzazione.

Per ulteriori informazioni sui socket di flusso e datagramma, vedere gli articoli [Windows Sockets: background](../../mfc/windows-sockets-background.md) e [Windows Sockets: porte e indirizzi socket](../../mfc/windows-sockets-ports-and-socket-addresses.md) e [API di Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

##  <a name="detach"></a>CAsyncSocket::D etach

Chiamare questa funzione membro per scollegare l'handle del SOCKET nel membro dati *m_hSocket* dall'oggetto `CAsyncSocket` e impostare *m_hSocket* su null.

```
SOCKET Detach();
```

##  <a name="fromhandle"></a>CAsyncSocket:: FromHandle

Restituisce un puntatore a un oggetto `CAsyncSocket`.

```
static CAsyncSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle per un socket.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `CAsyncSocket` o NULL se non è presente alcun oggetto `CAsyncSocket` associato a *hSocket*.

### <a name="remarks"></a>Osservazioni

Quando si specifica un handle di SOCKET, se un oggetto `CAsyncSocket` non è collegato all'handle, la funzione membro restituisce NULL.

##  <a name="getlasterror"></a>CAsyncSocket:: GetLastError

Chiamare questa funzione membro per ottenere lo stato di errore per l'ultima operazione non riuscita.

```
static int PASCAL GetLastError();
```

### <a name="return-value"></a>Valore restituito

Il valore restituito indica il codice di errore per l'ultima routine dell'API Windows Sockets eseguita da questo thread.

### <a name="remarks"></a>Osservazioni

Quando una funzione membro specifica indica che si è verificato un errore, è necessario chiamare `GetLastError` per recuperare il codice di errore appropriato. Vedere le descrizioni delle singole funzioni membro per un elenco di codici di errore applicabili.

Per altre informazioni sui codici di errore, vedere [API di Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

##  <a name="getpeername"></a>CAsyncSocket:: getpeername

Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui è connesso il socket.

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
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rPeerPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore alla struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che riceve il nome del socket peer.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte. Al ritorno, l'argomento *lpSockAddrLen* contiene le dimensioni effettive di *lpSockAddr* restituite in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS è in corso una chiamata blocco di Windows Sockets.

- WSAENOTCONN il socket non è connesso.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket:: GetPeerNameEx](#getpeernameex).

##  <a name="getpeernameex"></a>CAsyncSocket:: GetPeerNameEx

Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui è connesso il socket (gestisce gli indirizzi IPv6).

```
BOOL GetPeerNameEx(
    CString& rPeerAddress,
    UINT& rPeerPort);
```

### <a name="parameters"></a>Parametri

*rPeerAddress*<br/>
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rPeerPort*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS è in corso una chiamata blocco di Windows Sockets.

- WSAENOTCONN il socket non è connesso.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa funzione è uguale a [CAsyncSocket:: getpeername](#getpeername) , ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

##  <a name="getsockname"></a>CAsyncSocket:: getsockname

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
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che riceve l'indirizzo del socket.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEINVAL il socket non è stato associato a un indirizzo con `Bind`.

### <a name="remarks"></a>Osservazioni

Questa chiamata è particolarmente utile quando viene effettuata una chiamata `Connect` senza eseguire prima una `Bind`; Questa chiamata fornisce l'unico mezzo mediante il quale è possibile determinare l'associazione locale che è stata impostata dal sistema.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket:: GetSockNameEx](#getsocknameex)

##  <a name="getsocknameex"></a>CAsyncSocket:: GetSockNameEx

Chiamare questa funzione membro per ottenere il nome locale per un socket (gestisce gli indirizzi IPv6).

```
BOOL GetSockNameEx(
    CString& rSocketAddress,
    UINT& rSocketPort);
```

### <a name="parameters"></a>Parametri

*rSocketAddress*<br/>
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK il descrittore non è un socket.

- WSAEINVAL il socket non è stato associato a un indirizzo con `Bind`.

### <a name="remarks"></a>Osservazioni

Questa chiamata è uguale a [CAsyncSocket:: getsockname](#getsockname) , ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

Questa chiamata è particolarmente utile quando viene effettuata una chiamata `Connect` senza eseguire prima una `Bind`; Questa chiamata fornisce l'unico mezzo mediante il quale è possibile determinare l'associazione locale che è stata impostata dal sistema.

##  <a name="getsockopt"></a>CAsyncSocket:: GetSockOpt

Chiamare questa funzione membro per recuperare un'opzione socket.

```
BOOL GetSockOpt(
    int nOptionName,
    void* lpOptionValue,
    int* lpOptionLen,
    int nLevel = SOL_SOCKET);
```

### <a name="parameters"></a>Parametri

*nOptionName*<br/>
Opzione socket per la quale deve essere recuperato il valore.

*lpOptionValue*<br/>
Puntatore al buffer in cui deve essere restituito il valore per l'opzione richiesta. Il valore associato all'opzione selezionata viene restituito nel buffer *lpOptionValue*. Il numero intero a cui punta *lpOptionLen* deve contenere originariamente la dimensione del buffer in byte. e, al ritorno, verranno impostati sulla dimensione del valore restituito. Per SO_LINGER, questa sarà la dimensione di una struttura di `LINGER`; per tutte le altre opzioni, saranno le dimensioni di un valore BOOL o **int**, a seconda dell'opzione. Vedere l'elenco di opzioni e le relative dimensioni nella sezione Osservazioni.

*lpOptionLen*<br/>
Puntatore alla dimensione del buffer *lpOptionValue* in byte.

*nLevel*<br/>
Livello in corrispondenza del quale è definita l'opzione. gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). Se un'opzione non è mai stata impostata con `SetSockOpt`, `GetSockOpt` restituisce il valore predefinito per l'opzione. A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpOptionLen* non è valido.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOPROTOOPT l'opzione è sconosciuta o non supportata. In particolare, SO_BROADCAST non è supportata nei socket di tipo SOCK_STREAM, mentre SO_ACCEPTCONN, SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportati nei socket di tipo SOCK_DGRAM.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`GetSockOpt` Recupera il valore corrente per un'opzione socket associata a un socket di qualsiasi tipo, in qualsiasi stato, e archivia il risultato in *lpOptionValue*. Le opzioni interessano le operazioni socket, ad esempio il routing dei pacchetti, il trasferimento di dati fuori banda e così via.

Per `GetSockOpt`sono supportate le opzioni seguenti. Il tipo identifica il tipo di dati da *lpOptionValue*. L'opzione TCP_NODELAY usa il livello IPPROTO_TCP; tutte le altre opzioni utilizzano SOL_SOCKET di livello.

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Il socket è in ascolto.|
|SO_BROADCAST|BOOL|Il socket è configurato per la trasmissione di messaggi broadcast.|
|SO_DEBUG|BOOL|Il debug è abilitato.|
|SO_DONTLINGER|BOOL|Se true, l'opzione SO_LINGER è disabilitata.|
|SO_DONTROUTE|BOOL|Il routing è disabilitato.|
|SO_ERROR|**int**|Recuperare lo stato di errore e deselezionare.|
|SO_KEEPALIVE|BOOL|È in corso l'invio di Keep-Alive.|
|SO_LINGER|`struct LINGER`|Restituisce le opzioni Linger correnti.|
|SO_OOBINLINE|BOOL|Sono stati ricevuti dati fuori banda nel flusso di dati normale.|
|SO_RCVBUF|INT|Dimensioni del buffer per le ricevute.|
|SO_REUSEADDR|BOOL|Il socket può essere associato a un indirizzo già in uso.|
|SO_SNDBUF|**int**|Dimensioni del buffer per le invii.|
|SO_TYPE|**int**|Tipo di socket, ad esempio SOCK_STREAM.|
|TCP_NODELAY|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Le opzioni di distribuzione del software Berkeley (BSD) non sono supportate per `GetSockOpt` sono:

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_RCVLOWAT|**int**|Ricevere il limite minimo.|
|SO_RCVTIMEO|**int**|Timeout di ricezione.|
|SO_SNDLOWAT|**int**|Inviare un contrassegno minimo.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|IP_OPTIONS||Ottiene le opzioni nell'intestazione IP.|
|TCP_MAXSEG|**int**|Ottenere le dimensioni massime del segmento TCP.|

Se si chiama `GetSockOpt` con un'opzione non supportata, verrà restituito un codice di errore di WSAENOPROTOOPT da `GetLastError`.

##  <a name="ioctl"></a>CAsyncSocket:: IOCtl

Chiamare questa funzione membro per controllare la modalità di un socket.

```
BOOL IOCtl(
    long lCommand,
    DWORD* lpArgument);
```

### <a name="parameters"></a>Parametri

*lCommand*<br/>
Comando da eseguire sul socket.

*lpArgument*<br/>
Puntatore a un parametro per *lCommand*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEINVAL *lCommand* non è un comando valido oppure *lpArgument* non è un parametro accettabile per *lCommand*oppure il comando non è applicabile al tipo di socket fornito.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa routine può essere usata in qualsiasi socket in qualsiasi stato. Viene utilizzato per ottenere o recuperare i parametri operativi associati al socket, indipendentemente dal protocollo e dal sottosistema di comunicazione. Supporta i comandi seguenti:

- FIONBIO Abilita o Disabilita la modalità di non blocco sul socket. Il parametro *lpArgument* punta a un `DWORD`, che è diverso da zero se è necessario abilitare la modalità di non blocco e zero se deve essere disabilitato. Se `AsyncSelect` è stato emesso su un socket, qualsiasi tentativo di usare `IOCtl` per impostare il socket sulla modalità di blocco avrà esito negativo con WSAEINVAL. Per impostare di nuovo il socket sulla modalità di blocco e impedire l'errore WSAEINVAL, un'applicazione deve prima disabilitare `AsyncSelect` chiamando `AsyncSelect` con il parametro *Levent* uguale a 0, quindi chiamare `IOCtl`.

- FIONREAD determinare il numero massimo di byte che è possibile leggere con una chiamata `Receive` da questo socket. Il parametro *lpArgument* punta a un `DWORD` in cui `IOCtl` archivia il risultato. Se il socket è di tipo SOCK_STREAM, FIONREAD restituisce la quantità totale di dati che possono essere letti in un singolo `Receive`; normalmente corrisponde alla quantità totale di dati accodati nel socket. Se il socket è di tipo SOCK_DGRAM, FIONREAD restituisce le dimensioni del primo datagramma in coda nel socket.

- SIOCATMARK determinare se sono stati letti tutti i dati fuori banda. Si applica solo a un socket di tipo SOCK_STREAM che è stato configurato per la ricezione inline di tutti i dati fuori banda (SO_OOBINLINE). Se non sono presenti dati fuori banda in attesa di essere letti, l'operazione restituisce un valore diverso da zero. In caso contrario, restituisce 0 e il successivo `Receive` o `ReceiveFrom` eseguiti sul socket recupererà alcuni o tutti i dati che precedono "Mark"; l'applicazione deve usare l'operazione SIOCATMARK per determinare se i dati rimangono. Se sono presenti dati normali che precedono i dati "urgenti" (fuori banda), verranno ricevuti in ordine. Si noti che un `Receive` o `ReceiveFrom` non mescolerà mai dati fuori banda e normali nella stessa chiamata. Il parametro *lpArgument* punta a un `DWORD` in cui `IOCtl` archivia il risultato.

Questa funzione è un subset di `ioctl()` come usato nei socket Berkeley. In particolare, non esiste alcun comando equivalente a FIOASYNC, mentre SIOCATMARK è l'unico comando a livello di socket supportato.

##  <a name="listen"></a>CAsyncSocket:: Listen

Chiamare questa funzione membro per restare in attesa delle richieste di connessione in ingresso.

```
BOOL Listen(int nConnectionBacklog = 5);
```

### <a name="parameters"></a>Parametri

*nConnectionBacklog*<br/>
Lunghezza massima consentita per la crescita della coda di connessioni in sospeso. L'intervallo valido è compreso tra 1 e 5.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEADDRINUSE è stato effettuato un tentativo di ascolto di un indirizzo in uso.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL il socket non è stato associato a `Bind` o è già connesso.

- WSAEISCONN il socket è già connesso.

- WSAEMFILE non sono disponibili altri descrittori di file.

- WSAENOBUFS non è disponibile spazio nel buffer.

- WSAENOTSOCK il descrittore non è un socket.

- ILWSAEOPNOTSUPP il socket a cui si fa riferimento non è di un tipo che supporta l'operazione di `Listen`.

### <a name="remarks"></a>Osservazioni

Per accettare le connessioni, il socket viene creato per la prima volta con `Create`, viene specificato un backlog per le connessioni in ingresso con `Listen`, quindi le connessioni vengono accettate con `Accept`. `Listen` si applica solo ai socket che supportano le connessioni, ovvero quelle di tipo SOCK_STREAM. Questo socket viene inserito in modalità "passiva", in cui le connessioni in ingresso vengono riconosciute e accodate in attesa di accettazione da parte del processo.

Questa funzione viene in genere utilizzata dai server (o da qualsiasi applicazione che desidera accettare connessioni) che può avere più di una richiesta di connessione alla volta: se una richiesta di connessione arriva con la coda completa, il client riceverà un errore con un'indicazione WSAECONNREFUSED.

`Listen` tenta di continuare a funzionare in modo razionale quando non sono disponibili porte (descrittori). Accetterà le connessioni fino a quando la coda non verrà svuotata. Se le porte diventano disponibili, una chiamata successiva a `Listen` o `Accept` riempie la coda fino al "backlog" corrente o più recente, se possibile, e riprende l'ascolto delle connessioni in ingresso.

##  <a name="m_hsocket"></a>CAsyncSocket:: m_hSocket

Contiene l'handle del SOCKET per il socket incapsulato da questo oggetto `CAsyncSocket`.

```
SOCKET m_hSocket;
```

##  <a name="onaccept"></a>CAsyncSocket:: OnAccept

Chiamata eseguita dal Framework per notificare a un socket di ascolto che può accettare richieste di connessione in sospeso chiamando la funzione membro [Accept](#accept) .

```
virtual void OnAccept(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnAccept`:

- **0** la funzione è stata eseguita correttamente.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onclose"></a>CAsyncSocket:: OnClose

Chiamato dal Framework per notificare a questo socket che il socket connesso è chiuso dal processo.

```
virtual void OnClose(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnClose`:

- **0** la funzione è stata eseguita correttamente.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAECONNRESET la connessione è stata reimpostata dal lato remoto.

- WSAECONNABORTED la connessione è stata interrotta a causa di un timeout o di un altro errore.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onconnect"></a>CAsyncSocket:: OnConnect

Chiamato dal Framework per notificare al socket di connessione che il tentativo di connessione è stato completato, in modo corretto o in errore.

```
virtual void OnConnect(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnConnect`:

- **0** la funzione è stata eseguita correttamente.

- WSAEADDRINUSE l'indirizzo specificato è già in uso.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Non è possibile usare gli indirizzi WSAEAFNOSUPPORT nel gruppo specificato con questo socket.

- WSAECONNREFUSED il tentativo di connessione è stato rifiutato in modo forzato.

- WSAEDESTADDRREQ è necessario un indirizzo di destinazione.

- WSAEFAULT l'argomento *lpSockAddrLen* non è corretto.

- WSAEINVAL il socket è già associato a un indirizzo.

- WSAEISCONN il socket è già connesso.

- WSAEMFILE non sono disponibili altri descrittori di file.

- WSAENETUNREACH non è possibile raggiungere la rete da questo host in questo momento.

- WSAENOBUFS non è disponibile spazio nel buffer. Impossibile connettere il socket.

- WSAENOTCONN il socket non è connesso.

- WSAENOTSOCK il descrittore è un file, non un socket.

- WSAETIMEDOUT il timeout del tentativo di connessione senza stabilire una connessione.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  In [CSocket](../../mfc/reference/csocket-class.md)la funzione di notifica `OnConnect` non viene mai chiamata. Per le connessioni, è sufficiente chiamare `Connect`, che verrà restituito quando la connessione viene completata (correttamente o in errore). Il modo in cui vengono gestite le notifiche di connessione è un dettaglio di implementazione MFC.

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#1](../../mfc/reference/codesnippet/cpp/casyncsocket-class_1.cpp)]

##  <a name="onoutofbanddata"></a>CAsyncSocket:: OnOutOfBandData

Chiamata eseguita dal Framework per notificare al socket di ricezione che il socket di invio ha dati fuori banda da inviare.

```
virtual void OnOutOfBandData(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnOutOfBandData`:

- **0** la funzione è stata eseguita correttamente.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

### <a name="remarks"></a>Osservazioni

I dati fuori banda sono un canale logicamente indipendente associato a ogni coppia di socket connessi di tipo SOCK_STREAM. Il canale viene in genere usato per inviare dati urgenti.

MFC supporta dati fuori banda, ma gli utenti della classe `CAsyncSocket` sono sconsigliati di usarli. Il modo più semplice consiste nel creare un secondo socket per il passaggio di tali dati. Per ulteriori informazioni sui dati fuori banda, vedere [Windows Sockets: socket Notifications](../../mfc/windows-sockets-socket-notifications.md).

##  <a name="onreceive"></a>CAsyncSocket:: OnReceive

Chiamata eseguita dal Framework per notificare a questo socket che nel buffer sono presenti dati che possono essere recuperati chiamando la funzione membro `Receive`.

```
virtual void OnReceive(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnReceive`:

- **0** la funzione è stata eseguita correttamente.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#2](../../mfc/reference/codesnippet/cpp/casyncsocket-class_2.cpp)]

##  <a name="onsend"></a>CAsyncSocket:: OnSend

Chiamata eseguita dal Framework per notificare al socket che ora può inviare dati chiamando la funzione membro `Send`.

```
virtual void OnSend(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode*<br/>
Errore più recente in un socket. I codici di errore seguenti si applicano alla funzione membro `OnSend`:

- **0** la funzione è stata eseguita correttamente.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#3](../../mfc/reference/codesnippet/cpp/casyncsocket-class_3.cpp)]

##  <a name="operator_eq"></a>CAsyncSocket:: operator =

Assegna un nuovo valore a un oggetto `CAsyncSocket`.

```
void operator=(const CAsyncSocket& rSrc);
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento a un oggetto `CAsyncSocket` esistente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per copiare un oggetto `CAsyncSocket` esistente in un altro oggetto `CAsyncSocket`.

##  <a name="operator_socket"></a>SOCKET CAsyncSocket:: operator

Utilizzare questo operatore per recuperare l'handle del SOCKET dell'oggetto `CAsyncSocket`.

```
operator SOCKET() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle dell'oggetto SOCKET; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

È possibile usare l'handle per chiamare direttamente le API di Windows.

##  <a name="receive"></a>CAsyncSocket:: Receive

Chiamare questa funzione membro per ricevere dati da un socket.

```
virtual int Receive(
    void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Buffer per i dati in ingresso.

*nBufLen*<br/>
Lunghezza di *lpBuf* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_PEEK leggere i dati in ingresso. I dati vengono copiati nel buffer, ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `Receive` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAENOTCONN il socket non è connesso.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `Receive` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione di `Receive` bloccherà.

- WSAEMSGSIZE il datagramma è troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAEINVAL il socket non è stato associato con `Bind`.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene usata per i socket di flusso o di datagramma connessi e viene usata per leggere i dati in ingresso.

Per i socket di tipo SOCK_STREAM, viene restituita la quantità di informazioni attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione inline di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può usare l'opzione `IOCtlSIOCATMARK` o [OnOutOfBandData](#onoutofbanddata) per determinare se i dati fuori banda restano da leggere.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer specificato, il buffer viene riempito con la prima parte del datagramma, i dati in eccesso vengono persi e `Receive` restituisce il valore SOCKET_ERROR con il codice di errore impostato su WSAEMSGSIZE. Se non sono disponibili dati in ingresso nel socket, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. La funzione di callback [OnReceive](#onreceive) può essere usata per determinare l'arrivo di più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `Receive` verrà completato immediatamente con 0 byte ricevuti. Se la connessione è stata reimpostata, un `Receive` avrà esito negativo con l'errore WSAECONNRESET.

`Receive` deve essere chiamato una sola volta per ogni volta che viene chiamato [CAsyncSocket:: OnReceive](#onreceive) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket:: OnReceive](#onreceive).

##  <a name="receivefrom"></a>CAsyncSocket:: ReceiveFrom

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nella struttura [sockaddr](/windows/win32/winsock/sockaddr-2) o in *rSocketAddress*.

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
Buffer per i dati in ingresso.

*nBufLen*<br/>
Lunghezza di *lpBuf* in byte.

*rSocketAddress*<br/>
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che include l'indirizzo di origine al momento della restituzione.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo di origine in *lpSockAddr* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_PEEK leggere i dati in ingresso. I dati vengono copiati nel buffer, ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `ReceiveFrom` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando `GetLastError`. A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è valido: il buffer *lpSockAddr* è troppo piccolo per contenere l'indirizzo peer.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL il socket non è stato associato con `Bind`.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `ReceiveFrom` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione di `ReceiveFrom` bloccherà.

- WSAEMSGSIZE il datagramma è troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene usata per leggere i dati in ingresso in un socket (possibilmente connesso) e per acquisire l'indirizzo da cui sono stati inviati i dati.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket:: ReceiveFromEx](#receivefromex).

Per i socket di tipo SOCK_STREAM, viene restituita la quantità di informazioni attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione inline di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può usare l'opzione `IOCtlSIOCATMARK` o `OnOutOfBandData` per determinare se è necessario leggere più dati fuori banda. I parametri *lpSockAddr* e *lpSockAddrLen* vengono ignorati per SOCK_STREAM Sockets.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer specificato, il buffer viene riempito con la prima parte del messaggio, i dati in eccesso vengono persi e `ReceiveFrom` restituisce il valore SOCKET_ERROR con il codice di errore impostato su WSAEMSGSIZE.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, l'indirizzo di rete del socket che ha inviato i dati viene copiato nella struttura [sockaddr](/windows/win32/winsock/sockaddr-2) corrispondente. Il valore a cui punta *lpSockAddrLen* viene inizializzato in base alla dimensione della struttura e viene modificato al ritorno per indicare le dimensioni effettive dell'indirizzo archiviato. Se non sono disponibili dati in ingresso nel socket, il `ReceiveFrom` chiamata attende che i dati arrivino, a meno che il socket non sia non bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il callback `OnReceive` può essere usato per determinare l'arrivo di più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `ReceiveFrom` verrà completato immediatamente con 0 byte ricevuti.

##  <a name="receivefromex"></a>CAsyncSocket:: ReceiveFromEx

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nella struttura [sockaddr](/windows/win32/winsock/sockaddr-2) o in *rSocketAddress* (gestisce gli indirizzi IPv6).

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
Buffer per i dati in ingresso.

*nBufLen*<br/>
Lunghezza di *lpBuf* in byte.

*rSocketAddress*<br/>
Riferimento a un oggetto `CString` che riceve un indirizzo IP con numero punteggiato.

*rSocketPort*<br/>
Riferimento a un UINT che archivia una porta.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_PEEK leggere i dati in ingresso. I dati vengono copiati nel buffer, ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `ReceiveFromEx` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando `GetLastError`. A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT l'argomento *lpSockAddrLen* non è valido: il buffer *lpSockAddr* è troppo piccolo per contenere l'indirizzo peer.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL il socket non è stato associato con `Bind`.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `ReceiveFromEx` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 0 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione di `ReceiveFromEx` bloccherà.

- WSAEMSGSIZE il datagramma è troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene usata per leggere i dati in ingresso in un socket (possibilmente connesso) e per acquisire l'indirizzo da cui sono stati inviati i dati.

Questa funzione è uguale a [CAsyncSocket:: ReceiveFrom](#receivefrom) , ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

Per i socket di tipo SOCK_STREAM, viene restituita la quantità di informazioni attualmente disponibile fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione inline di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può usare l'opzione `IOCtlSIOCATMARK` o `OnOutOfBandData` per determinare se è necessario leggere più dati fuori banda. I parametri *lpSockAddr* e *lpSockAddrLen* vengono ignorati per SOCK_STREAM Sockets.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer specificato, il buffer viene riempito con la prima parte del messaggio, i dati in eccesso vengono persi e `ReceiveFromEx` restituisce il valore SOCKET_ERROR con il codice di errore impostato su WSAEMSGSIZE.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, l'indirizzo di rete del socket che ha inviato i dati viene copiato nella struttura [sockaddr](/windows/win32/winsock/sockaddr-2) corrispondente. Il valore a cui punta *lpSockAddrLen* viene inizializzato in base alla dimensione della struttura e viene modificato al ritorno per indicare le dimensioni effettive dell'indirizzo archiviato. Se non sono disponibili dati in ingresso nel socket, il `ReceiveFromEx` chiamata attende che i dati arrivino, a meno che il socket non sia non bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il callback `OnReceive` può essere usato per determinare l'arrivo di più dati.

Se il socket è di tipo SOCK_STREAM e il lato remoto ha chiuso la connessione normalmente, un `ReceiveFromEx` verrà completato immediatamente con 0 byte ricevuti.

##  <a name="send"></a>CAsyncSocket:: Send

Chiamare questa funzione membro per inviare i dati su un socket connesso.

```
virtual int Send(
    const void* lpBuf,
    int nBufLen,
    int nFlags = 0);
```

### <a name="parameters"></a>Parametri

*lpBuf*<br/>
Buffer contenente i dati da trasmettere.

*nBufLen*<br/>
Lunghezza dei dati in *lpBuf* in byte.

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_DONTROUTE specifica che i dati non devono essere soggetti al routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB inviare dati fuori banda (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `Send` restituisce il numero totale di caratteri inviati. Si noti che questo valore può essere inferiore al numero indicato da *nBufLen*. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEACCES l'indirizzo richiesto è un indirizzo di trasmissione, ma il flag appropriato non è stato impostato.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT l'argomento *lpBuf* non si trova in una parte valida dello spazio degli indirizzi utente.

- WSAENETRESET è necessario reimpostare la connessione perché è stata eliminata dall'implementazione di Windows Sockets.

- WSAENOBUFS l'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN il socket non è connesso.

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `Send` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherà.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è più grande del valore massimo supportato dall'implementazione di Windows Sockets.

- WSAEINVAL il socket non è stato associato con `Bind`.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

`Send` viene usato per scrivere i dati in uscita in socket di flusso o di datagramma connessi. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostanti, fornite dall'elemento `iMaxUdpDg` nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) restituita da `AfxSocketInit`. Se i dati sono troppo lunghi per essere superati atomicamente attraverso il protocollo sottostante, il WSAEMSGSIZE di errore viene restituito tramite `GetLastError`e non vengono trasmessi dati.

Si noti che per un socket di datagramma il completamento corretto di un `Send` non indica che i dati sono stati recapitati correttamente.

In `CAsyncSocket` oggetti di tipo SOCK_STREAM, il numero di byte scritti può essere compreso tra 1 e la lunghezza richiesta, a seconda della disponibilità del buffer sia per gli host locali che per quelli esterni.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket:: OnSend](#onsend).

##  <a name="sendto"></a>CAsyncSocket:: SendTo

Chiamare questa funzione membro per inviare i dati a una destinazione specifica.

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
Buffer contenente i dati da trasmettere.

*nBufLen*<br/>
Lunghezza dei dati in *lpBuf* in byte.

*nHostPort*<br/>
Porta che identifica l'applicazione socket.

*lpszHostAddress*<br/>
Indirizzo di rete del socket a cui è connesso questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_DONTROUTE specifica che i dati non devono essere soggetti al routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB inviare dati fuori banda (solo SOCK_STREAM).

*lpSockAddr*<br/>
Puntatore a una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo del socket di destinazione.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `SendTo` restituisce il numero totale di caratteri inviati. Si noti che questo valore può essere inferiore al numero indicato da *nBufLen*. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEACCES l'indirizzo richiesto è un indirizzo di trasmissione, ma il flag appropriato non è stato impostato.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT i parametri *lpBuf* o *lpSockAddr* non fanno parte dello spazio degli indirizzi utente oppure l'argomento *lpSockAddr* è troppo piccolo (minore della dimensione di una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) ).

- WSAEINVAL il nome host non è valido.

- WSAENETRESET è necessario reimpostare la connessione perché è stata eliminata dall'implementazione di Windows Sockets.

- WSAENOBUFS l'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `SendTo` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherà.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è più grande del valore massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Non è possibile usare gli indirizzi WSAEAFNOSUPPORT nel gruppo specificato con questo socket.

- WSAEDESTADDRREQ è necessario un indirizzo di destinazione.

- WSAENETUNREACH non è possibile raggiungere la rete da questo host in questo momento.

### <a name="remarks"></a>Osservazioni

`SendTo` viene usato per i socket di datagramma o di flusso e viene usato per scrivere i dati in uscita in un socket. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostanti, fornite dall'elemento `iMaxUdpDg` nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) compilata da [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per essere superati atomicamente attraverso il protocollo sottostante, viene restituito l'errore WSAEMSGSIZE e non vengono trasmessi dati.

Si noti che il completamento corretto di un `SendTo` non indica che i dati sono stati recapitati correttamente.

`SendTo` viene usato solo in un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal parametro *lpSockAddr* .

Per inviare una trasmissione (solo in un SOCK_DGRAM), l'indirizzo nel parametro *lpSockAddr* deve essere costruito usando l'indirizzo IP speciale INADDR_BROADCAST (definito nel file di intestazione Windows Sockets Winsock. H) insieme al numero di porta previsto. In alternativa, se il parametro *lpszHostAddress* è null, il socket viene configurato per la trasmissione. È in genere consigliabile che un datagramma broadcast superi le dimensioni in cui può verificarsi la frammentazione, il che significa che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket:: SendToEx](#sendtoex).

##  <a name="sendtoex"></a>CAsyncSocket:: SendToEx

Chiamare questa funzione membro per inviare i dati a una destinazione specifica (gestisce gli indirizzi IPv6).

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
Buffer contenente i dati da trasmettere.

*nBufLen*<br/>
Lunghezza dei dati in *lpBuf* in byte.

*nHostPort*<br/>
Porta che identifica l'applicazione socket.

*lpszHostAddress*<br/>
Indirizzo di rete del socket a cui è connesso questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

*nFlags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni del socket e dal parametro *nFlags* . Quest'ultimo viene costruito combinando uno dei valori seguenti con l' C++ operatore **or** :

- MSG_DONTROUTE specifica che i dati non devono essere soggetti al routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB inviare dati fuori banda (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se non si verificano errori, `SendToEx` restituisce il numero totale di caratteri inviati. Si noti che questo valore può essere inferiore al numero indicato da *nBufLen*. In caso contrario, viene restituito un valore SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEACCES l'indirizzo richiesto è un indirizzo di trasmissione, ma il flag appropriato non è stato impostato.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT i parametri *lpBuf* o *lpSockAddr* non fanno parte dello spazio degli indirizzi utente oppure l'argomento *lpSockAddr* è troppo piccolo (minore della dimensione di una struttura [sockaddr](/windows/win32/winsock/sockaddr-2) ).

- WSAEINVAL il nome host non è valido.

- WSAENETRESET è necessario reimpostare la connessione perché è stata eliminata dall'implementazione di Windows Sockets.

- WSAENOBUFS l'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

- Il MSG_OOB ILWSAEOPNOTSUPP è stato specificato, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN il socket è stato arrestato; non è possibile chiamare `SendToEx` su un socket dopo che è stato richiamato `ShutDown` con *Nhow* impostato su 1 o 2.

- WSAEWOULDBLOCK il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherà.

- WSAEMSGSIZE il socket è di tipo SOCK_DGRAM e il datagramma è più grande del valore massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED il circuito virtuale è stato interrotto a causa di un timeout o di un altro errore.

- WSAECONNRESET il circuito virtuale è stato reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL l'indirizzo specificato non è disponibile dal computer locale.

- Non è possibile usare gli indirizzi WSAEAFNOSUPPORT nel gruppo specificato con questo socket.

- WSAEDESTADDRREQ è necessario un indirizzo di destinazione.

- WSAENETUNREACH non è possibile raggiungere la rete da questo host in questo momento.

### <a name="remarks"></a>Osservazioni

Questo metodo è uguale a [CAsyncSocket:: Send](#sendto) ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

`SendToEx` viene usato per i socket di datagramma o di flusso e viene usato per scrivere i dati in uscita in un socket. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostanti, fornite dall'elemento `iMaxUdpDg` nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) compilata da [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per essere superati atomicamente attraverso il protocollo sottostante, viene restituito l'errore WSAEMSGSIZE e non vengono trasmessi dati.

Si noti che il completamento corretto di un `SendToEx` non indica che i dati sono stati recapitati correttamente.

`SendToEx` viene usato solo in un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal parametro *lpSockAddr* .

Per inviare una trasmissione (solo in un SOCK_DGRAM), l'indirizzo nel parametro *lpSockAddr* deve essere costruito usando l'indirizzo IP speciale INADDR_BROADCAST (definito nel file di intestazione Windows Sockets Winsock. H) insieme al numero di porta previsto. In alternativa, se il parametro *lpszHostAddress* è null, il socket viene configurato per la trasmissione. È in genere consigliabile che un datagramma broadcast superi le dimensioni in cui può verificarsi la frammentazione, il che significa che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.

##  <a name="setsockopt"></a>CAsyncSocket:: SetSockOpt

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
Opzione socket per la quale deve essere impostato il valore.

*lpOptionValue*<br/>
Puntatore al buffer in cui viene fornito il valore per l'opzione richiesta.

*nOptionLen*<br/>
Dimensioni del buffer *lpOptionValue* in byte.

*nLevel*<br/>
Livello in corrispondenza del quale è definita l'opzione. gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- WSAEFAULT *lpOptionValue* non è una parte valida dello spazio degli indirizzi del processo.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL *nLevel* non è valido oppure le informazioni in *lpOptionValue* non sono valide.

- Si è verificato il timeout della connessione WSAENETRESET quando è stato impostato SO_KEEPALIVE.

- WSAENOPROTOOPT l'opzione è sconosciuta o non supportata. In particolare, SO_BROADCAST non è supportata nei socket di tipo SOCK_STREAM, mentre SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportati nei socket di tipo SOCK_DGRAM.

- La connessione WSAENOTCONN è stata reimpostata quando è stato impostato SO_KEEPALIVE.

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`SetSockOpt` imposta il valore corrente per un'opzione socket associata a un socket di qualsiasi tipo, in qualsiasi stato. Anche se le opzioni possono esistere a più livelli di protocollo, questa specifica definisce solo le opzioni esistenti al livello "socket" più alto. Le opzioni interessano le operazioni socket, ad esempio se i dati accelerati vengono ricevuti nel flusso di dati normale, se i messaggi broadcast possono essere inviati sul socket e così via.

Sono disponibili due tipi di opzioni socket: opzioni booleane che consentono di abilitare o disabilitare una funzionalità o un comportamento e opzioni che richiedono un valore integer o una struttura. Per abilitare un'opzione booleana, *lpOptionValue* punta a un valore integer diverso da zero. Per disabilitare l'opzione *lpOptionValue* punta a un intero uguale a zero. *nOptionLen* deve essere uguale a `sizeof(BOOL)` per le opzioni booleane. Per altre opzioni, *lpOptionValue* punta all'integer o alla struttura che contiene il valore desiderato per l'opzione e *nOptionLen* è la lunghezza dell'intero o della struttura.

SO_LINGER controlla l'azione eseguita quando i dati non inviati vengono accodati in un socket e viene chiamata la funzione `Close` per chiudere il socket.

Per impostazione predefinita, un socket non può essere associato (vedere [Bind](#bind)) a un indirizzo locale che è già in uso. In alcuni casi, tuttavia, potrebbe essere utile "riutilizzare" un indirizzo in questo modo. Poiché ogni connessione viene identificata in modo univoco dalla combinazione di indirizzi locali e remoti, non c'è problema se due socket sono associati allo stesso indirizzo locale, purché gli indirizzi remoti siano diversi.

Per informare l'implementazione di Windows Socket che una chiamata di `Bind` su un socket non deve essere consentita perché l'indirizzo desiderato è già usato da un altro socket, l'applicazione deve impostare l'opzione socket SO_REUSEADDR per il socket prima di emettere la chiamata `Bind`. Si noti che l'opzione viene interpretata solo al momento della chiamata `Bind`: non è pertanto necessaria (ma innocua) impostare l'opzione su un socket che non deve essere associato a un indirizzo esistente e l'impostazione o la reimpostazione dell'opzione dopo la chiamata `Bind` non ha effetto su questo o su qualsiasi altro socket.

Un'applicazione può richiedere che l'implementazione di Windows Sockets consenta l'utilizzo di pacchetti "Keep-Alive" in connessioni Transmission Control Protocol (TCP) attivando l'opzione di SO_KEEPALIVE socket. Un'implementazione di Windows Sockets non deve supportare l'uso di Keep-Alive. in caso contrario, la semantica precisa è specifica dell'implementazione, ma deve essere conforme alla sezione 4.2.3.6 di RFC 1122: "requisiti per gli host Internet-livelli di comunicazione". Se una connessione viene eliminata come risultato di "Keep-Alive", il codice di errore WSAENETRESET viene restituito a tutte le chiamate in corso sul socket e tutte le chiamate successive avranno esito negativo con WSAENOTCONN.

L'opzione TCP_NODELAY Disabilita l'algoritmo Nagle. L'algoritmo Nagle viene utilizzato per ridurre il numero di pacchetti di piccole dimensioni inviati da un host mediante il buffering dei dati di invio non riconosciuti fino a quando non è possibile inviare un pacchetto di dimensioni complete. Tuttavia, per alcune applicazioni questo algoritmo può ostacolare le prestazioni e TCP_NODELAY può essere usato per disattivarlo. Gli sviluppatori di applicazioni non devono impostare TCP_NODELAY, a meno che l'impatto di questa operazione non sia ben compreso e desiderato, poiché l'impostazione TCP_NODELAY può avere un impatto negativo significativo sulle prestazioni della rete. TCP_NODELAY è l'unica opzione socket supportata che usa il livello IPPROTO_TCP; tutte le altre opzioni utilizzano SOL_SOCKET di livello.

Alcune implementazioni di Windows Sockets forniscono informazioni di debug dell'output se l'opzione SO_DEBUG è impostata da un'applicazione.

Per `SetSockOpt`sono supportate le opzioni seguenti. Il tipo identifica il tipo di dati da *lpOptionValue*.

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_BROADCAST|BOOL|Consente la trasmissione di messaggi broadcast sul socket.|
|SO_DEBUG|BOOL|Registra informazioni di debug.|
|SO_DONTLINGER|BOOL|Non bloccare `Close` in attesa dell'invio di dati non inviati. L'impostazione di questa opzione equivale a impostare SO_LINGER con `l_onoff` impostato su zero.|
|SO_DONTROUTE|BOOL|Non indirizzare: inviare direttamente all'interfaccia.|
|SO_KEEPALIVE|BOOL|Invia keep-alive.|
|SO_LINGER|`struct LINGER`|Permanenza in `Close` se sono presenti dati non inviati.|
|SO_OOBINLINE|BOOL|Ricevere dati fuori banda nel flusso di dati normale.|
|SO_RCVBUF|**int**|Specificare le dimensioni del buffer per le ricevute.|
|SO_REUSEADDR|BOOL|Consente di associare il socket a un indirizzo già in uso. (Vedere [Bind](#bind).)|
|SO_SNDBUF|**int**|Specificare le dimensioni del buffer per le invii.|
|TCP_NODELAY|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Le opzioni di distribuzione del software Berkeley (BSD) non sono supportate per `SetSockOpt` sono:

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Il socket è in ascolto|
|SO_ERROR|**int**|Ottenere lo stato di errore e deselezionare.|
|SO_RCVLOWAT|**int**|Ricevere il limite minimo.|
|SO_RCVTIMEO|**int**|Timeout di ricezione|
|SO_SNDLOWAT|**int**|Inviare un contrassegno minimo.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|SO_TYPE|**int**|Tipo di socket.|
|IP_OPTIONS||Impostare il campo opzioni nell'intestazione IP.|

##  <a name="shutdown"></a>CAsyncSocket:: ShutDown

Chiamare questa funzione membro per disabilitare gli invii, le ricevute o entrambi i socket.

```
BOOL ShutDown(int nHow = sends);
```

### <a name="parameters"></a>Parametri

*nHow*<br/>
Flag che descrive i tipi di operazione che non saranno più consentiti, usando i valori enumerati seguenti:

- **ricezione = 0**

- **invii = 1**

- **entrambi = 2**

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0 e un codice di errore specifico possono essere recuperati chiamando [GetLastError](#getlasterror). A questa funzione membro si applicano gli errori seguenti:

- Prima di usare questa API, è necessario che WSANOTINITIALISED un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito.

- WSAENETDOWN l'implementazione di Windows Sockets ha rilevato un errore nel sottosistema di rete.

- *Nhow* WSAEINVAL non valido.

- WSAEINPROGRESS è in corso un'operazione di blocco di Windows Sockets.

- WSAENOTCONN il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`ShutDown` viene utilizzato in tutti i tipi di socket per disabilitare la ricezione, la trasmissione o entrambi. Se *Nhow* è 0, le ricevute successive sul socket non saranno consentite. Questa operazione non ha alcun effetto sui livelli di protocollo inferiori.

Per Transmission Control Protocol (TCP), la finestra TCP non viene modificata e i dati in arrivo verranno accettati (ma non riconosciuti) finché la finestra non viene esaurita. Per UDP (User Datagram Protocol), i datagrammi in ingresso vengono accettati e accodati. In nessun caso verrà generato un pacchetto di errore ICMP. Se *Nhow* è 1, gli invii successivi non sono consentiti. Per i socket TCP verrà inviata una pinna. Se si imposta *Nhow* su 2, le trasmissioni e le ricevute vengono disabilitate come descritto in precedenza.

Si noti che `ShutDown` non chiude il socket e le risorse collegate al socket non verranno liberate fino a quando non viene chiamato `Close`. Un'applicazione non deve basarsi sulla possibilità di riutilizzare un socket dopo che è stato arrestato. In particolare, non è necessaria un'implementazione di Windows Sockets per supportare l'utilizzo di `Connect` su un socket di questo tipo.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket:: OnReceive](#onreceive).

##  <a name="socket"></a>CASyncSocket:: socket

Alloca un handle di socket.

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
Maschera di maschera che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- `FD_READ`: si desidera ricevere la notifica della conformità per la lettura.

- `FD_WRITE`: si desidera ricevere la notifica della conformità per la scrittura.

- `FD_OOB`: si desidera ricevere la notifica dell'arrivo dei dati fuori banda.

- `FD_ACCEPT`: si desidera ricevere la notifica delle connessioni in ingresso.

- `FD_CONNECT`: si desidera ricevere la notifica della connessione completata.

- `FD_CLOSE`: si desidera ricevere la notifica della chiusura del socket.

*nProtocolType*<br/>
Protocollo da utilizzare con il socket specifico per la famiglia di indirizzi indicata.

*nAddressFormat*<br/>
Specifica della famiglia di indirizzi.

### <a name="return-value"></a>Valore restituito

Restituisce `TRUE` in caso di esito positivo, `FALSE` in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo alloca un handle di socket. Non viene chiamato [CAsyncSocket:: bind](#bind) per associare il socket a un indirizzo specificato, pertanto è necessario chiamare `Bind` in un secondo momento per associare il socket a un indirizzo specificato. È possibile usare [CAsyncSocket:: setsockopt](#setsockopt) per impostare l'opzione socket prima che venga associato.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
