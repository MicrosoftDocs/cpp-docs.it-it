---
title: CAsyncSocket (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 24ef9c6e39d72e756b95472daee46b7d39503943
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAsyncSocket::Attach](#attach)|Associa un handle di socket a un `CAsyncSocket` oggetto.|  
|[CAsyncSocket::Bind](#bind)|Associa il socket di un indirizzo locale.|  
|[CAsyncSocket::Close](#close)|Chiude il socket.|  
|[CAsyncSocket:: Connect](#connect)|Stabilisce una connessione a un socket di peer.|  
|[CAsyncSocket::Create](#create)|Crea un socket.|  
|[CAsyncSocket::Detach](#detach)|Scollega un handle di socket da un `CAsyncSocket` oggetto.|  
|[CAsyncSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CAsyncSocket` oggetto, specificato un handle di socket.|  
|[CAsyncSocket::GetLastError](#getlasterror)|Ottiene lo stato di errore per l'ultima operazione non riuscita.|  
|[CAsyncSocket::GetPeerName](#getpeername)|Ottiene l'indirizzo del socket peer a cui è connesso il socket.|  
|[CAsyncSocket::GetPeerNameEx](#getpeernameex)|Ottiene l'indirizzo del socket peer a cui il socket è connessi (gestisce gli indirizzi IPv6).|  
|[CAsyncSocket::GetSockName](#getsockname)|Ottiene il nome locale per un socket.|  
|[CAsyncSocket::GetSockNameEx](#getsocknameex)|Ottiene il nome locale per un socket (handle gli indirizzi IPv6).|  
|[CAsyncSocket::GetSockOpt](#getsockopt)|Recupera un'opzione di socket.|  
|[CAsyncSocket::IOCtl](#ioctl)|Controlla la modalità del socket.|  
|[CAsyncSocket:: Listen](#listen)|Stabilisce un socket per ascoltare le richieste di connessione in ingresso.|  
|[CAsyncSocket::Receive](#receive)|Riceve dati dal socket.|  
|[CAsyncSocket::ReceiveFrom](#receivefrom)|Riceve un datagramma e archivia l'indirizzo di origine.|  
|[CAsyncSocket::ReceiveFromEx](#receivefromex)|Riceve un datagramma e archivia l'indirizzo di origine (gestisce gli indirizzi IPv6).|  
|[CAsyncSocket::Send](#send)|Invia i dati a un socket connesso.|  
|[CAsyncSocket:: SendTo](#sendto)|Invia dati a una destinazione specifica.|  
|[CAsyncSocket::SendToEx](#sendtoex)|Invia dati a una destinazione specifica (gestisce gli indirizzi IPv6).|  
|[CAsyncSocket::SetSockOpt](#setsockopt)|Imposta un'opzione di socket.|  
|[CAsyncSocket::ShutDown](#shutdown)|Disabilita **inviare** e/o **ricezione** chiama sul socket.|  
|[CASyncSocket::Socket](#socket)|Alloca un handle di socket.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::OnAccept](#onaccept)|Notifica a un socket in attesa che può accettare richieste di connessione in sospeso chiamando **Accept**.|  
|[CAsyncSocket::OnClose](#onclose)|Notifica a un socket che il socket connessi a esso è chiuso.|  
|[CAsyncSocket::OnConnect](#onconnect)|Notifica a un socket di connessione che il tentativo di connessione completato, se correttamente o errore.|  
|[CAsyncSocket::OnOutOfBandData](#onoutofbanddata)|Notifica a un socket di ricezione che sono dati fuori banda da leggere nel socket, in genere un messaggio ad alta priorità.|  
|[CAsyncSocket::OnReceive](#onreceive)|Notifica a un socket in attesa che sono dati deve essere recuperato chiamando **ricezione**.|  
|[CAsyncSocket::OnSend](#onsend)|Notifica a un socket può inviare dati chiamando **inviare**.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::operator =](#operator_eq)|Assegna un nuovo valore per un `CAsyncSocket` oggetto.|  
|[CAsyncSocket::operator SOCKET](#operator_socket)|Utilizzare questo operatore per recuperare il **SOCKET** handle del `CAsyncSocket` oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncSocket::m_hSocket](#m_hsocket)|Indica il **SOCKET** handle associato a questo `CAsyncSocket` oggetto.|  
  
## <a name="remarks"></a>Note  
 Classe `CAsyncSocket` incapsula funzioni API Windows Socket, che fornisce un'astrazione orientata agli oggetti per i programmatori che desiderano usare i socket di Windows in combinazione con MFC.  
  
 Questa classe si basa sul presupposto di aver compreso le comunicazioni di rete. Si è responsabili della gestione di blocco, le differenze di ordine dei byte, e le conversioni tra i caratteri Unicode e multibyte impostare stringhe (MBCS). Se si desidera un'interfaccia più semplice che gestisce questi problemi per l'utente, vedere la classe [CSocket](../../mfc/reference/csocket-class.md).  
  
 Per utilizzare un `CAsyncSocket` oggetto, chiamare il relativo costruttore, quindi chiamare il [crea](#create) funzione per creare l'handle di socket sottostante (tipo `SOCKET`), tranne che su un socket accettato. Per una chiamata di socket server il [ascolto](#listen) funzione membro e per una chiamata di socket client il [Connetti](#connect) funzione membro. Socket server deve chiamare il [Accept](#accept) funzione dopo aver ricevuto una richiesta di connessione. Utilizzare il rimanente `CAsyncSocket` funzioni per le comunicazioni tra i socket. Al termine, eliminare definitivamente il `CAsyncSocket` oggetto se è stato creato nell'heap; il distruttore chiama automaticamente il [Chiudi](#close) (funzione). Il `SOCKET` tipo di dati è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
> [!NOTE]
>  Quando si utilizza sockets MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo della classe CAsyncSocket](../../mfc/windows-sockets-using-class-casyncsocket.md) e correlati., così come [API di Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CAsyncSocket`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxSock  
  
##  <a name="accept"></a>CAsyncSocket:: Accept  
 Chiamare questa funzione membro per accettare una connessione su un socket.  
  
```  
virtual BOOL Accept(
    CAsyncSocket& rConnectedSocket,  
    SOCKADDR* lpSockAddr = NULL,  
    int* lpSockAddrLen = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `rConnectedSocket`  
 Un riferimento di identificazione di un nuovo socket che è disponibile per la connessione.  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve l'indirizzo di connessione del socket, come nota nella rete. Il formato esatto del `lpSockAddr` viene determinato l'argomento per la famiglia di indirizzi stabilita quando il socket è stato creato. Se `lpSockAddr` e/o `lpSockAddrLen` sono uguali a **NULL**, quindi viene restituita alcuna informazione sull'indirizzo remoto del socket accettato.  
  
 `lpSockAddrLen`  
 Un puntatore alla lunghezza dell'indirizzo in `lpSockAddr` in byte. Il `lpSockAddrLen` è un risultato del valore di parametro: inizialmente deve contenere la quantità di spazio a cui puntata `lpSockAddr`; restituito conterrà la lunghezza effettiva (in byte) dell'indirizzo restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento è troppo piccolo (minore della dimensione di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).  
  
- **WSAEINPROGRESS** una chiamata di blocco Windows Sockets è in corso.  
  
- **WSAEINVAL** `Listen` non è stato richiamato prima dell'accettazione.  
  
- **WSAEMFILE** la coda è vuota dopo l'inserimento di accettare e Nessun descrittore sono disponibili.  
  
- `WSAENOBUFS`Spazio di buffer non è disponibile.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP** il socket di cui viene fatto riferimento non è un tipo che supporta orientati alla connessione del servizio.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e non vi sono connessioni presente di essere accettati.  
  
### <a name="remarks"></a>Note  
 Questa routine estrae la prima connessione nella coda di connessioni in sospeso, crea un nuovo socket con le stesse proprietà di questo socket e lo collega a `rConnectedSocket`. Se nessuna connessione in sospeso sono presente nella coda, **Accept** restituisce zero e `GetLastError` restituisce un errore. Il socket accettato ( *rConnectedSocket)* non possono essere utilizzati per accettare più connessioni. Il socket originale rimane aperta e in ascolto.  
  
 L'argomento `lpSockAddr` è un parametro di risultato che viene compilato con l'indirizzo del socket di connessione, come è noto al livello di comunicazione. **Accettare** viene utilizzato con tipi di socket orientati alla connessione, ad esempio **SOCK_STREAM**.  
  
##  <a name="asyncselect"></a>CAsyncSocket::AsyncSelect  
 Chiamare questa funzione membro per richiedere la notifica di evento per un socket.  
  
```  
BOOL AsyncSelect(long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```  
  
### <a name="parameters"></a>Parametri  
 `lEvent`  
 Maschera di bit che specifica una combinazione di eventi di rete in cui l'applicazione è interessata.  
  
- **FD_READ** desidera ricevere una notifica di conformità per la lettura.  
  
- **FD_WRITE** desidera ricevere una notifica quando i dati sono disponibili per essere letti.  
  
- **FD_OOB** per ricevere notifica dell'arrivo di dati fuori banda.  
  
- **FD_ACCEPT** desidera ricevere una notifica di connessioni in ingresso.  
  
- **FD_CONNECT** desidera ricevere una notifica di risultati di connessione.  
  
- **FD_CLOSE** desidera ricevere una notifica quando un socket è stato chiuso da un peer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEINVAL** indica che uno dei parametri specificati non è valido.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per specificare le funzioni di notifica di callback MFC verranno chiamate per il socket. `AsyncSelect`imposta automaticamente questo socket in modalità non di blocco. Per ulteriori informazioni, vedere l'articolo [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
##  <a name="attach"></a>CAsyncSocket::Attach  
 Chiamare questa funzione membro per collegare il `hSocket` handle per un `CAsyncSocket` oggetto.  
  
```  
BOOL Attach(
    SOCKET hSocket, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle a un socket.  
  
 `lEvent`  
 Maschera di bit che specifica una combinazione di eventi di rete in cui l'applicazione è interessata.  
  
- **FD_READ** desidera ricevere una notifica di conformità per la lettura.  
  
- **FD_WRITE** desidera ricevere una notifica quando i dati sono disponibili per essere letti.  
  
- **FD_OOB** per ricevere notifica dell'arrivo di dati fuori banda.  
  
- **FD_ACCEPT** desidera ricevere una notifica di connessioni in ingresso.  
  
- **FD_CONNECT** desidera ricevere una notifica di risultati di connessione.  
  
- **FD_CLOSE** desidera ricevere una notifica quando un socket è stato chiuso da un peer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 Il **SOCKET** handle viene archiviato l'oggetto [m_hSocket](#m_hsocket) (membro dati).  
  
##  <a name="bind"></a>CAsyncSocket::Bind  
 Chiamare questa funzione membro per associare un indirizzo locale del socket.  
  
```  
BOOL Bind(
    UINT nSocketPort,  
    LPCTSTR lpszSocketAddress = NULL);

 
BOOL Bind (
    const SOCKADDR* lpSockAddr,  
    int nSockAddrLen);
```  
  
### <a name="parameters"></a>Parametri  
 `nSocketPort`  
 La porta che identifica l'applicazione di socket.  
  
 `lpszSocketAddress`  
 L'indirizzo di rete, un numero con punti, ad esempio "128.56.22.8". Il passaggio di **NULL** stringa per questo parametro indica il **CAsyncSocket** istanza deve attendere l'attività del client su tutte le interfacce di rete.  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo da assegnare a questo socket.  
  
 `nSockAddrLen`  
 La lunghezza dell'indirizzo in `lpSockAddr` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEADDRINUSE** l'indirizzo specificato è già in uso. (Vedere il **SO_REUSEADDR** per l'opzione di socket [SetSockOpt](#setsockopt).)  
  
- **WSAEFAULT** il `nSockAddrLen` argomento è troppo piccolo (minore della dimensione di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).  
  
- **WSAEINPROGRESS** una chiamata di blocco Windows Sockets è in corso.  
  
- **WSAEAFNOSUPPORT** la famiglia di indirizzi specificato non è supportata da questa porta.  
  
- **WSAEINVAL** il socket è già associato a un indirizzo.  
  
- `WSAENOBUFS`Non è sufficiente buffer disponibili, numero eccessivo di connessioni.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 Questa routine viene utilizzata in un datagramma non è connesso o di un socket di flusso, prima che le successive **Connetti** o `Listen` chiamate. Prima che può accettare richieste di connessione, un socket in attesa di server è necessario selezionare un numero di porta e renderlo noti di Windows Sockets chiamando **associare**. **Associare** stabilisce l'associazione locale (numero di porta e indirizzo host) del socket assegnando un nome locale a un socket senza nome.  
  
##  <a name="casyncsocket"></a>CAsyncSocket::CAsyncSocket  
 Costruisce un oggetto socket vuoto.  
  
```  
CAsyncSocket();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, è necessario chiamare il relativo **crea** funzione membro per creare il **SOCKET** struttura di dati e associare il relativo indirizzo. (Sul lato di una comunicazione Windows Sockets, quando il socket di ascolto crea un socket da utilizzare nel server di **Accept** chiamata, non è necessario chiamare **crea** per socket.)  
  
##  <a name="close"></a>CAsyncSocket::Close  
 Chiude il socket.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione rilascia il descrittore di socket in modo che ulteriormente i riferimenti a esso avrà esito negativo con l'errore **WSAENOTSOCK**. Se questo è l'ultimo riferimento al socket sottostante, vengono eliminati le informazioni di denominazione associate e dati in coda. Chiamate del distruttore dell'oggetto socket **Chiudi** automaticamente.  
  
 Per `CAsyncSocket`, ma non per `CSocket`, la semantica di **Chiudi** sono interessati dalle opzioni di socket **SO_LINGER** e **SO_DONTLINGER**. Per ulteriori informazioni, vedere la funzione membro `GetSockOpt`.  
  
##  <a name="connect"></a>CAsyncSocket:: Connect  
 Chiamare questa funzione membro per stabilire una connessione a un flusso non è connesso o di un socket di datagramma.  
  
```  
BOOL Connect(
    LPCTSTR lpszHostAddress,  
    UINT nHostPort);

 
BOOL Connect(
    const SOCKADDR* lpSockAddr,  
    int nSockAddrLen);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszHostAddress`  
 L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com" o un numero con punti, ad esempio "128.56.22.8".  
  
 `nHostPort`  
 La porta che identifica l'applicazione di socket.  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo del socket connesso.  
  
 `nSockAddrLen`  
 La lunghezza dell'indirizzo in `lpSockAddr` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se è presente un codice di errore **WSAEWOULDBLOCK**e l'applicazione utilizza i callback sottoponibile a override, l'applicazione riceverà un `OnConnect` messaggio al termine dell'operazione di connessione. Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEADDRINUSE** l'indirizzo specificato è già in uso.  
  
- **WSAEINPROGRESS** una chiamata di blocco Windows Sockets è in corso.  
  
- **WSAEADDRNOTAVAIL** l'indirizzo specificato non è disponibile nel computer locale.  
  
- **WSAEAFNOSUPPORT** indirizzi della famiglia specificata non possono essere utilizzati con questo socket.  
  
- **WSAECONNREFUSED** il tentativo di connessione è stato rifiutato.  
  
- **WSAEDESTADDRREQ** è richiesto un indirizzo di destinazione.  
  
- **WSAEFAULT** il `nSockAddrLen` argomento non è corretto.  
  
- **WSAEINVAL** indirizzo host non valido.  
  
- **WSAEISCONN** il socket è già connesso.  
  
- **WSAEMFILE** altri descrittori di file non sono disponibili.  
  
- **WSAENETUNREACH** la rete non raggiungibile dall'host in questo momento.  
  
- `WSAENOBUFS`Spazio di buffer non è disponibile. Impossibile connettere il socket.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAETIMEDOUT** tentativo di connessione timeout senza stabilire una connessione.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e la connessione non può essere completata immediatamente.  
  
### <a name="remarks"></a>Note  
 Se il socket non è associato, valori univoci vengono assegnati all'associazione del locale dal sistema e il socket è contrassegnato come associato. Si noti che se il campo indirizzo della struttura di nome è tutti zero, **Connetti** restituirà zero. Per ottenere informazioni dettagliate sull'errore, chiamare il `GetLastError` funzione membro.  
  
 Per i socket di flusso (tipo **SOCK_STREAM**), viene avviata una connessione attiva per l'host esterna. Quando la chiamata di socket viene completato, il socket è pronto per inviare e ricevere dati.  
  
 Per un socket di datagramma (tipo **SOCK_DGRAM**), una destinazione predefinita è impostata, che saranno utilizzati sui successivi **inviare** e **ricezione** chiamate.  
  
##  <a name="create"></a>CAsyncSocket::Create  
 Chiamare il **crea** funzione membro dopo la creazione di un oggetto socket per creare il socket di Windows e collegarlo.  
  
```  
BOOL Create(
    UINT nSocketPort = 0,  
    int nSocketType = SOCK_STREAM,  
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,  
    LPCTSTR lpszSocketAddress = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nSocketPort`  
 Una porta ben nota da utilizzare con i socket oppure 0 se si desidera che Windows Sockets per selezionare una porta.  
  
 `nSocketType`  
 **SOCK_STREAM** o **SOCK_DGRAM**.  
  
 `lEvent`  
 Maschera di bit che specifica una combinazione di eventi di rete in cui l'applicazione è interessata.  
  
- **FD_READ** desidera ricevere una notifica di conformità per la lettura.  
  
- **FD_WRITE** desidera ricevere una notifica di conformità per la scrittura.  
  
- **FD_OOB** per ricevere notifica dell'arrivo di dati fuori banda.  
  
- **FD_ACCEPT** desidera ricevere una notifica di connessioni in ingresso.  
  
- **FD_CONNECT** desidera ricevere una notifica di connessione completata.  
  
- **FD_CLOSE** desidera ricevere una notifica di chiusura del socket.  
  
 *lpszSockAddress*  
 Un puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero con punti, ad esempio "128.56.22.8". Il passaggio di **NULL** stringa per questo parametro indica il **CAsyncSocket** istanza deve attendere l'attività del client su tutte le interfacce di rete.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEAFNOSUPPORT** la famiglia di indirizzi specificato non è supportata.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEMFILE** altri descrittori di file non sono disponibili.  
  
- `WSAENOBUFS`Spazio di buffer non è disponibile. Impossibile creare il socket.  
  
- **WSAEPROTONOSUPPORT** la porta specificata non è supportata.  
  
- **WSAEPROTOTYPE** la porta specificata è di tipo errato per questo socket.  
  
- **WSAESOCKTNOSUPPORT** il tipo di socket specificato non è supportato in questa famiglia di indirizzi.  
  
### <a name="remarks"></a>Note  
 **Creare** chiamate [Socket](#socket) e se ha esito positivo, chiama il metodo [associare](#bind) per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:  
  
- **SOCK_STREAM** fornisce sequenziata, flussi di byte affidabili, full duplex, basato sulla connessione. Utilizza il protocollo TCP (Transmission Control) per la famiglia di indirizzi Internet.  
  
- **SOCK_DGRAM** supporta i datagrammi sono inaffidabili pacchetti senza connessione di una lunghezza massima (in genere piccola) predefinito. Utilizza il protocollo UDP (User Datagram) per la famiglia di indirizzi Internet.  
  
    > [!NOTE]
    >  Il **Accept** funzione membro accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare **Accept**. Tenere presente che se questo oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare **crea** per questo nuovo oggetto socket.  
  
> [!IMPORTANT]
> **Creare** è **non** thread-safe.  Se si sta chiamando in un ambiente a thread multipli in cui si potrebbe essere richiamato contemporaneamente da thread diversi, assicurarsi di proteggere ogni chiamata con un mutex o un altro blocco di sincronizzazione.  
  
 Per ulteriori informazioni sui socket di datagramma e di flusso, vedere gli articoli [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md) e [Windows Sockets: porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md) e [API Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
##  <a name="detach"></a>CAsyncSocket::Detach  
 Chiamare questa funzione membro per scollegare il **SOCKET** gestire il `m_hSocket` membro dati dal `CAsyncSocket` e impostare `m_hSocket` per **NULL**.  
  
```  
SOCKET Detach();
```  
  
##  <a name="fromhandle"></a>CAsyncSocket::FromHandle  
 Restituisce un puntatore a un `CAsyncSocket` oggetto.  
  
```  
static CAsyncSocket* PASCAL FromHandle(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle a un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CAsyncSocket` oggetto, o **NULL** se è presente alcun `CAsyncSocket` oggetto associato a `hSocket`.  
  
### <a name="remarks"></a>Note  
 Quando viene specificato un **SOCKET** se gestire un `CAsyncSocket` all'handle di oggetto non è connesso, la funzione membro restituisce **NULL**.  
  
##  <a name="getlasterror"></a>CAsyncSocket::GetLastError  
 Chiamare questa funzione membro per ottenere lo stato di errore per l'ultima operazione non riuscita.  
  
```  
static int PASCAL GetLastError();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito indica il codice di errore per la routine di Windows Sockets API ultimo eseguita da questo thread.  
  
### <a name="remarks"></a>Note  
 Quando una funzione membro specifica indica che si è verificato un errore, `GetLastError` deve essere chiamato per recuperare il codice di errore appropriato. Vedere le descrizioni di funzione dei singoli membri per un elenco dei codici di errore applicabile.  
  
 Per ulteriori informazioni sui codici di errore, vedere [API di Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
##  <a name="getpeername"></a>CAsyncSocket::GetPeerName  
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
 `rPeerAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rPeerPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
 `lpSockAddr`  
 Un puntatore al [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve il nome del socket peer.  
  
 `lpSockAddrLen`  
 Un puntatore alla lunghezza dell'indirizzo in `lpSockAddr` in byte. In fase di restituzione, il `lpSockAddrLen` argomento contiene le dimensioni effettive di `lpSockAddr` restituito in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non è sufficientemente grande.  
  
- **WSAEINPROGRESS** una chiamata di blocco Windows Sockets è in corso.  
  
- **WSAENOTCONN** il socket non connesso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetPeerNameEx](#getpeernameex).  
  
##  <a name="getpeernameex"></a>CAsyncSocket::GetPeerNameEx  
 Chiamare questa funzione membro per ottenere l'indirizzo del socket peer a cui questo socket è connessi (gestisce gli indirizzi IPv6).  
  
```  
BOOL GetPeerNameEx(
    CString& rPeerAddress,  
    UINT& rPeerPort);
```  
  
### <a name="parameters"></a>Parametri  
 `rPeerAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rPeerPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non è sufficientemente grande.  
  
- **WSAEINPROGRESS** una chiamata di blocco Windows Sockets è in corso.  
  
- **WSAENOTCONN** il socket non connesso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 Questa funzione è analoga [CAsyncSocket::GetPeerName](#getpeername) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.  
  
##  <a name="getsockname"></a>CAsyncSocket::GetSockName  
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
 `rSocketAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rSocketPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che riceve l'indirizzo del socket.  
  
 `lpSockAddrLen`  
 Un puntatore alla lunghezza dell'indirizzo in `lpSockAddr` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non è sufficientemente grande.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEINVAL** il socket non è stato associato a un indirizzo con **associare**.  
  
### <a name="remarks"></a>Note  
 Questa chiamata è particolarmente utile quando un **Connetti** è stata effettuata chiamata senza tale un **associare** ; questa chiamata fornisce i mezzi per soli mediante il quale è possibile determinare l'associazione locale che è stata impostata per il System.  
  
 Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::GetSockNameEx](#getsocknameex)  
  
##  <a name="getsocknameex"></a>CAsyncSocket::GetSockNameEx  
 Chiamare questa funzione membro per ottenere il nome locale per un socket (handle gli indirizzi IPv6).  
  
```  
BOOL GetSockNameEx(
    CString& rSocketAddress,  
    UINT& rSocketPort);
```  
  
### <a name="parameters"></a>Parametri  
 `rSocketAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rSocketPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non è sufficientemente grande.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEINVAL** il socket non è stato associato a un indirizzo con **associare**.  
  
### <a name="remarks"></a>Note  
 Questa chiamata è identico [CAsyncSocket::GetSockName](#getsockname) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.  
  
 Questa chiamata è particolarmente utile quando un **Connetti** è stata effettuata chiamata senza tale un **associare** ; questa chiamata fornisce i mezzi per soli mediante il quale è possibile determinare l'associazione locale che è stata impostata per il System.  
  
##  <a name="getsockopt"></a>CAsyncSocket::GetSockOpt  
 Chiamare questa funzione membro per recuperare un'opzione di socket.  
  
```  
BOOL GetSockOpt(
    int nOptionName,  
    void* lpOptionValue,  
    int* lpOptionLen,  
    int nLevel = SOL_SOCKET);
```  
  
### <a name="parameters"></a>Parametri  
 `nOptionName`  
 L'opzione di socket per il quale è necessario recuperare il valore.  
  
 `lpOptionValue`  
 Un puntatore al buffer in cui viene restituito il valore per l'opzione richiesta. Viene restituito il valore associato all'opzione selezionata nel buffer `lpOptionValue`. Il valore integer a cui puntava `lpOptionLen` originariamente deve contenere le dimensioni del buffer in byte; e nell'output restituito verrà impostato per la dimensione del valore restituito. Per **SO_LINGER**, questa sarà la dimensione di un `LINGER` struttura; per tutte le altre opzioni saranno le dimensioni di un **BOOL** o un `int`, a seconda dell'opzione. Visualizzare l'elenco di opzioni e le relative dimensioni nella sezione Osservazioni.  
  
 `lpOptionLen`  
 Un puntatore alla dimensione del `lpOptionValue` buffer in byte.  
  
 `nLevel`  
 Il livello in cui l'opzione è definita; gli unici livelli supportati sono **SOL_SOCKET** e **IPPROTO_TCP**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Se non è stata impostata un'opzione con `SetSockOpt`, quindi `GetSockOpt` restituisce il valore predefinito per l'opzione. Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpOptionLen` argomento non valido.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOPROTOOPT** l'opzione è sconosciuto o non supportato. In particolare, **SO_BROADCAST** non è supportata sui socket di tipo **SOCK_STREAM**, mentre **SO_ACCEPTCONN**, **SO_DONTLINGER**,  **SO_KEEPALIVE**, **SO_LINGER**, e **SO_OOBINLINE** non sono supportate sui socket di tipo **SOCK_DGRAM**.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 `GetSockOpt`Recupera il valore corrente per un'opzione di socket associata a un socket di qualsiasi tipo, in qualsiasi stato e archivia il risultato in `lpOptionValue`. Opzioni di influire sulle operazioni di socket, ad esempio il routing dei pacchetti, il trasferimento dei dati fuori banda e così via.  
  
 Le opzioni seguenti sono supportate per `GetSockOpt`. Il tipo identifica il tipo di dati indirizzati dalla `lpOptionValue`. Il **TCP_NODELAY** opzione Usa livello **IPPROTO_TCP**; tutte le altre opzioni utilizzano livello **SOL_SOCKET**.  
  
|Valore|Tipo|Significato|  
|-----------|----------|-------------|  
|**SO_ACCEPTCONN**|**BOOL**|Socket è in ascolto.|  
|**SO_BROADCAST**|**BOOL**|Socket è configurato per la trasmissione di messaggi trasmessi.|  
|**SO_DEBUG**|**BOOL**|Il debug è abilitato.|  
|**SO_DONTLINGER**|**BOOL**|Se true, il **SO_LINGER** opzione è disabilitata.|  
|**SO_DONTROUTE**|**BOOL**|Il routing è disabilitato.|  
|**SO_ERROR**|`int`|Recuperare lo stato di errore e cancellare.|  
|**SO_KEEPALIVE**|**BOOL**|Keep-Alive inviati.|  
|**SO_LINGER**|**struttura LINGER**|Restituisce le opzioni di ritardo corrente.|  
|**SO_OOBINLINE**|**BOOL**|Vengono ricevuti i dati fuori banda nel flusso di dati normali.|  
|**SO_RCVBUF**|`int`|Dimensione del buffer per riceve.|  
|**SO_REUSEADDR**|**BOOL**|Il socket può essere associato a un indirizzo a cui è già in uso.|  
|**SO_SNDBUF**|`int`|Invia dimensioni del buffer.|  
|**SO_TYPE**|`int`|Il tipo di socket (ad esempio, **SOCK_STREAM**).|  
|**TCP_NODELAY**|**BOOL**|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|  
  
 Non è supportate per le opzioni di Berkeley Software Distribution (BSD) `GetSockOpt` sono:  
  
|Valore|Tipo|Significato|  
|-----------|----------|-------------|  
|**SO_RCVLOWAT**|`int`|Limite inferiore di ricezione.|  
|**SO_RCVTIMEO**|`int`|Timeout di ricezione.|  
|**SO_SNDLOWAT**|`int`|Limite inferiore di trasmissione.|  
|**SO_SNDTIMEO**|`int`|Timeout di invio.|  
|**IP_OPTIONS**||Ottenere le opzioni nell'intestazione IP.|  
|**TCP_MAXSEG**|`int`|Ottenere le dimensioni massime segmento TCP.|  
  
 La chiamata `GetSockOpt` con un'opzione non supportata comporterà un codice di errore **WSAENOPROTOOPT** viene restituito da `GetLastError`.  
  
##  <a name="ioctl"></a>CAsyncSocket::IOCtl  
 Chiamare questa funzione membro per controllare la modalità di un socket.  
  
```  
BOOL IOCtl(
    long lCommand,  
    DWORD* lpArgument);
```  
  
### <a name="parameters"></a>Parametri  
 `lCommand`  
 Il comando da eseguire sul socket.  
  
 `lpArgument`  
 Un puntatore a un parametro per `lCommand`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEINVAL** `lCommand` non è un comando valido o `lpArgument` non è un parametro valido per `lCommand`, o il comando non è applicabile al tipo di socket fornito.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 Questa routine è utilizzabile in qualsiasi socket in qualsiasi stato. Consente di ottenere o recuperare i parametri operativi associati al socket, indipendentemente dal sottosistema di protocollo e le comunicazioni. Sono supportati i seguenti comandi:  
  
- **FIONBIO** abilitare o disabilitare la modalità non di blocco sul socket. Il `lpArgument` parametro punta a un `DWORD`, che è diverso da zero se è necessario abilitare la modalità non di blocco e zero se è disabilitato. Se `AsyncSelect` è stata eseguita su un socket, quindi qualsiasi tentativo di usare **IOCtl** per impostare il socket torna alla modalità di blocco avrà esito negativo con **WSAEINVAL**. Per impostare il socket torna alla modalità di blocco e impedire il **WSAEINVAL** errore, un'applicazione necessario prima disattivare `AsyncSelect` chiamando `AsyncSelect` con il `lEvent` parametro uguale a 0, quindi chiamare **IOCtl** .  
  
- **FIONREAD** determinare il numero massimo di byte che possono essere letti con uno **ricezione** chiamare da questo socket. Il `lpArgument` parametro punta a un `DWORD` in cui **IOCtl** archivia il risultato. Se questo socket è di tipo **SOCK_STREAM**, **FIONREAD** restituisce la quantità totale di dati che possono essere letti in una singola **ricezione**; corrisponde in genere la quantità totale di dati accodati nel socket. Se questo socket è di tipo **SOCK_DGRAM**, **FIONREAD** restituisce le dimensioni del primo datagramma in coda sul socket.  
  
- **SIOCATMARK** determinare se è stato letto tutti i dati fuori banda. Si applica solo a un socket di tipo **SOCK_STREAM** che è stato configurato per la ricezione di tutti i dati fuori banda in linea ( **SO_OOBINLINE**). Se nessun dato out of band è in attesa di essere letti, l'operazione restituisce diverso da zero. In caso contrario restituirà 0 e la successiva **ricezione** o `ReceiveFrom` eseguite su socket permette di recuperare alcuni o tutti i dati che precede il segno""; l'applicazione deve utilizzare il **SIOCATMARK** operazione determinare se rimangono dei dati. Se sono presenti dati normale che precede i dati (out-of-band) di "urgenza", in cui verrà ricevuta nell'ordine. (Si noti che un **ricezione** o `ReceiveFrom` non verrà mai combinare dati normali e fuori banda nella stessa chiamata.) Il `lpArgument` parametro punta a un `DWORD` in cui **IOCtl** archivia il risultato.  
  
 Questa funzione è un subset di **ioctl()** utilizzata al socket Berkeley. In particolare, non è presente alcun comando che equivale a **FIOASYNC**, mentre **SIOCATMARK** è il comando solo a livello di socket che è supportato.  
  
##  <a name="listen"></a>CAsyncSocket:: Listen  
 Chiamare questa funzione membro per l'ascolto delle richieste di connessione in ingresso.  
  
```  
BOOL Listen(int nConnectionBacklog = 5);
```  
  
### <a name="parameters"></a>Parametri  
 *nConnectionBacklog*  
 La lunghezza massima che può raggiungere la coda di connessioni in sospeso. Intervallo valido è compreso tra 1 e 5.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEADDRINUSE** è stato effettuato un tentativo per l'ascolto su un indirizzo in uso.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEINVAL** il socket non è stato associato al **associare** o è già connesso.  
  
- **WSAEISCONN** il socket è già connesso.  
  
- **WSAEMFILE** altri descrittori di file non sono disponibili.  
  
- `WSAENOBUFS`Spazio di buffer non è disponibile.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP** il socket di cui viene fatto riferimento non è un tipo che supporta il `Listen` operazione.  
  
### <a name="remarks"></a>Note  
 Per accettare connessioni, il socket viene innanzitutto creato con **crea**, viene specificato un backlog per le connessioni in ingresso con `Listen`, e quindi le connessioni vengono accettate senza **Accept**. `Listen`si applica solo per i socket che supportano le connessioni, vale a dire quelli di tipo **SOCK_STREAM**. Questo socket è attivato la modalità "passivo" in cui le connessioni in ingresso vengono riconosciute e in coda in attesa di accettazione da parte del processo.  
  
 Questa funzione viene in genere utilizzata dal server (o qualsiasi applicazione che si desidera accettare le connessioni) che può avere più di una richiesta di connessione alla volta: se arriva una richiesta di connessione con la coda è completa, il client riceverà un errore con l'indicazione di  **WSAECONNREFUSED**.  
  
 `Listen`tenta di continuare a funzionare razionale quando nessuna porta disponibile (descrittori). Fino a quando non viene svuotata la coda accetterà le connessioni. Se le porte diventano disponibili, una chiamata successiva a `Listen` o **Accept** verranno ricaricare la coda al corrente o più recente "backlog,", se possibile e ripresi in attesa di connessioni in ingresso.  
  
##  <a name="m_hsocket"></a>CAsyncSocket::m_hSocket  
 Contiene il **SOCKET** handle per il socket incapsulato da questo `CAsyncSocket` oggetto.  
  
```  
SOCKET m_hSocket;  
```  
  
##  <a name="onaccept"></a>CAsyncSocket::OnAccept  
 Chiamato dal framework per notificare a un socket in attesa che può accettare richieste di connessione in sospeso chiamando il [Accept](#accept) funzione membro.  
  
```  
virtual void OnAccept(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguente si applica al `OnAccept` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
##  <a name="onclose"></a>CAsyncSocket::OnClose  
 Chiamato dal framework per notificare questo socket che socket connesso venga chiusa dal processo.  
  
```  
virtual void OnClose(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguenti riguardano la `OnClose` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAECONNRESET** la connessione è stata reimpostata dal lato remoto.  
  
- **WSAECONNABORTED** la connessione è stata interrotta a causa di timeout o altri errori.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
##  <a name="onconnect"></a>CAsyncSocket::OnConnect  
 Chiamato dal framework per notificare questo socket che il tentativo di connessione viene completato correttamente o in errore.  
  
```  
virtual void OnConnect(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguenti riguardano la `OnConnect` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAEADDRINUSE** l'indirizzo specificato è già in uso.  
  
- **WSAEADDRNOTAVAIL** l'indirizzo specificato non è disponibile nel computer locale.  
  
- **WSAEAFNOSUPPORT** indirizzi della famiglia specificata non possono essere utilizzati con questo socket.  
  
- **WSAECONNREFUSED** il tentativo di connessione è stato rifiutato in modo forzato.  
  
- **WSAEDESTADDRREQ** è richiesto un indirizzo di destinazione.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non è corretto.  
  
- **WSAEINVAL** il socket è già associato a un indirizzo.  
  
- **WSAEISCONN** il socket è già connesso.  
  
- **WSAEMFILE** altri descrittori di file non sono disponibili.  
  
- **WSAENETUNREACH** la rete non raggiungibile dall'host in questo momento.  
  
- `WSAENOBUFS`Spazio di buffer non è disponibile. Impossibile connettere il socket.  
  
- **WSAENOTCONN** il socket non connesso.  
  
- **WSAENOTSOCK** il descrittore è un file, non un socket.  
  
- **WSAETIMEDOUT** timeout durante il tentativo di connessione senza stabilire una connessione.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  In [CSocket](../../mfc/reference/csocket-class.md), `OnConnect` funzione di notifica non viene mai chiamato. Per le connessioni, è sufficiente chiamare **Connetti**, che restituisce quando la connessione è stata completata (correttamente o errore). Gestione delle notifiche di connessione è un dettaglio di implementazione di MFC.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAsyncSocket#1](../../mfc/reference/codesnippet/cpp/casyncsocket-class_1.cpp)]  
  
##  <a name="onoutofbanddata"></a>CAsyncSocket::OnOutOfBandData  
 Chiamato dal framework per notificare il socket di ricezione il socket di invio con dati fuori banda da inviare.  
  
```  
virtual void OnOutOfBandData(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguenti riguardano la `OnOutOfBandData` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
### <a name="remarks"></a>Note  
 Dati fuori banda sono un canale logicamente indipendente che è associato a ogni coppia di socket connessi di tipo **SOCK_STREAM**. Il canale è in genere utilizzato per inviare dati ad alta priorità.  
  
 MFC supporta i dati fuori banda, ma gli utenti della classe `CAsyncSocket` sconsiglia di utilizzarlo. Il modo più semplice consiste nel creare un secondo socket per il passaggio di tali dati. Per ulteriori informazioni sui dati fuori banda, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
##  <a name="onreceive"></a>CAsyncSocket::OnReceive  
 Chiamato dal framework per notificare questo socket che sono dati nel buffer che può essere recuperato chiamando il **ricezione** funzione membro.  
  
```  
virtual void OnReceive(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguenti riguardano la `OnReceive` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAsyncSocket#2](../../mfc/reference/codesnippet/cpp/casyncsocket-class_2.cpp)]  
  
##  <a name="onsend"></a>CAsyncSocket::OnSend  
 Chiamato dal framework per notificare il socket che può inviare i dati chiamando il **inviare** funzione membro.  
  
```  
virtual void OnSend(int nErrorCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrorCode`  
 L'errore più recente in un socket. I codici di errore seguenti riguardano la `OnSend` funzione membro:  
  
- **0** la funzione è stata eseguita correttamente.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: notifiche Socket](../../mfc/windows-sockets-socket-notifications.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAsyncSocket#3](../../mfc/reference/codesnippet/cpp/casyncsocket-class_3.cpp)]  
  
##  <a name="operator_eq"></a>CAsyncSocket::operator =  
 Assegna un nuovo valore per un `CAsyncSocket` oggetto.  
  
```  
void operator=(const CAsyncSocket& rSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `rSrc`  
 Un riferimento a un oggetto esistente `CAsyncSocket` oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per copiare un oggetto esistente `CAsyncSocket` oggetto a un altro `CAsyncSocket` oggetto.  
  
##  <a name="operator_socket"></a>CAsyncSocket::operator SOCKET  
 Utilizzare questo operatore per recuperare il **SOCKET** handle del `CAsyncSocket` oggetto.  
  
```  
operator SOCKET() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle del **SOCKET** oggetto; in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="receive"></a>CAsyncSocket::Receive  
 Chiamare questa funzione membro per ricevere i dati da un socket.  
  
```  
virtual int Receive(
    void* lpBuf,  
    int nBufLen,  
    int nFlags = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuf`  
 Un buffer per i dati in ingresso.  
  
 `nBufLen`  
 La lunghezza di `lpBuf` in byte.  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_PEEK** leggere i dati in arrivo. I dati viene copiati nel buffer, ma non viene rimosso dalla coda di input.  
  
- **MSG_OOB** elaborare dati fuori banda.  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, **ricezione** restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAENOTCONN** il socket non connesso.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare **ricezione** su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 0 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e **ricezione** l'operazione verrà bloccata.  
  
- **WSAEMSGSIZE** il datagramma è troppo grande per il buffer specificato ed è stato troncato.  
  
- **WSAEINVAL** il socket non è stato associato al **associare**.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per i socket di datagramma o di flusso connessi e viene utilizzata per leggere i dati in arrivo.  
  
 Per i socket di tipo **SOCK_STREAM**, come viene restituito quantità di informazioni è attualmente disponibile fino alle dimensioni del buffer fornito. Se il socket è stato configurato per la ricezione di dati fuori banda in linea (opzione del socket **SO_OOBINLINE**) e dati fuori banda non sono stato letti, verranno restituiti i dati solo fuori banda. L'applicazione può utilizzare il **IOCtlSIOCATMARK** opzione o [OnOutOfBandData](#onoutofbanddata) per determinare se i dati più out of band rimangono da leggere.  
  
 Per i socket di datagramma, i dati vengono estratti dal primo datagramma, fino alle dimensioni del buffer fornito. Se il datagramma è maggiore del buffer fornito, viene riempito il buffer con la prima parte del datagramma, i dati in eccesso vanno persi, e **ricezione** restituisce un valore di **SOCKET_ERROR** con il codice di errore impostato su **WSAEMSGSIZE**. Se non in ingresso sono disponibili dati al socket, il valore **SOCKET_ERROR** viene restituito il codice di errore impostato su **WSAEWOULDBLOCK**. Il [OnReceive](#onreceive) funzione di callback può essere utilizzata per determinare quando arrivano di più dati.  
  
 Se il socket è di tipo **SOCK_STREAM** e il lato remoto ha chiuso la connessione, un **ricezione** verrà terminata immediatamente con 0 byte ricevuti. Se la connessione è stata reimpostata, un **ricezione** avrà esito negativo con l'errore **WSAECONNRESET**.  
  
 **Ricezione** deve essere chiamato una sola volta per ogni volta che [CAsyncSocket::OnReceive](#onreceive) viene chiamato.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAsyncSocket::OnReceive](#onreceive).  
  
##  <a name="receivefrom"></a>CAsyncSocket::ReceiveFrom  
 Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nel [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura o in `rSocketAddress`.  
  
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
 `lpBuf`  
 Un buffer per i dati in ingresso.  
  
 `nBufLen`  
 La lunghezza di `lpBuf` in byte.  
  
 `rSocketAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rSocketPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo di origine al momento della restituzione.  
  
 `lpSockAddrLen`  
 Un puntatore alla lunghezza dell'indirizzo di origine in `lpSockAddr` in byte.  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_PEEK** leggere i dati in arrivo. I dati viene copiati nel buffer, ma non viene rimosso dalla coda di input.  
  
- **MSG_OOB** elaborare dati fuori banda.  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, `ReceiveFrom` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando `GetLastError`. Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non valido: il `lpSockAddr` buffer è troppo piccolo per contenere l'indirizzo del peer.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEINVAL** il socket non è stato associato al **associare**.  
  
- **WSAENOTCONN** il socket non connesso ( **SOCK_STREAM** solo).  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare `ReceiveFrom` su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 0 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e `ReceiveFrom` l'operazione verrà bloccata.  
  
- **WSAEMSGSIZE** il datagramma è troppo grande per il buffer specificato ed è stato troncato.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per leggere i dati in ingresso su un socket (probabilmente connesso) e acquisire l'indirizzo da cui è stati inviati i dati.  
  
 Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::ReceiveFromEx](#receivefromex).  
  
 Per i socket di tipo **SOCK_STREAM**, come viene restituito quantità di informazioni è attualmente disponibile fino alle dimensioni del buffer fornito. Se il socket è stato configurato per la ricezione di dati fuori banda in linea (opzione del socket **SO_OOBINLINE**) e dati fuori banda non sono stato letti, verranno restituiti i dati solo fuori banda. L'applicazione può utilizzare il **IOCtlSIOCATMARK** opzione o `OnOutOfBandData` per determinare se i dati più out of band rimangono da leggere. Il `lpSockAddr` e `lpSockAddrLen` i parametri vengono ignorati per **SOCK_STREAM** socket.  
  
 Per i socket di datagramma, i dati vengono estratti dal primo datagramma, fino alle dimensioni del buffer fornito. Se il datagramma è maggiore del buffer fornito, viene riempito il buffer con la prima parte del messaggio, i dati in eccesso vanno persi, e `ReceiveFrom` restituisce un valore di **SOCKET_ERROR** con il codice di errore impostato su  **WSAEMSGSIZE**.  
  
 Se `lpSockAddr` è diverso da zero, e il socket è di tipo **SOCK_DGRAM**, l'indirizzo di rete del socket che ha inviato i dati verrà copiato sul corrispondente [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura. Il valore a cui puntava `lpSockAddrLen` viene inizializzato per la dimensione della struttura e viene modificato in fase di restituzione per indicare le dimensioni effettive dell'indirizzo archiviata. Se non è disponibile alcun dato in ingresso al socket, il `ReceiveFrom` chiamata resta in attesa per i dati arrivano a meno che non è il socket non bloccante. In questo caso, un valore di **SOCKET_ERROR** viene restituito il codice di errore impostato su **WSAEWOULDBLOCK**. Il `OnReceive` callback può essere usato per determinare quando arrivano di più dati.  
  
 Se il socket è di tipo **SOCK_STREAM** e il lato remoto ha chiuso la connessione, un `ReceiveFrom` verrà terminata immediatamente con 0 byte ricevuti.  
  
##  <a name="receivefromex"></a>CAsyncSocket::ReceiveFromEx  
 Chiamare questa funzione membro per ricevere un datagramma e archiviare l'indirizzo di origine nel [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura o in `rSocketAddress` (gestisce gli indirizzi IPv6).  
  
```  
int ReceiveFromEx(
    void* lpBuf,  
    int nBufLen,  
    CString& rSocketAddress,  
    UINT& rSocketPort,  
    int nFlags = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuf`  
 Un buffer per i dati in ingresso.  
  
 `nBufLen`  
 La lunghezza di `lpBuf` in byte.  
  
 `rSocketAddress`  
 Riferimento a un `CString` oggetto che riceve un indirizzo IP punteggiato.  
  
 `rSocketPort`  
 Riferimento a un **UINT** che archivia una porta.  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_PEEK** leggere i dati in arrivo. I dati viene copiati nel buffer, ma non viene rimosso dalla coda di input.  
  
- **MSG_OOB** elaborare dati fuori banda.  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, `ReceiveFromEx` restituisce il numero di byte ricevuti. Se la connessione è stata chiusa, restituisce 0. In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando `GetLastError`. Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** il `lpSockAddrLen` argomento non valido: il `lpSockAddr` buffer è troppo piccolo per contenere l'indirizzo del peer.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEINVAL** il socket non è stato associato al **associare**.  
  
- **WSAENOTCONN** il socket non connesso ( **SOCK_STREAM** solo).  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare `ReceiveFromEx` su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 0 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e `ReceiveFromEx` l'operazione verrà bloccata.  
  
- **WSAEMSGSIZE** il datagramma è troppo grande per il buffer specificato ed è stato troncato.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per leggere i dati in ingresso su un socket (probabilmente connesso) e acquisire l'indirizzo da cui è stati inviati i dati.  
  
 Questa funzione è analoga [CAsyncSocket::ReceiveFrom](#receivefrom) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.  
  
 Per i socket di tipo **SOCK_STREAM**, come viene restituito quantità di informazioni è attualmente disponibile fino alle dimensioni del buffer fornito. Se il socket è stato configurato per la ricezione di dati fuori banda in linea (opzione del socket **SO_OOBINLINE**) e dati fuori banda non sono stato letti, verranno restituiti i dati solo fuori banda. L'applicazione può utilizzare il **IOCtlSIOCATMARK** opzione o `OnOutOfBandData` per determinare se i dati più out of band rimangono da leggere. Il `lpSockAddr` e `lpSockAddrLen` i parametri vengono ignorati per **SOCK_STREAM** socket.  
  
 Per i socket di datagramma, i dati vengono estratti dal primo datagramma, fino alle dimensioni del buffer fornito. Se il datagramma è maggiore del buffer fornito, viene riempito il buffer con la prima parte del messaggio, i dati in eccesso vanno persi, e `ReceiveFromEx` restituisce un valore di **SOCKET_ERROR** con il codice di errore impostato su  **WSAEMSGSIZE**.  
  
 Se `lpSockAddr` è diverso da zero, e il socket è di tipo **SOCK_DGRAM**, l'indirizzo di rete del socket che ha inviato i dati verrà copiato sul corrispondente [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura. Il valore a cui puntava `lpSockAddrLen` viene inizializzato per la dimensione della struttura e viene modificato in fase di restituzione per indicare le dimensioni effettive dell'indirizzo archiviata. Se non è disponibile alcun dato in ingresso al socket, il `ReceiveFromEx` chiamata resta in attesa per i dati arrivano a meno che non è il socket non bloccante. In questo caso, un valore di **SOCKET_ERROR** viene restituito il codice di errore impostato su **WSAEWOULDBLOCK**. Il `OnReceive` callback può essere usato per determinare quando arrivano di più dati.  
  
 Se il socket è di tipo **SOCK_STREAM** e il lato remoto ha chiuso la connessione, un `ReceiveFromEx` verrà terminata immediatamente con 0 byte ricevuti.  
  
##  <a name="send"></a>CAsyncSocket::Send  
 Chiamare questa funzione membro per l'invio di dati in un socket connesso.  
  
```  
virtual int Send(
    const void* lpBuf,  
    int nBufLen,  
    int nFlags = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `lpBuf`  
 Un buffer contenente i dati da trasmettere.  
  
 `nBufLen`  
 La lunghezza dei dati in `lpBuf` in byte.  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_DONTROUTE** specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets è possibile scegliere di ignorare questo flag.  
  
- **MSG_OOB** inviare i dati fuori banda ( **SOCK_STREAM** solo).  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, **inviare** restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da `nBufLen`.) In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEACCES** dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEFAULT** il `lpBuf` argomento non è presente in una parte valida dello spazio degli indirizzi utente.  
  
- **WSAENETRESET** necessario reimpostare la connessione perché l'implementazione di Windows Sockets eliminato.  
  
- `WSAENOBUFS`L'implementazione di Windows Sockets segnala un deadlock di buffer.  
  
- **WSAENOTCONN** il socket non connesso.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare **inviare** su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 1 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e blocca l'operazione richiesta.  
  
- **WSAEMSGSIZE** il socket è di tipo **SOCK_DGRAM**, e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.  
  
- **WSAEINVAL** il socket non è stato associato al **associare**.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
### <a name="remarks"></a>Note  
 **Inviare** viene utilizzato per scrivere dati in uscita sui socket di datagramma o di flusso connessi. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal **iMaxUdpDg** elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura restituito da `AfxSocketInit`. Se i dati sono troppo lunghi per passare in modo atomico tramite il protocollo sottostante, l'errore **WSAEMSGSIZE** viene restituito tramite `GetLastError`, e viene trasmesso alcun dato.  
  
 Si noti che per un datagramma socket al corretto completamento di un **inviare** indica che i dati siano stati recapitati correttamente.  
  
 In `CAsyncSocket` gli oggetti di tipo **SOCK_STREAM**, il numero di byte scritti può essere compreso tra 1 e la lunghezza richiesta, a seconda della disponibilità del buffer in entrambi gli host locali ed esterne.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAsyncSocket::OnSend](#onsend).  
  
##  <a name="sendto"></a>CAsyncSocket:: SendTo  
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
 `lpBuf`  
 Un buffer contenente i dati da trasmettere.  
  
 `nBufLen`  
 La lunghezza dei dati in `lpBuf` in byte.  
  
 `nHostPort`  
 La porta che identifica l'applicazione di socket.  
  
 `lpszHostAddress`  
 L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com" o un numero con punti, ad esempio "128.56.22.8".  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_DONTROUTE** specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets è possibile scegliere di ignorare questo flag.  
  
- **MSG_OOB** inviare i dati fuori banda ( **SOCK_STREAM** solo).  
  
 `lpSockAddr`  
 Un puntatore a un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura che contiene l'indirizzo del socket di destinazione.  
  
 `nSockAddrLen`  
 La lunghezza dell'indirizzo in `lpSockAddr` in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, `SendTo` restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da `nBufLen`.) In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEACCES** dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEFAULT** il `lpBuf` o `lpSockAddr` parametri non fanno parte dello spazio degli indirizzi utente, o `lpSockAddr` argomento è troppo piccolo (minore della dimensione di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).  
  
- **WSAEINVAL** il nome host non è valido.  
  
- **WSAENETRESET** necessario reimpostare la connessione perché l'implementazione di Windows Sockets eliminato.  
  
- `WSAENOBUFS`L'implementazione di Windows Sockets segnala un deadlock di buffer.  
  
- **WSAENOTCONN** il socket non connesso ( **SOCK_STREAM** solo).  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare `SendTo` su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 1 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e blocca l'operazione richiesta.  
  
- **WSAEMSGSIZE** il socket è di tipo **SOCK_DGRAM**, e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
- **WSAEADDRNOTAVAIL** l'indirizzo specificato non è disponibile nel computer locale.  
  
- **WSAEAFNOSUPPORT** indirizzi della famiglia specificata non possono essere utilizzati con questo socket.  
  
- **WSAEDESTADDRREQ** è richiesto un indirizzo di destinazione.  
  
- **WSAENETUNREACH** la rete non raggiungibile dall'host in questo momento.  
  
### <a name="remarks"></a>Note  
 `SendTo`viene utilizzato per scrivere dati in uscita su un socket viene utilizzata su socket di datagramma o nel flusso. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal **iMaxUdpDg** elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura compilati da [ AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per passare in modo atomico tramite il protocollo sottostante, l'errore **WSAEMSGSIZE** viene restituito, e viene trasmesso alcun dato.  
  
 Si noti che il completamento di un `SendTo` indica che i dati siano stati recapitati correttamente.  
  
 `SendTo`viene utilizzato solo su un **SOCK_DGRAM** socket per inviare un datagramma a un socket specifico identificato dal `lpSockAddr` parametro.  
  
 Per inviare una trasmissione (in un **SOCK_DGRAM** solo), l'indirizzo di `lpSockAddr` parametro deve essere costruito utilizzando l'indirizzo IP speciale **INADDR_BROADCAST** (definito nell'intestazione di Windows Sockets file WINSOCK. H) con il numero di porta desiderata. Oppure, se il `lpszHostAddress` parametro **NULL**, il socket è configurato per la trasmissione. È consigliabile in genere per un datagramma broadcast supera la dimensione in cui può verificarsi la frammentazione, che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.  
  
 Per gestire gli indirizzi IPv6, utilizzare [CAsyncSocket::SendToEx](#sendtoex).  
  
##  <a name="sendtoex"></a>CAsyncSocket::SendToEx  
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
 `lpBuf`  
 Un buffer contenente i dati da trasmettere.  
  
 `nBufLen`  
 La lunghezza dei dati in `lpBuf` in byte.  
  
 `nHostPort`  
 La porta che identifica l'applicazione di socket.  
  
 `lpszHostAddress`  
 L'indirizzo di rete del socket a cui è collegato questo oggetto: un nome di computer, ad esempio "ftp.microsoft.com" o un numero con punti, ad esempio "128.56.22.8".  
  
 `nFlags`  
 Specifica il modo in cui viene effettuata la chiamata. La semantica di questa funzione è determinata dalle opzioni di socket e `nFlags` parametro. Quest'ultimo viene creato dalla combinazione di uno dei valori seguenti con C++ `OR` operatore:  
  
- **MSG_DONTROUTE** specifica che i dati non devono essere soggetti a routing. Un fornitore di Windows Sockets è possibile scegliere di ignorare questo flag.  
  
- **MSG_OOB** inviare i dati fuori banda ( **SOCK_STREAM** solo).  
  
### <a name="return-value"></a>Valore restituito  
 Se si verifica alcun errore, `SendToEx` restituisce il numero totale di caratteri inviati. (Si noti che questo può essere inferiore al numero indicato da `nBufLen`.) In caso contrario, un valore di **SOCKET_ERROR** viene restituito, e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEACCES** dell'indirizzo richiesto è un indirizzo di broadcast, ma non è stato impostato il flag appropriato.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEFAULT** il `lpBuf` o `lpSockAddr` parametri non fanno parte dello spazio degli indirizzi utente, o `lpSockAddr` argomento è troppo piccolo (minore della dimensione di un [SOCKADDR](../../mfc/reference/sockaddr-structure.md) struttura).  
  
- **WSAEINVAL** il nome host non è valido.  
  
- **WSAENETRESET** necessario reimpostare la connessione perché l'implementazione di Windows Sockets eliminato.  
  
- `WSAENOBUFS`L'implementazione di Windows Sockets segnala un deadlock di buffer.  
  
- **WSAENOTCONN** il socket non connesso ( **SOCK_STREAM** solo).  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
- **WSAEOPNOTSUPP MSG_OOB** è stato specificato, ma il socket non è di tipo **SOCK_STREAM**.  
  
- **WSAESHUTDOWN** il socket è stato arrestato, non è possibile chiamare `SendToEx` su un socket dopo `ShutDown` è stato richiamato con `nHow` impostato su 1 o 2.  
  
- **WSAEWOULDBLOCK** il socket è contrassegnato come non di blocco e blocca l'operazione richiesta.  
  
- **WSAEMSGSIZE** il socket è di tipo **SOCK_DGRAM**, e il datagramma è maggiore del massimo supportato dall'implementazione di Windows Sockets.  
  
- **WSAECONNABORTED** circuito virtuale è stata interrotta a causa di timeout o altri errori.  
  
- **WSAECONNRESET** circuito virtuale reimpostato dal lato remoto.  
  
- **WSAEADDRNOTAVAIL** l'indirizzo specificato non è disponibile nel computer locale.  
  
- **WSAEAFNOSUPPORT** indirizzi della famiglia specificata non possono essere utilizzati con questo socket.  
  
- **WSAEDESTADDRREQ** è richiesto un indirizzo di destinazione.  
  
- **WSAENETUNREACH** la rete non raggiungibile dall'host in questo momento.  
  
### <a name="remarks"></a>Note  
 Questo metodo è identico [CAsyncSocket:: SendTo](#sendto) ad eccezione del fatto che gestisca IPv6 risolve protocolli anche come meno recenti.  
  
 `SendToEx`viene utilizzato per scrivere dati in uscita su un socket viene utilizzata su socket di datagramma o nel flusso. Per i socket di datagramma, prestare attenzione a non superare le dimensioni massime del pacchetto IP delle subnet sottostante, che viene fornito dal **iMaxUdpDg** elemento il [WSADATA](../../mfc/reference/wsadata-structure.md) struttura compilati da [ AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit). Se i dati sono troppo lunghi per passare in modo atomico tramite il protocollo sottostante, l'errore **WSAEMSGSIZE** viene restituito, e viene trasmesso alcun dato.  
  
 Si noti che il completamento di un `SendToEx` indica che i dati siano stati recapitati correttamente.  
  
 `SendToEx`viene utilizzato solo su un **SOCK_DGRAM** socket per inviare un datagramma a un socket specifico identificato dal `lpSockAddr` parametro.  
  
 Per inviare una trasmissione (in un **SOCK_DGRAM** solo), l'indirizzo di `lpSockAddr` parametro deve essere costruito utilizzando l'indirizzo IP speciale **INADDR_BROADCAST** (definito nell'intestazione di Windows Sockets file WINSOCK. H) con il numero di porta desiderata. Oppure, se il `lpszHostAddress` parametro **NULL**, il socket è configurato per la trasmissione. È consigliabile in genere per un datagramma broadcast supera la dimensione in cui può verificarsi la frammentazione, che implica che la parte di dati del datagramma (escluse le intestazioni) non deve superare 512 byte.  
  
##  <a name="setsockopt"></a>CAsyncSocket::SetSockOpt  
 Chiamare questa funzione membro per impostare un'opzione di socket.  
  
```  
BOOL SetSockOpt(
    int nOptionName,  
    const void* lpOptionValue,  
    int nOptionLen,  
    int nLevel = SOL_SOCKET);
```  
  
### <a name="parameters"></a>Parametri  
 `nOptionName`  
 L'opzione di socket per il quale è necessario impostare il valore.  
  
 `lpOptionValue`  
 Un puntatore al buffer in cui viene fornito il valore per l'opzione richiesta.  
  
 `nOptionLen`  
 Le dimensioni del `lpOptionValue` buffer in byte.  
  
 `nLevel`  
 Il livello in cui l'opzione è definita; gli unici livelli supportati sono **SOL_SOCKET** e **IPPROTO_TCP**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEFAULT** `lpOptionValue` non è presente in una parte dello spazio degli indirizzi di processo valida.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAEINVAL** `nLevel` non è valido, o le informazioni contenute in `lpOptionValue` non è valido.  
  
- **WSAENETRESET** connessione è scaduta quando **SO_KEEPALIVE** è impostata.  
  
- **WSAENOPROTOOPT** l'opzione è sconosciuto o non supportato. In particolare, **SO_BROADCAST** non è supportata sui socket di tipo **SOCK_STREAM**, mentre **SO_DONTLINGER**, **SO_KEEPALIVE**,  **SO_LINGER**, e **SO_OOBINLINE** non sono supportate sui socket di tipo **SOCK_DGRAM**.  
  
- **WSAENOTCONN** connessione è stata reimpostata quando **SO_KEEPALIVE** è impostata.  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 `SetSockOpt`Imposta il valore corrente per un'opzione di socket associata a un socket di qualsiasi tipo, in qualsiasi stato. Sebbene le opzioni possono esistere più livelli di protocollo, questa specifica definisce solo le opzioni che esistono a livello di più in alto "socket". Opzioni di influire sulle operazioni di socket, ad esempio se accelerati vengono ricevuti i dati nel flusso di dati normali, se i messaggi trasmessi sul socket, è possono inviare e così via.  
  
 Esistono due tipi di opzioni di socket: opzioni booleane che abilita o disabilita una funzionalità o un comportamento e le opzioni che richiedono un valore intero o una struttura. Per abilitare un'opzione booleana, `lpOptionValue` punta a un numero intero diverso da zero. Per disabilitare l'opzione `lpOptionValue` punta a un numero intero pari a zero. `nOptionLen`deve essere uguale alla **sizeof(BOOL)** per opzioni booleane. Per altre opzioni, `lpOptionValue` punta all'intero o struttura che contiene il valore desiderato per l'opzione e `nOptionLen` è la lunghezza del numero intero o della struttura.  
  
 **SO_LINGER** controlli l'azione eseguita quando non inviati i dati sono accodati in un socket e **chiudere** funzione viene chiamata per chiudere il socket.  
  
 Per impostazione predefinita, non è possibile associare un socket (vedere [associare](#bind)) a un indirizzo locale che è già in uso. In alcuni casi, tuttavia, potrebbe essere auspicabile "riutilizzare" in questo modo un indirizzo. Poiché ogni connessione viene identificato in modo univoco dalla combinazione di indirizzi locali e remoti, non è senza problemi con due socket associato allo stesso indirizzo locale, purché gli indirizzi remoti sono diversi.  
  
 Per informare l'implementazione di Windows Sockets che un **associare** chiamata su un socket non deve essere consentito perché l'indirizzo desiderato è già in uso da un altro socket, l'applicazione deve impostare il **SO_REUSEADDR**socket opzione per il socket prima di rilasciare il **associare** chiamare. Si noti che l'opzione viene interpretata solo al momento del **associare** chiamare: non è quindi necessario (ma innocui) per impostare l'opzione su un socket che non deve essere associato a un indirizzo esistente e impostare o reimpostare l'opzione dopo il **Associare** chiamata non ha alcun effetto su questa o qualsiasi altro tipo di socket.  
  
 Un'applicazione può richiedere che l'implementazione di Windows Sockets consentono l'uso di pacchetti "keep-alive" per le connessioni di protocollo TCP (Transmission Control) attivando il **SO_KEEPALIVE** opzione socket. Un'implementazione di Windows Sockets non deve supportare l'utilizzo di keep-alive: in caso affermativo, la semantica precisa sono specifiche dell'implementazione, ma deve essere conforme alla sezione 4.2.3.6 di RFC 1122: "requisiti per gli host Internet, i livelli di comunicazione." Se una connessione viene eliminata il codice di errore come risultato di "keep-alive" **WSAENETRESET** sul socket, viene restituito a tutte le chiamate in corso e tutte le chiamate successive avranno esito negativo con **WSAENOTCONN**.  
  
 Il **TCP_NODELAY** opzione Disabilita l'algoritmo Nagle. L'algoritmo Nagle viene utilizzato per ridurre il numero di pacchetti di piccole dimensioni inviato da un host per il buffer di dati non riconosciuti trasmissione fino a quando non può essere inviato un pacchetto di dimensioni. Tuttavia, per alcune applicazioni di questo algoritmo può ostacolare le prestazioni, e **TCP_NODELAY** può essere utilizzato per disattivare tale funzionalità. Gli autori di applicazioni non è necessario impostare **TCP_NODELAY** , a meno che l'impatto di questa operazione è ben chiari e desiderata, dall'impostazione **TCP_NODELAY** può avere un impatto negativo sulle prestazioni della rete . **TCP_NODELAY** è l'unica opzione di socket che Usa livello supportata **IPPROTO_TCP**; tutte le altre opzioni utilizzano livello **SOL_SOCKET**.  
  
 Alcune implementazioni di approvvigionamento di Windows Sockets output le informazioni di debug, se il **SO_DEBUG** opzione viene impostata da un'applicazione.  
  
 Le opzioni seguenti sono supportate per `SetSockOpt`. Il tipo identifica il tipo di dati indirizzati dalla `lpOptionValue`.  
  
|Valore|Tipo|Significato|  
|-----------|----------|-------------|  
|**SO_BROADCAST**|**BOOL**|Consente la trasmissione di messaggi trasmessi sul socket.|  
|**SO_DEBUG**|**BOOL**|Registra informazioni di debug.|  
|**SO_DONTLINGER**|**BOOL**|Non bloccare **Chiudi** in attesa di invio di dati non inviati. Impostazione di questa opzione è equivalente all'impostazione **SO_LINGER** con **l_onoff** impostato su zero.|  
|**SO_DONTROUTE**|**BOOL**|Non distribuire: invia direttamente all'interfaccia.|  
|**SO_KEEPALIVE**|**BOOL**|Inviare keep-alive.|  
|**SO_LINGER**|**struttura LINGER**|Ritarda la **Chiudi** se non inviati sono presenti dati.|  
|**SO_OOBINLINE**|**BOOL**|Ricezione di dati fuori banda nel flusso di dati normali.|  
|**SO_RCVBUF**|`int`|Specificare la dimensione del buffer per riceve.|  
|**SO_REUSEADDR**|**BOOL**|Consente al socket di essere associato a un indirizzo a cui è già in uso. (Vedere [associare](#bind).)|  
|**SO_SNDBUF**|`int`|Specificare la dimensione del buffer per gli invii.|  
|**TCP_NODELAY**|**BOOL**|Disabilita l'algoritmo Nagle di unione dei pacchetti in invio.|  
  
 Non è supportate per le opzioni di Berkeley Software Distribution (BSD) `SetSockOpt` sono:  
  
|Valore|Tipo|Significato|  
|-----------|----------|-------------|  
|**SO_ACCEPTCONN**|**BOOL**|Socket è in ascolto|  
|**SO_ERROR**|`int`|Ottiene lo stato di errore ed Elimina.|  
|**SO_RCVLOWAT**|`int`|Limite inferiore di ricezione.|  
|**SO_RCVTIMEO**|`int`|Timeout di ricezione|  
|**SO_SNDLOWAT**|`int`|Limite inferiore di trasmissione.|  
|**SO_SNDTIMEO**|`int`|Timeout di invio.|  
|**SO_TYPE**|`int`|Tipo di socket.|  
|**IP_OPTIONS**||Impostare il campo di opzioni nell'intestazione IP.|  
  
##  <a name="shutdown"></a>CAsyncSocket::ShutDown  
 Chiamata della funzione membro per disabilitare Invia, riceve, o entrambi sul socket.  
  
```  
BOOL ShutDown(int nHow = sends);
```  
  
### <a name="parameters"></a>Parametri  
 `nHow`  
 Un flag che descrivono i tipi di operazione non potrà essere, usando i seguenti valori enumerati:  
  
- **riceve = 0**  
  
- **Invia = 1**  
  
- **sia = 2**  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando [GetLastError](#getlasterror). Gli errori seguenti si applicano a questa funzione membro:  
  
- **WSANOTINITIALISED** corretta [AfxSocketInit](../../mfc/reference/application-information-and-management.md#afxsocketinit) deve verificarsi prima di usare questa API.  
  
- **WSAENETDOWN** implementazione il socket di Windows ha rilevato che il sottosistema di rete non è riuscita.  
  
- **WSAEINVAL** `nHow` non è valido.  
  
- **WSAEINPROGRESS** un'operazione di blocco Windows Sockets è in corso.  
  
- **WSAENOTCONN** il socket non connesso ( **SOCK_STREAM** solo).  
  
- **WSAENOTSOCK** il descrittore non è un socket.  
  
### <a name="remarks"></a>Note  
 `ShutDown`viene utilizzato in tutti i tipi di socket per disabilitare la ricezione, trasmissione o entrambi. Se `nHow` è 0, riceve successivi per il socket non sarà consentito. Non produce alcun effetto sui livelli inferiori di protocollo.  
  
 Per protocollo TCP (Transmission Control), la finestra TCP non viene modificata e i dati in arrivo verranno accettate (ma non riconosciuto) fino a quando la finestra è esaurita. Per protocollo UDP (User Datagram), i datagrammi in ingresso vengono accettati e in coda. In nessun caso verrà generato un pacchetto di errore ICMP. Se `nHow` è 1, invia successive non è consentiti. Per i socket TCP, verrà inviata una ricerca. Impostazione `nHow` 2 Disabilita entrambi Invia e riceve come descritto in precedenza.  
  
 Si noti che `ShutDown` non chiudere il socket e risorse associate per il socket non verranno liberate finché **chiudere** viene chiamato. Un'applicazione non deve basarsi sulla possibilità di riutilizzare un socket dopo che è stato arrestato. In particolare, un'implementazione di Windows Sockets non è necessario per supportare l'utilizzo di **Connetti** su un socket di questo tipo.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CAsyncSocket::OnReceive](#onreceive).  
  
##  <a name="socket"></a>CASyncSocket::Socket  
 Alloca un handle di socket.  
  
```  
BOOL Socket(
    int nSocketType = SOCK_STREAM,  
    long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE,  
    int nProtocolType = 0,  
    int nAddressFormat = PF_INET);
```  
  
### <a name="parameters"></a>Parametri  
 `nSocketType`  
 Specifica `SOCK_STREAM` o `SOCK_DGRAM`.  
  
 `lEvent`  
 Maschera di bit che specifica una combinazione di eventi di rete in cui l'applicazione è interessata.  
  
- `FD_READ`: Desidera ricevere una notifica di conformità per la lettura.  
  
- `FD_WRITE`: Desidera ricevere una notifica di conformità per la scrittura.  
  
- `FD_OOB`: Desidera ricevere notifica dell'arrivo di dati fuori banda.  
  
- `FD_ACCEPT`: Desidera ricevere una notifica di connessioni in ingresso.  
  
- `FD_CONNECT`: Desidera ricevere una notifica di connessione completata.  
  
- `FD_CLOSE`: Desidera ricevere una notifica di chiusura del socket.  
  
 `nProtocolType`  
 Protocollo da utilizzare con i socket specifico per la famiglia di indirizzi indicato.  
  
 `nAddressFormat`  
 Specifica della famiglia di indirizzi.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` in caso di esito positivo, `FALSE` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo alloca un handle di socket. Non effettua una chiamata [CAsyncSocket::Bind](#bind) per associare il socket a un indirizzo specificato, pertanto è necessario chiamare `Bind` in un secondo momento per associare il socket a un indirizzo specificato. È possibile utilizzare [CAsyncSocket::SetSockOpt](#setsockopt) per impostare l'opzione di socket prima che venga associato.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CSocket (classe)](../../mfc/reference/csocket-class.md)   
 [Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
