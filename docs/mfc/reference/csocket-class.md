---
title: CSocket (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSocket
dev_langs:
- C++
helpviewer_keywords:
- WinSock CSocket class
- CSocket class
- SOCKET handle
- sockets classes
ms.assetid: 7f23c081-d24d-42e3-b511-8053ca53d729
caps.latest.revision: 30
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 451ea100dbf02e365204fe4fdf1c380e855d8231
ms.lasthandoff: 02/24/2017

---
# <a name="csocket-class"></a>CSocket (classe)
Deriva da `CAsyncSocket`, eredita l'incapsulamento dell'API Windows Sockets e rappresenta un livello di astrazione superiore rispetto a quello di un `CAsyncSocket` oggetto.  
  
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
|[CSocket::CancelBlockingCall](#cancelblockingcall)|Annulla una chiamata di blocco che è attualmente in corso.|  
|[CSocket::Create](#create)|Crea un socket.|  
|[CSocket::FromHandle](#fromhandle)|Restituisce un puntatore a un `CSocket` oggetto, dato un **SOCKET** gestire.|  
|[CSocket::IsBlocking](#isblocking)|Determina se una chiamata di blocco è in corso.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocket:: OnMessagePending](#onmessagepending)|Chiamata per elaborare i messaggi in sospeso in attesa di una chiamata di blocco per il completamento.|  
  
## <a name="remarks"></a>Note  
 `CSocket`funziona con le classi `CSocketFile` e `CArchive` per gestire l'invio e ricezione dei dati.  
  
 Oggetto `CSocket` oggetto fornisce inoltre il blocco, che sono essenziali per il funzionamento sincrono di `CArchive`. Il blocco di funzioni, ad esempio `Receive`, `Send`, `ReceiveFrom`, `SendTo`, e `Accept` (tutti ereditato da `CAsyncSocket`), non restituiscono un `WSAEWOULDBLOCK` errore in `CSocket`. Al contrario, queste funzioni attendere il completamento dell'operazione. Inoltre, la chiamata originale verrà terminato con l'errore `WSAEINTR` se `CancelBlockingCall` viene chiamato durante una di queste funzioni è il blocco.  
  
 Per utilizzare un `CSocket` oggetto, chiamare il costruttore, quindi chiamare `Create` per creare l'oggetto sottostante `SOCKET` handle (tipo `SOCKET`). I parametri predefiniti di `Create` creare un socket di flusso, ma se non si sta utilizzando il socket con un `CArchive` oggetto, è possibile specificare un parametro per creare invece un socket di datagramma, o il binding a una porta specifica per creare un socket server. Connettersi a un socket client utilizzando `Connect` sul lato client e `Accept` sul lato server. Quindi creare un `CSocketFile` dell'oggetto e associarlo al `CSocket` oggetto di `CSocketFile` costruttore. Successivamente, creare un `CArchive` oggetto per l'invio e uno per la ricezione dei dati (se necessario), quindi associare con il `CSocketFile` oggetto di `CArchive` costruttore. Una volta completate le comunicazioni, eliminare il `CArchive`, `CSocketFile`, e `CSocket` oggetti. Il `SOCKET` tipo di dati è descritto nell'articolo [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md).  
  
 Quando si utilizza `CArchive` con `CSocketFile` e `CSocket`, si potrebbe verificarsi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. Poiché Windows sockets utilizzare una sola chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per FD_READ. Se si verifica un FD_READ quando non sono presenti dati per la lettura, l'applicazione si blocca. Se non si verifica mai FD_READ un'altra, l'applicazione smette di comunicazione attraverso il socket.  
  
 È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe di messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete, in genere 1096 almeno byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere che tutti i dati da ricevere e avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che dichiara la classe in un' posizione nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread n.&4;](../../mfc/reference/codesnippet/cpp/csocket-class_1.cpp)]  
  
> [!NOTE]
>  Quando l'utilizzo di MFC socket in thread secondari in un'applicazione MFC collegata staticamente, è necessario chiamare `AfxSocketInit` in ogni thread che utilizza i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
 Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), [Windows Sockets: funzionamento dei socket con archivi lavoro](../../mfc/windows-sockets-how-sockets-with-archives-work.md), [Windows Sockets: sequenza di operazioni](../../mfc/windows-sockets-sequence-of-operations.md), [Windows Sockets: esempio di socket Using Archives](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAsyncSocket](../../mfc/reference/casyncsocket-class.md)  
  
 `CSocket`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxSock  
  
##  <a name="a-nameattacha--csocketattach"></a><a name="attach"></a>CSocket::Attach  
 Chiamare questa funzione membro per collegare il `hSocket` handle per un `CSocket` oggetto.  
  
```  
BOOL Attach(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle per un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 Il **SOCKET** handle viene archiviato l'oggetto [m_hSocket](../../mfc/reference/casyncsocket-class.md#m_hsocket) (membro dati).  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCSocketThread n.&1;](../../mfc/reference/codesnippet/cpp/csocket-class_2.h)]  
  
 [!code-cpp[NVC_MFCSocketThread n.&2;](../../mfc/reference/codesnippet/cpp/csocket-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCSocketThread n.&3;](../../mfc/reference/codesnippet/cpp/csocket-class_4.cpp)]  
  
##  <a name="a-namecancelblockingcalla--csocketcancelblockingcall"></a><a name="cancelblockingcall"></a>CSocket::CancelBlockingCall  
 Chiamare questa funzione membro per annullare una chiamata di blocco in corso.  
  
```  
void CancelBlockingCall();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di annullare qualsiasi operazione di blocco in sospeso per il socket. La chiamata di blocco originale terminerà presto con l'errore **WSAEINTR**.  
  
 Nel caso di un blocco **Connect** operazione, l'implementazione di Windows Sockets verrà interrotta la chiamata di blocco non appena possibile, ma potrebbe non essere possibile per le risorse di socket di essere rilasciata fino a quando la connessione è completata (e quindi reimpostata) o scaduto. Questa condizione potrebbe essere evidente solo se l'applicazione tenta immediatamente di aprire un nuovo socket (se non sono disponibili sockets) o per la connessione per lo stesso peer.  
  
 Annullare qualsiasi operazione diversa da **Accept** possono lasciare il socket in uno stato indeterminato. Se un'applicazione Annulla un'operazione di blocco su un socket, l'unica operazione che l'applicazione può dipendere in grado di eseguire nel socket è una chiamata a **Chiudi**, anche se altre operazioni potrebbero funzionare in alcune implementazioni di Windows Sockets. Se lo si desidera massima portabilità dell'applicazione, è necessario fare attenzione a non dipende da operazioni dopo l'annullamento.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-namecreatea--csocketcreate"></a><a name="create"></a>CSocket::Create  
 Chiamare il **crea** funzione membro dopo la costruzione di un oggetto socket per creare il socket di Windows e collegarlo.  
  
```  
BOOL Create(
    UINT nSocketPort = 0,  
    int nSocketType = SOCK_STREAM,  
    LPCTSTR lpszSocketAddress = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nSocketPort`  
 Una porta specifica da utilizzare con i socket, oppure 0 se si desidera MFC per selezionare una porta.  
  
 `nSocketType`  
 **SOCK_STREAM** o **SOCK_DGRAM**.  
  
 `lpszSocketAddress`  
 Un puntatore a una stringa contenente l'indirizzo di rete del socket connesso, un numero separato da punti, ad esempio "128.56.22.8". Il passaggio di **NULL** la stringa per questo parametro indica il **CSocket** istanza deve essere in ascolto dell'attività dei client su tutte le interfacce di rete.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario, 0 e un codice di errore specifico può essere recuperato chiamando `GetLastError`.  
  
### <a name="remarks"></a>Note  
 **Creare** chiama quindi **binding** per associare il socket all'indirizzo specificato. Sono supportati i seguenti tipi di socket:  
  
- **SOCK_STREAM** fornisce sequenziata, flussi di byte affidabili, bidirezionale, basato sulla connessione. Usa protocollo TCP (Transmission Control) per la famiglia di indirizzi Internet.  
  
- **SOCK_DGRAM** supporta datagrammi, che sono senza connessione, non affidabili, buffer di lunghezza massima (in genere di dimensioni ridotte) fissa. Usa protocollo UDP (User Datagram) per la famiglia di indirizzi Internet. Per utilizzare questa opzione, non è necessario utilizzare il socket con un `CArchive` oggetto.  
  
    > [!NOTE]
    >  Il **Accept** membro funzione accetta un riferimento a un nuovo oggetto vuoto `CSocket` oggetto come parametro. È necessario costruire l'oggetto prima di chiamare **Accept**. Tenere presente che se l'oggetto socket esce dall'ambito, la connessione verrà terminata. Non chiamare **crea** per questo nuovo oggetto socket.  
  
 Per ulteriori informazioni sui socket di datagramma e flusso, vedere gli articoli [Windows Sockets: sfondo](../../mfc/windows-sockets-background.md), [Windows Sockets: porte e indirizzi Socket](../../mfc/windows-sockets-ports-and-socket-addresses.md), e [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-namecsocketa--csocketcsocket"></a><a name="csocket"></a>CSocket::CSocket  
 Costruisce un oggetto `CSocket`.  
  
```  
CSocket();
```  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione, è necessario chiamare il **crea** funzione membro.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-namefromhandlea--csocketfromhandle"></a><a name="fromhandle"></a>CSocket::FromHandle  
 Restituisce un puntatore a un `CSocket` oggetto.  
  
```  
static CSocket* PASCAL FromHandle(SOCKET hSocket);
```  
  
### <a name="parameters"></a>Parametri  
 `hSocket`  
 Contiene un handle per un socket.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CSocket` oggetto, o **NULL** se è presente alcun `CSocket` oggetto associato a `hSocket`.  
  
### <a name="remarks"></a>Note  
 Quando viene fornito un **SOCKET** se gestire un `CSocket` all'handle dell'oggetto non è connesso, la funzione membro restituisce **NULL** e non crea un oggetto temporaneo.  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-nameisblockinga--csocketisblocking"></a><a name="isblocking"></a>CSocket::IsBlocking  
 Chiamare questa funzione membro per determinare se una chiamata di blocco è in corso.  
  
```  
BOOL IsBlocking();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il socket è bloccato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
##  <a name="a-nameonmessagependinga--csocketonmessagepending"></a><a name="onmessagepending"></a>CSocket:: OnMessagePending  
 Eseguire l'override di questa funzione membro per cercare determinati messaggi da Windows e rispondere ad essi il socket.  
  
```  
virtual BOOL OnMessagePending();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa è un' sottoponibile a override.  
  
 Il framework chiama `OnMessagePending` mentre il socket è visualizzazione messaggi di Windows per dare all'utente la possibilità di gestire i messaggi di particolare interesse per l'applicazione. Per esempi di come è possibile utilizzare `OnMessagePending`, vedere l'articolo [Windows Sockets: derivazione dalle classi Socket](../../mfc/windows-sockets-deriving-from-socket-classes.md).  
  
 Per ulteriori informazioni, vedere [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Classe CSocketFile](../../mfc/reference/csocketfile-class.md)

