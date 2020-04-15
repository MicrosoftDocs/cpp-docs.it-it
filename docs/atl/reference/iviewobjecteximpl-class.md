---
title: Classe IViewObjectExImpl
ms.date: 11/04/2016
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
helpviewer_keywords:
- ActiveX controls [C++], drawing
- IViewObjectEx ATL implementation
- advise sinks
- IViewObjectExImpl class
ms.assetid: ad6de760-1ee5-4883-b033-ae57beffc369
ms.openlocfilehash: 59c5657dcd892544f7e790b52325cb9ecba0dd56
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326337"
---
# <a name="iviewobjecteximpl-class"></a>Classe IViewObjectExImpl

Questa classe `IUnknown` implementa e fornisce implementazioni predefinite delle interfacce [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2)e [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IViewObjectExImpl
   : public IViewObjectEx
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IViewObjectExImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IViewObjectExImpl::Draw](#draw)|Disegna una rappresentazione del controllo in un contesto di periferica.|
|[IViewObjectExImpl::Congelamento](#freeze)|Blocca la rappresentazione disegnata di un controllo `Unfreeze`in modo che non cambierà fino a quando non viene modificato un oggetto . L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetAdvise](#getadvise)|Recupera una connessione sink consultivo esistente nel controllo, se presente.|
|[IViewObjectExImpl::GetColorSet](#getcolorset)|Restituisce la tavolozza logica utilizzata dal controllo per il disegno. L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetExtent](#getextent)|Recupera le dimensioni di visualizzazione del controllo in unità HIMETRIC (0,01 millimetri per unità) dal membro dati della classe di controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).|
|[IViewObjectExImpl::GetNaturalExtent](#getnaturalextent)|Fornisce suggerimenti di ridimensionamento dal contenitore per l'oggetto da utilizzare quando l'utente lo ridimensiona.|
|[IViewObjectExImpl::GetRect](#getrect)|Restituisce un rettangolo che descrive un aspetto di disegno richiesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl::GetViewStatus](#getviewstatus)|Restituisce informazioni sull'opacità dell'oggetto e sugli aspetti del disegno supportati.|
|[IViewObjectExImpl::QueryHitPoint](#queryhitpoint)|Controlla se il punto specificato si trova nel rettangolo specificato e restituisce un valore [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) in `pHitResult`.|
|[IViewObjectExImpl::QueryHitRect](#queryhitrect)|Controlla se il rettangolo di visualizzazione del controllo si sovrappone a `pHitResult`qualsiasi punto nel rettangolo di posizione specificato e restituisce un valore HITRESULT in .|
|[IViewObjectExImpl::SetAdvise](#setadvise)|Imposta una connessione tra il controllo e un sink di avviso in modo che il sink possa essere notificato sulle modifiche nella visualizzazione del controllo.|
|[IViewObjectExImpl::Sblocca](#unfreeze)|Sblocca la rappresentazione disegnata del controllo. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Osservazioni

Le interfacce [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2)e [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) consentono a un controllo di visualizzarsi direttamente e di creare e gestire un sink di avviso per notificare al contenitore le modifiche nella visualizzazione del controllo. L'interfaccia `IViewObjectEx` fornisce il supporto per le funzionalità di controllo estese, ad esempio il disegno senza sfarfallio, i controlli non rettangolari e trasparenti e l'hit testing (ad esempio, la vicinanza di un clic del mouse deve essere considerata nel controllo). Classe `IViewObjectExImpl` fornisce un'implementazione predefinita `IUnknown` di queste interfacce e implementa inviando informazioni al dispositivo di dump nelle build di debug.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IViewObjectEx`

`IViewObjectExImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="iviewobjecteximpldraw"></a><a name="draw"></a>IViewObjectExImpl::Draw

Disegna una rappresentazione del controllo in un contesto di periferica.

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

### <a name="remarks"></a>Osservazioni

Questo metodo `CComControl::OnDrawAdvanced` chiama che a sua `OnDraw` volta chiama il metodo della classe di controllo. Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. L'impostazione `OnDraw` predefinita della procedura guidata disegna un rettangolo con l'etichetta "ATL 3.0".

Vedere [IViewObject::Draw](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw) in Windows SDK.

## <a name="iviewobjecteximplfreeze"></a><a name="freeze"></a>IViewObjectExImpl::Congelamento

Blocca la rappresentazione disegnata di un controllo `Unfreeze`in modo che non cambierà fino a quando non viene modificato un oggetto . L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(Freeze)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DWORD* /* pdwFreeze */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IViewObject::Freeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-freeze) in Windows SDK.

## <a name="iviewobjecteximplgetadvise"></a><a name="getadvise"></a>IViewObjectExImpl::GetAdvise

Recupera una connessione sink consultivo esistente nel controllo, se presente.

```
STDMETHOD(GetAdvise)(
    DWORD* /* pAspects */,
    DWORD* /* pAdvf */,
    IAdviseSink** /* ppAdvSink */);
```

### <a name="remarks"></a>Osservazioni

Il sink consultivo viene archiviato nel membro dati della classe di controllo [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink).

Vedere [IViewObject::GetAdvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getadvise) in Windows SDK.

## <a name="iviewobjecteximplgetcolorset"></a><a name="getcolorset"></a>IViewObjectExImpl::GetColorSet

Restituisce la tavolozza logica utilizzata dal controllo per il disegno. L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(GetColorSet)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    LOGPALETTE** /* ppColorSet */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IViewObject::GetColorSet](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getcolorset) in Windows SDK.

## <a name="iviewobjecteximplgetextent"></a><a name="getextent"></a>IViewObjectExImpl::GetExtent

Recupera le dimensioni di visualizzazione del controllo in unità HIMETRIC (0,01 millimetri per unità) dal membro dati della classe di controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

```
STDMETHOD(GetExtent)(
    DWORD /* dwDrawAspect */,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    LPSIZEL* lpsizel);
```

### <a name="remarks"></a>Osservazioni

Vedere [IViewObject2::GetExtent](/windows/win32/api/oleidl/nf-oleidl-iviewobject2-getextent) in Windows SDK.

## <a name="iviewobjecteximplgetnaturalextent"></a><a name="getnaturalextent"></a>IViewObjectExImpl::GetNaturalExtent

Fornisce suggerimenti di ridimensionamento dal contenitore per l'oggetto da utilizzare quando l'utente lo ridimensiona.

```
STDMETHOD(GetNaturalExtent)(
    DWORD dwAspect,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    DVEXTENTINFO* pExtentInfo,
    LPSIZEL psizel);
```

### <a name="remarks"></a>Osservazioni

Se `dwAspect` è DVASPECT_CONTENT e *pExtentInfo->dwExtentMode* è DVEXTENT_CONTENT, imposta il simbolo `psizel` dati CComControlBase::m_sizeNatural della classe del controllo sul membro dati della classe del controllo [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural). In caso contrario, restituisce un errore HRESULT.

Vedere [IViewObjectEx::GetNaturalExtent](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getnaturalextent) in Windows SDK.

## <a name="iviewobjecteximplgetrect"></a><a name="getrect"></a>IViewObjectExImpl::GetRect

Restituisce un rettangolo che descrive un aspetto di disegno richiesto. L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(GetRect)(DWORD /* dwAspect */, LPRECTL /* pRect */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IViewObjectEx::GetRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getrect) in Windows SDK.

## <a name="iviewobjecteximplgetviewstatus"></a><a name="getviewstatus"></a>IViewObjectExImpl::GetViewStatus

Restituisce informazioni sull'opacità dell'oggetto e sugli aspetti del disegno supportati.

```
STDMETHOD(GetViewStatus)(DWORD* pdwStatus);
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, ATL imposta `pdwStatus` per indicare che il controllo supporta VIEWSTATUS_OPAQUE (i valori possibili sono nell'enumerazione [VIEWSTATUS).](/windows/win32/api/ocidl/ne-ocidl-viewstatus)

Vedere [IViewObjectEx::GetViewStatus](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getviewstatus) in Windows SDK.

## <a name="iviewobjecteximplqueryhitpoint"></a><a name="queryhitpoint"></a>IViewObjectExImpl::QueryHitPoint

Controlla se il punto specificato si trova nel rettangolo specificato e restituisce un valore [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) in `pHitResult`.

```
STDMETHOD(QueryHitPoint)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Osservazioni

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale [a DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), il metodo restituisce S_OK. In caso contrario, il metodo restituisce E_FAIL.

Vedere [IViewObjectEx::QueryHitPoint](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitpoint) in Windows SDK.

## <a name="iviewobjecteximplqueryhitrect"></a><a name="queryhitrect"></a>IViewObjectExImpl::QueryHitRect

Controlla se il rettangolo di visualizzazione del controllo si sovrappone a `pHitResult`qualsiasi punto nel rettangolo di posizione specificato e restituisce un valore [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) in .

```
STDMETHOD(QueryHitRect)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPRECT prcLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Osservazioni

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale [a DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), il metodo restituisce S_OK. In caso contrario, il metodo restituisce E_FAIL.

Vedere [IViewObjectEx::QueryHitRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitrect) in Windows SDK.

## <a name="iviewobjecteximplsetadvise"></a><a name="setadvise"></a>IViewObjectExImpl::SetAdvise

Imposta una connessione tra il controllo e un sink di avviso in modo che il sink possa essere notificato sulle modifiche nella visualizzazione del controllo.

```
STDMETHOD(SetAdvise)(
    DWORD /* aspects */,
    DWORD /* advf */,
    IAdviseSink* pAdvSink);
```

### <a name="remarks"></a>Osservazioni

Il puntatore all'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) sul sink di avviso viene archiviato nel membro dati della classe di controllo [CComControlBase::m_spAdviseSink](ccomcontrolbase-class.md#m_spadvisesink).

Vedere [IViewObject::SetAdvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-setadvise) in Windows SDK.

## <a name="iviewobjecteximplunfreeze"></a><a name="unfreeze"></a>IViewObjectExImpl::Sblocca

Sblocca la rappresentazione disegnata del controllo. L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(Unfreeze)(DWORD /* dwFreeze */);
```

### <a name="remarks"></a>Osservazioni

Vedere [IViewObject::Unfreeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-unfreeze) in Windows SDK.

## <a name="iworkerthreadclientclosehandle"></a><a name="closehandle"></a>IWorkerThreadClient::CloseHandleIWorkerThreadClient::CloseHandle

Implementare questo metodo per chiudere l'handle associato a questo oggetto.

```
HRESULT CloseHandle(HANDLE hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Maniglia da chiudere.

### <a name="return-value"></a>Valore restituito

Restituire S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice riportato di `IWorkerThreadClient::CloseHandle`seguito viene illustrata una semplice implementazione di .

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iviewobjecteximpl-class_1.cpp)]

## <a name="iworkerthreadclientexecute"></a><a name="execute"></a>IWorkerThreadClient::EsecuzioneIWorkerThreadClient::Execute

Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam (informazioni in base al tano*<br/>
Parametro dell'utente.

*hOggetto*<br/>
Handle che è diventato segnalato.

### <a name="return-value"></a>Valore restituito

Restituire S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

L'handle e il DWORD/pointer passati a questo metodo sono stati precedentemente associati a questo oggetto da una chiamata a [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice riportato di `IWorkerThreadClient::Execute`seguito viene illustrata una semplice implementazione di .

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iviewobjecteximpl-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce dei controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Tutorial](../../atl/active-template-library-atl-tutorial.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
