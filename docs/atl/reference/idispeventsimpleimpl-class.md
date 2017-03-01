---
title: Classe IDispEventSimpleImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IDispEventSimpleImpl
- ATL::IDispEventSimpleImpl
- ATL.IDispEventSimpleImpl
dev_langs:
- C++
helpviewer_keywords:
- IDispEventSimpleImpl class
ms.assetid: 971d82b7-a921-47fa-a4d8-909bed377ab0
caps.latest.revision: 27
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 6b7bc2c64139726f84f1c19c7d6b40e8d68cdc18
ms.lasthandoff: 02/24/2017

---
# <a name="idispeventsimpleimpl-class"></a>IDispEventSimpleImpl (classe)
Questa classe fornisce le implementazioni di `IDispatch` metodi, senza recupero di informazioni sul tipo da una libreria dei tipi.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <UINT nID, class T, const IID* pdiid>  
class ATL_NO_VTABLE IDispEventSimpleImpl : public _IDispEventLocator<nID, pdiid>
```    
  
#### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore univoco per l'oggetto di origine. Quando `IDispEventSimpleImpl` è la classe base per un controllo composto, utilizzare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 Classe dell'utente, che deriva da `IDispEventSimpleImpl`.  
  
 `pdiid`  
 Il puntatore per l'IID di interfaccia dispatch l'evento implementato da questa classe.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventSimpleImpl::Advise](#advise)|Stabilisce una connessione con l'origine evento predefinita.|  
|[IDispEventSimpleImpl:: DispEventAdvise](#dispeventadvise)|Stabilisce una connessione con l'origine evento.|  
|[IDispEventSimpleImpl:: DispEventUnadvise](#dispeventunadvise)|Interrompe la connessione con l'origine evento.|  
|[IDispEventSimpleImpl::GetIDsOfNames](#getidsofnames)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfo](#gettypeinfo)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfoCount](#gettypeinfocount)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::Invoke](#invoke)|Chiama i gestori eventi elencati nell'evento mappa sink.|  
|[IDispEventSimpleImpl::Unadvise](#unadvise)|Interrompe la connessione con l'origine evento predefinita.|  
  
## <a name="remarks"></a>Note  
 `IDispEventSimpleImpl`fornisce un modo di implementare un'interfaccia dispatch eventi senza la necessità di fornire codice di implementazione per ogni evento o un metodo su tale interfaccia. `IDispEventSimpleImpl`fornisce le implementazioni di `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si sia interessati nella gestione.  
  
 `IDispEventSimpleImpl`funziona in combinazione con il [mappa del sink di evento](http://msdn.microsoft.com/library/32542b3d-ac43-4139-8ac4-41c48481744f) nella classe di eventi della route alla funzione del gestore appropriato. Utilizzare questa classe:  
  
-   Aggiungere un [macro SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7) macro di mappa del sink di evento per ogni evento per ogni oggetto che si desidera gestire.  
  
-   Fornire informazioni sul tipo per ogni evento passando un puntatore a un [le strutture ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura come parametro per ogni voce. Su x86 di piattaforma, il `_ATL_FUNC_INFO.cc` valore deve essere CC_CDECL con la funzione di callback chiamata di metodo di stdcall.  
  
-   Chiamare [DispEventAdvise](#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base.  
  
-   Chiamare [DispEventUnadvise](#dispeventunadvise) per interrompere la connessione.  
  
 È necessario derivare da `IDispEventSimpleImpl` (utilizzando un valore univoco per `nID`) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica per oggetto una sola origine quindi segnalare rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventSimpleImpl` classi di base.  
  
 **IDispEventSimplImpl** fornisce la stessa funzionalità [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), ma non ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi. Le procedure guidate di generano codice basato solo su `IDispEventImpl`, ma è possibile utilizzare `IDispEventSimpleImpl` aggiungendo il codice manualmente. Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia di eventi o per evitare l'overhead associato all'utilizzo della libreria dei tipi.  
  
> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` fornire la propria implementazione di **IUnknown:: QueryInterface** attivazione ogni `IDispEventImpl` o `IDispEventSimpleImpl` per agire come un'identità distinta COM consentendo l'accesso diretto ai membri della classe dell'oggetto COM principale classe base.  
  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
 Per ulteriori informazioni, vedere [supporto IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 `IDispEventSimpleImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-nameadvisea--idispeventsimpleimpladvise"></a><a name="advise"></a>IDispEventSimpleImpl::Advise  
 Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT Advise(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Una volta stabilita la connessione, gli eventi generati da *pUnk* verranno indirizzate ai gestori nella classe tramite la mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario evitare ambiguità tra le chiamate a questo metodo definendone l'ambito della chiamata alla classe di base particolare si è interessati.  
  
 `Advise`stabilisce una connessione con l'origine evento predefinita, ottiene l'IID dell'origine evento predefinito dell'oggetto, come determinato dalla [AtlGetObjectSourceInterface](http://msdn.microsoft.com/library/a8528f45-fbfb-4e24-ad1a-1d69b2897155).  
  
##  <a name="a-namedispeventadvisea--idispeventsimpleimpldispeventadvise"></a><a name="dispeventadvise"></a>IDispEventSimpleImpl:: DispEventAdvise  
 Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT DispEventAdvise(IUnknown* pUnk  const IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto di origine evento.  
  
 `piid`  
 Un puntatore all'IID dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Successivamente, gli eventi generati da *pUnk* verranno indirizzate ai gestori nella classe tramite la mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario evitare ambiguità tra le chiamate a questo metodo definendone l'ambito della chiamata alla classe di base particolare si è interessati.  
  
 `DispEventAdvise`stabilisce una connessione con l'origine evento specificata `pdiid`.  
  
##  <a name="a-namedispeventunadvisea--idispeventsimpleimpldispeventunadvise"></a><a name="dispeventunadvise"></a>IDispEventSimpleImpl:: DispEventUnadvise  
 Interrompe la connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT DispEventUnadvise(IUnknown* pUnk  const IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto di origine evento.  
  
 `piid`  
 Un puntatore all'IID dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Dopo la connessione viene interrotta, non è più eventi verranno indirizzati alle funzioni di gestore elencate nella mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario evitare ambiguità tra le chiamate a questo metodo definendone l'ambito della chiamata alla classe di base particolare si è interessati.  
  
 `DispEventAdvise`interrompe una connessione che è stata stabilita con l'origine evento specificata `pdiid`.  
  
##  <a name="a-namegetidsofnamesa--idispeventsimpleimplgetidsofnames"></a><a name="getidsofnames"></a>IDispEventSimpleImpl::GetIDsOfNames  
 Questa implementazione di **GetIDsOfNames** restituisce **E_NOTIMPL**.  
  
```
STDMETHOD(GetIDsOfNames)(
    REFIID /* riid */,
    LPOLESTR* /* rgszNames */,
    UINT /* cNames */,
    LCID /* lcid */,
    DISPID* /* rgdispid */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettypeinfoa--idispeventsimpleimplgettypeinfo"></a><a name="gettypeinfo"></a>IDispEventSimpleImpl::GetTypeInfo  
 Questa implementazione di **IDispatch:: GetTypeInfo** restituisce **E_NOTIMPL**.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT /* itinfo */,
    LCID /* lcid */,
    ITypeInfo** /* pptinfo */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfo](http://msdn.microsoft.com/en-us/cc1ec9aa-6c40-4e70-819c-a7c6dd6b8c99) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettypeinfocounta--idispeventsimpleimplgettypeinfocount"></a><a name="gettypeinfocount"></a>IDispEventSimpleImpl::GetTypeInfoCount  
 Questa implementazione di **IDispatch:: GetTypeInfoCount** restituisce **E_NOTIMPL**.  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* /* pctinfo */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameinvokea--idispeventsimpleimplinvoke"></a><a name="invoke"></a>IDispEventSimpleImpl::Invoke  
 Questa implementazione di **IDispatch:: Invoke** chiama i gestori eventi elencati nell'evento mappa sink.  
  
```
STDMETHOD(Invoke)(
    DISPID dispidMember,
    REFIID /* riid */,
    LCID lcid,
    WORD /* wFlags */,
    DISPPARMS* pdispparams,
    VARIANT* pvarResult,
    EXCEPINFO* /* pexcepinfo */,
    UINT* /* puArgErr */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
##  <a name="a-nameunadvisea--idispeventsimpleimplunadvise"></a><a name="unadvise"></a>IDispEventSimpleImpl::Unadvise  
 Interrompe la connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT Unadvise(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Dopo la connessione viene interrotta, non è più eventi verranno indirizzati alle funzioni di gestore elencate nella mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, è necessario evitare ambiguità tra le chiamate a questo metodo definendone l'ambito della chiamata alla classe di base particolare si è interessati.  
  
 `Unadvise`interrompe una connessione che è stata stabilita con l'origine evento predefinito specificato in `pdiid`.  
  
 **Unavise** le interruzioni di una connessione con l'origine evento predefinita, ottiene l'IID dell'origine evento predefinito dell'oggetto, come determinato dalla [AtlGetObjectSourceInterface](http://msdn.microsoft.com/library/a8528f45-fbfb-4e24-ad1a-1d69b2897155).  
  
## <a name="see-also"></a>Vedere anche  
 [Le strutture ATL_FUNC_INFO struttura](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl (classe)](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventImpl (classe)](../../atl/reference/idispeventimpl-class.md)   
 [MACRO SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

