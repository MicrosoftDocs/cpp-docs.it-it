---
title: Classe CSocketFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSocketFile
dev_langs:
- C++
helpviewer_keywords:
- networks [C++], archive
- serialization [C++], network
- networks [C++], serializing to
- CSocketFile class
- archives [C++], network
- SOCKET handle
ms.assetid: 7924c098-5f72-40d6-989d-42800a47958f
caps.latest.revision: 24
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
ms.openlocfilehash: 6ca331c07e0a9fc48f152042fcccd5c38e743ccf
ms.lasthandoff: 02/24/2017

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
  
 Per serializzare i dati (invio), viene inserito nell'archivio, che chiama `CSocketFile` le funzioni membro per scrivere i dati di `CSocket` oggetto. Per deserializzare (ricezione), dati estrarre dall'archivio. In questo modo l'archivio di chiamare `CSocketFile` le funzioni membro per la lettura dei dati di `CSocket` oggetto.  
  
> [!TIP]
>  Oltre a utilizzare `CSocketFile` come descritto di seguito, è possibile utilizzare, come un oggetto file autonomi, proprio come con `CFile`, della relativa classe base. È inoltre possibile utilizzare `CSocketFile` con le funzioni di serializzazione MFC basate su archivio. Poiché `CSocketFile` non supporta tutti i `CFile`di serializzare funzionalità di alcuni MFC per impostazione predefinita, le funzioni non sono compatibili con `CSocketFile`. Ciò vale in particolare la `CEditView` classe. Non tentare di serializzare `CEditView` dati tramite un `CArchive` oggetto associato a un `CSocketFile` utilizzando `CEditView::SerializeRaw`; utilizzare **CEditView::** invece. Il `SerializeRaw` funzione prevede l'oggetto file di funzioni, ad esempio `Seek`, che `CSocketFile` non dispone.  
  
 Quando si utilizza `CArchive` con `CSocketFile` e `CSocket`, si potrebbe verificarsi una situazione in cui **CSocket::Receive** entra in un ciclo (da **PumpMessages(FD_READ)**) in attesa per il numero di byte. Poiché Windows sockets utilizzare una sola chiamata di ricezione per ricevere una notifica FD_READ, ma `CSocketFile` e `CSocket` consentono più chiamate di ricezione per FD_READ. Se si verifica un FD_READ quando non sono presenti dati per la lettura, l'applicazione si blocca. Se non si verifica mai FD_READ un'altra, l'applicazione smette di comunicazione attraverso il socket.  
  
 È possibile risolvere questo problema, come indicato di seguito. Nel `OnReceive` metodo della classe socket, chiamata **CAsyncSocket::IOCtl (FIONREAD,...) ** prima di chiamare il `Serialize` metodo della classe di messaggio quando i dati previsti per essere letti dal socket superano le dimensioni di un pacchetto TCP (unità massima di trasmissione del supporto di rete, in genere 1096 almeno byte). Se la dimensione dei dati disponibili è inferiore al necessario, attendere che tutti i dati da ricevere e avviare l'operazione di lettura.  
  
 Nell'esempio seguente, `m_dwExpected` è il numero approssimativo di byte che l'utente si aspetta di ricevere. Si presuppone che dichiara la classe in un' posizione nel codice.  
  
 [!code-cpp[NVC_MFCSocketThread n.&4;](../../mfc/reference/codesnippet/cpp/csocketfile-class_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Windows Sockets in MFC](../../mfc/windows-sockets-in-mfc.md), [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md), nonché [API Windows Sockets 2](http://msdn.microsoft.com/library/windows/desktop/ms740673).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `CSocketFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AfxSock  
  
##  <a name="a-namecsocketfilea--csocketfilecsocketfile"></a><a name="csocketfile"></a>CSocketFile::CSocketFile  
 Costruisce un oggetto `CSocketFile`.  
  
```  
explicit CSocketFile(
    CSocket* pSocket,  
    BOOL bArchiveCompatible = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pSocket`  
 Il socket a cui connettersi il `CSocketFile` oggetto.  
  
 `bArchiveCompatible`  
 Specifica se l'oggetto file per l'utilizzo con un `CArchive` oggetto. Passare **FALSE** solo se si desidera utilizzare il `CSocketFile` l'oggetto in modo autonomo, come si farebbe autonoma `CFile` oggetto, con alcune limitazioni. Questo flag viene modificato il `CArchive` oggetto associato al `CSocketFile` gestisce il buffer per la lettura.  
  
### <a name="remarks"></a>Note  
 Il distruttore dell'oggetto viene annullata l'associazione dall'oggetto socket quando l'oggetto esce dall'ambito o viene eliminato.  
  
> [!NOTE]
>  Oggetto `CSocketFile` può anche essere utilizzato come un file (limitato) senza un `CArchive` oggetto. Per impostazione predefinita, il `CSocketFile` del costruttore `bArchiveCompatible` parametro **TRUE**. Specifica che l'oggetto file sia per l'utilizzo con un archivio. Per utilizzare l'oggetto file senza un archivio, passare a **FALSE** nel `bArchiveCompatible` parametro.  
  
 In modalità "archivio compatibile" un `CSocketFile` oggetto garantisce prestazioni migliori e riduce il rischio di "deadlock". Un deadlock si verifica quando entrambi i socket di invio e ricezione sono in attesa una di altra, o per una risorsa comune. Questa situazione può verificarsi se il `CArchive` oggetto lavorato con il `CSocketFile` esattamente come è visualizzato con un `CFile` oggetto. Con `CFile`, l'archivio può supporre che se riceve un numero di byte quello richiesto, è stata raggiunta la fine del file.  
  
 Con `CSocketFile`, tuttavia, dati sono basato su messaggi; il buffer può contenere più messaggi, pertanto ricevere inferiore al numero di byte richiesti non implica la fine del file. L'applicazione non si blocca in questo caso come potrebbe accadere con `CFile`, e può continuare a leggere i messaggi dal buffer finché il buffer è vuoto. Il [CArchive::IsBufferEmpty](../../mfc/reference/carchive-class.md#isbufferempty) funzione è utile per monitorare lo stato del buffer dell'archivio in questo caso.  
  
 Per ulteriori informazioni sull'utilizzo di `CSocketFile`, vedere gli articoli [Windows Sockets: utilizzo dei socket con archivi](../../mfc/windows-sockets-using-sockets-with-archives.md) e [Windows Sockets: esempio di socket Using Archives](../../mfc/windows-sockets-example-of-sockets-using-archives.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CAsyncSocket (classe)](../../mfc/reference/casyncsocket-class.md)   
 [CSocket (classe)](../../mfc/reference/csocket-class.md)

