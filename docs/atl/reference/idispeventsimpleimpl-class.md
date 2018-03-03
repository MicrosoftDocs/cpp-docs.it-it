---
title: Classe IDispEventSimpleImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IDispEventSimpleImpl
- ATLCOM/ATL::IDispEventSimpleImpl
- ATLCOM/ATL::IDispEventSimpleImpl::Advise
- ATLCOM/ATL::IDispEventSimpleImpl::DispEventAdvise
- ATLCOM/ATL::IDispEventSimpleImpl::DispEventUnadvise
- ATLCOM/ATL::IDispEventSimpleImpl::GetIDsOfNames
- ATLCOM/ATL::IDispEventSimpleImpl::GetTypeInfo
- ATLCOM/ATL::IDispEventSimpleImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispEventSimpleImpl::Invoke
- ATLCOM/ATL::IDispEventSimpleImpl::Unadvise
dev_langs:
- C++
helpviewer_keywords:
- IDispEventSimpleImpl class
ms.assetid: 971d82b7-a921-47fa-a4d8-909bed377ab0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f8a5b3098961af4f3f9262cdc4c99dbe80b4ac7c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="idispeventsimpleimpl-class"></a>IDispEventSimpleImpl (classe)
Questa classe fornisce le implementazioni del `IDispatch` metodi, senza recupero di informazioni sul tipo da una libreria dei tipi.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <UINT nID, class T, const IID* pdiid>  
class ATL_NO_VTABLE IDispEventSimpleImpl : public _IDispEventLocator<nID, pdiid>
```    
  
#### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore univoco per l'oggetto di origine. Quando `IDispEventSimpleImpl` è la classe base per un controllo composito, utilizzare l'ID di risorsa del controllo contenuto desiderato per il parametro. In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 La classe dell'utente, che è derivata da `IDispEventSimpleImpl`.  
  
 `pdiid`  
 Il puntatore per l'IID dell'interfaccia dispatch evento implementato da questa classe.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventSimpleImpl::Advise](#advise)|Stabilisce una connessione con l'origine evento predefinito.|  
|[IDispEventSimpleImpl:: DispEventAdvise](#dispeventadvise)|Stabilisce una connessione con l'origine evento.|  
|[IDispEventSimpleImpl:: DispEventUnadvise](#dispeventunadvise)|Interrompe la connessione con l'origine evento.|  
|[IDispEventSimpleImpl::GetIDsOfNames](#getidsofnames)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfo](#gettypeinfo)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfoCount](#gettypeinfocount)|Restituisce **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::Invoke](#invoke)|Chiama i gestori eventi elencati nell'evento mappa sink.|  
|[IDispEventSimpleImpl::Unadvise](#unadvise)|Interrompe la connessione con l'origine evento predefinito.|  
  
## <a name="remarks"></a>Note  
 `IDispEventSimpleImpl`fornisce un modo di implementare un'interfaccia dispatch di eventi senza la necessità di fornire il codice di implementazione per ogni evento o un metodo su tale interfaccia. `IDispEventSimpleImpl`fornisce le implementazioni del `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si sia interessati nella gestione.  
  
 `IDispEventSimpleImpl`funziona in combinazione con la mappa del sink di evento nella classe di eventi della route per la funzione del gestore appropriato. Utilizzare questa classe:  
  
