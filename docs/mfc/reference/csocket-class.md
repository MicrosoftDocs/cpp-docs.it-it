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
ms.openlocfilehash: 8c423f1423c874dbf110cfd6951b3510fe0506af
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121877"
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
|[CSocket::Attach](#attach)|Associa un handle SOCKET a un `CSocket` oggetto.|  
|[CSocket::CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco che è attualmente in corso.|  
|[CSocket::Create](#create)|Crea un socket.|  
|[CSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CSocket` oggetto, specificato un handle SOCKET.|  
|[CSocket::IsBlocking](#isblocking)|Determina se una chiamata di blocco è in corso.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket:: OnMessagePending](#onmessagepending)|Chiamata per elaborare messaggi in sospeso durante l'attesa di una chiamata di blocco completare.|  
  
## <a name="remarks"></a>Note  
 `CSocket` funziona con le classi `CSocketFile` e `CArchive` per gestire l'invio e ricezione dei dati.  
  
 Un `CSocket` oggetto fornisce inoltre il blocco, è infatti fondamentale per l'operazione sincrona di `CArchive`. Il blocco di funzioni, ad esempio `Receive`, `Send`, `ReceiveFrom`, `SendTo`, e `Accept` (tutte ereditate da `CAsyncSocket`), non restituiscono un `WSAEWOULDBLOCK` errore `CSocket`. Queste funzioni attendere invece il completamento dell'operazione. Inoltre, la chiamata originale se verrà terminata con l'errore WSAEINTR `CancelBlockingCall` viene chiamato durante una di queste funzioni sta bloccando.  
  
 Per utilizzare un `CSocket` dell'oggetto, chiamare il costruttore, quindi chiamare `Create` per creare l'handle SOCKET sottostante (tipo di SOCKET). I parametri predefiniti di `Create` creare un socket di flusso, tuttavia, se non si utilizza il socket con un `CArchive` oggetto, è possibile specificare un parametro per creare invece un socket di datagramma, oppure per creare un socket server associati a una porta specifica. Connettersi a un socket client usando `Connect` sul lato client e `Accept` sul lato server. Quindi creare un `CSocketFile` dell'oggetto e associarlo al `CSocket` oggetto nel `CSocketFile` costruttore. Successivamente, creare una `CArchive` oggetto per l'invio e uno per la ricezione di dati (in base alle esigenze), quindi associarle con il `CSocketFile` oggetto nel `CArchive` costruttore. Eliminare definitivamente una volta completate le comunicazioni, il `CArchive`, `CSocketFile`, e `CSocket` oggetti. Il tipo di dati SOCKET è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
 Quando si usa `CArchive` con `CSocketFile` e `CSocket`, si potrebbe verificarsi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. In questo modo Windows Socket offrono una sola chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per ogni FD_READ. Se viene visualizzato un FD_READ quando non sono presenti dati da leggere, si blocca l'applicazione. Se non si verifica mai FD_READ un'altra, l'applicazione si interrompe la comunicazione tramite socket.  
  
 È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete in genere 1096 almeno byte). Se le dimensioni dei dati disponibili sono inferiore al necessario, attendere che tutti i dati da ricevere e avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che dichiara la classe in un' posizione nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]  
  
> [!NOTE]
>  Quando si utilizza sockets MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
 Per altre informazioni, vedere [Windows Sockets di MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: funzionamento dei socket con archivi lavoro](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: esempio di socket che utilizzano archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
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
 *hSocket*  
 Contiene un handle a un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 L'handle SOCKET viene archiviato l'oggetto [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) (membro dati).  
  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
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
 Questa funzione Annulla qualsiasi operazione di blocco in sospeso per questo socket. La chiamata di blocco originale comporta la terminazione appena possibile con l'errore WSAEINTR.  
  
 Nel caso di un blocco `Connect` operazione, l'implementazione di Windows Sockets verrà interrotta la chiamata di blocco non appena possibile, ma potrebbe non essere possibile per le risorse di socket di essere rilasciate fino a quando la connessione ha completato (e quindi reimpostata) o timeout. Ciò è apprezzabile solo se l'applicazione tenta immediatamente consente di aprire un nuovo socket (se nessun socket sono disponibili) oppure per la connessione per lo stesso peer.  
  
 Annullare qualsiasi operazione diversa da `Accept` può lasciare il socket in uno stato indeterminato. Se un'applicazione Annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere la possibilità di eseguire nel socket è una chiamata a `Close`, anche se altre operazioni potrebbero funzionare in alcune implementazioni di Windows Sockets. Se lo si desidera garantire la massima portabilità dell'applicazione, è necessario prestare attenzione a non dipende da operazioni dopo l'annullamento.  
  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="create"></a>  CSocket::Create  
 Chiamare il **crea** funzione membro dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.  
  
```  
BOOL Create(
    UINT nSocketPort = 0,  
    int nSocketType = SOCK_STREAM,  
    LPCTSTR lpszSocketAddress = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *nSocketPort*  
 Una porta specifica da utilizzare con i socket oppure 0 se si desidera MFC per selezionare una porta.  
  
 *nSocketType*  
 SOCK_STREAM o SOCK_DGRAM.  
  
 *lpszSocketAddress*  
 Un puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero con punti, ad esempio "128.56.22.8". Passando il valore NULL la stringa per questo parametro indica il `CSocket` istanza deve restare in ascolto per l'attività del client su tutte le interfacce di rete.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando `GetLastError`.  
  
### <a name="remarks"></a>Note  
 `Create` chiama quindi `Bind` per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:  
  
- SOCK_STREAM fornisce sequenziazione, flussi di byte bidirezionale, affidabile, basato sulla connessione. Usa protocollo TCP (Transmission Control) per la famiglia di indirizzi Internet.  
  
- Datagrammi supporta SOCK_DGRAM, sono orientati, inaffidabili buffer di lunghezza massima (in genere piccola) fissa. Usa protocollo UDP (User Datagram) per la famiglia di indirizzi Internet. Per usare questa opzione, non è necessario utilizzare il socket con un `CArchive` oggetto.  
  
    > [!NOTE]
    >  Il `Accept` membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare `Accept`. Tenere presente che se questo oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare `Create` per questo nuovo oggetto socket.  
  
 Per ulteriori informazioni sui socket di flusso e datagramma, vedere gli articoli [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md), [Windows Sockets: porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md), e [Windows Sockets: utilizzo Socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="csocket"></a>  CSocket::CSocket  
 Costruisce un oggetto `CSocket`.  
  
```  
CSocket();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione, è necessario chiamare il `Create` funzione membro.  
  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="fromhandle"></a>  CSocket::FromHandle  
 Restituisce un puntatore a un `CSocket` oggetto.  
  
```  
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 *hSocket*  
 Contiene un handle a un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CSocket` dell'oggetto, o NULL se non esiste alcun `CSocket` oggetto connesso a *hSocket*.  
  
### <a name="remarks"></a>Note  
 Quando viene specificato un handle SOCKET, se un `CSocket` oggetto non è connesso all'handle, la funzione membro restituisce NULL e non crea un oggetto temporaneo.  
  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="isblocking"></a>  CSocket::IsBlocking  
 Chiamare questa funzione membro per determinare se una chiamata di blocco è in corso.  
  
```  
BOOL IsBlocking();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se sta bloccando il socket; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="onmessagepending"></a>  CSocket:: OnMessagePending  
 Eseguire l'override di questa funzione membro per cercare determinati messaggi da Windows e rispondere di conseguenza il socket.  
  
```  
virtual BOOL OnMessagePending();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si tratta di un'avanzata sottoponibile a override.  
  
 Il framework chiama `OnMessagePending` mentre il socket è visualizzazione messaggi di Windows per fornire la possibilità di gestire i messaggi di particolare interesse per l'applicazione. Per esempi di come è possibile utilizzare `OnMessagePending`, vedere l'articolo [Windows Sockets: derivazione dalle classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
 Per altre informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Classe CSocketFile](../../mfc/reference/csocketfile-class.md)
