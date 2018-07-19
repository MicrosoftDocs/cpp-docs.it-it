---
title: Classe CBindStatusCallback | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback::CBindStatusCallback
- ATLCTL/ATL::CBindStatusCallback::Download
- ATLCTL/ATL::CBindStatusCallback::GetBindInfo
- ATLCTL/ATL::CBindStatusCallback::GetPriority
- ATLCTL/ATL::CBindStatusCallback::OnDataAvailable
- ATLCTL/ATL::CBindStatusCallback::OnLowResource
- ATLCTL/ATL::CBindStatusCallback::OnObjectAvailable
- ATLCTL/ATL::CBindStatusCallback::OnProgress
- ATLCTL/ATL::CBindStatusCallback::OnStartBinding
- ATLCTL/ATL::CBindStatusCallback::OnStopBinding
- ATLCTL/ATL::CBindStatusCallback::StartAsyncDownload
- ATLCTL/ATL::CBindStatusCallback::m_dwAvailableToRead
- ATLCTL/ATL::CBindStatusCallback::m_dwTotalRead
- ATLCTL/ATL::CBindStatusCallback::m_pFunc
- ATLCTL/ATL::CBindStatusCallback::m_pT
- ATLCTL/ATL::CBindStatusCallback::m_spBindCtx
- ATLCTL/ATL::CBindStatusCallback::m_spBinding
- ATLCTL/ATL::CBindStatusCallback::m_spMoniker
- ATLCTL/ATL::CBindStatusCallback::m_spStream
dev_langs:
- C++
helpviewer_keywords:
- asynchronous data transfer [C++]
- data transfer [C++]
- data transfer [C++], asynchronous
- CBindStatusCallback class
ms.assetid: 0f5da276-6031-4418-b2a9-a4750ef29e77
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a8df8ef2a0846f5ac90a2adfc53fa64da92930f3
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881240"
---
# <a name="cbindstatuscallback-class"></a>Classe CBindStatusCallback
Questa classe implementa l'interfaccia `IBindStatusCallback`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T,
    int nBindFlags = BINDF_ASYNCHRONOUS |   BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>  
