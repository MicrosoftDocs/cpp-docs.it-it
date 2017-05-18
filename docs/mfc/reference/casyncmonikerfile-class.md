---
title: Classe CAsyncMonikerFile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile::CAsyncMonikerFile
- AFXOLE/CAsyncMonikerFile::Close
- AFXOLE/CAsyncMonikerFile::GetBinding
- AFXOLE/CAsyncMonikerFile::GetFormatEtc
- AFXOLE/CAsyncMonikerFile::Open
- AFXOLE/CAsyncMonikerFile::CreateBindStatusCallback
- AFXOLE/CAsyncMonikerFile::GetBindInfo
- AFXOLE/CAsyncMonikerFile::GetPriority
- AFXOLE/CAsyncMonikerFile::OnDataAvailable
- AFXOLE/CAsyncMonikerFile::OnLowResource
- AFXOLE/CAsyncMonikerFile::OnProgress
- AFXOLE/CAsyncMonikerFile::OnStartBinding
- AFXOLE/CAsyncMonikerFile::OnStopBinding
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], asynchronous
- OLE controls [C++], asynchronous
- monikers [C++], MFC
- asynchronous controls [C++]
- CAsyncMonikerFile class
- IMoniker interface, binding
ms.assetid: 17378b66-a49a-4b67-88e3-7756ad26a2fc
caps.latest.revision: 23
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 47ba3137b5d0d38aa59e9d627101de8350eebd50
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="casyncmonikerfile-class"></a>Classe CAsyncMonikerFile
Fornisce la funzionalità per l'utilizzo di moniker asincroni in controlli ActiveX (precedentemente controlli OLE).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAsyncMonikerFile : public CMonikerFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::CAsyncMonikerFile](#casyncmonikerfile)|Costruisce un oggetto `CAsyncMonikerFile`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::Close](#close)|Chiude e rilascia tutte le risorse.|  
|[CAsyncMonikerFile::GetBinding](#getbinding)|Recupera un puntatore per il trasferimento asincrono di associazione.|  
|[CAsyncMonikerFile::GetFormatEtc](#getformatetc)|Recupera il formato dei dati nel flusso.|  
|[CAsyncMonikerFile::Open](#open)|Apre un file in modo asincrono.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAsyncMonikerFile::CreateBindStatusCallback](#createbindstatuscallback)|Crea un oggetto COM che implementa `IBindStatusCallback`.|  
|[CAsyncMonikerFile::GetBindInfo](#getbindinfo)|Chiamato dalla libreria di sistema OLE per richiedere informazioni sul tipo di associazione da creare.|  
|[CAsyncMonikerFile::GetPriority](#getpriority)|Chiamato dalla libreria di sistema OLE per ottenere la priorità dell'associazione.|  
|[CAsyncMonikerFile::OnDataAvailable](#ondataavailable)|Chiamata eseguita per fornire i dati appena sarà disponibile al client durante le operazioni di associazione asincrona.|  
|[CAsyncMonikerFile::OnLowResource](#onlowresource)|Chiamata eseguita quando le risorse sono insufficienti.|  
|[CAsyncMonikerFile::OnProgress](#onprogress)|Chiamato per indicare lo stato del processo di download dati.|  
|[CAsyncMonikerFile::OnStartBinding](#onstartbinding)|Chiamato durante l'avvio dell'associazione.|  
|[CAsyncMonikerFile::OnStopBinding](#onstopbinding)|Chiamato quando il trasferimento asincrono è stato arrestato.|  
  
## <a name="remarks"></a>Note  
 Derivato da [CMonikerFile](../../mfc/reference/cmonikerfile-class.md), che a sua volta è derivato da [COleStreamFile](../../mfc/reference/colestreamfile-class.md), `CAsyncMonikerFile` utilizza il [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) interfaccia per accedere a qualsiasi flusso di dati in modo asincrono, inclusi il caricamento dei file in modo asincrono da un URL. I file possono essere proprietà relativo al percorso dati dei controlli ActiveX.  
  
 Moniker asincroni vengono utilizzati principalmente in applicazioni abilitate per Internet e i controlli ActiveX per fornire un'interfaccia utente reattiva durante i trasferimenti di file. Un esempio è l'utilizzo di [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md) per fornire proprietà asincrone per i controlli ActiveX. Il `CDataPathProperty` oggetto ripetutamente riceverà un callback per indicare la disponibilità di nuovi dati durante un processo di exchange di proprietà di lunga durata.  
  
 Per ulteriori informazioni sull'utilizzo di moniker asincroni e i controlli ActiveX in applicazioni Internet, vedere gli articoli seguenti:  
  
- [Prime operazioni in Internet: Moniker asincroni](../../mfc/asynchronous-monikers-on-the-internet.md)  
  
- [Prime operazioni in Internet: Controlli ActiveX](../../mfc/activex-controls-on-the-internet.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 [COleStreamFile](../../mfc/reference/colestreamfile-class.md)  
  
 [CMonikerFile](../../mfc/reference/cmonikerfile-class.md)  
  
 `CAsyncMonikerFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="casyncmonikerfile"></a>CAsyncMonikerFile::CAsyncMonikerFile  
 Costruisce un oggetto `CAsyncMonikerFile`.  
  
```  
CAsyncMonikerFile();
```  
  
### <a name="remarks"></a>Note  
 Non crea il `IBindHost` interfaccia. `IBindHost`viene utilizzata solo se si fornisce nel **aprire** funzione membro.  
  
 Per una descrizione del `IBindHost` interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="close"></a>CAsyncMonikerFile::Close  
 Chiamare questa funzione per chiudere e rilasciare tutte le risorse.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 Può essere chiamato su file non aperti o già chiusi.  
  
##  <a name="createbindstatuscallback"></a>CAsyncMonikerFile::CreateBindStatusCallback  
 Crea un oggetto COM che implementa `IBindStatusCallback`.  
  
```  
virtual IUnknown* CreateBindStatusCallback(IUnknown* pUnkControlling);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkControlling`  
 Un puntatore per il controllo sconosciuto (esterna **IUnknown**) o **NULL** se aggregazione non è in uso.  
  
### <a name="return-value"></a>Valore restituito  
 Se `pUnkControlling` non **NULL**, la funzione restituisce un puntatore all'oggetto **IUnknown** in un nuovo oggetto COM che supporta `IBindStatusCallback`. Se `pUnkControlling` è **NULL**, la funzione restituisce un puntatore a un **IUnknown** in un nuovo oggetto COM che supporta `IBindStatusCallback`.  
  
### <a name="remarks"></a>Note  
 `CAsyncMonikerFile`richiede un oggetto COM che implementa `IBindStatusCallback`. MFC implementa tale oggetto ed è aggregabile. È possibile eseguire l'override `CreateBindStatusCallback` per restituire un oggetto COM. L'oggetto COM può aggregare dell'implementazione MFC chiamando `CreateBindStatusCallback` con il controllo sconosciuto dell'oggetto COM. Oggetti COM implementati utilizzando il `CCmdTarget` supporto COM è possibile recuperare il controllo usando sconosciuto **CCmdTarget::GetControllingUnknown**.  
  
 In alternativa, l'oggetto COM può delegare all'implementazione MFC chiamando **CreateBindStatusCallback (NULL)**.  
  
 [CAsyncMonikerFile::Open](#open) chiamate `CreateBindStatusCallback`.  
  
 Per ulteriori informazioni sull'associazione asincrona e moniker asincroni, vedere il [IBindStatusCallback](http://msdn.microsoft.com/library/ie/ms775060) interfaccia e [come associazione asincrona e archiviazione lavoro](http://msdn.microsoft.com/library/windows/desktop/aa379152). Per una discussione di aggregazione, vedere [aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558). Tutti e tre gli argomenti presenti il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getbindinfo"></a>CAsyncMonikerFile::GetBindInfo  
 Chiamato dal client di un moniker asincroni per indicare il moniker asincroni in che modo desidera associare.  
  
```  
virtual DWORD GetBindInfo() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Recupera le impostazioni per **IBindStatusCallBack**. Per una descrizione del `IBindStatusCallback` interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita imposta l'associazione in modo asincrono, utilizzare un supporto di archiviazione (un flusso) e come utilizzare il modello push di dati. Eseguire l'override di questa funzione se si desidera modificare il comportamento dell'associazione.  
  
 Uno dei motivi per eseguire questa operazione sarebbe per eseguire il binding utilizzando il modello pull di dati anziché il modello push di dati. In un modello di pull di dati, l'operazione di binding di unità di client e il moniker fornisce solo i dati al client quando viene letto. In un modello push di dati, il moniker unità operazione asincrona e notifica continuamente al client ogni volta che sono disponibili nuovi dati.  
  
##  <a name="getbinding"></a>CAsyncMonikerFile::GetBinding  
 Chiamare questa funzione per recuperare un puntatore per il trasferimento asincrono di associazione.  
  
```  
IBinding* GetBinding() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `IBinding` interfaccia fornita quando inizia trasferimento asincrono. Restituisce **NULL** se per qualsiasi motivo il trasferimento può essere resa in modo asincrono.  
  
### <a name="remarks"></a>Note  
 Ciò consente di controllare il trasferimento dei dati processo tramite il `IBinding` interfaccia, ad esempio, con **IBinding::Abort**, **IBinding::Pause**, e **IBinding::Resume**.  
  
 Per una descrizione del `IBinding` interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getformatetc"></a>CAsyncMonikerFile::GetFormatEtc  
 Chiamare questa funzione per recuperare il formato dei dati nel flusso.  
  
```  
FORMATETC* GetFormatEtc() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla struttura di Windows [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) per il flusso aperto. Restituisce **NULL** se il moniker non è stato associato, se non è asincrona, o se l'operazione asincrona non è ancora iniziata.  
  
##  <a name="getpriority"></a>CAsyncMonikerFile::GetPriority  
 Chiamato dal client di un moniker asincroni avvia il processo di associazione ricevere la priorità assegnata al thread per l'operazione di associazione.  
  
```  
virtual LONG GetPriority() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La priorità in cui il trasferimento asincrono avrà luogo. Uno dei flag di priorità di thread standard: **THREAD_PRIORITY_ABOVE_NORMAL**, **THREAD_PRIORITY_BELOW_NORMAL**, **THREAD_PRIORITY_HIGHEST**, **THREAD_PRIORITY_IDLE**, **THREAD_PRIORITY_LOWEST**, **THREAD_PRIORITY_NORMAL**, e **THREAD_PRIORITY_TIME_CRITICAL**. Vedere la funzione Windows [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) per una descrizione di questi valori.  
  
### <a name="remarks"></a>Note  
 `GetPriority`non deve essere chiamato direttamente. **THREAD_PRIORITY_NORMAL** viene restituito dall'implementazione predefinita.  
  
##  <a name="ondataavailable"></a>CAsyncMonikerFile::OnDataAvailable  
 Chiama un moniker asincroni `OnDataAvailable` per fornire dati per il client appena sarà disponibile, associare le operazioni durante asincrona.  
  
```  
virtual void OnDataAvailable(DWORD dwSize, DWORD bscfFlag);
```  
  
### <a name="parameters"></a>Parametri  
 `dwSize`  
 Il tempo cumulativo (in byte) disponibili dopo l'inizio dell'associazione dati. Può essere zero, che indica che la quantità di dati non è pertinente per l'operazione o che è diventato disponibile alcun periodo specifico.  
  
 *bscfFlag*  
 Oggetto **BSCF** valore di enumerazione. Può essere uno o più dei seguenti valori:  
  
- **BSCF_FIRSTDATANOTIFICATION** identifica la prima chiamata a `OnDataAvailable` per un'operazione di associazione specificato.  
  
- **BSCF_INTERMEDIATEDATANOTIFICATION** identifica una chiamata intermedia a `OnDataAvailable` per un'operazione di associazione.  
  
- **BSCF_LASTDATANOTIFICATION** identifica l'ultima chiamata a `OnDataAvailable` per un'operazione di associazione.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione non esegue alcuna operazione. Vedere l'esempio seguente per un esempio di implementazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWinInet n. 5](../../mfc/codesnippet/cpp/casyncmonikerfile-class_1.cpp)]  
  
##  <a name="onlowresource"></a>CAsyncMonikerFile::OnLowResource  
 Chiamato dal moniker quando le risorse sono insufficienti.  
  
```  
virtual void OnLowResource();
```  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita chiama `GetBinding( )-> Abort( )`.  
  
##  <a name="onprogress"></a>CAsyncMonikerFile::OnProgress  
 Chiamato dal moniker ripetutamente per indicare lo stato corrente di questa operazione di associazione, in genere a intervalli regolari durante un'operazione di lunga durata.  
  
```  
virtual void OnProgress(
    ULONG ulProgress,  
    ULONG ulProgressMax,  
    ULONG ulStatusCode,  
    LPCTSTR szStatusText);
```  
  
### <a name="parameters"></a>Parametri  
 `ulProgress`  
 Indica lo stato corrente dell'operazione di binding rispetto al valore massimo previsto indicato nel `ulProgressMax`.  
  
 `ulProgressMax`  
 Indica il valore massimo previsto di `ulProgress` per la durata delle chiamate a `OnProgress` per questa operazione.  
  
 `ulStatusCode`  
 Fornisce informazioni aggiuntive sullo stato dell'operazione di associazione. I valori validi vengono prelevati i `BINDSTATUS` enumerazione. Per i valori possibili, vedere la sezione Osservazioni.  
  
 `szStatusText`  
 Informazioni sullo stato di avanzamento corrente, a seconda del valore di `ulStatusCode`. Per i valori possibili, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 I valori possibili per `ulStatusCode` (e `szStatusText` per ogni valore) sono:  
  
 **BINDSTATUS_FINDINGRESOURCE**  
 L'operazione di binding sta individuando la risorsa che contiene l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato della risorsa di cui eseguire la ricerca per (ad esempio, "www.microsoft.com").  
  
 **BINDSTATUS_CONNECTING**  
 Operazione di associazione si connette a risorse che contiene l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato della risorsa a cui si è connessi (ad esempio, un indirizzo IP).  
  
 **BINDSTATUS_SENDINGREQUEST**  
 L'operazione di binding richiede l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato dell'oggetto (ad esempio, un nome file).  
  
 **BINDSTATUS_REDIRECTING**  
 L'operazione di binding è stato reindirizzato a una posizione diversa dei dati. Il `szStatusText` fornisce il nome visualizzato della nuova posizione dei dati.  
  
 **BINDSTATUS_USINGCACHEDCOPY**  
 L'operazione di binding sta recuperando l'archiviazione o l'oggetto richiesto da una copia memorizzata nella cache. The `szStatusText` is **NULL**.  
  
 **BINDSTATUS_BEGINDOWNLOADDATA**  
 L'operazione di binding ha iniziato a ricevere l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato del percorso dei dati.  
  
 **BINDSTATUS_DOWNLOADINGDATA**  
 L'operazione di binding continua a ricevere l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato del percorso dei dati.  
  
 **BINDSTATUS_ENDDOWNLOADDATA**  
 L'operazione di binding ha completato la ricezione l'oggetto o archiviazione da associare. Il `szStatusText` fornisce il nome visualizzato del percorso dei dati.  
  
 **BINDSTATUS_CLASSIDAVAILABLE**  
 Un'istanza dell'oggetto da associare alla quasi viene creato. Il `szStatusText` fornisce il CLSID del nuovo oggetto in formato stringa, consentendo al client la possibilità di annullare l'operazione di associazione, se lo si desidera.  
  
##  <a name="onstartbinding"></a>CAsyncMonikerFile::OnStartBinding  
 Eseguire l'override di questa funzione nelle classi derivate per eseguire azioni durante l'avvio dell'associazione.  
  
```  
virtual void OnStartBinding();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene richiamata dal moniker. L'implementazione predefinita non esegue alcuna operazione.  
  
##  <a name="onstopbinding"></a>CAsyncMonikerFile::OnStopBinding  
 Chiamato dal moniker alla fine dell'operazione di associazione.  
  
```  
virtual void OnStopBinding(HRESULT hresult, LPCTSTR szError);
```  
  
### <a name="parameters"></a>Parametri  
 `hresult`  
 Un `HRESULT` che rappresenta l'errore o un valore di avviso.  
  
 *szErrort*  
 Una stringa di caratteri che descrive l'errore.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per eseguire azioni quando il trasferimento viene interrotto. Per impostazione predefinita, la funzione rilascia `IBinding`.  
  
 Per una descrizione del `IBinding` interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="open"></a>CAsyncMonikerFile::Open  
 Chiamare questa funzione membro per aprire un file in modo asincrono.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszURL,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    IMoniker* pMoniker,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    LPCTSTR lpszURL,
    IBindHost* pBindHost,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    IMoniker* pMoniker,
    IBindHost* pBindHost,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    LPCTSTR lpszURL,
    IServiceProvider* pServiceProvider,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    IMoniker* pMoniker,
    IServiceProvider* pServiceProvider,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    LPCTSTR lpszURL,
    IUnknown* pUnknown,
    CFileException* pError = NULL);
 
virtual BOOL Open(
    IMoniker* pMoniker,
    IUnknown* pUnknown,
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszURL`  
 Puntatore a file da aprire in modo asincrono. Il file può essere qualsiasi URL o un nome file valido.  
  
 `pError`  
 Puntatore alle eccezioni di file. In caso di errore, imposterà la causa.  
  
 `pMoniker`  
 Un puntatore all'interfaccia di moniker asincroni `IMoniker`, un moniker preciso che è la combinazione del moniker del documento, che è possibile recuperare con **IOleClientSite::GetMoniker (** *OLEWHICHMK_CONTAINER* **)**e un moniker creato dal nome del percorso. Il controllo può usare il moniker per l'associazione, ma non il moniker che deve salvare il controllo.  
  
 *pBindHost*  
 Un puntatore al `IBindHost` interfaccia che verrà utilizzato per creare il moniker da un percorso relativo potenzialmente. Se l'host del binding non è valido o non fornisce un moniker, la chiamata per impostazione predefinita **aprire (** `lpszFileName` **,**`pError`**)**. Per una descrizione del `IBindHost` interfaccia, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `pServiceProvider`  
 Puntatore all'interfaccia `IServiceProvider`. Se il provider del servizio non è valido o non riesce a fornire il servizio per `IBindHost`, per impostazione predefinita la chiamata **aprire (** `lpszFileName` **,**`pError`**)**.  
  
 *pUnknown*  
 Un puntatore al **IUnknown** interfaccia. Se `IServiceProvider` viene trovato, le query di funzione per `IBindHost`. Se il provider del servizio non è valido o non riesce a fornire il servizio per `IBindHost`, per impostazione predefinita la chiamata **aprire (** `lpszFileName` **,**`pError`**)**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il file viene aperto correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa chiamata avvia il processo di associazione.  
  
 È possibile utilizzare un URL o un nome di file per il `lpszURL` parametro. Ad esempio:  
  
 [!code-cpp[6 NVC_MFCWinInet](../../mfc/codesnippet/cpp/casyncmonikerfile-class_2.cpp)]  
  
 - oppure -  
  
 [!code-cpp[NVC_MFCWinInet #7](../../mfc/codesnippet/cpp/casyncmonikerfile-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMonikerFile](../../mfc/reference/cmonikerfile-class.md)   
 [Classe CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md)

