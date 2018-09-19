---
title: Classe IViewObjectExImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], drawing
- IViewObjectEx ATL implementation
- advise sinks
- IViewObjectExImpl class
ms.assetid: ad6de760-1ee5-4883-b033-ae57beffc369
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a7364f86ad08f882660f49556853826bb7186f6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108430"
---
# <a name="iviewobjecteximpl-class"></a>Classe IViewObjectExImpl

Questa classe implementa `IUnknown` e fornisce le implementazioni predefinite del [IViewObject](/windows/desktop/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/desktop/api/oleidl/nn-oleidl-iviewobject2), e [IViewObjectEx](/windows/desktop/api/ocidl/nn-ocidl-iviewobjectex) interfacce.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IViewObjectExImpl 
   : public IViewObjectEx
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IViewObjectExImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IViewObjectExImpl::Draw](#draw)|Disegna una rappresentazione del controllo in un contesto di dispositivo.|
|[IViewObjectExImpl::Freeze](#freeze)|Si blocca la rappresentazione di un controllo disegnata in modo che non verrà modificato fino a un `Unfreeze`. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetAdvise](#getadvise)|Recupera una connessione sink consultivo esistente sul controllo, se presente.|
|[IViewObjectExImpl::GetColorSet](#getcolorset)|Restituisce la tavolozza logica utilizzata dal controllo per il disegno. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetExtent](#getextent)|Recupera le dimensioni del controllo visualizzato in unità HIMETRIC (0,01 millimetri per unità) dal membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).|
|[IViewObjectExImpl::GetNaturalExtent](#getnaturalextent)|Fornisce suggerimenti dal contenitore per l'oggetto da utilizzare durante il ridimensionamento.|
|[IViewObjectExImpl::GetRect](#getrect)|Restituisce un rettangolo che descrive una caratteristica di disegno richiesta. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetViewStatus](#getviewstatus)|Restituisce informazioni sull'opacità dell'oggetto e sulle caratteristiche di disegno sono supportate.|
|[IViewObjectExImpl::QueryHitPoint](#queryhitpoint)|Controlla se il punto specificato è nel rettangolo specificato e restituisce un [HITRESULT](/windows/desktop/api/ocidl/ne-ocidl-taghitresult) valore `pHitResult`.|
|[IViewObjectExImpl::QueryHitRect](#queryhitrect)|Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi del rettangolo di posizione specificata e restituisce un valore HITRESULT in `pHitResult`.|
|[IViewObjectExImpl::SetAdvise](#setadvise)|Configura una connessione tra il controllo e un sink di notifica in modo che il sink può ricevere notifiche sulle modifiche nella visualizzazione del controllo.|
|[IViewObjectExImpl::Unfreeze](#unfreeze)|Sblocca la rappresentazione in forma disegnata del controllo. L'implementazione di ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Note

Il [IViewObject](/windows/desktop/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/desktop/api/oleidl/nn-oleidl-iviewobject2), e [IViewObjectEx](/windows/desktop/api/ocidl/nn-ocidl-iviewobjectex) interfacce consentono un controllo da visualizzare se stesso direttamente e creare e gestire un sink di notifica per informare il contenitore delle modifiche nella visualizzazione controllo. Il `IViewObjectEx` interfaccia fornisce supporto per funzionalità di controllo esteso, ad esempio sfarfallio disegno, i controlli non rettangolari e trasparenti e hit testing (ad esempio, come chiudere un clic del mouse deve essere considerato sul controllo). Classe `IViewObjectExImpl` fornisce un'implementazione predefinita di queste interfacce e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IViewObjectEx`

`IViewObjectExImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="draw"></a>  IViewObjectExImpl::Draw

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

Questo metodo chiama `CComControl::OnDrawAdvanced` che a sua volta chiama la classe di controllo `OnDraw` (metodo). Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Impostazione predefinita della procedura guidata `OnDraw` Disegna un rettangolo con etichetta "ATL 3.0".

Visualizzare [IViewObject](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-draw) in Windows SDK.

##  <a name="freeze"></a>  IViewObjectExImpl::Freeze

Si blocca la rappresentazione di un controllo disegnata in modo che non verrà modificato fino a un `Unfreeze`. L'implementazione di ATL restituisce E_NOTIMPL.

```
STDMETHOD(Freeze)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DWORD* /* pdwFreeze */);
```

### <a name="remarks"></a>Note

Visualizzare [IViewObject::Freeze](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-freeze) in Windows SDK.

##  <a name="getadvise"></a>  IViewObjectExImpl::GetAdvise

Recupera una connessione sink consultivo esistente sul controllo, se presente.

```
STDMETHOD(GetAdvise)(
    DWORD* /* pAspects */,
    DWORD* /* pAdvf */,
    IAdviseSink** /* ppAdvSink */);
```

### <a name="remarks"></a>Note

Sink consultivo viene archiviato nel membro dati classe controllo [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink).

Visualizzare [IViewObject::GetAdvise](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-getadvise) in Windows SDK.

##  <a name="getcolorset"></a>  IViewObjectExImpl::GetColorSet

Restituisce la tavolozza logica utilizzata dal controllo per il disegno. L'implementazione di ATL restituisce E_NOTIMPL.

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

Visualizzare [IViewObject::GetColorSet](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-getcolorset) in Windows SDK.

##  <a name="getextent"></a>  IViewObjectExImpl::GetExtent

Recupera le dimensioni del controllo visualizzato in unità HIMETRIC (0,01 millimetri per unità) dal membro dati classe controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

```
STDMETHOD(GetExtent)(
    DWORD /* dwDrawAspect */,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    LPSIZEL* lpsizel);
```

### <a name="remarks"></a>Note

Visualizzare [IViewObject2::GetExtent](/windows/desktop/api/oleidl/nf-oleidl-iviewobject2-getextent) in Windows SDK.

##  <a name="getnaturalextent"></a>  IViewObjectExImpl::GetNaturalExtent

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

Se `dwAspect` è DVASPECT_CONTENT e *pExtentInfo -> dwExtentMode* DVEXTENT_CONTENT, imposta * `psizel` al membro dati della classe control [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural). In caso contrario, restituisce un errore HRESULT.

Visualizzare [IViewObjectEx::GetNaturalExtent](/windows/desktop/api/ocidl/nf-ocidl-iviewobjectex-getnaturalextent) in Windows SDK.

##  <a name="getrect"></a>  IViewObjectExImpl::GetRect

Restituisce un rettangolo che descrive una caratteristica di disegno richiesta. L'implementazione di ATL restituisce E_NOTIMPL.

```
STDMETHOD(GetRect)(DWORD /* dwAspect */, LPRECTL /* pRect */);
```

### <a name="remarks"></a>Note

Visualizzare [IViewObjectEx::GetRect](/windows/desktop/api/ocidl/nf-ocidl-iviewobjectex-getrect) in Windows SDK.

##  <a name="getviewstatus"></a>  IViewObjectExImpl::GetViewStatus

Restituisce informazioni sull'opacità dell'oggetto e sulle caratteristiche di disegno sono supportate.

```
STDMETHOD(GetViewStatus)(DWORD* pdwStatus);
```

### <a name="remarks"></a>Note

Per impostazione predefinita, imposta ATL `pdwStatus` per indicare che il controllo supporta VIEWSTATUS_OPAQUE (i valori possibili sono i [VIEWSTATUS](/windows/desktop/api/ocidl/ne-ocidl-tagviewstatus) enumerazione).

Visualizzare [IViewObjectEx::GetViewStatus](/windows/desktop/api/ocidl/nf-ocidl-iviewobjectex-getviewstatus) in Windows SDK.

##  <a name="queryhitpoint"></a>  IViewObjectExImpl::QueryHitPoint

Controlla se il punto specificato è nel rettangolo specificato e restituisce un [HITRESULT](/windows/desktop/api/ocidl/ne-ocidl-taghitresult) valore `pHitResult`.

```
STDMETHOD(QueryHitPoint)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Note

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale a [DVASPECT_CONTENT](/windows/desktop/api/wtypes/ne-wtypes-tagdvaspect), il metodo restituisce S_OK. In caso contrario, il metodo di E_FAIL.

Visualizzare [IViewObjectEx::QueryHitPoint](/windows/desktop/api/ocidl/nf-ocidl-iviewobjectex-queryhitpoint) in Windows SDK.

##  <a name="queryhitrect"></a>  IViewObjectExImpl::QueryHitRect

Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi del rettangolo di posizione specificata e restituisce un [HITRESULT](/windows/desktop/api/ocidl/ne-ocidl-taghitresult) valore `pHitResult`.

```
STDMETHOD(QueryHitRect)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPRECT prcLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Note

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale a [DVASPECT_CONTENT](/windows/desktop/api/wtypes/ne-wtypes-tagdvaspect), il metodo restituisce S_OK. In caso contrario, il metodo di E_FAIL.

Visualizzare [IViewObjectEx::QueryHitRect](/windows/desktop/api/ocidl/nf-ocidl-iviewobjectex-queryhitrect) in Windows SDK.

##  <a name="setadvise"></a>  IViewObjectExImpl::SetAdvise

Configura una connessione tra il controllo e un sink di notifica in modo che il sink può ricevere notifiche sulle modifiche nella visualizzazione del controllo.

```
STDMETHOD(SetAdvise)(
    DWORD /* aspects */,
    DWORD /* advf */,
    IAdviseSink* pAdvSink);
```

### <a name="remarks"></a>Note

Il puntatore per il [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink) interfaccia nel sink di notifica viene archiviato nel membro dati classe controllo [CComControlBase::m_spAdviseSink](ccomcontrolbase-class.md#m_spadvisesink).  

Visualizzare [IViewObject::SetAdvise](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-setadvise) in Windows SDK.

##  <a name="unfreeze"></a>  IViewObjectExImpl::Unfreeze

Sblocca la rappresentazione in forma disegnata del controllo. L'implementazione di ATL restituisce E_NOTIMPL.

```
STDMETHOD(Unfreeze)(DWORD /* dwFreeze */);
```

### <a name="remarks"></a>Note

Visualizzare [IViewObject::Unfreeze](/windows/desktop/api/oleidl/nf-oleidl-iviewobject-unfreeze) in Windows SDK.

##  <a name="closehandle"></a>  IWorkerThreadClient::CloseHandle

Implementare questo metodo per chiudere l'handle associato all'oggetto.

```
HRESULT CloseHandle(HANDLE hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

Restituire S_OK su esito positivo o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Il codice seguente illustra un'implementazione semplice di `IWorkerThreadClient::CloseHandle`.

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iviewobjecteximpl-class_1.cpp)]

##  <a name="execute"></a>  IWorkerThreadClient::Execute

Implementare questo metodo per eseguire codice quando viene segnalato l'handle associato all'oggetto.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam*<br/>
Il parametro user.

*hObject*<br/>
Handle che è diventato segnalato.

### <a name="return-value"></a>Valore restituito

Restituire S_OK su esito positivo o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

L'handle e DWORD/puntatore passato a questo metodo era precedentemente associato l'oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Il codice seguente illustra un'implementazione semplice di `IWorkerThreadClient::Execute`.

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iviewobjecteximpl-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/desktop/com/activex-controls-interfaces)<br/>
[Esercitazione](../../atl/active-template-library-atl-tutorial.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
