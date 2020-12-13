---
description: 'Altre informazioni su: classe IViewObjectExImpl'
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
ms.openlocfilehash: 16b6f4a94635410f777e5c34e794ca425d38c466
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139100"
---
# <a name="iviewobjecteximpl-class"></a>Classe IViewObjectExImpl

Questa classe implementa `IUnknown` e fornisce implementazioni predefinite delle interfacce [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2)e [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IViewObjectExImpl
   : public IViewObjectEx
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IViewObjectExImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IViewObjectExImpl::D RAW](#draw)|Disegna una rappresentazione del controllo su un contesto di dispositivo.|
|[IViewObjectExImpl:: Freeze](#freeze)|Blocca la rappresentazione disegnata di un controllo in modo che non venga modificata fino a `Unfreeze` . L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl:: GetAdvise](#getadvise)|Recupera una connessione di sink consultivo esistente sul controllo, se presente.|
|[IViewObjectExImpl:: getcolort](#getcolorset)|Restituisce la tavolozza logica utilizzata dal controllo per il disegno. L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl:: GetExtent](#getextent)|Recupera le dimensioni di visualizzazione del controllo in unità HIMETRIC (0,01 millimetri per unità) dal membro dati della classe del controllo [CComControlBase:: m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).|
|[IViewObjectExImpl:: GetNaturalExtent](#getnaturalextent)|Fornisce hint di ridimensionamento dal contenitore per l'oggetto da utilizzare quando l'utente lo ridimensiona.|
|[IViewObjectExImpl:: GetRect](#getrect)|Restituisce un rettangolo che descrive un aspetto di disegno richiesto. L'implementazione ATL restituisce E_NOTIMPL.|
|[IViewObjectExImpl:: GetViewStatus](#getviewstatus)|Restituisce informazioni sull'opacità dell'oggetto e sugli aspetti del disegno supportati.|
|[IViewObjectExImpl:: QueryHitPoint](#queryhitpoint)|Verifica se il punto specificato si trova nel rettangolo specificato e restituisce un valore [HitResult](/windows/win32/api/ocidl/ne-ocidl-hitresult) in `pHitResult` .|
|[IViewObjectExImpl:: QueryHitRect](#queryhitrect)|Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi nel rettangolo di posizione specificato e restituisce un valore HITRESULT in `pHitResult` .|
|[IViewObjectExImpl:: seadvise](#setadvise)|Configura una connessione tra il controllo e un sink di notifica, in modo che il sink possa ricevere notifiche sulle modifiche nella visualizzazione del controllo.|
|[IViewObjectExImpl:: unfreeze](#unfreeze)|Sblocca la rappresentazione disegnata del controllo. L'implementazione ATL restituisce E_NOTIMPL.|

## <a name="remarks"></a>Commenti

Le interfacce [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2)e [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) consentono a un controllo di visualizzarsi direttamente e di creare e gestire un sink di notifica per notificare al contenitore le modifiche nella visualizzazione del controllo. L' `IViewObjectEx` interfaccia fornisce il supporto per le funzionalità di controllo estese, ad esempio il disegno senza sfarfallio, i controlli non rettangolari e trasparenti e l'hit testing (ad esempio, il modo in cui è necessario prendere in considerazione la chiusura di un clic del mouse sul controllo). `IViewObjectExImpl`La classe fornisce un'implementazione predefinita di queste interfacce e implementa `IUnknown` inviando informazioni al dispositivo di dump nelle compilazioni di debug.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IViewObjectEx`

`IViewObjectExImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="iviewobjecteximpldraw"></a><a name="draw"></a> IViewObjectExImpl::D RAW

Disegna una rappresentazione del controllo su un contesto di dispositivo.

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

### <a name="remarks"></a>Commenti

Questo metodo chiama `CComControl::OnDrawAdvanced` che a sua volta chiama il metodo della classe del controllo `OnDraw` . Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Il valore predefinito della procedura guidata consente di `OnDraw` disegnare un rettangolo con l'etichetta "ATL 3,0".

Vedere [IViewObject::D RAW](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw) nel Windows SDK.

## <a name="iviewobjecteximplfreeze"></a><a name="freeze"></a> IViewObjectExImpl:: Freeze

Blocca la rappresentazione disegnata di un controllo in modo che non venga modificata fino a `Unfreeze` . L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(Freeze)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DWORD* /* pdwFreeze */);
```

### <a name="remarks"></a>Commenti

Vedere [IViewObject:: Freeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-freeze) nell'Windows SDK.

## <a name="iviewobjecteximplgetadvise"></a><a name="getadvise"></a> IViewObjectExImpl:: GetAdvise

Recupera una connessione di sink consultivo esistente sul controllo, se presente.

```
STDMETHOD(GetAdvise)(
    DWORD* /* pAspects */,
    DWORD* /* pAdvf */,
    IAdviseSink** /* ppAdvSink */);
```

### <a name="remarks"></a>Commenti

Il sink consultivo viene archiviato nel membro dati della classe del controllo [CComControlBase:: m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink).

Vedere [IViewObject:: GetAdvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getadvise) nella Windows SDK.

## <a name="iviewobjecteximplgetcolorset"></a><a name="getcolorset"></a> IViewObjectExImpl:: getcolort

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

### <a name="remarks"></a>Commenti

Vedere [IViewObject:: Getcolors](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getcolorset) nel Windows SDK.

## <a name="iviewobjecteximplgetextent"></a><a name="getextent"></a> IViewObjectExImpl:: GetExtent

Recupera le dimensioni di visualizzazione del controllo in unità HIMETRIC (0,01 millimetri per unità) dal membro dati della classe del controllo [CComControlBase:: m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

```
STDMETHOD(GetExtent)(
    DWORD /* dwDrawAspect */,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    LPSIZEL* lpsizel);
```

### <a name="remarks"></a>Commenti

Vedere [IViewObject2:: GetExtent](/windows/win32/api/oleidl/nf-oleidl-iviewobject2-getextent) nel Windows SDK.

## <a name="iviewobjecteximplgetnaturalextent"></a><a name="getnaturalextent"></a> IViewObjectExImpl:: GetNaturalExtent

Fornisce hint di ridimensionamento dal contenitore per l'oggetto da utilizzare quando l'utente lo ridimensiona.

```
STDMETHOD(GetNaturalExtent)(
    DWORD dwAspect,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    DVEXTENTINFO* pExtentInfo,
    LPSIZEL psizel);
```

### <a name="remarks"></a>Commenti

Se `dwAspect` è DVASPECT_CONTENT e *pExtentInfo->dwExtentMode* è DVEXTENT_CONTENT, imposta * `psizel` sul membro dati della classe del controllo [CComControlBase:: m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural). In caso contrario, restituisce un errore HRESULT.

Vedere [IViewObjectEx:: GetNaturalExtent](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getnaturalextent) nella Windows SDK.

## <a name="iviewobjecteximplgetrect"></a><a name="getrect"></a> IViewObjectExImpl:: GetRect

Restituisce un rettangolo che descrive un aspetto di disegno richiesto. L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(GetRect)(DWORD /* dwAspect */, LPRECTL /* pRect */);
```

### <a name="remarks"></a>Commenti

Vedere [IViewObjectEx:: GetRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getrect) nell'Windows SDK.

## <a name="iviewobjecteximplgetviewstatus"></a><a name="getviewstatus"></a> IViewObjectExImpl:: GetViewStatus

Restituisce informazioni sull'opacità dell'oggetto e sugli aspetti del disegno supportati.

```
STDMETHOD(GetViewStatus)(DWORD* pdwStatus);
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, ATL imposta `pdwStatus` per indicare che il controllo supporta VIEWSTATUS_OPAQUE (i valori possibili sono nell'enumerazione [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) ).

Vedere [IViewObjectEx:: GetViewStatus](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getviewstatus) nella Windows SDK.

## <a name="iviewobjecteximplqueryhitpoint"></a><a name="queryhitpoint"></a> IViewObjectExImpl:: QueryHitPoint

Verifica se il punto specificato si trova nel rettangolo specificato e restituisce un valore [HitResult](/windows/win32/api/ocidl/ne-ocidl-hitresult) in `pHitResult` .

```
STDMETHOD(QueryHitPoint)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Commenti

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale a [DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), il metodo restituisce S_OK. In caso contrario, il metodo restituisce E_FAIL.

Vedere [IViewObjectEx:: QueryHitPoint](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitpoint) nella Windows SDK.

## <a name="iviewobjecteximplqueryhitrect"></a><a name="queryhitrect"></a> IViewObjectExImpl:: QueryHitRect

Controlla se il rettangolo di visualizzazione del controllo si sovrappone a un punto qualsiasi nel rettangolo di posizione specificato e restituisce un valore [HitResult](/windows/win32/api/ocidl/ne-ocidl-hitresult) in `pHitResult` .

```
STDMETHOD(QueryHitRect)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPRECT prcLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### <a name="remarks"></a>Commenti

Il valore può essere HITRESULT_HIT o HITRESULT_OUTSIDE.

Se `dwAspect` è uguale a [DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), il metodo restituisce S_OK. In caso contrario, il metodo restituisce E_FAIL.

Vedere [IViewObjectEx:: QueryHitRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitrect) nella Windows SDK.

## <a name="iviewobjecteximplsetadvise"></a><a name="setadvise"></a> IViewObjectExImpl:: seadvise

Configura una connessione tra il controllo e un sink di notifica, in modo che il sink possa ricevere notifiche sulle modifiche nella visualizzazione del controllo.

```
STDMETHOD(SetAdvise)(
    DWORD /* aspects */,
    DWORD /* advf */,
    IAdviseSink* pAdvSink);
```

### <a name="remarks"></a>Commenti

Il puntatore all'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) nel sink di notifica viene archiviato nel membro dati della classe del controllo [CComControlBase:: m_spAdviseSink](ccomcontrolbase-class.md#m_spadvisesink).

Vedere [IViewObject:: seadvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-setadvise) nella Windows SDK.

## <a name="iviewobjecteximplunfreeze"></a><a name="unfreeze"></a> IViewObjectExImpl:: unfreeze

Sblocca la rappresentazione disegnata del controllo. L'implementazione ATL restituisce E_NOTIMPL.

```
STDMETHOD(Unfreeze)(DWORD /* dwFreeze */);
```

### <a name="remarks"></a>Commenti

Vedere [IViewObject:: unfreeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-unfreeze) nell'Windows SDK.

## <a name="iworkerthreadclientclosehandle"></a><a name="closehandle"></a> IWorkerThreadClient:: CloseHandle

Implementare questo metodo per chiudere l'handle associato a questo oggetto.

```
HRESULT CloseHandle(HANDLE hHandle);
```

### <a name="parameters"></a>Parametri

*hHandle*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

L'handle passato a questo metodo è stato precedentemente associato a questo oggetto da una chiamata a [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice seguente viene illustrata una semplice implementazione di `IWorkerThreadClient::CloseHandle` .

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iviewobjecteximpl-class_1.cpp)]

## <a name="iworkerthreadclientexecute"></a><a name="execute"></a> IWorkerThreadClient:: Execute

Implementare questo metodo per eseguire il codice quando l'handle associato a questo oggetto diventa segnalato.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### <a name="parameters"></a>Parametri

*dwParam*<br/>
Parametro User.

*hObject*<br/>
Handle che è stato segnalato.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Commenti

L'handle e il puntatore DWORD/puntatore passati a questo metodo sono stati precedentemente associati a questo oggetto da una chiamata a [CWorkerThread:: AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### <a name="example"></a>Esempio

Nel codice seguente viene illustrata una semplice implementazione di `IWorkerThreadClient::Execute` .

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iviewobjecteximpl-class_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Esercitazione](../../atl/active-template-library-atl-tutorial.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
