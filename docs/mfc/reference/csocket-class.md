---
title: CSocket (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CSocket [MFC], CSocket
- CSocket [MFC], Attach
- CSocket [MFC], CancelBlockingCall
- CSocket [MFC], Create
- CSocket [MFC], FromHandle
- CSocket [MFC], IsBlocking
- CSocket [MFC], OnMessagePending
ms.assetid: 7f23c081-d24d-42e3-b511-8053ca53d729
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0bfaf418ec78a750f6030683801d00a1450364d8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="csocket-class"></a>CSocket (classe)
Deriva da `CAsyncSocket`eredita relativo incapsulamento di Windows Sockets API e rappresenta un livello superiore di astrazione rispetto a quello di un `CAsyncSocket` oggetto.  
  
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
|[CSocket::Attach](#attach)|Collega un **SOCKET** handle per un `CSocket` oggetto.|  
|[CSocket::CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco che è in corso.|  
|[CSocket::Create](#create)|Crea un socket.|  
|[CSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CSocket` oggetto, dato un **SOCKET** gestire.|  
|[CSocket::IsBlocking](#isblocking)|Determina se una chiamata di blocco è in corso.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket:: OnMessagePending](#onmessagepending)|Chiamata per elaborare messaggi in sospeso durante l'attesa di completamento di una chiamata di blocco.|  
  
## <a name="remarks"></a>Note  
 `CSocket` funziona con le classi `CSocketFile` e `CArchive` per gestire l'invio e ricezione dei dati.  
  
 Oggetto `CSocket` oggetto fornisce inoltre il blocco, che sono essenziali per l'operazione sincrona di `CArchive`. Il blocco di funzioni, ad esempio `Receive`, `Send`, `ReceiveFrom`, `SendTo`, e `Accept` (tutte ereditate da `CAsyncSocket`), non restituiscono un `WSAEWOULDBLOCK` errore `CSocket`. Queste funzioni attendere invece il completamento dell'operazione. Inoltre, la chiamata originale verrà terminata con l'errore `WSAEINTR` se `CancelBlockingCall` viene chiamato durante una di queste funzioni è il blocco.  
  
 Per utilizzare un `CSocket` oggetto, chiamare il costruttore, quindi chiamare `Create` per creare l'oggetto sottostante `SOCKET` gestire (tipo `SOCKET`). I parametri predefiniti di `Create` creare un socket di flusso, tuttavia, se non si sta utilizzando il socket con un `CArchive` oggetto, è possibile specificare un parametro per creare invece un socket di datagramma, oppure per creare un socket server associati a una porta specifica. Connettersi a un socket client utilizzando `Connect` sul lato client e `Accept` sul lato server. Creare quindi un `CSocketFile` dell'oggetto e associarlo al `CSocket` oggetto il `CSocketFile` costruttore. Successivamente, creare un `CArchive` oggetto per l'invio e uno per la ricezione di dati (in base alle esigenze), quindi associare con la `CSocketFile` oggetto di `CArchive` costruttore. Una volta completate le comunicazioni, eliminare il `CArchive`, `CSocketFile`, e `CSocket` oggetti. Il `SOCKET` tipo di dati è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
 Quando si utilizza `CArchive` con `CSocketFile` e `CSocket`, si potrebbe verificarsi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. Poiché Windows sockets utilizzare solo una chiamata di ricezione per ogni notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per FD_READ. Se viene visualizzato un FD_READ quando non sono presenti dati da leggere, si blocca l'applicazione. Se non si verifica mai FD_READ un'altra, l'applicazione si interrompe la comunicazione tramite socket.  
  
 È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe messaggio quando i dati previsti da leggere dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete in genere 1096 almeno byte). Se le dimensioni dei dati disponibili sono inferiore al necessario, attendere che tutti i dati da ricevere e avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che dichiara la classe in un' posizione nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]  
  
> [!NOTE]
>  Quando si utilizza sockets MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
 Per ulteriori informazioni, vedere [Windows Sockets di MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: funzionamento dei socket con archivi lavoro](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAsyncSocket](../../mfc/reference/casyncsocket-class.md)  
  
 `CSocket`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxSock  
  
##  <a name="attach"></a>  CSocket::Attach  
 Chiamare questa funzione membro per collegare il `hSocket` handle per un `CSocket` oggetto.  
  
```  
BOOL Attach(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle a un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 Il **SOCKET** handle viene archiviato l'oggetto [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) (membro dati).  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSocketThread#1](../../mfc/reference/codesnippet/cpp/csocket-class_2.h)]  
  
 [!code-cpp[NVC_MFCSocketThread#2](../../mfc/reference/codesnippet/cpp/csocket-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCSocketThread#3](../../mfc/reference/codesnippet/cpp/csocket-class_4.cpp)]  
  
##  <a name="cancelblockingcall"></a>  CSocket::CancelBlockingCall  
 Chiamare questa funzione membro per annullare una chiamata di blocco in corso.  
  
```  
void CancelBlockingCall();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di annullare qualsiasi operazione di blocco in sospeso per questo socket. La chiamata di blocco originale verrà terminata appena possibile con l'errore **WSAEINTR**.  
  
 Nel caso di un blocco **Connetti** operazione, l'implementazione di Windows Sockets verrà interrotta la chiamata di blocco non appena possibile, ma potrebbe non essere possibile per le risorse di socket di essere rilasciate fino a quando la connessione è stata completata (e quindi reimpostato) o scaduto. Questa condizione potrebbe essere evidente solo se l'applicazione tenta immediatamente di aprire un nuovo socket (se non socket sono disponibili) oppure per la connessione per lo stesso peer.  
  
 L'annullamento di qualsiasi operazione diversa da **Accept** può lasciare il socket in uno stato indeterminato. Se un'applicazione Annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere da poter eseguire sul socket è una chiamata a **Chiudi**, anche se altre operazioni potrebbero funzionare in alcuni Windows Sockets implementazioni. Se lo si desidera garantire la massima portabilità dell'applicazione, è necessario fare attenzione a non dipende da operazioni dopo l'annullamento.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="create"></a>  CSocket::Create  
 Chiamare il **crea** funzione membro dopo la creazione di un oggetto socket per creare il socket di Windows e collegarlo.  
  
```  
BOOL Create(
    UINT nSocketPort = 0,  
    int nSocketType = SOCK_STREAM,  
    LPCTSTR lpszSocketAddress = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nSocketPort`  
 Una porta specifica da utilizzare con i socket oppure 0 se si desidera MFC per selezionare una porta.  
  
 `nSocketType`  
 **SOCK_STREAM** oppure **SOCK_DGRAM**.  
  
 `lpszSocketAddress`  
 Un puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero con punti, ad esempio "128.56.22.8". Il passaggio di **NULL** stringa per questo parametro indica il **CSocket** istanza deve attendere l'attività del client su tutte le interfacce di rete.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando `GetLastError`.  
  
### <a name="remarks"></a>Note  
 **Creare** quindi chiama **associare** per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:  
  
- **SOCK_STREAM** fornisce sequenziata, flussi di byte bidirezionale, affidabile, basato sulla connessione. Usa protocollo TCP (Transmission Control) per la famiglia di indirizzi Internet.  
  
- **SOCK_DGRAM** supporta datagrammi, sono orientati, inaffidabili buffer di lunghezza massima (in genere piccola) fissa. Usa protocollo UDP (User Datagram) per la famiglia di indirizzi Internet. Per utilizzare questa opzione, non è necessario utilizzare il socket con un `CArchive` oggetto.  
  
    > [!NOTE]
    >  Il **Accept** funzione membro accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare **Accept**. Tenere presente che se questo oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare **crea** per questo nuovo oggetto socket.  
  
 Per ulteriori informazioni sui socket di datagramma e di flusso, vedere gli articoli [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md), [Windows Sockets: porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md), e [Windows Sockets: utilizzo Socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="csocket"></a>  CSocket::CSocket  
 Costruisce un oggetto `CSocket`.  
  
```  
CSocket();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione, è necessario chiamare il **crea** funzione membro.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="fromhandle"></a>  CSocket::FromHandle  
 Restituisce un puntatore a un `CSocket` oggetto.  
  
```  
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle a un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CSocket` oggetto, o **NULL** se è presente alcun `CSocket` oggetto associato a `hSocket`.  
  
### <a name="remarks"></a>Note  
 Quando viene specificato un **SOCKET** se gestire un `CSocket` all'handle di oggetto non è connesso, la funzione membro restituisce **NULL** e non crea un oggetto temporaneo.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="isblocking"></a>  CSocket::IsBlocking  
 Chiamare questa funzione membro per determinare se una chiamata di blocco è in corso.  
  
```  
BOOL IsBlocking();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sta bloccando il socket; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="onmessagepending"></a>  CSocket:: OnMessagePending  
 Eseguire l'override di questa funzione membro per cercare determinati messaggi da Windows e rispondere di conseguenza il socket.  
  
```  
virtual BOOL OnMessagePending();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si tratta di un avanzato sottoponibile a override.  
  
 Il framework chiama `OnMessagePending` mentre il socket è distribuzione dei messaggi di Windows per fornire la possibilità di gestire i messaggi di particolare interesse per l'applicazione. Per esempi di come è possibile utilizzare `OnMessagePending`, vedere l'articolo [Windows Sockets: derivazione dalle classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
