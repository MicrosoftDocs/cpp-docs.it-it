---
title: Classe IViewObjectExImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IViewObjectExImpl
- ATLCTL/ATL::IViewObjectExImpl
- ATLCTL/ATL::IViewObjectExImpl::Draw
- ATLCTL/ATL::IViewObjectExImpl::Freeze
- ATLCTL/ATL::IViewObjectExImpl::GetAdvise
- ATLCTL/ATL::IViewObjectExImpl::GetColorSet
- ATLCTL/ATL::IViewObjectExImpl::GetExtent
- ATLCTL/ATL::IViewObjectExImpl::GetNaturalExtent
- ATLCTL/ATL::IViewObjectExImpl::GetRect
- ATLCTL/ATL::IViewObjectExImpl::GetViewStatus
- ATLCTL/ATL::IViewObjectExImpl::QueryHitPoint
- ATLCTL/ATL::IViewObjectExImpl::QueryHitRect
- ATLCTL/ATL::IViewObjectExImpl::SetAdvise
- ATLCTL/ATL::IViewObjectExImpl::Unfreeze
dev_langs: C++
helpviewer_keywords:
- ActiveX controls [C++], drawing
- IViewObjectEx ATL implementation
- advise sinks
- IViewObjectExImpl class
ms.assetid: ad6de760-1ee5-4883-b033-ae57beffc369
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: abee30f798f6d6ee062b916d1aa23bcfc5c271cb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iviewobjecteximpl-class"></a>Classe IViewObjectExImpl
Questa classe implementa **IUnknown** e fornisce le implementazioni predefinite del [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms680763), [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318), e [IViewObjectEx](http://msdn.microsoft.com/library/windows/desktop/ms682375)interfacce.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class ATL_NO_VTABLE IViewObjectExImpl 
   : public IViewObjectEx
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IViewObjectExImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IViewObjectExImpl::Draw](#draw)|Disegna una rappresentazione del controllo in un contesto di dispositivo.|  
|[IViewObjectExImpl::Freeze](#freeze)|Blocca la rappresentazione di un controllo creata in modo che non cambia finché un `Unfreeze`. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IViewObjectExImpl::GetAdvise](#getadvise)|Recupera una connessione esistente sink consultivo sul controllo, se presente.|  
|[IViewObjectExImpl::GetColorSet](#getcolorset)|Restituisce la tavolozza logica utilizzata dal controllo per il disegno. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IViewObjectExImpl::GetExtent](#getextent)|Recupera la dimensione del controllo visualizzato in unità HIMETRIC (0,01 millimetri per unità) dal membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).|  
|[IViewObjectExImpl::GetNaturalExtent](#getnaturalextent)|Fornisce suggerimenti dal contenitore per l'oggetto da utilizzare durante il ridimensionamento.|  
|[IViewObjectExImpl::GetRect](#getrect)|Restituisce un rettangolo che descrive una caratteristica di disegno richiesta. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
|[IViewObjectExImpl::GetViewStatus](#getviewstatus)|Restituisce informazioni sull'opacità dell'oggetto e sulle caratteristiche di disegno sono supportate.|  
|[IViewObjectExImpl::QueryHitPoint](#queryhitpoint)|Controlla se il punto specificato è nel rettangolo specificato e restituisce un [HITRESULT](http://msdn.microsoft.com/library/windows/desktop/ms682187) valore `pHitResult`.|  
|[IViewObjectExImpl::QueryHitRect](#queryhitrect)|Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi del rettangolo di posizione specificata e restituisce un **HITRESULT** valore `pHitResult`.|  
|[IViewObjectExImpl::SetAdvise](#setadvise)|Imposta una connessione tra il controllo e un sink di notifica in modo che il sink può ricevere una notifica sulle modifiche nella visualizzazione del controllo.|  
|[IViewObjectExImpl::Unfreeze](#unfreeze)|Sblocca la rappresentazione di disegnata del controllo. Restituisce l'implementazione di ATL **E_NOTIMPL**.|  
  
## <a name="remarks"></a>Note  
 Il [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms680763), [IViewObject2](http://msdn.microsoft.com/library/windows/desktop/ms691318), e [IViewObjectEx](http://msdn.microsoft.com/library/windows/desktop/ms682375) interfacce consentono un controllo per visualizzarlo, direttamente e creare e gestire un sink di notifica per informare il contenitore di modifiche nella visualizzazione controllo. Il **IViewObjectEx** interfaccia fornisce supporto per le funzionalità di controllo estesi quali disegno sfarfallio, i controlli non rettangolari e trasparenti e hit testing (ad esempio, come chiudere un clic del mouse deve essere considerato in il controllo). Classe `IViewObjectExImpl` fornisce un'implementazione predefinita di queste interfacce e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IViewObjectEx`  
  
 `IViewObjectExImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="draw"></a>IViewObjectExImpl::Draw  
 Disegna una rappresentazione del controllo in un contesto di dispositivo.  
  
```
STDMETHOD(Draw)(
    DWORD dwDrawAspect,
    LONG lindex,
    void* pvAspect,
    DVTARGETDEVICE* ptd,
    HDC hicTargetDev,
    LPCRECTL prcBounds,
    LPCRECTL prcWBounds,
    BOOL(_stdcall* /* pfnContinue*/) (DWORD_PTR dwContinue),
    DWORD_PTR /* dwContinue */);
```  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama **CComControl::OnDrawAdvanced** che a sua volta chiama la classe di controllo `OnDraw` metodo. Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Valore predefinito della procedura guidata `OnDraw` Disegna un rettangolo con etichetta "ATL 3.0".  
  
 Vedere [IViewObject](http://msdn.microsoft.com/library/windows/desktop/ms688655) in Windows SDK.  
  
##  <a name="freeze"></a>IViewObjectExImpl::Freeze  
 Blocca la rappresentazione di un controllo creata in modo che non cambia finché un `Unfreeze`. Restituisce l'implementazione di ATL **E_NOTIMPL**.  
  
```
STDMETHOD(Freeze)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DWORD* /* pdwFreeze */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IViewObject::Freeze](http://msdn.microsoft.com/library/windows/desktop/ms688728) in Windows SDK.  
  
##  <a name="getadvise"></a>IViewObjectExImpl::GetAdvise  
 Recupera una connessione esistente sink consultivo sul controllo, se presente.  
  
```
STDMETHOD(GetAdvise)(
    DWORD* /* pAspects */,
    DWORD* /* pAdvf */,
    IAdviseSink** /* ppAdvSink */);
```  
  
### <a name="remarks"></a>Note  
 Il sink consultivo è memorizzato nel membro dati classe controllo [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink).  
  
 Vedere [IViewObject::GetAdvise](http://msdn.microsoft.com/library/windows/desktop/ms692772) in Windows SDK.  
  
##  <a name="getcolorset"></a>IViewObjectExImpl::GetColorSet  
 Restituisce la tavolozza logica utilizzata dal controllo per il disegno. Restituisce l'implementazione di ATL **E_NOTIMPL**.  
  
```
STDMETHOD(GetColorSet)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    LOGPALETTE** /* ppColorSet */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IViewObject::GetColorSet](http://msdn.microsoft.com/library/windows/desktop/ms686553) in Windows SDK.  
  
##  <a name="getextent"></a>IViewObjectExImpl::GetExtent  
 Recupera la dimensione del controllo visualizzato in unità HIMETRIC (0,01 millimetri per unità) dal membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).  
  
```
STDMETHOD(GetExtent)(
    DWORD /* dwDrawAspect */,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    LPSIZEL* lpsizel);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IViewObject2::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms684032) in Windows SDK.  
  
##  <a name="getnaturalextent"></a>IViewObjectExImpl::GetNaturalExtent  
 Fornisce suggerimenti dal contenitore per l'oggetto da utilizzare durante il ridimensionamento.  
  
```
STDMETHOD(GetNaturalExtent)(
    DWORD dwAspect,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    DVEXTENTINFO* pExtentInfo,
    LPSIZEL psizel);
```  
  
### <a name="remarks"></a>Note  
 Se `dwAspect` è `DVASPECT_CONTENT` e *pExtentInfo -> dwExtentMode* è **DVEXTENT_CONTENT**, imposta * `psizel` e il membro della classe del controllo dati [CComControlBase: : m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural). In caso contrario, restituisce un errore `HRESULT`.  
  
 Vedere [IViewObjectEx::GetNaturalExtent](http://msdn.microsoft.com/library/windows/desktop/ms683718) in Windows SDK.  
  
##  <a name="getrect"></a>IViewObjectExImpl::GetRect  
 Restituisce un rettangolo che descrive una caratteristica di disegno richiesta. Restituisce l'implementazione di ATL **E_NOTIMPL**.  
  
```
STDMETHOD(GetRect)(DWORD /* dwAspect */, LPRECTL /* pRect */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IViewObjectEx::GetRect](http://msdn.microsoft.com/library/windows/desktop/ms695246) in Windows SDK.  
  
##  <a name="getviewstatus"></a>IViewObjectExImpl::GetViewStatus  
 Restituisce informazioni sull'opacità dell'oggetto e sulle caratteristiche di disegno sono supportate.  
  
```
STDMETHOD(GetViewStatus)(DWORD* pdwStatus);
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, imposta ATL `pdwStatus` per indicare che il controllo supporta **VIEWSTATUS_OPAQUE** (i valori possibili sono nel [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) enumerazione).  
  
 Vedere [IViewObjectEx::GetViewStatus](http://msdn.microsoft.com/library/windows/desktop/ms693371) in Windows SDK.  
  
##  <a name="queryhitpoint"></a>IViewObjectExImpl::QueryHitPoint  
 Controlla se il punto specificato è nel rettangolo specificato e restituisce un [HITRESULT](http://msdn.microsoft.com/library/windows/desktop/ms682187) valore `pHitResult`.  
  
```
STDMETHOD(QueryHitPoint)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```  
  
### <a name="remarks"></a>Note  
 Il valore può essere **HITRESULT_HIT** o **HITRESULT_OUTSIDE**.  
  
 Se `dwAspect` è uguale a [DVASPECT_CONTENT](http://msdn.microsoft.com/library/windows/desktop/ms690318), il metodo restituisce `S_OK`. In caso contrario, il metodo restituisce **E_FAIL**.  
  
 Vedere [IViewObjectEx::QueryHitPoint](http://msdn.microsoft.com/library/windows/desktop/ms691209) in Windows SDK.  
  
##  <a name="queryhitrect"></a>IViewObjectExImpl::QueryHitRect  
 Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi del rettangolo di posizione specificata e restituisce un [HITRESULT](http://msdn.microsoft.com/library/windows/desktop/ms682187) valore `pHitResult`.  
  
```
STDMETHOD(QueryHitRect)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPRECT prcLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```  
  
### <a name="remarks"></a>Note  
 Il valore può essere **HITRESULT_HIT** o **HITRESULT_OUTSIDE**.  
  
 Se `dwAspect` è uguale a [DVASPECT_CONTENT](http://msdn.microsoft.com/library/windows/desktop/ms690318), il metodo restituisce `S_OK`. In caso contrario, il metodo restituisce **E_FAIL**.  
  
 Vedere [IViewObjectEx::QueryHitRect](http://msdn.microsoft.com/library/windows/desktop/ms693797) in Windows SDK.  
  
##  <a name="setadvise"></a>IViewObjectExImpl::SetAdvise  
 Imposta una connessione tra il controllo e un sink di notifica in modo che il sink può ricevere una notifica sulle modifiche nella visualizzazione del controllo.  
  
```
STDMETHOD(SetAdvise)(
    DWORD /* aspects */,
    DWORD /* advf */,
    IAdviseSink* pAdvSink);
```  
  
### <a name="remarks"></a>Note  

 Il puntatore di [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interfaccia al sink di notifica è memorizzato nel membro dati classe controllo [CComControlBase::m_spAdviseSink](ccomcontrolbase-class.md#m_spadvisesink).  

  
 Vedere [IViewObject::SetAdvise](http://msdn.microsoft.com/library/windows/desktop/ms683950) in Windows SDK.  
  
##  <a name="unfreeze"></a>IViewObjectExImpl::Unfreeze  
 Sblocca la rappresentazione di disegnata del controllo. Restituisce l'implementazione di ATL **E_NOTIMPL**.  
  
```
STDMETHOD(Unfreeze)(DWORD /* dwFreeze */);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IViewObject::Unfreeze](http://msdn.microsoft.com/library/windows/desktop/ms686641) in Windows SDK.  
  
##  <a name="closehandle"></a>IWorkerThreadClient::CloseHandle  
 Implementare questo metodo per chiudere l'handle associato all'oggetto.  
  
```
HRESULT CloseHandle(HANDLE hHandle);
```  
  
### <a name="parameters"></a>Parametri  
 *hHandle*  
 L'handle da chiudere.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle passato a questo metodo non è già associata a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::CloseHandle`.  
  
 [!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iviewobjecteximpl-class_1.cpp)]  
  
##  <a name="execute"></a>IWorkerThreadClient::Execute  
 Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.  
  
```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```  
  
### <a name="parameters"></a>Parametri  
 `dwParam`  
 Il parametro user.  
  
 `hObject`  
 L'handle di cui è segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'handle e DWORD/puntatore passato a questo metodo sono state in precedenza associata a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene illustrata un'implementazione semplice di `IWorkerThreadClient::Execute`.  
  
 [!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iviewobjecteximpl-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Interfacce di controlli ActiveX](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Esercitazione](../../atl/active-template-library-atl-tutorial.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
