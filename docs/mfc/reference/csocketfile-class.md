---
title: Classe CSocketFile | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSocketFile
- AFXSOCK/CSocketFile
- AFXSOCK/CSocketFile::CSocketFile
dev_langs:
- C++
helpviewer_keywords:
- CSocketFile [MFC], CSocketFile
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4f1198c85b8366d7dec4d38d002b65468c38347c
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121729"
---
# <a name="csocketfile-class"></a>Classe CSocketFile
Oggetto `CFile` utilizzato per l'invio e la ricezione di dati su una rete mediante Windows Sockets.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSocketFile : public CFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSocketFile::CSocketFile](#csocketfile)|Costruisce un oggetto `CSocketFile`.|  
  
## <a name="remarks"></a>Note  
 È possibile collegare il `CSocketFile` dell'oggetto a un `CSocket` oggetto per questo scopo. È anche possibile e in genere, collegare il `CSocketFile` dell'oggetto a un `CArchive` oggetto per semplificare l'invio e ricezione di dati mediante la serializzazione di MFC.  
  
 Per serializzare i dati (trasmissione), viene inserito nell'archivio, che chiama `CSocketFile` funzioni membro per scrivere i dati per il `CSocket` oggetto. Per deserializzare (ricezione), dati estrarre dall'archivio. In questo modo, l'archivio di chiamare `CSocketFile` le funzioni membro per leggere i dati di `CSocket` oggetto.  
  
> [!TIP]
>  Oltre a utilizzare `CSocketFile` come descritto qui, è possibile utilizzare, come un oggetto file autonomo, esattamente come accade con `CFile`, la classe di base. È anche possibile usare `CSocketFile` con le funzioni di serializzazione MFC basate su archivio. Poiché `CSocketFile` non supporta tutte `CFile`della funzionalità, alcune predefinite MFC serializzare le funzioni non sono compatibili con `CSocketFile`. Questo vale in particolare il `CEditView` classe. Non è consigliabile provare a serializzare `CEditView` dati tramite un `CArchive` oggetto connesso a un `CSocketFile` utilizzando `CEditView::SerializeRaw`; utilizzare `CEditView::Serialize` invece. Il `SerializeRaw` funzione prevede l'oggetto di file di funzioni, ad esempio `Seek`, che `CSocketFile` non esiste.  
  
 Quando si usa `CArchive` con `CSocketFile` e `CSocket`, si potrebbe verificarsi una situazione in cui `CSocket::Receive` entra in un ciclo (da `PumpMessages(FD_READ)`) in attesa per il numero di byte. In questo modo Windows Socket offrono una sola chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per ogni FD_READ. Se viene visualizzato un FD_READ quando non sono presenti dati da leggere, si blocca l'applicazione. Se non si verifica mai FD_READ un'altra, l'applicazione si interrompe la comunicazione tramite socket.  
  
 È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata `CAsyncSocket::IOCtl(FIONREAD, ...)` prima di chiamare il `Serialize` metodo della classe messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete in genere 1096 almeno byte). Se le dimensioni dei dati disponibili sono inferiore al necessario, attendere che tutti i dati da ricevere e avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che dichiara la classe in un' posizione nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread#4](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]  
  
 Per altre informazioni, vedere [Windows Sockets di MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), nonché [API di Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `CSocketFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxSock  
  
##  <a name="csocketfile"></a>  CSocketFile::CSocketFile  
 Costruisce un oggetto `CSocketFile`.  
  
```  
explicit CSocketFile(
    CSocket* pSocket,  
    BOOL bArchiveCompatible = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pSocket*  
 Il socket a connettere il `CSocketFile` oggetto.  
  
 *bArchiveCompatible*  
 Specifica se l'oggetto file è per l'utilizzo con un `CArchive` oggetto. Passaggio FALSE solo se si desidera utilizzare il `CSocketFile` dell'oggetto in modo autonomo come si farebbe autonoma `CFile` oggetto, con alcune limitazioni. Questo flag viene modificato il modo in cui `CArchive` oggetto connesso al `CSocketFile` oggetto gestisce il buffer per la lettura.  
  
### <a name="remarks"></a>Note  
 Il distruttore dell'oggetto viene annullata l'associazione dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.  
  
> [!NOTE]
>  Un `CSocketFile` può essere utilizzato anche come un file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` del costruttore *bArchiveCompatible* parametro è TRUE. Specifica che l'oggetto file sia per l'utilizzo con un archivio. Per usare l'oggetto file senza un archivio, passare in FALSE il *bArchiveCompatible* parametro.  
  
 In modalità "archivio compatible" un `CSocketFile` oggetto garantisce prestazioni migliori e riduce il rischio che un "deadlock". Si verifica un deadlock quando entrambi i socket di invio e ricezione sono in attesa in tra loro o per una risorsa comune. Questo problema può verificarsi se il `CArchive` oggetto collaborato con il `CSocketFile` esattamente come è visualizzato con un `CFile` oggetto. Con `CFile`, l'archivio può supporre che se riceve un minor numero di byte quello richiesto, è stata raggiunta la fine del file.  
  
 Con `CSocketFile`, tuttavia, dati sono basato su messaggi; il buffer può contenere più messaggi, pertanto ricezione inferiore al numero di byte richiesto non implica la fine del file. L'applicazione non è bloccata in questo caso come farebbe con `CFile`, e può continuare a leggere i messaggi dal buffer fino a quando il buffer è vuoto. Il [CArchive::IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) funzione è utile per monitorare lo stato del buffer dell'archivio in questo caso.  
  
 Per ulteriori informazioni sull'utilizzo di `CSocketFile`, vedere gli articoli [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: esempio di socket usando gli archivi](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [Classe CSocket](../../mfc/reference/csocket-class.md)