class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx
 <T ::_ThreadModel::ThreadModelNoCS>,
    public IBindStatusCallbackImpl<T>
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe che contiene la funzione che verrà richiamata quando vengono ricevuti i dati.  
  
 *nBindFlags*  
 Specifica i flag di binding che sono restituiti da [GetBindInfo](#getbindinfo). L'implementazione predefinita imposta l'associazione in modo asincrono, recupera la versione più recente dell'oggetto dati/e non archivia i dati recuperati nella cache del disco.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::CBindStatusCallback](#cbindstatuscallback)|Costruttore.|  
|[CBindStatusCallback:: ~ CBindStatusCallback](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::Download](#download)|Metodo statico che viene avviato il processo di download, crea una `CBindStatusCallback` oggetto e chiama `StartAsyncDownload`.|  
|[CBindStatusCallback::GetBindInfo](#getbindinfo)|Chiamato dal moniker asincrono per richiedere informazioni sul tipo di associazione da creare.|  
|[CBindStatusCallback::GetPriority](#getpriority)|Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione. Restituisce l'implementazione di ATL `E_NOTIMPL`.|  
|[CBindStatusCallback::OnDataAvailable](#ondataavailable)|Chiamata eseguita per fornire dati per l'applicazione appena sarà disponibile. Legge i dati, quindi chiama la funzione passata a, è possibile utilizzare i dati.|  
|[CBindStatusCallback::OnLowResource](#onlowresource)|Chiamata eseguita quando le risorse sono insufficienti. L'implementazione di ATL restituisce S_OK.|  
|[CBindStatusCallback::OnObjectAvailable](#onobjectavailable)|Chiamato dal moniker asincrono di passare un puntatore a interfaccia oggetto all'applicazione. L'implementazione di ATL restituisce S_OK.|  
|[CBindStatusCallback::OnProgress](#onprogress)|Chiamato per indicare lo stato di avanzamento di un processo di download di dati. L'implementazione di ATL restituisce S_OK.|  
|[CBindStatusCallback::OnStartBinding](#onstartbinding)|Chiamato quando viene avviata l'associazione.|  
|[CBindStatusCallback::OnStopBinding](#onstopbinding)|Chiamato quando il trasferimento dei dati asincrono è stato arrestato.|  
|[CBindStatusCallback:: StartAsyncDownload](#startasyncdownload)|Inizializza i byte disponibili e letti i byte su zero, crea un oggetto di flusso di tipo push da un URL e le chiamate `OnDataAvailable` ogni volta che i dati sono disponibili.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::m_dwAvailableToRead](#m_dwavailabletoread)|Numero di byte disponibili per la lettura.|  
|[CBindStatusCallback::m_dwTotalRead](#m_dwtotalread)|Numero totale di byte letti.|  
|[CBindStatusCallback::m_pFunc](#m_pfunc)|Puntatore alla funzione chiamata quando sono disponibili dati.|  
|[CBindStatusCallback::m_pT](#m_pt)|Puntatore all'oggetto che richiede il trasferimento dei dati asincrono.|  
|[CBindStatusCallback::m_spBindCtx](#m_spbindctx)|Puntatore per il [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) interfaccia per l'operazione di associazione corrente.|  
|[CBindStatusCallback::m_spBinding](#m_spbinding)|Puntatore al `IBinding` interfaccia per l'operazione di associazione corrente.|  
|[CBindStatusCallback::m_spMoniker](#m_spmoniker)|Puntatore per il [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) interfaccia per l'URL da utilizzare.|  
|[CBindStatusCallback::m_spStream](#m_spstream)|Puntatore per il [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia per il trasferimento dei dati.|  
  
## <a name="remarks"></a>Note  
 La classe `CBindStatusCallback` implementa l'interfaccia `IBindStatusCallback`. `IBindStatusCallback` deve essere implementata dall'applicazione in modo che possa ricevere le notifiche da un trasferimento dei dati asincrono. Utilizza il moniker asincrono fornito dal sistema `IBindStatusCallback` metodi per inviare e ricevere informazioni relative ai dati asincroni trasferimento da e verso l'oggetto.  
  
 In genere, il `CBindStatusCallback` oggetto è associato a un'operazione di associazione specifiche. Ad esempio, nelle [ASYNC](../../visual-cpp-samples.md) esempio, quando si imposta la proprietà URL, viene creato un `CBindStatusCallback` oggetto nella chiamata a `Download`:  
  
 [!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/cpp/cbindstatuscallback-class_1.h)]  
  
 Il moniker asincrono Usa la funzione di callback `OnData` per chiamare l'applicazione in presenza di dati. Il moniker asincrono viene fornito dal sistema.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `IBindStatusCallback`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `CBindStatusCallback`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="cbindstatuscallback"></a>  CBindStatusCallback::CBindStatusCallback  
 Costruttore.  
  
```
CBindStatusCallback();
```  
  
### <a name="remarks"></a>Note  
 Crea un oggetto per ricevere le notifiche relative al trasferimento di dati asincrono. In genere, viene creato un oggetto per ogni operazione di associazione.  
  
 Il costruttore inizializza inoltre [m_pT](#m_pt) e [m_pFunc](#m_pfunc) su NULL.  
  
##  <a name="dtor"></a>  CBindStatusCallback:: ~ CBindStatusCallback  
 Distruttore.  
  
```
~CBindStatusCallback();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="download"></a>  CBindStatusCallback::Download  
 Crea una `CBindStatusCallback` oggetti e chiamate `StartAsyncDownload` per avviare il download dei dati in modo asincrono dall'URL specificato.  
  
```
static HRESULT Download(  
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 [in] Puntatore a oggetto che richiede il trasferimento dei dati asincrono. Il `CBindStatusCallback` viene creato un modello di oggetto nella classe dell'oggetto.  
  
 *pFunc*  
 [in] Puntatore alla funzione che riceve i dati che verrà letto. La funzione è un membro di classe dell'oggetto di tipo `T`. Visualizzare [StartAsyncDownload](#startasyncdownload) per la sintassi e un esempio.  
  
 *bstrURL*  
 [in] L'URL per ottenere i dati. Può essere qualsiasi nome file o URL valido. Non può essere NULL. Ad esempio:  
  
 `CComBSTR mybstr =_T("http://somesite/data.htm")`  
  
 *pUnkContainer*  
 [in] Il `IUnknown` del contenitore. NULL per impostazione predefinita.  
  
 *bRelative*  
 [in] Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, vale a dire l'URL è assoluta.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Ogni volta che i dati sono disponibili viene inviato all'oggetto tramite `OnDataAvailable`. `OnDataAvailable` legge i dati e chiama la funzione a cui punta *pFunc* (ad esempio, per archiviare i dati o stamparlo su schermo).  
  
##  <a name="getbindinfo"></a>  CBindStatusCallback::GetBindInfo  
 Chiamato per indicare come associare il moniker.  
  
```
STDMETHOD(GetBindInfo)(
    DWORD* pgrfBSCF,
    BINDINFO* pbindinfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pgrfBSCF*  
 [out] Un puntatore BINDF sui valori di enumerazione che indica come deve essere eseguita l'operazione di associazione. Per impostazione predefinita, impostare i valori di enumerazione seguente:  
  
 Download BINDF_ASYNCHRONOUS asincrono.  
  
 BINDF_ASYNCSTORAGE `OnDataAvailable` restituito E_PENDING quando i dati non sono ancora disponibili anziché essere bloccato fino a quando non sono disponibili dati.  
  
 BINDF_GETNEWESTVERSION l'operazione di associazione deve recuperare la versione più recente dei dati.  
  
 BINDF_NOWRITECACHE l'operazione di associazione non deve essere archiviate recuperato i dati nella cache del disco.  
  
 *pbindinfo*  
 [in, out] Un puntatore al `BINDINFO` struttura contenente ulteriori informazioni su come l'oggetto richiede l'associazione a.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita imposta l'associazione asincrona e usare il modello push di dati. Nel modello di push di dati, il moniker determina l'operazione di associazione asincrona e in modo continuo notifica al client ogni volta che sono disponibili nuovi dati.  
  
##  <a name="getpriority"></a>  CBindStatusCallback::GetPriority  
 Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione.  
  
```
STDMETHOD(GetPriority)(LONG* pnPriority);
```  
  
### <a name="parameters"></a>Parametri  
 *pnPriority*  
 [out] Indirizzo della **lungo** variabile che, in caso di esito positivo riceve la priorità.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce E_NOTIMPL.  
  
##  <a name="m_dwavailabletoread"></a>  CBindStatusCallback::m_dwAvailableToRead  
 Può essere usato per archiviare il numero di byte disponibili per la lettura.  
  
```
DWORD m_dwAvailableToRead;
```  
  
### <a name="remarks"></a>Note  
 Inizializzato su zero in `StartAsyncDownload`.  
  
##  <a name="m_dwtotalread"></a>  CBindStatusCallback::m_dwTotalRead  
 Il totale cumulativo di byte letti nel trasferimento dei dati asincrono.  
  
```
DWORD m_dwTotalRead;
```  
  
### <a name="remarks"></a>Note  
 Incrementato ogni volta `OnDataAvailable` viene chiamato dal numero di byte effettivamente letti. Inizializzato su zero in `StartAsyncDownload`.  
  
##  <a name="m_pfunc"></a>  CBindStatusCallback::m_pFunc  
 La funzione a cui punta `m_pFunc` viene chiamato da `OnDataAvailable` dopo la lettura dei dati disponibili (ad esempio, per archiviare i dati o stamparlo su schermo).  
  
```
ATL_PDATAAVAILABLE m_pFunc;
```  
  
### <a name="remarks"></a>Note  
 La funzione a cui punta `m_pFunc` è un membro della classe dell'oggetto e presenta la sintassi seguente:  
  
```  
void Function_Name(  
   CBindStatusCallback<T>* pbsc,  
   BYTE* pBytes,  
   DWORD dwSize  
   );  
```  
  
##  <a name="m_pt"></a>  CBindStatusCallback::m_pT  
 Puntatore a oggetto che richiede il trasferimento dei dati asincrono.  
  
```
T* m_pT;
```  
  
### <a name="remarks"></a>Note  
 Il `CBindStatusCallback` viene creato un modello di oggetto nella classe dell'oggetto.  
  
##  <a name="m_spbindctx"></a>  CBindStatusCallback::m_spBindCtx  
 Un puntatore a un [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) interfaccia che fornisce l'accesso al contesto di associazione (un oggetto che archivia informazioni su un'operazione di associazione di moniker specifico).  
  
```
CComPtr<IBindCtx> m_spBindCtx;
```  
  
### <a name="remarks"></a>Note  
 Inizializzato in `StartAsyncDownload`.  
  
##  <a name="m_spbinding"></a>  CBindStatusCallback::m_spBinding  
 Un puntatore al `IBinding` interfaccia dell'operazione di associazione corrente.  
  
```
CComPtr<IBinding> m_spBinding;
```  
  
### <a name="remarks"></a>Note  
 Inizializzato in `OnStartBinding` e vengono rilasciati in `OnStopBinding`.  
  
##  <a name="m_spmoniker"></a>  CBindStatusCallback::m_spMoniker  
 Un puntatore per il [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) interfaccia per l'URL da utilizzare.  
  
```
CComPtr<IMoniker> m_spMoniker;
```  
  
### <a name="remarks"></a>Note  
 Inizializzato in `StartAsyncDownload`.  
  
##  <a name="m_spstream"></a>  CBindStatusCallback::m_spStream  
 Un puntatore per il [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interfaccia dell'operazione di associazione corrente.  
  
```
CComPtr<IStream> m_spStream;
```  
  
### <a name="remarks"></a>Note  
 Inizializzato in `OnDataAvailable` dal `STGMEDIUM` struttura quando il flag BCSF BCSF_FIRSTDATANOTIFICATION viene rilasciato quando il flag BCSF è BCSF_LASTDATANOTIFICATION.  
  
##  <a name="ondataavailable"></a>  CBindStatusCallback::OnDataAvailable  
 Le chiamate di sistema moniker asincrono `OnDataAvailable` per fornire dati per l'oggetto appena sarà disponibile.  
  
```
STDMETHOD(  
    OnDataAvailable)(DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC* /* pformatetc */,
    STGMEDIUM* pstgmed);
```  
  
### <a name="parameters"></a>Parametri  
 *grfBSCF*  
 [in] Valore dell'enumerazione BSCF. Uno o più delle seguenti operazioni: BSCF_FIRSTDATANOTIFICATION, BSCF_INTERMEDIARYDATANOTIFICATION o BSCF_LASTDATANOTIFICATION.  
  
 *dwSize diverso da*  
 [in] Il tempo cumulativo (in byte) disponibile a partire dall'inizio dell'associazione dati. Può essere zero, che indica che la quantità di dati non è rilevante o che è diventato disponibile alcuna quantità specifica.  
  
 *pFormatEtc*  
 [in] Puntatore per il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682242) struttura che contiene il formato dei dati disponibili. Se è presente alcun formato, può essere CF_NULL.  
  
 *pstgmed*  
 [in] Puntatore per il [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms695269) struttura che contiene i dati effettivi ora disponibili.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 `OnDataAvailable` legge i dati, quindi chiama un metodo della classe dell'oggetto (ad esempio, per archiviare i dati o stamparlo su schermo). Visualizzare [CBindStatusCallback:: StartAsyncDownload](#startasyncdownload) per informazioni dettagliate.  
  
##  <a name="onlowresource"></a>  CBindStatusCallback::OnLowResource  
 Chiamata eseguita quando le risorse sono insufficienti.  
  
```
STDMETHOD(OnLowResource)(DWORD /* dwReserved */);
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
##  <a name="onobjectavailable"></a>  CBindStatusCallback::OnObjectAvailable  
 Chiamato dal moniker asincrono di passare un puntatore a interfaccia oggetto all'applicazione.  
  
```
STDMETHOD(OnObjectAvailable)(REFID /* riid */, IUnknown* /* punk */);
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 Identificatore di interfaccia dell'interfaccia richiesta. Non usato.  
  
 *pUnk*  
 Indirizzo dell'interfaccia IUnknown. Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
##  <a name="onprogress"></a>  CBindStatusCallback::OnProgress  
 Chiamato per indicare lo stato di avanzamento di un processo di download di dati.  
  
```
STDMETHOD(OnProgress)(
    ULONG /* ulProgress */,
    ULONG /* ulProgressMax */,
    ULONG /* ulStatusCode */,
    LPCWSTRONG /* szStatusText */);
```  
  
### <a name="parameters"></a>Parametri  
 *ulProgress*  
 Intero lungo senza segno. Non usato.  
  
 *ulProgressMax*  
 Intero lungo senza segno inutilizzato.  
  
 *ulStatusCode*  
 Intero lungo senza segno. Non usato.  
  
 *szStatusText*  
 Indirizzo di un valore stringa. Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
##  <a name="onstartbinding"></a>  CBindStatusCallback::OnStartBinding  
 Imposta il membro dati [m_spBinding](#m_spbinding) per il `IBinding` puntatore nelle *pBinding*.  
  
```
STDMETHOD(OnStartBinding)(DWORD /* dwReserved */, IBinding* pBinding);
```  
  
### <a name="parameters"></a>Parametri  
 *dwReserved*  
 Riservato per utilizzi futuri.  
  
 *pBinding*  
 [in] Operazione di binding di indirizzo dell'interfaccia IBinding dell'oggetto corrente. Non può essere NULL. Il client deve chiamare AddRef su questo puntatore per mantenere un riferimento all'oggetto di associazione.  
  
##  <a name="onstopbinding"></a>  CBindStatusCallback::OnStopBinding  
 Rilascia il `IBinding` puntatore nel membro dati [m_spBinding](#m_spbinding).  
  
```
STDMETHOD(OnStopBinding)(HRESULT hresult, LPCWSTR /* szError */);
```  
  
### <a name="parameters"></a>Parametri  
 *HRESULT*  
 Codice di stato restituito dall'operazione di associazione.  
  
 szStatusText  
 Indirizzo di un valore di stringa inutilizzati.  
  
### <a name="remarks"></a>Note  
 Chiamato dal moniker asincrono fornito dal sistema per indicare la fine dell'operazione di associazione.  
  
##  <a name="startasyncdownload"></a>  CBindStatusCallback:: StartAsyncDownload  
 Avvia il download dei dati in modo asincrono dall'URL specificato.  
  
```
HRESULT StartAsyncDownload(  
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *pT*  
 [in] Puntatore a oggetto che richiede il trasferimento dei dati asincrono. Il `CBindStatusCallback` viene creato un modello di oggetto nella classe dell'oggetto.  
  
 *pFunc*  
 [in] Puntatore alla funzione che riceve i dati da leggere. La funzione è un membro di classe dell'oggetto di tipo `T`. Visualizzare **osservazioni** per la sintassi e un esempio.  
  
 *bstrURL*  
 [in] L'URL per ottenere i dati. Può essere qualsiasi nome file o URL valido. Non può essere NULL. Ad esempio:  
  
 `CComBSTR mybstr =_T("http://somesite/data.htm")`  
  
 *pUnkContainer*  
 [in] Il `IUnknown` del contenitore. NULL per impostazione predefinita.  
  
 *bRelative*  
 [in] Flag che indica se l'URL è relativo o assoluto. FALSE per impostazione predefinita, vale a dire l'URL è assoluta.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Ogni volta che i dati sono disponibili viene inviato all'oggetto tramite `OnDataAvailable`. `OnDataAvailable` legge i dati e chiama la funzione a cui punta *pFunc* (ad esempio, per archiviare i dati o stamparlo su schermo).  
  
 La funzione a cui punta *pFunc* è un membro della classe dell'oggetto e presenta la sintassi seguente:  
  
 `void Function_Name(`  
  
 `CBindStatusCallback<T>*` `pbsc` `,`  
  
 `BYTE*` `pBytes` `,`  
  
 `DWORD` `dwSize`  
  
 `);`  
  
 Nell'esempio seguente (ricavare il [ASYNC](../../visual-cpp-samples.md) esempio), la funzione `OnData` scrive i dati ricevuti in una casella di testo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#87](../../atl/codesnippet/cpp/cbindstatuscallback-class_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