-   Aggiungere un [macro SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro di mappa del sink di evento per ogni evento per ogni oggetto che si desidera gestire.  
  
-   Fornire informazioni sul tipo per ogni evento passando un puntatore a un [le strutture ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura come parametro per ogni voce. Su x86, piattaforma di `_ATL_FUNC_INFO.cc` valore deve essere CC_CDECL con la funzione di callback chiamata di metodo di stdcall.  
  
-   Chiamare [DispEventAdvise](#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base.  
  
-   Chiamare [DispEventUnadvise](#dispeventunadvise) per interrompere la connessione.  
  
 È necessario derivare da `IDispEventSimpleImpl` (utilizzando un valore univoco per `nID`) per ogni oggetto per cui si desidera gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica con oggetto di origine di una notifica quindi rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventSimpleImpl` classi di base.  
  
 **IDispEventSimplImpl** fornisce la stessa funzionalità [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), ma non ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi. Le procedure guidate di generano codice basato solo su `IDispEventImpl`, ma è possibile utilizzare `IDispEventSimpleImpl` aggiungendo il codice manualmente. Utilizzare `IDispEventSimpleImpl` quando si non dispone di una libreria dei tipi che descrive l'interfaccia di evento o si desidera evitare l'overhead associato all'utilizzo della libreria dei tipi.  
  
> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` fornire la propria implementazione di **IUnknown:: QueryInterface** abilitazione ogni `IDispEventImpl` o `IDispEventSimpleImpl` classe fungere da un'identità COM separata consentendo l'accesso diretto ai membri della classe di base in un oggetto COM principale.  
  
 Implementazione di ATL CE di ActiveX evento sink solo supporta i valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
 Per ulteriori informazioni, vedere [supporto IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 `IDispEventSimpleImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="advise"></a>IDispEventSimpleImpl::Advise  
 Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT Advise(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Una volta stabilita la connessione, gli eventi attivati da *pUnk* sarà indirizzato a gestori eventi nella classe tramite la mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario rimuovere l'ambiguità chiamate al metodo tramite la chiamata con la classe di base particolare si è interessati in ambito.  
  
 `Advise`stabilisce una connessione con l'origine evento predefinito, ottiene l'IID dell'origine evento predefinito dell'oggetto, come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).  
  
##  <a name="dispeventadvise"></a>IDispEventSimpleImpl:: DispEventAdvise  
 Chiamare questo metodo per stabilire una connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT DispEventAdvise(IUnknown* pUnk  const IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto di origine evento.  
  
 `piid`  
 Un puntatore per l'IID dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Successivamente, gli eventi attivati da *pUnk* sarà indirizzato a gestori eventi nella classe tramite la mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario rimuovere l'ambiguità chiamate al metodo tramite la chiamata con la classe di base particolare si è interessati in ambito.  
  
 `DispEventAdvise`stabilisce una connessione con l'origine evento specificata nella `pdiid`.  
  
##  <a name="dispeventunadvise"></a>IDispEventSimpleImpl:: DispEventUnadvise  
 Interrompe la connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT DispEventUnadvise(IUnknown* pUnk  const IID* piid);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto di origine evento.  
  
 `piid`  
 Un puntatore per l'IID dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Dopo la connessione viene interrotta, non è più eventi verranno indirizzati alle funzioni gestore elencate nella mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario rimuovere l'ambiguità chiamate al metodo tramite la chiamata con la classe di base particolare si è interessati in ambito.  
  
 `DispEventAdvise`interrompe una connessione è stata stabilita con l'origine evento specificata nella `pdiid`.  
  
##  <a name="getidsofnames"></a>IDispEventSimpleImpl::GetIDsOfNames  
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
 Vedere [GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) in Windows SDK.  
  
##  <a name="gettypeinfo"></a>IDispEventSimpleImpl::GetTypeInfo  
 Questa implementazione di **IDispatch:: GetTypeInfo** restituisce **E_NOTIMPL**.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT /* itinfo */,
    LCID /* lcid */,
    ITypeInfo** /* pptinfo */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfo](http://msdn.microsoft.com/en-us/cc1ec9aa-6c40-4e70-819c-a7c6dd6b8c99) in Windows SDK.  
  
##  <a name="gettypeinfocount"></a>IDispEventSimpleImpl::GetTypeInfoCount  
 Questa implementazione di **IDispatch:: GetTypeInfoCount** restituisce **E_NOTIMPL**.  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* /* pctinfo */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12) in Windows SDK.  
  
##  <a name="invoke"></a>IDispEventSimpleImpl::Invoke  
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
  
##  <a name="unadvise"></a>IDispEventSimpleImpl::Unadvise  
 Interrompe la connessione con l'origine evento rappresentato da *pUnk*.  
  
```
HRESULT Unadvise(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 [in] Un puntatore al **IUnknown** interfaccia dell'oggetto di origine evento.  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`qualsiasi errore o `HRESULT` valore.  
  
### <a name="remarks"></a>Note  
 Dopo la connessione viene interrotta, non è più eventi verranno indirizzati alle funzioni gestore elencate nella mappa del sink di evento.  
  
> [!NOTE]
>  Se la classe deriva da più `IDispEventSimpleImpl` classi, sarà necessario rimuovere l'ambiguità chiamate al metodo tramite la chiamata con la classe di base particolare si è interessati in ambito.  
  
 `Unadvise`interrompe una connessione è stata stabilita con l'origine evento predefinito specificato in `pdiid`.  
  
 **Unavise** interruzioni di una connessione con l'origine evento predefinito, ottiene l'IID dell'origine evento predefinito dell'oggetto, come determinato da [AtlGetObjectSourceInterface](composite-control-global-functions.md#atlgetobjectsourceinterface).  
  
## <a name="see-also"></a>Vedere anche  
 [Le strutture ATL_FUNC_INFO struttura](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl (classe)](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventImpl (classe)](../../atl/reference/idispeventimpl-class.md)   
 [MACRO SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
