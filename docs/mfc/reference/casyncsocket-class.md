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
ms.openlocfilehash: e384be534bdbb355554c28383e9e214e9084f217
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753021"
---
# <a name="casyncsocket-class"></a>Classe CAsyncSocket

Rappresenta un Windows Socket, ovvero un endpoint di comunicazione di rete.

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
|[CAsyncSocket::Accettare](#accept)|Accetta una connessione sul socket.|
|[CAsyncSocket::AsyncSelect](#asyncselect)|Richiede la notifica dell'evento per il socket.|
|[CAsyncSocket::Allega](#attach)|Associa un handle socket `CAsyncSocket` a un oggetto.|
|[CAsyncSocket::Bind](#bind)|Associa un indirizzo locale al socket.|
|[CAsyncSocket::Chiudi](#close)|Chiude il socket.|
|[CAsyncSocket::Connessione](#connect)|Stabilisce una connessione a un socket peer.|
|[CAsyncSocket::Create](#create)|Crea un socket.|
|[CAsyncSocket::Detach](#detach)|Scollega un handle socket `CAsyncSocket` da un oggetto.|
|[CAsyncSocket::FromHandle](#fromhandle)|Restituisce un `CAsyncSocket` puntatore a un oggetto, dato un handle socket.|
|[CAsyncSocket::GetLastError](#getlasterror)|Ottiene lo stato di errore per l'ultima operazione non riuscita.|
|[CAsyncSocket::NomePeer](#getpeername)|Ottiene l'indirizzo del socket peer a cui è connesso il socket.|
|[CAsyncSocket::GetPeerNameEx](#getpeernameex)|Ottiene l'indirizzo del socket peer a cui è connesso il socket (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::GetSockName](#getsockname)|Ottiene il nome locale per un socket.|
|[CAsyncSocket::GetSockNameEx](#getsocknameex)|Ottiene il nome locale per un socket (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::GetSockOptCAsyncSocket::GetSockOpt](#getsockopt)|Recupera un'opzione socket.|
|[CAsyncSocket::IOCtl](#ioctl)|Controlla la modalità della presa.|
|[CAsyncSocket::Ascoltare](#listen)|Stabilisce un socket per l'ascolto delle richieste di connessione in ingresso.|
|[CAsyncSocket::Ricezione](#receive)|Riceve dati dal socket.|
|[CAsyncSocket::ReceiveFrom](#receivefrom)|Riceve un datagramma e archivia l'indirizzo di origine.|
|[CAsyncSocket::ReceiveFromEx](#receivefromex)|Riceve un datagramma e archivia l'indirizzo di origine (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::Invio](#send)|Invia i dati a un socket connesso.|
|[CAsyncSocket::SendTo](#sendto)|Invia dati a una destinazione specifica.|
|[CAsyncSocket::SendToEx](#sendtoex)|Invia dati a una destinazione specifica (gestisce gli indirizzi IPv6).|
|[CAsyncSocket::SetSockOptCAsyncSocket::SetSockOpt](#setsockopt)|Imposta un'opzione socket.|
|[CAsyncSocket::ShutDown](#shutdown)|Disabilita `Send` e/o `Receive` chiama sul socket.|
|[CASyncSocket::Socket](#socket)|Alloca un handle socket.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::OnAccept](#onaccept)|Notifica a un socket in ascolto che `Accept`può accettare richieste di connessione in sospeso chiamando .|
|[CAsyncSocket::OnClose](#onclose)|Notifica a un socket che il socket ad esso connesso è stato chiuso.|
|[CAsyncSocket::OnConnect](#onconnect)|Notifica a un socket di connessione che il tentativo di connessione è stato completato, correttamente o in errore.|
|[CAsyncSocket::OnOutOfBandData](#onoutofbanddata)|Notifica a un socket ricevente che sono presenti dati fuori banda da leggere sul socket, in genere un messaggio urgente.|
|[CAsyncSocket::OnReceive](#onreceive)|Notifica a un socket in ascolto che `Receive`sono presenti dati da recuperare chiamando .|
|[CAsyncSocket::OnSend](#onsend)|Notifica a un socket che può `Send`inviare dati chiamando .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::operatore](#operator_eq)|Assegna un nuovo valore `CAsyncSocket` a un oggetto.|
|[CAsyncSocket::operatore SOCKET](#operator_socket)|Utilizzare questo operatore per recuperare `CAsyncSocket` l'handle SOCKET dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAsyncSocket::m_hSocket](#m_hsocket)|Indica l'handle SOCKET associato `CAsyncSocket` a questo oggetto.|

## <a name="remarks"></a>Osservazioni

Classe `CAsyncSocket` incapsula l'API Windows Socket Functions, fornendo un'astrazione orientata agli oggetti per i programmatori che desiderano utilizzare Windows Sockets in combinazione con MFC.

Questa classe si basa sul presupposto che si comprendano le comunicazioni di rete. L'utente è responsabile della gestione del blocco, delle differenze nell'ordine dei byte e delle conversioni tra le stringhe Unicode e le stringhe MBCS (Multibyte Character Set). Se si desidera un'interfaccia più comoda che gestisca questi problemi per l'utente, vedere la classe [CSocket](../../mfc/reference/csocket-class.md).

Per utilizzare `CAsyncSocket` un oggetto, chiamare il relativo costruttore, quindi `SOCKET`chiamare la funzione [Create](#create) per creare l'handle del socket sottostante (tipo ), ad eccezione dei socket accettati. Per un socket server chiamare la funzione membro [Listen](#listen) e per un socket client chiamare la funzione membro [Connect.](#connect) Il socket del server deve chiamare la funzione [Accept](#accept) alla ricezione di una richiesta di connessione. Utilizzare le `CAsyncSocket` funzioni rimanenti per effettuare comunicazioni tra i socket. Al termine, `CAsyncSocket` eliminare l'oggetto se è stato creato nell'heap; il distruttore chiama automaticamente la funzione [Close.](#close) Il tipo di dati SOCKET è descritto nell'articolo [Windows Sockets: Background](../../mfc/windows-sockets-background.md).

> [!NOTE]
> Quando si utilizzano socket MFC in thread secondari in `AfxSocketInit` un'applicazione MFC collegata in modo statico, è necessario chiamare ogni thread che utilizza i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread primario.

Per ulteriori informazioni, vedere [Windows Sockets: Using Class CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) e gli articoli correlati. [Windows Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAsyncSocket`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxsock.h

## <a name="casyncsocketaccept"></a><a name="accept"></a>CAsyncSocket::Accettare

Chiamare questa funzione membro per accettare una connessione su un socket.

```
virtual BOOL Accept(
    CAsyncSocket& rConnectedSocket,
    SOCKADDR* lpSockAddr = NULL,
    int* lpSockAddrLen = NULL);
```

### <a name="parameters"></a>Parametri

*rConnectedSocket*<br/>
Riferimento che identifica un nuovo socket disponibile per la connessione.

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che riceve l'indirizzo del socket di connessione, noto in rete. Il formato esatto dell'argomento *lpSockAddr* è determinato dalla famiglia di indirizzi stabilita al momento della creazione del socket. Se *lpSockAddr* e/o *lpSockAddrLen* sono uguali a NULL, non viene restituita alcuna informazione sull'indirizzo remoto del socket accettato.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte. Il *lpSockAddrLen* è un parametro di risultato del valore: deve inizialmente contenere la quantità di spazio a cui punta *lpSockAddr*; al ritorno conterrà la lunghezza effettiva (in byte) dell'indirizzo restituito.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* è troppo piccolo (minore delle dimensioni di una struttura [SOCKADDR).](/windows/win32/winsock/sockaddr-2)

- WSAEINPROGRESS È in corso una chiamata di Windows Sockets di blocco.

- WSAEINVAL `Listen` non è stato richiamato prima di accettare.

- WSAEMFILE La coda è vuota al momento dell'ingresso da accettare e non sono disponibili descrittori.

- WSAENOBUFS Non è disponibile spazio buffer.

- WSAENOTSOCK Il descrittore non è un socket.

- WSAEOPNOTSUPP Il socket a cui si fa riferimento non è un tipo che supporta il servizio orientato alla connessione.

- WSAEWOULDBLOCK Il socket è contrassegnato come non bloccante e non sono presenti connessioni da accettare.

### <a name="remarks"></a>Osservazioni

Questa routine estrae la prima connessione nella coda di connessioni in sospeso, crea un nuovo socket con le stesse proprietà di questo socket e lo associa a *rConnectedSocket*. Se nella coda non sono `Accept` presenti connessioni `GetLastError` in sospeso, restituisce zero e restituisce un errore. Il socket accettato ( *rConnectedSocket)* non può essere utilizzato per accettare più connessioni. La presa originale rimane aperta e in ascolto.

L'argomento *lpSockAddr* è un parametro di risultato che viene compilato con l'indirizzo del socket di connessione, noto al livello di comunicazione. `Accept`viene utilizzato con i tipi di socket basati sulla connessione, ad esempio SOCK_STREAM.

## <a name="casyncsocketasyncselect"></a><a name="asyncselect"></a>CAsyncSocket::AsyncSelect

Chiamare questa funzione membro per richiedere la notifica dell'evento per un socket.

```
BOOL AsyncSelect(long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*Levent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ Vuoi ricevere una notifica di disponibilità per la lettura.

- FD_WRITE Ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB Desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPTVolere ricevere la notifica delle connessioni in ingresso.

- FD_CONNECT Desidera ricevere la notifica dei risultati della connessione.

- FD_CLOSE Voler ricevere una notifica quando un socket è stato chiuso da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEINVAL Indica che uno dei parametri specificati non è valido.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per specificare quali funzioni di notifica di callback MFC verranno chiamate per il socket. `AsyncSelect`imposta automaticamente questo socket sulla modalità non di blocco. Per ulteriori informazioni, vedere l'articolo [Windows Sockets: Notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

## <a name="casyncsocketattach"></a><a name="attach"></a>CAsyncSocket::Allega

Chiamare questa funzione membro per collegare `CAsyncSocket` l'handle *hSocket* a un oggetto.

```
BOOL Attach(
    SOCKET hSocket, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

*Levent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ Vuoi ricevere una notifica di disponibilità per la lettura.

- FD_WRITE Ricevere una notifica quando i dati sono disponibili per la lettura.

- FD_OOB Desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPTVolere ricevere la notifica delle connessioni in ingresso.

- FD_CONNECT Desidera ricevere la notifica dei risultati della connessione.

- FD_CLOSE Voler ricevere una notifica quando un socket è stato chiuso da un peer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo.

### <a name="remarks"></a>Osservazioni

L'handle SOCKET viene archiviato nel membro dati [m_hSocket](#m_hsocket) dell'oggetto.

## <a name="casyncsocketbind"></a><a name="bind"></a>CAsyncSocket::Bind

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

*nPortapresa*<br/>
Porta che identifica l'applicazione socket.

*Indirizzo lpszSocketAddress*<br/>
L'indirizzo di rete, un numero punteggiato come "128.56.22.8". Il passaggio della stringa NULL `CAsyncSocket` per questo parametro indica che l'istanza deve restare in ascolto dell'attività client su tutte le interfacce di rete.

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo da assegnare a questo socket.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). L'elenco seguente riguarda alcuni degli errori che potrebbero essere restituiti. Per un elenco completo, vedere Codici di errore di [Windows Sockets](/windows/win32/winsock/windows-sockets-error-codes-2).

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEADDRINUSE L'indirizzo specificato è già in uso. (Vedere l'opzione socket SO_REUSEADDR in [SetSockOpt](#setsockopt).)

- WSAEFAULT L'argomento *nSockAddrLen* è troppo piccolo (minore delle dimensioni di una struttura [SOCKADDR).](/windows/win32/winsock/sockaddr-2)

- WSAEINPROGRESS È in corso una chiamata di Windows Sockets di blocco.

- WSAEAFNOSUPPORT La famiglia di indirizzi specificata non è supportata da questa porta.

- WSAEINVAL Il socket è già associato a un indirizzo.

- WSAENOBUFS Buffer disponibili in modo insufficiente, troppe connessioni.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa routine viene utilizzata su un datagramma `Connect` o `Listen` socket di flusso non connesso, prima di chiamate successive o successive. Prima di poter accettare richieste di connessione, un socket server in ascolto `Bind`deve selezionare un numero di porta e renderlo noto a Windows Sockets chiamando . `Bind`stabilisce l'associazione locale (indirizzo host/numero di porta) del socket assegnando un nome locale a un socket senza nome.

## <a name="casyncsocketcasyncsocket"></a><a name="casyncsocket"></a>CAsyncSocket::CAsyncSocket

Costruisce un oggetto socket vuoto.

```
CAsyncSocket();
```

### <a name="remarks"></a>Osservazioni

Dopo aver creato l'oggetto, `Create` è necessario chiamare la relativa funzione membro per creare la struttura di dati SOCKET e associarne l'indirizzo. Sul lato server di una comunicazione di Windows Sockets, quando `Accept` il socket in `Create` ascolto crea un socket da utilizzare nella chiamata, non si chiama per tale socket.

## <a name="casyncsocketclose"></a><a name="close"></a>CAsyncSocket::Chiudi

Chiude il socket.

```
virtual void Close();
```

### <a name="remarks"></a>Osservazioni

Questa funzione rilascia il descrittore del socket in modo che ulteriori riferimenti ad esso avrà esito negativo con l'errore WSAENOTSOCK. Se questo è l'ultimo riferimento al socket sottostante, le informazioni di denominazione associate e i dati in coda vengono eliminati. Il distruttore dell'oggetto `Close` socket chiama per l'utente.

Per `CAsyncSocket`, ma `CSocket`non per `Close` , la semantica di sono influenzate dalle opzioni socket SO_LINGER e SO_DONTLINGER. Per ulteriori informazioni, `GetSockOpt`vedere funzione membro .

## <a name="casyncsocketconnect"></a><a name="connect"></a>CAsyncSocket::Connessione

Chiamare questa funzione membro per stabilire una connessione a un flusso non connesso o un socket di datagramma.

```
BOOL Connect(
    LPCTSTR lpszHostAddress,
    UINT nHostPort);

BOOL Connect(
    const SOCKADDR* lpSockAddr,
    int nSockAddrLen);
```

### <a name="parameters"></a>Parametri

*indirizzo lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è connesso l'oggetto: un nome di computer come "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

*nPortaHost*<br/>
Porta che identifica l'applicazione socket.

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo del socket connesso.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se ciò indica un codice di errore di WSAEWOULDBLOCK e l'applicazione utilizza `OnConnect` i callback sottoponibili a override, l'applicazione riceverà un messaggio al termine dell'operazione di connessione. I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEADDRINUSE L'indirizzo specificato è già in uso.

- WSAEINPROGRESS È in corso una chiamata di Windows Sockets di blocco.

- WSAEADDRNOTAVAIL L'indirizzo specificato non è disponibile nel computer locale.

- WSAEAFNOSUPPORT Gli indirizzi nella famiglia specificata non possono essere utilizzati con questo socket.

- WSAECONNREFUSED Il tentativo di connessione è stato rifiutato.

- WSAEDESTADDRREQ È necessario un indirizzo di destinazione.

- WSAEFAULT L'argomento *nSockAddrLen* non è corretto.

- WSAEINVAL Indirizzo host non valido.

- WSAEISCONN Il socket è già connesso.

- WSAEMFILE Non sono disponibili altri descrittori di file.

- WSAENETUNREACH La rete non è raggiungibile da questo host in questo momento.

- WSAENOBUFS Non è disponibile spazio buffer. Impossibile collegare il socket.

- WSAENOTSOCK Il descrittore non è un socket.

- WSAETIMEDOUT Tentativo di connessione sblocco senza stabilire una connessione.

- WSAEWOULDBLOCK Il socket è contrassegnato come non bloccante e la connessione non può essere completata immediatamente.

### <a name="remarks"></a>Osservazioni

Se il socket non è associato, i valori univoci vengono assegnati all'associazione locale dal sistema e il socket viene contrassegnato come associato. Si noti che se il campo dell'indirizzo `Connect` della struttura del nome è tutti zeri, restituirà zero. Per ottenere informazioni estese `GetLastError` sull'errore, chiamare la funzione membro.

Per i socket di flusso (tipo SOCK_STREAM), viene avviata una connessione attiva all'host esterno. Quando la chiamata socket viene completata correttamente, il socket è pronto per inviare/ricevere dati.

Per un socket di datagramma (tipo SOCK_DGRAM), viene impostata `Receive` una destinazione predefinita, che verrà utilizzata nelle chiamate successive. `Send`

## <a name="casyncsocketcreate"></a><a name="create"></a>CAsyncSocket::Create

Chiamare `Create` la funzione membro dopo aver creato un oggetto socket per creare il socket di Windows e collegarlo.

```
BOOL Create(
    UINT nSocketPort = 0,
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    LPCTSTR lpszSocketAddress = NULL);
```

### <a name="parameters"></a>Parametri

*nPortapresa*<br/>
Porta nota da utilizzare con il socket oppure 0 se si desidera che Windows Sockets selezioni una porta.

*nTipoDi corrente*<br/>
SOCK_STREAM o SOCK_DGRAM.

*Levent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- FD_READ Vuoi ricevere una notifica di disponibilità per la lettura.

- FD_WRITE Desidera ricevere una notifica di disponibilità per la scrittura.

- FD_OOB Desidera ricevere una notifica dell'arrivo dei dati fuori banda.

- FD_ACCEPTVolere ricevere la notifica delle connessioni in ingresso.

- FD_CONNECT Voler ricevere la notifica della connessione completata.

- FD_CLOSE Voler ricevere la notifica di chiusura socket.

*Indirizzo lpszSockAddress*<br/>
Puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero punteggiato, ad esempio "128.56.22.8". Il passaggio della stringa NULL `CAsyncSocket` per questo parametro indica che l'istanza deve restare in ascolto dell'attività client su tutte le interfacce di rete.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEAFNOSUPPORT La famiglia di indirizzi specificata non è supportata.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEMFILE Non sono disponibili altri descrittori di file.

- WSAENOBUFS Non è disponibile spazio buffer. Impossibile creare il socket.

- WSAEPROTONOSUPPORT La porta specificata non è supportata.

- WSAEPROTOTYPE La porta specificata è del tipo errato per questo socket.

- WSAESOCKTNOSUPPORT Il tipo di socket specificato non è supportato in questa famiglia di indirizzi.

### <a name="remarks"></a>Osservazioni

`Create`chiama [Socket](#socket) e, in caso di esito positivo, chiama [Bind](#bind) per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:

- SOCK_STREAM Fornisce flussi di byte in sequenza, affidabili e full-duplex e basati sulla connessione. Utilizza il protocollo TCP (Transmission Control Protocol) per la famiglia di indirizzi Internet.

- SOCK_DGRAM Supporta datagrammi, che sono pacchetti senza connessione e inaffidabili di una lunghezza massima fissa (in genere piccola). Utilizza il protocollo UDP (User Datagram Protocol) per la famiglia di indirizzi Internet.

    > [!NOTE]
    >  La `Accept` funzione membro accetta un riferimento `CSocket` a un nuovo oggetto vuoto come parametro. È necessario costruire questo `Accept`oggetto prima di chiamare . Tenere presente che se questo oggetto socket esce dall'ambito, la connessione viene chiusa. Non chiamare `Create` per questo nuovo oggetto socket.

> [!IMPORTANT]
> `Create`**non** è thread-safe.  Se si chiama in un ambiente multithreading in cui potrebbe essere richiamato contemporaneamente da thread diversi, assicurarsi di proteggere ogni chiamata con un mutex o un altro blocco di sincronizzazione.

Per ulteriori informazioni sui socket di flusso e di datagramma, vedere gli articoli [Windows Sockets: Background](../../mfc/windows-sockets-background.md) e [Windows Sockets: Ports and Socket Addresses](../../mfc/windows-sockets-ports-and-socket-addresses.md) e Windows [Sockets 2 API](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="casyncsocketdetach"></a><a name="detach"></a>CAsyncSocket::Detach

Chiamare questa funzione membro per scollegare l'handle `CAsyncSocket` SOCKET nel membro dati *m_hSocket* dall'oggetto e impostare *m_hSocket* su NULL.

```
SOCKET Detach();
```

## <a name="casyncsocketfromhandle"></a><a name="fromhandle"></a>CAsyncSocket::FromHandle

Restituisce un `CAsyncSocket` puntatore a un oggetto.

```
static CAsyncSocket* PASCAL FromHandle(SOCKET hSocket);
```

### <a name="parameters"></a>Parametri

*hSocket*<br/>
Contiene un handle a un socket.

### <a name="return-value"></a>Valore restituito

Puntatore a `CAsyncSocket` un oggetto oppure `CAsyncSocket` NULL se non è associato alcun oggetto a *hSocket*.

### <a name="remarks"></a>Osservazioni

Quando viene fornito un `CAsyncSocket` handle SOCKET, se un oggetto non è associato all'handle, la funzione membro restituisce NULL.

## <a name="casyncsocketgetlasterror"></a><a name="getlasterror"></a>CAsyncSocket::GetLastError

Chiamare questa funzione membro per ottenere lo stato di errore per l'ultima operazione non riuscita.

```
static int PASCAL GetLastError();
```

### <a name="return-value"></a>Valore restituito

Il valore restituito indica il codice di errore per l'ultima routine API di Windows Sockets eseguita da questo thread.

### <a name="remarks"></a>Osservazioni

Quando una particolare funzione membro indica che `GetLastError` si è verificato un errore, deve essere chiamato per recuperare il codice di errore appropriato. Vedere le descrizioni delle singole funzioni membro per un elenco dei codici di errore applicabili.

Per ulteriori informazioni sui codici di errore, vedere API di [Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2).

## <a name="casyncsocketgetpeername"></a><a name="getpeername"></a>CAsyncSocket::NomePeer

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

*RPeerAddress (indirizzo rPeerAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPorta*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore alla struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che riceve il nome del socket peer.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte. Al ritorno, *l'argomento lpSockAddrLen* contiene la dimensione effettiva di *lpSockAddr* restituita in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS È in corso una chiamata di Windows Sockets di blocco.

- WSAENOTCONN Il socket non è connesso.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetPeerNameEx](#getpeernameex).

## <a name="casyncsocketgetpeernameex"></a><a name="getpeernameex"></a>CAsyncSocket::GetPeerNameEx

Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui è connesso il socket (gestisce gli indirizzi IPv6).

```
BOOL GetPeerNameEx(
    CString& rPeerAddress,
    UINT& rPeerPort);
```

### <a name="parameters"></a>Parametri

*RPeerAddress (indirizzo rPeerAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPorta*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS È in corso una chiamata di Windows Sockets di blocco.

- WSAENOTCONN Il socket non è connesso.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa funzione è uguale a [CAsyncSocket::GetPeerName](#getpeername) ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

## <a name="casyncsocketgetsockname"></a><a name="getsockname"></a>CAsyncSocket::GetSockName

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

*rSocketAddress (indirizzo rSocketAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPortaPresa*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che riceve l'indirizzo del socket.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK Il descrittore non è un socket.

- WSAEINVAL Il socket non è stato `Bind`associato a un indirizzo con .

### <a name="remarks"></a>Osservazioni

Questa chiamata è particolarmente `Connect` utile quando è `Bind` stata effettuata una chiamata senza prima; questa chiamata fornisce l'unico mezzo con cui è possibile determinare l'associazione locale che è stata impostata dal sistema.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetSockNameEx](#getsocknameex)

## <a name="casyncsocketgetsocknameex"></a><a name="getsocknameex"></a>CAsyncSocket::GetSockNameEx

Chiamare questa funzione membro per ottenere il nome locale per un socket (handles indirizzi IPv6).

```
BOOL GetSockNameEx(
    CString& rSocketAddress,
    UINT& rSocketPort);
```

### <a name="parameters"></a>Parametri

*rSocketAddress (indirizzo rSocketAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPortaPresa*<br/>
Riferimento a un UINT che archivia una porta.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non è sufficientemente grande.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK Il descrittore non è un socket.

- WSAEINVAL Il socket non è stato `Bind`associato a un indirizzo con .

### <a name="remarks"></a>Osservazioni

Questa chiamata è uguale a [CAsyncSocket::GetSockName](#getsockname) ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

Questa chiamata è particolarmente `Connect` utile quando è `Bind` stata effettuata una chiamata senza prima; questa chiamata fornisce l'unico mezzo con cui è possibile determinare l'associazione locale che è stata impostata dal sistema.

## <a name="casyncsocketgetsockopt"></a><a name="getsockopt"></a>CAsyncSocket::GetSockOptCAsyncSocket::GetSockOpt

Chiamare questa funzione membro per recuperare un'opzione socket.

```
BOOL GetSockOpt(
    int nOptionName,
    void* lpOptionValue,
    int* lpOptionLen,
    int nLevel = SOL_SOCKET);
```

### <a name="parameters"></a>Parametri

*nNomeOpzione*<br/>
Opzione socket per la quale deve essere recuperato il valore.

*LpOptionValue (ValoreOpzione)*<br/>
Puntatore al buffer in cui deve essere restituito il valore dell'opzione richiesta. Il valore associato all'opzione selezionata viene restituito nel buffer *lpOptionValue*. Il numero intero a cui fa riferimento *lpOptionLen* deve contenere originariamente la dimensione di questo buffer in byte. e al ritorno, verrà impostato sulla dimensione del valore restituito. Per SO_LINGER, questa sarà la `LINGER` dimensione di una struttura; per tutte le altre opzioni sarà la dimensione di un BOOL o un **int**, a seconda dell'opzione. Vedere l'elenco delle opzioni e le relative dimensioni nella sezione Osservazioni.

*LpOptionLen (informazioni in due)*<br/>
Puntatore alla dimensione del buffer *lpOptionValue* in byte.

*nLivello*<br/>
Il livello in cui è definita l'opzione; gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se un'opzione non `SetSockOpt`è `GetSockOpt` mai stata impostata con , restituisce il valore predefinito per l'opzione. I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT *L'argomento lpOptionLen* non è valido.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOPROTOOPT L'opzione è sconosciuta o non supportata. In particolare, SO_BROADCAST non è supportato su socket di tipo SOCK_STREAM, mentre SO_ACCEPTCONN, SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportati su socket di tipo SOCK_DGRAM.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`GetSockOpt`recupera il valore corrente per un'opzione socket associata a un socket di qualsiasi tipo, in qualsiasi stato, e archivia il risultato in *lpOptionValue*. Le opzioni influiscono sulle operazioni socket, ad esempio il routing dei pacchetti, il trasferimento di dati fuori banda e così via.

Le seguenti opzioni `GetSockOpt`sono supportate per . Il Type identifica il tipo di dati indirizzati da *lpOptionValue*. L'opzione TCP_NODELAY utilizza IPPROTO_TCP di livello; tutte le altre opzioni utilizzano il livello SOL_SOCKET.

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket è in ascolto.|
|SO_BROADCAST|BOOL|Socket è configurato per la trasmissione di messaggi broadcast.|
|SO_DEBUG|BOOL|Il debug è abilitato.|
|SO_DONTLINGER|BOOL|Se true, l'opzione SO_LINGER è disabilitata.|
|SO_DONTROUTE|BOOL|Il routing è disabilitato.|
|SO_ERROR|**int**|Recuperare lo stato di errore e cancellare.|
|SO_KEEPALIVE|BOOL|Le vite vengono inviate.|
|SO_LINGER|`struct LINGER`|Restituisce le opzioni residue correnti.|
|SO_OOBINLINE|BOOL|I dati fuori banda vengono ricevuti nel flusso di dati normale.|
|SO_RCVBUF|INT|Dimensione del buffer per le ricevute.|
|SO_REUSEADDR|BOOL|Il socket può essere associato a un indirizzo già in uso.|
|SO_SNDBUF|**int**|Dimensione del buffer per le mandate.|
|SO_TYPE|**int**|Il tipo di socket (ad esempio, SOCK_STREAM).|
|Tcp_nodelay|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Le opzioni di Berkeley Software Distribution `GetSockOpt` (BSD) non supportate per sono:

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_RCVLOWAT|**int**|Ricevere bassa scoria.|
|SO_RCVTIMEO|**int**|Timeout ricezione.|
|SO_SNDLOWAT|**int**|Invia bassa la temperatura dell'acqua.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|IP_OPTIONS||Ottenere le opzioni nell'intestazione IP.|
|TCP_MAXSEG|**int**|Ottenere la dimensione massima del segmento TCP.|

La `GetSockOpt` chiamata con un'opzione non supportata comporterà la restituzione di `GetLastError`un codice di errore di WSAENOPROTOOPT da .

## <a name="casyncsocketioctl"></a><a name="ioctl"></a>CAsyncSocket::IOCtl

Chiamare questa funzione membro per controllare la modalità di un socket.

```
BOOL IOCtl(
    long lCommand,
    DWORD* lpArgument);
```

### <a name="parameters"></a>Parametri

*lComando*<br/>
Comando da eseguire sulla presa.

*lpArgomento*<br/>
Puntatore a un parametro per *lCommand*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEINVAL *lCommand* non è un comando valido oppure *lpArgument* non è un parametro accettabile per *lCommand*oppure il comando non è applicabile al tipo di socket fornito.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

Questa routine può essere utilizzata su qualsiasi socket in qualsiasi stato. Viene utilizzato per ottenere o recuperare i parametri operativi associati al socket, indipendentemente dal sottosistema di protocollo e di comunicazione. Supporta i comandi seguenti:

- FIONBIO Abilitare o disabilitare la modalità non di blocco sul socket. Il *lpArgument* parametro `DWORD`punta a un oggetto , che è diverso da zero se la modalità non di blocco deve essere abilitata e zero se deve essere disabilitata. Se `AsyncSelect` è stato emesso su un `IOCtl` socket, qualsiasi tentativo di utilizzare per impostare nuovamente il socket sulla modalità di blocco avrà esito negativo con WSAEINVAL. Per impostare nuovamente il socket sulla modalità di blocco e impedire `AsyncSelect` l'errore WSAEINVAL, un'applicazione deve prima disabilitare chiamando `AsyncSelect` con il parametro *lEvent* uguale a 0, quindi chiamare `IOCtl`.

- FIONREAD Determinare il numero massimo di byte `Receive` che possono essere letti con una chiamata da questo socket. Il *lpArgument* parametro `DWORD` punta `IOCtl` a un in cui archivia il risultato. Se questo socket è di tipo SOCK_STREAM, FIONREAD restituisce la `Receive`quantità totale di dati che possono essere letti in un unico ; in genere corrisponde alla quantità totale di dati accodati sul socket. Se questo socket è di tipo SOCK_DGRAM, FIONREAD restituisce la dimensione del primo datagramma accodato sul socket.

- SIOCATMARK Determina se tutti i dati fuori banda sono stati letti. Questo vale solo per un socket di tipo SOCK_STREAM che è stato configurato per la ricezione in linea di tutti i dati fuori banda (SO_OOBINLINE). Se nessun dato fuori banda è in attesa di essere letto, l'operazione restituisce diverso da zero. In caso contrario restituisce 0 e il successivo `Receive` o `ReceiveFrom` eseguito sul socket recupererà alcuni o tutti i dati che precedono il "marchio"; l'applicazione deve utilizzare l'operazione SIOCATMARK per determinare se i dati rimangono. Se sono presenti dati normali che precedono i dati "urgenti" (fuori banda), questi verranno ricevuti in ordine. (Si noti che un `Receive` o `ReceiveFrom` non potrà mai mescolare dati fuori banda e dati normali nella stessa chiamata.) Il *lpArgument* parametro `DWORD` punta `IOCtl` a un in cui archivia il risultato.

Questa funzione è `ioctl()` un sottoinsieme di come utilizzato nei socket Berkeley. In particolare, non esiste alcun comando equivalente a FIOASYNC, mentre SIOCATMARK è l'unico comando a livello di socket supportato.

## <a name="casyncsocketlisten"></a><a name="listen"></a>CAsyncSocket::Ascoltare

Chiamare questa funzione membro per l'ascolto delle richieste di connessione in ingresso.

```
BOOL Listen(int nConnectionBacklog = 5);
```

### <a name="parameters"></a>Parametri

*nConnectionBacklog (informazioni in netto server)*<br/>
Lunghezza massima fino alla quale può aumentare la coda di connessioni in sospeso. L'intervallo valido è compreso tra 1 e 5.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEADDRINUSE È stato effettuato un tentativo di ascolto su un indirizzo in uso.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL Il socket non `Bind` è stato associato o è già connesso.

- WSAEISCONN Il socket è già connesso.

- WSAEMFILE Non sono disponibili altri descrittori di file.

- WSAENOBUFS Non è disponibile spazio buffer.

- WSAENOTSOCK Il descrittore non è un socket.

- WSAEOPNOTSUPP Il socket a cui si fa `Listen` riferimento non è di un tipo che supporta l'operazione.

### <a name="remarks"></a>Osservazioni

Per accettare connessioni, viene prima `Create`creato il socket con , `Listen`viene specificato un backlog per le connessioni in ingresso con , quindi le connessioni vengono accettate con `Accept`. `Listen`si applica solo ai socket che supportano le connessioni, cioè quelli di tipo SOCK_STREAM. Questo socket viene messo in modalità "passiva" in cui le connessioni in ingresso vengono riconosciute e messe in coda in attesa di accettazione dal processo.

Questa funzione viene in genere utilizzata dai server (o da qualsiasi applicazione che desidera accettare connessioni) che potrebbero avere più di una richiesta di connessione alla volta: se una richiesta di connessione arriva con la coda piena, il client riceverà un errore con un'indicazione di WSAECONNREFUSED.

`Listen`continua a funzionare razionalmente quando non sono disponibili porte (descrittori). Accetta le connessioni fino a quando la coda non viene svuotata. Se le porte diventano `Listen` disponibili, una chiamata successiva o `Accept` riempirà la coda al "backlog" corrente o più recente, se possibile, e riprenderà l'ascolto delle connessioni in ingresso.

## <a name="casyncsocketm_hsocket"></a><a name="m_hsocket"></a>CAsyncSocket::m_hSocket

Contiene l'handle SOCKET per il `CAsyncSocket` socket incapsulato da questo oggetto.

```
SOCKET m_hSocket;
```

## <a name="casyncsocketonaccept"></a><a name="onaccept"></a>CAsyncSocket::OnAccept

Chiamato dal framework per notificare a un socket in ascolto che può accettare richieste di connessione in sospeso chiamando la funzione membro [Accept.](#accept)

```
virtual void OnAccept(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnAccept` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

## <a name="casyncsocketonclose"></a><a name="onclose"></a>CAsyncSocket::OnClose

Chiamato dal framework per notificare a questo socket che il socket connesso è chiuso dal relativo processo.

```
virtual void OnClose(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnClose` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAECONNRESET La connessione è stata reimpostata dal lato remoto.

- WSAECONNABORTED La connessione è stata interrotta a causa di timeout o altri errori.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

## <a name="casyncsocketonconnect"></a><a name="onconnect"></a>CAsyncSocket::OnConnect

Chiamato dal framework per notificare a questo socket di connessione che il tentativo di connessione è stato completato, correttamente o in caso di errore.

```
virtual void OnConnect(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnConnect` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAEADDRINUSE L'indirizzo specificato è già in uso.

- WSAEADDRNOTAVAIL L'indirizzo specificato non è disponibile nel computer locale.

- WSAEAFNOSUPPORT Gli indirizzi nella famiglia specificata non possono essere utilizzati con questo socket.

- WSAECONNREFUSED Il tentativo di connessione è stato rifiutato con forza.

- WSAEDESTADDRREQ È necessario un indirizzo di destinazione.

- WSAEFAULT *L'argomento lpSockAddrLen* non è corretto.

- WSAEINVAL Il socket è già associato a un indirizzo.

- WSAEISCONN Il socket è già connesso.

- WSAEMFILE Non sono disponibili altri descrittori di file.

- WSAENETUNREACH La rete non è raggiungibile da questo host in questo momento.

- WSAENOBUFS Non è disponibile spazio buffer. Impossibile collegare il socket.

- WSAENOTCONN Il socket non è connesso.

- WSAENOTSOCK Il descrittore è un file, non un socket.

- WSAETIMEDOUT Tentativo di connessione stentata senza stabilire una connessione.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> In [CSocket](../../mfc/reference/csocket-class.md) `OnConnect` , la funzione di notifica non viene mai chiamata. Per le connessioni, `Connect`è sufficiente chiamare , che verrà restituito quando la connessione viene completata (con esito riuscito o in errore). La modalità di gestione delle notifiche di connessione è un dettaglio di implementazione MFC.

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#1](../../mfc/reference/codesnippet/cpp/casyncsocket-class_1.cpp)]

## <a name="casyncsocketonoutofbanddata"></a><a name="onoutofbanddata"></a>CAsyncSocket::OnOutOfBandData

Chiamato dal framework per notificare al socket ricevente che il socket di invio dispone di dati fuori banda da inviare.

```
virtual void OnOutOfBandData(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnOutOfBandData` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

### <a name="remarks"></a>Osservazioni

I dati fuori banda sono un canale indipendente dal punto di vista logico associato a ogni coppia di socket connessi di tipo SOCK_STREAM. Il canale viene generalmente utilizzato per inviare dati urgenti.

MFC supporta i dati fuori banda, ma `CAsyncSocket` gli utenti della classe sono sconsigliati dall'utilizzo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di tali dati. Per ulteriori informazioni sui dati fuori banda, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

## <a name="casyncsocketonreceive"></a><a name="onreceive"></a>CAsyncSocket::OnReceive

Chiamato dal framework per notificare a questo socket che sono presenti `Receive` dati nel buffer che possono essere recuperati chiamando la funzione membro.

```
virtual void OnReceive(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnReceive` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#2](../../mfc/reference/codesnippet/cpp/casyncsocket-class_2.cpp)]

## <a name="casyncsocketonsend"></a><a name="onsend"></a>CAsyncSocket::OnSend

Chiamato dal framework per notificare al socket che `Send` ora può inviare dati chiamando la funzione membro.

```
virtual void OnSend(int nErrorCode);
```

### <a name="parameters"></a>Parametri

*nErrorCode (Codice errore)*<br/>
L'errore più recente su un socket. I seguenti codici di `OnSend` errore si applicano alla funzione membro:

- **0** La funzione è stata eseguita correttamente.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Windows Sockets: notifiche socket](../../mfc/windows-sockets-socket-notifications.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAsyncSocket#3](../../mfc/reference/codesnippet/cpp/casyncsocket-class_3.cpp)]

## <a name="casyncsocketoperator-"></a><a name="operator_eq"></a>CAsyncSocket::operatore

Assegna un nuovo valore `CAsyncSocket` a un oggetto.

```cpp
void operator=(const CAsyncSocket& rSrc);
```

### <a name="parameters"></a>Parametri

*rSrc*<br/>
Riferimento a un `CAsyncSocket` oggetto esistente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per `CAsyncSocket` copiare `CAsyncSocket` un oggetto esistente in un altro oggetto.

## <a name="casyncsocketoperator-socket"></a><a name="operator_socket"></a>CAsyncSocket::operatore SOCKET

Utilizzare questo operatore per recuperare `CAsyncSocket` l'handle SOCKET dell'oggetto.

```
operator SOCKET() const;
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, l'handle dell'oggetto SOCKET; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare l'handle per chiamare direttamente le API di Windows.You can use the handle to call Windows APIs directly.

## <a name="casyncsocketreceive"></a><a name="receive"></a>CAsyncSocket::Ricezione

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

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_PEEK visualizzare i dati in ingresso. I dati vengono copiati nel buffer ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si `Receive` verifica alcun errore, restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAENOTCONN Il socket non è connesso.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `Receive` chiamare su `ShutDown` un socket dopo essere stato richiamato con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato `Receive` come non bloccante e l'operazione si bloccherebbe.

- WSAEMSGSIE Il datagramma era troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAEINVAL Il socket non `Bind`è stato associato a .

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per i socket di flusso o datagramma connessi e viene utilizzata per leggere i dati in ingresso.

Per i socket di tipo SOCK_STREAM, vengono restituite tutte le informazioni attualmente disponibili fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione in linea di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può `IOCtlSIOCATMARK` utilizzare l'opzione o [OnOutOfBandData](#onoutofbanddata) per determinare se rimangono altri dati fuori banda da leggere.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer fornito, il buffer viene riempito con `Receive` la prima parte del datagramma, i dati in eccesso vengono persi e restituisce un valore di SOCKET_ERROR con il codice di errore impostato su WSAEMSGSI. Se non sono disponibili dati in ingresso nel socket, viene restituito il valore SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il [OnReceive](#onreceive) funzione di callback può essere utilizzato per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato `Receive` remoto ha arrestato la connessione normalmente, un verrà completato immediatamente con 0 byte ricevuti. Se la connessione è `Receive` stata reimpostata, un avrà esito negativo con l'errore WSAECONNRESET.

`Receive`deve essere chiamato solo una volta per ogni volta [che CAsyncSocket::OnReceive](#onreceive) viene chiamato.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket::OnReceive](#onreceive).

## <a name="casyncsocketreceivefrom"></a><a name="receivefrom"></a>CAsyncSocket::ReceiveFrom

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nella struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) o in *rSocketAddress*.

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

*rSocketAddress (indirizzo rSocketAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPortaPresa*<br/>
Riferimento a un UINT che archivia una porta.

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo di origine al momento della restituzione.

*lpSockAddrLen*<br/>
Puntatore alla lunghezza dell'indirizzo di origine in *lpSockAddr* in byte.

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_PEEK visualizzare i dati in ingresso. I dati vengono copiati nel buffer ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si `ReceiveFrom` verifica alcun errore, restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR `GetLastError`e un codice di errore specifico può essere recuperato chiamando . I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non valido: il buffer *lpSockAddr* era troppo piccolo per contenere l'indirizzo peer.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL Il socket non `Bind`è stato associato a .

- WSAENOTCONN Il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `ReceiveFrom` chiamare su `ShutDown` un socket dopo essere stato richiamato con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato `ReceiveFrom` come non bloccante e l'operazione si bloccherebbe.

- WSAEMSGSIE Il datagramma era troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per leggere i dati in ingresso su un socket (eventualmente connesso) e acquisire l'indirizzo da cui sono stati inviati i dati.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::ReceiveFromEx](#receivefromex).

Per i socket di tipo SOCK_STREAM, vengono restituite tutte le informazioni attualmente disponibili fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione in linea di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può `IOCtlSIOCATMARK` utilizzare `OnOutOfBandData` l'opzione o per determinare se rimangono altri dati fuori banda da leggere. I parametri *lpSockAddr* e *lpSockAddrLen* vengono ignorati per i socket di SOCK_STREAM.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer fornito, il buffer viene riempito con `ReceiveFrom` la prima parte del messaggio, i dati in eccesso vengono persi e restituisce il valore di SOCKET_ERROR con il codice di errore impostato su WSAEMSGSI.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, l'indirizzo di rete del socket che ha inviato i dati viene copiato nella struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) corrispondente. Il valore a cui punta *lpSockAddrLen* viene inizializzato in base alle dimensioni di questa struttura e viene modificato al ritorno per indicare le dimensioni effettive dell'indirizzo archiviato. Se non sono disponibili dati in `ReceiveFrom` ingresso nel socket, la chiamata attende l'arrivo dei dati, a meno che il socket non sia bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il `OnReceive` callback può essere utilizzato per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato `ReceiveFrom` remoto ha arrestato la connessione normalmente, un verrà completato immediatamente con 0 byte ricevuti.

## <a name="casyncsocketreceivefromex"></a><a name="receivefromex"></a>CAsyncSocket::ReceiveFromEx

Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nella struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) o in *rSocketAddress* (gestisce gli indirizzi IPv6).

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

*rSocketAddress (indirizzo rSocketAddress)*<br/>
Riferimento a `CString` un oggetto che riceve un indirizzo IP con un numero punteggiato.

*rPortaPresa*<br/>
Riferimento a un UINT che archivia una porta.

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_PEEK visualizzare i dati in ingresso. I dati vengono copiati nel buffer ma non vengono rimossi dalla coda di input.

- MSG_OOB elaborare i dati fuori banda.

### <a name="return-value"></a>Valore restituito

Se non si `ReceiveFromEx` verifica alcun errore, restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, viene restituito un valore di SOCKET_ERROR `GetLastError`e un codice di errore specifico può essere recuperato chiamando . I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT L'argomento *lpSockAddrLen* non valido: il buffer *lpSockAddr* era troppo piccolo per contenere l'indirizzo peer.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL Il socket non `Bind`è stato associato a .

- WSAENOTCONN Il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `ReceiveFromEx` chiamare su `ShutDown` un socket dopo essere stato richiamato con *nHow* impostato su 0 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato `ReceiveFromEx` come non bloccante e l'operazione si bloccherebbe.

- WSAEMSGSIE Il datagramma era troppo grande per essere inserito nel buffer specificato ed è stato troncato.

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

Questa funzione viene utilizzata per leggere i dati in ingresso su un socket (eventualmente connesso) e acquisire l'indirizzo da cui sono stati inviati i dati.

Questa funzione è uguale a [CAsyncSocket::ReceiveFrom](#receivefrom) ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

Per i socket di tipo SOCK_STREAM, vengono restituite tutte le informazioni attualmente disponibili fino alla dimensione del buffer fornito. Se il socket è stato configurato per la ricezione in linea di dati fuori banda (opzione socket SO_OOBINLINE) e i dati fuori banda non sono letti, verranno restituiti solo i dati fuori banda. L'applicazione può `IOCtlSIOCATMARK` utilizzare `OnOutOfBandData` l'opzione o per determinare se rimangono altri dati fuori banda da leggere. I parametri *lpSockAddr* e *lpSockAddrLen* vengono ignorati per i socket di SOCK_STREAM.

Per i socket di datagramma, i dati vengono estratti dal primo datagramma accodato, fino alla dimensione del buffer fornito. Se il datagramma è più grande del buffer fornito, il buffer viene riempito con `ReceiveFromEx` la prima parte del messaggio, i dati in eccesso vengono persi e restituisce il valore di SOCKET_ERROR con il codice di errore impostato su WSAEMSGSI.

Se *lpSockAddr* è diverso da zero e il socket è di tipo SOCK_DGRAM, l'indirizzo di rete del socket che ha inviato i dati viene copiato nella struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) corrispondente. Il valore a cui punta *lpSockAddrLen* viene inizializzato in base alle dimensioni di questa struttura e viene modificato al ritorno per indicare le dimensioni effettive dell'indirizzo archiviato. Se non sono disponibili dati in `ReceiveFromEx` ingresso nel socket, la chiamata attende l'arrivo dei dati, a meno che il socket non sia bloccante. In questo caso, viene restituito un valore di SOCKET_ERROR con il codice di errore impostato su WSAEWOULDBLOCK. Il `OnReceive` callback può essere utilizzato per determinare quando arrivano più dati.

Se il socket è di tipo SOCK_STREAM e il lato `ReceiveFromEx` remoto ha arrestato la connessione normalmente, un verrà completato immediatamente con 0 byte ricevuti.

## <a name="casyncsocketsend"></a><a name="send"></a>CAsyncSocket::Invio

Chiamare questa funzione membro per inviare dati su un socket connesso.

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

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_DONTROUTE Specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB Invia dati fuori banda (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se non si `Send` verifica alcun errore, restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEACCES L'indirizzo richiesto è un indirizzo broadcast, ma non è stato impostato il flag appropriato.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT L'argomento *lpBuf* non si trova in una parte valida dello spazio degli indirizzi utente.

- WSAENETRESET La connessione deve essere reimpostata perché l'implementazione di Windows Sockets l'ha eliminata.

- WSAENOBUFS L'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN Il socket non è connesso.

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `Send` chiamare su `ShutDown` un socket dopo che è stato richiamato con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherebbe.

- WSAEMSGSIE Il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- WSAEINVAL Il socket non `Bind`è stato associato a .

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

### <a name="remarks"></a>Osservazioni

`Send`viene utilizzato per scrivere i dati in uscita su socket di flusso o datagramma connessi. Per i socket di datagramma, è necessario prestare attenzione a non superare `iMaxUdpDg` la dimensione massima del pacchetto `AfxSocketInit`IP delle subnet sottostanti, data dall'elemento nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) restituito da . Se i dati sono troppo lunghi per passare in modo atomico attraverso il protocollo `GetLastError`sottostante, viene restituito l'errore WSAEMSGSIE tramite e non viene trasmesso alcun dato.

Si noti che per un socket `Send` di datagramma il corretto completamento di un non indica che i dati sono stati recapitati correttamente.

Negli `CAsyncSocket` oggetti di tipo SOCK_STREAM, il numero di byte scritti può essere compreso tra 1 e la lunghezza richiesta, a seconda della disponibilità del buffer negli host locali e stranieri.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket::OnSend](#onsend).

## <a name="casyncsocketsendto"></a><a name="sendto"></a>CAsyncSocket::SendTo

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
Buffer contenente i dati da trasmettere.

*nBufLen*<br/>
Lunghezza dei dati in *lpBuf* in byte.

*nPortaHost*<br/>
Porta che identifica l'applicazione socket.

*indirizzo lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è connesso l'oggetto: un nome di computer come "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_DONTROUTE Specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB Invia dati fuori banda (solo SOCK_STREAM).

*lpSockAddr*<br/>
Puntatore a una struttura [SOCKADDR](/windows/win32/winsock/sockaddr-2) che contiene l'indirizzo del socket di destinazione.

*nSockAddrLen*<br/>
Lunghezza dell'indirizzo in *lpSockAddr* in byte.

### <a name="return-value"></a>Valore restituito

Se non si `SendTo` verifica alcun errore, restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEACCES L'indirizzo richiesto è un indirizzo broadcast, ma non è stato impostato il flag appropriato.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT I parametri *lpBuf* o *lpSockAddr* non fanno parte dello spazio degli indirizzi utente oppure l'argomento *lpSockAddr* è troppo piccolo (minore delle dimensioni di una struttura [SOCKADDR).](/windows/win32/winsock/sockaddr-2)

- WSAEINVAL Il nome host non è valido.

- WSAENETRESET La connessione deve essere reimpostata perché l'implementazione di Windows Sockets l'ha eliminata.

- WSAENOBUFS L'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN Il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `SendTo` chiamare su `ShutDown` un socket dopo che è stato richiamato con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherebbe.

- WSAEMSGSIE Il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL L'indirizzo specificato non è disponibile nel computer locale.

- WSAEAFNOSUPPORT Gli indirizzi nella famiglia specificata non possono essere utilizzati con questo socket.

- WSAEDESTADDRREQ È necessario un indirizzo di destinazione.

- WSAENETUNREACH La rete non è raggiungibile da questo host in questo momento.

### <a name="remarks"></a>Osservazioni

`SendTo`viene utilizzato su socket di datagramma o flusso e viene utilizzato per scrivere dati in uscita su un socket. Per i socket di datagramma, è necessario prestare attenzione a non superare `iMaxUdpDg` la dimensione massima del pacchetto IP delle subnet sottostanti, data dall'elemento nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) compilato da [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per passare in modo atomico attraverso il protocollo sottostante, viene restituito l'errore WSAEMSGSIE e non vengono trasmessi dati.

Si noti che `SendTo` il corretto completamento di un non indica che i dati sono stati recapitati correttamente.

`SendTo`viene utilizzato solo su un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal parametro *lpSockAddr.*

Per inviare una trasmissione (solo su un SOCK_DGRAM), l'indirizzo nel parametro *lpSockAddr* deve essere costruito utilizzando l'indirizzo IP speciale INADDR_BROADCAST (definito nel file di intestazione di Windows Sockets WINSOCK. H) insieme al numero di porta previsto. In alternativa, se il parametro *lpszHostAddress* è NULL, il socket è configurato per la trasmissione. È in genere sconsigliabile che un datagramma broadcast superi la dimensione in cui può verificarsi la frammentazione, il che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare i 512 byte.

Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::SendToEx](#sendtoex).

## <a name="casyncsocketsendtoex"></a><a name="sendtoex"></a>CAsyncSocket::SendToEx

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
Buffer contenente i dati da trasmettere.

*nBufLen*<br/>
Lunghezza dei dati in *lpBuf* in byte.

*nPortaHost*<br/>
Porta che identifica l'applicazione socket.

*indirizzo lpszHostAddress*<br/>
L'indirizzo di rete del socket a cui è connesso l'oggetto: un nome di computer come "ftp.microsoft.com" o un numero punteggiato, ad esempio "128.56.22.8".

*Nflags*<br/>
Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni socket e dal parametro *nFlags.* Quest'ultimo viene costruito combinando uno dei seguenti valori con l'operatore **OR** di C:

- MSG_DONTROUTE Specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets può scegliere di ignorare questo flag.

- MSG_OOB Invia dati fuori banda (solo SOCK_STREAM).

### <a name="return-value"></a>Valore restituito

Se non si `SendToEx` verifica alcun errore, restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da *nBufLen*.) In caso contrario, viene restituito un valore di SOCKET_ERROR e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEACCES L'indirizzo richiesto è un indirizzo broadcast, ma non è stato impostato il flag appropriato.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEFAULT I parametri *lpBuf* o *lpSockAddr* non fanno parte dello spazio degli indirizzi utente oppure l'argomento *lpSockAddr* è troppo piccolo (minore delle dimensioni di una struttura [SOCKADDR).](/windows/win32/winsock/sockaddr-2)

- WSAEINVAL Il nome host non è valido.

- WSAENETRESET La connessione deve essere reimpostata perché l'implementazione di Windows Sockets l'ha eliminata.

- WSAENOBUFS L'implementazione di Windows Sockets segnala un deadlock del buffer.

- WSAENOTCONN Il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK Il descrittore non è un socket.

- È stato specificato il MSG_OOB WSAEOPNOTSUPP, ma il socket non è di tipo SOCK_STREAM.

- WSAESHUTDOWN Il socket è stato arrestato; non è possibile `SendToEx` chiamare su `ShutDown` un socket dopo che è stato richiamato con *nHow* impostato su 1 o 2.

- WSAEWOULDBLOCK Il socket è contrassegnato come non bloccante e l'operazione richiesta si bloccherebbe.

- WSAEMSGSIE Il socket è di tipo SOCK_DGRAM e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.

- WSAECONNABORTED Il circuito virtuale è stato interrotto a causa di timeout o altri errori.

- WSAECONNRESET Il circuito virtuale è stato reimpostato dal lato remoto.

- WSAEADDRNOTAVAIL L'indirizzo specificato non è disponibile nel computer locale.

- WSAEAFNOSUPPORT Gli indirizzi nella famiglia specificata non possono essere utilizzati con questo socket.

- WSAEDESTADDRREQ È necessario un indirizzo di destinazione.

- WSAENETUNREACH La rete non è raggiungibile da questo host in questo momento.

### <a name="remarks"></a>Osservazioni

Questo metodo è uguale a [CAsyncSocket::SendTo](#sendto) ad eccezione del fatto che gestisce gli indirizzi IPv6 e i protocolli meno recenti.

`SendToEx`viene utilizzato su socket di datagramma o flusso e viene utilizzato per scrivere dati in uscita su un socket. Per i socket di datagramma, è necessario prestare attenzione a non superare `iMaxUdpDg` la dimensione massima del pacchetto IP delle subnet sottostanti, data dall'elemento nella struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) compilato da [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per passare in modo atomico attraverso il protocollo sottostante, viene restituito l'errore WSAEMSGSIE e non vengono trasmessi dati.

Si noti che `SendToEx` il corretto completamento di un non indica che i dati sono stati recapitati correttamente.

`SendToEx`viene utilizzato solo su un socket SOCK_DGRAM per inviare un datagramma a un socket specifico identificato dal parametro *lpSockAddr.*

Per inviare una trasmissione (solo su un SOCK_DGRAM), l'indirizzo nel parametro *lpSockAddr* deve essere costruito utilizzando l'indirizzo IP speciale INADDR_BROADCAST (definito nel file di intestazione di Windows Sockets WINSOCK. H) insieme al numero di porta previsto. In alternativa, se il parametro *lpszHostAddress* è NULL, il socket è configurato per la trasmissione. È in genere sconsigliabile che un datagramma broadcast superi la dimensione in cui può verificarsi la frammentazione, il che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare i 512 byte.

## <a name="casyncsocketsetsockopt"></a><a name="setsockopt"></a>CAsyncSocket::SetSockOptCAsyncSocket::SetSockOpt

Chiamare questa funzione membro per impostare un'opzione socket.

```
BOOL SetSockOpt(
    int nOptionName,
    const void* lpOptionValue,
    int nOptionLen,
    int nLevel = SOL_SOCKET);
```

### <a name="parameters"></a>Parametri

*nNomeOpzione*<br/>
Opzione socket per la quale deve essere impostato il valore.

*LpOptionValue (ValoreOpzione)*<br/>
Puntatore al buffer in cui viene fornito il valore per l'opzione richiesta.

*nOptionLen (opzione)*<br/>
Dimensione del buffer *lpOptionValue* in byte.

*nLivello*<br/>
Il livello in cui è definita l'opzione; gli unici livelli supportati sono SOL_SOCKET e IPPROTO_TCP.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEFAULT *lpOptionValue* non è in una parte valida dello spazio degli indirizzi del processo.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAEINVAL *nLevel* non è valido o le informazioni in *lpOptionValue* non sono valide.

- La connessione WSAENETRESET è scaduta quando è impostata SO_KEEPALIVE.

- WSAENOPROTOOPT L'opzione è sconosciuta o non supportata. In particolare, SO_BROADCAST non è supportato su socket di tipo SOCK_STREAM, mentre SO_DONTLINGER, SO_KEEPALIVE, SO_LINGER e SO_OOBINLINE non sono supportati su socket di tipo SOCK_DGRAM.

- La connessione WSAENOTCONN è stata reimpostata quando è impostata SO_KEEPALIVE.

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`SetSockOpt`imposta il valore corrente per un'opzione socket associata a un socket di qualsiasi tipo, in qualsiasi stato. Sebbene le opzioni possano esistere a più livelli di protocollo, questa specifica definisce solo le opzioni esistenti al livello "socket" più alto. Le opzioni influiscono sulle operazioni socket, ad esempio se i dati accelerati vengono ricevuti nel flusso di dati normale, se i messaggi broadcast possono essere inviati sul socket e così via.

Esistono due tipi di opzioni socket: opzioni booleane che abilitano o disabilitano una funzionalità o un comportamento e opzioni che richiedono un valore intero o una struttura. Per abilitare un'opzione booleana, *lpOptionValue* punta a un numero intero diverso da zero. Per disabilitare l'opzione *lpOptionValue* punta a un numero intero uguale a zero. *nOptionLen* deve essere `sizeof(BOOL)` uguale a per le opzioni booleane. Per altre opzioni, *lpOptionValue* punta all'intero o alla struttura che contiene il valore desiderato per l'opzione e *nOptionLen* è la lunghezza dell'intero o della struttura.

SO_LINGER controlla l'azione eseguita quando i dati `Close` non inviati vengono accodati su un socket e la funzione viene chiamata per chiudere il socket.

Per impostazione predefinita, un socket non può essere associato (vedere [Bind](#bind)) a un indirizzo locale già in uso. A volte, tuttavia, può essere auspicabile "riutilizzare" un indirizzo in questo modo. Poiché ogni connessione è identificata in modo univoco dalla combinazione di indirizzi locali e remoti, non vi è alcun problema con due socket associati allo stesso indirizzo locale, purché gli indirizzi remoti siano diversi.

Per informare l'implementazione `Bind` di Windows Sockets che una chiamata su un socket non deve essere consentita perché l'indirizzo desiderato è `Bind` già in uso da un altro socket, l'applicazione deve impostare l'opzione socket SO_REUSEADDR per il socket prima di emettere la chiamata. Si noti che l'opzione viene `Bind` interpretata solo al momento della chiamata: non è quindi necessario (ma innocuo) impostare l'opzione `Bind` su un socket che non deve essere associato a un indirizzo esistente e l'impostazione o la reimpostazione dell'opzione dopo la chiamata non ha alcun effetto su questo o qualsiasi altro socket.

Un'applicazione può richiedere che l'implementazione di Windows Sockets consenta l'utilizzo di pacchetti "keep-alive" sulle connessioni TCP (Transmission Control Protocol) attivando l'opzione socket SO_KEEPALIVE. Un'implementazione di Windows Sockets non deve supportare l'uso di keep-alives: in caso affermativo, la semantica precisa è specifica dell'implementazione, ma deve essere conforme alla sezione 4.2.3.6 di RFC 1122: "Requisiti per gli host Internet e livelli di comunicazione". Se una connessione viene interrotta come risultato di "keep-alives", il codice di errore WSAENETRESET viene restituito a tutte le chiamate in corso sul socket e tutte le chiamate successive avranno esito negativo con WSAENOTCONN.

L'opzione TCP_NODELAY disabilita l'algoritmo Nagle. L'algoritmo Nagle viene utilizzato per ridurre il numero di pacchetti di piccole dimensioni inviati da un host memorizzando nel buffer i dati di invio non riconosciuti fino a quando non è possibile inviare un pacchetto di dimensioni intere. Tuttavia, per alcune applicazioni questo algoritmo può impedire le prestazioni e TCP_NODELAY può essere utilizzato per disattivarlo. I writer di applicazioni non devono impostare TCP_NODELAY a meno che l'impatto di questa operazione non sia ben compreso e desiderato, poiché l'impostazione di TCP_NODELAY può avere un impatto negativo significativo sulle prestazioni della rete. TCP_NODELAY è l'unica opzione socket supportata che utilizza IPPROTO_TCP di livello; tutte le altre opzioni utilizzano il livello SOL_SOCKET.

Alcune implementazioni di Windows Sockets forniscono informazioni di debug dell'output se l'opzione SO_DEBUG è impostata da un'applicazione.

Le seguenti opzioni `SetSockOpt`sono supportate per . Il Type identifica il tipo di dati indirizzati da *lpOptionValue*.

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_BROADCAST|BOOL|Consentire la trasmissione di messaggi broadcast sul socket.|
|SO_DEBUG|BOOL|Registra informazioni di debug.|
|SO_DONTLINGER|BOOL|Non bloccare `Close` l'attesa dell'invio di dati non inviati. L'impostazione di questa `l_onoff` opzione equivale all'impostazione di SO_LINGER con impostato su zero.|
|SO_DONTROUTE|BOOL|Non instradare: invia direttamente all'interfaccia.|
|SO_KEEPALIVE|BOOL|Invia keep-alive.|
|SO_LINGER|`struct LINGER`|Linger `Close` su se i dati non inviati sono presenti.|
|SO_OOBINLINE|BOOL|Ricevere dati fuori banda nel normale flusso di dati.|
|SO_RCVBUF|**int**|Specificare la dimensione del buffer per le ricevute.|
|SO_REUSEADDR|BOOL|Consentire al socket di essere associato a un indirizzo già in uso. (Vedere [Bind](#bind).)|
|SO_SNDBUF|**int**|Specificare la dimensione del buffer per le mandate.|
|Tcp_nodelay|BOOL|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|

Le opzioni di Berkeley Software Distribution `SetSockOpt` (BSD) non supportate per sono:

|valore|Type|Significato|
|-----------|----------|-------------|
|SO_ACCEPTCONN|BOOL|Socket è in ascolto|
|SO_ERROR|**int**|Ottenere lo stato di errore e cancellare.|
|SO_RCVLOWAT|**int**|Ricevere bassa scoria.|
|SO_RCVTIMEO|**int**|Timeout di ricezione|
|SO_SNDLOWAT|**int**|Invia bassa la temperatura dell'acqua.|
|SO_SNDTIMEO|**int**|Timeout di invio.|
|SO_TYPE|**int**|Tipo di presa.|
|IP_OPTIONS||Impostare il campo delle opzioni nell'intestazione IP.|

## <a name="casyncsocketshutdown"></a><a name="shutdown"></a>CAsyncSocket::ShutDown

Chiamare questa funzione membro per disabilitare le mandate, le ricevute o entrambe sul socket.

```
BOOL ShutDown(int nHow = sends);
```

### <a name="parameters"></a>Parametri

*Nhow*<br/>
Flag che descrive i tipi di operazione non più consentiti, utilizzando i seguenti valori enumerati:

- **riceve il valore 0**

- **invia 1**

- **entrambi i due : 2**

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). I seguenti errori si applicano a questa funzione membro:The following errors apply to this member function:

- WSANOTINITIALISED Un [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) riuscito deve verificarsi prima di utilizzare questa API.

- WSAENETDOWN L'implementazione di Windows Sockets ha rilevato che il sottosistema di rete non è riuscito.

- WSAEINVAL *nHow* non è valido.

- WSAEINPROGRESS È in corso un'operazione di blocco di Windows Sockets.

- WSAENOTCONN Il socket non è connesso (solo SOCK_STREAM).

- WSAENOTSOCK Il descrittore non è un socket.

### <a name="remarks"></a>Osservazioni

`ShutDown`viene utilizzato su tutti i tipi di socket per disabilitare la ricezione, la trasmissione o entrambi. Se *nHow* è 0, le ricevute successive sul socket non saranno consentite. Ciò non ha alcun effetto sui livelli di protocollo inferiori.

Per il protocollo TCP (Transmission Control Protocol), la finestra TCP non viene modificata e i dati in ingresso verranno accettati (ma non riconosciuti) fino all'esaurimento della finestra. Per il protocollo UDP (User Datagram Protocol), i datagrammi in ingresso vengono accettati e accodati. In nessun caso verrà generato un pacchetto di errore ICMP. Se *nHow* è 1, gli invii successivi non sono consentiti. Per i socket TCP verrà inviata una FIN. L'impostazione di *nHow* to 2 disabilita sia l'invio che la ricezione come descritto in precedenza.

Si `ShutDown` noti che il socket non viene chiuso e le `Close` risorse collegate al socket non verranno liberate fino a quando non verrà chiamato. Un'applicazione non deve basarsi sulla possibilità di riutilizzare un socket dopo che è stato arrestato. In particolare, un'implementazione di Windows Sockets `Connect` non è necessaria per supportare l'utilizzo di su tale socket.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CAsyncSocket::OnReceive](#onreceive).

## <a name="casyncsocketsocket"></a><a name="socket"></a>CASyncSocket::Socket

Alloca un handle socket.

```
BOOL Socket(
    int nSocketType = SOCK_STREAM,
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,
    int nProtocolType = 0,
    int nAddressFormat = PF_INET);
```

### <a name="parameters"></a>Parametri

*nTipoDi corrente*<br/>
Specifica `SOCK_STREAM` o `SOCK_DGRAM`.

*Levent*<br/>
Maschera di bit che specifica una combinazione di eventi di rete a cui l'applicazione è interessata.

- `FD_READ`: desidera ricevere una notifica della disponibilità per la lettura.

- `FD_WRITE`: desidera ricevere una notifica di disponibilità per la scrittura.

- `FD_OOB`: desidera ricevere la notifica dell'arrivo dei dati fuori banda.

- `FD_ACCEPT`: desidera ricevere la notifica delle connessioni in ingresso.

- `FD_CONNECT`: desidera ricevere la notifica della connessione completata.

- `FD_CLOSE`: desidera ricevere la notifica della chiusura del socket.

*nTipoDi protocollo*<br/>
Protocollo da utilizzare con il socket specifico della famiglia di indirizzi indicata.

*nFormatoIndirizzo*<br/>
Specificare le specifiche della famiglia.

### <a name="return-value"></a>Valore restituito

Restituisce `TRUE` in caso di esito positivo, `FALSE` in caso di errore.

### <a name="remarks"></a>Osservazioni

Questo metodo alloca un handle di socket. Non chiama [CAsyncSocket::Bind](#bind) per associare il socket a un `Bind` indirizzo specificato, pertanto è necessario chiamare in un secondo momento per associare il socket a un indirizzo specificato. È possibile usare [CAsyncSocket::SetSockOpt](#setsockopt) per impostare l'opzione socket prima che venga associata.

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CSocket](../../mfc/reference/csocket-class.md)<br/>
[Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
