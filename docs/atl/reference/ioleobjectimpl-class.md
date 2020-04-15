---
title: Classe IOleObjectImpl
ms.date: 11/04/2016
f1_keywords:
- IOleObjectImpl
- ATLCTL/ATL::IOleObjectImpl
- ATLCTL/ATL::IOleObjectImpl::Advise
- ATLCTL/ATL::IOleObjectImpl::Close
- ATLCTL/ATL::IOleObjectImpl::DoVerb
- ATLCTL/ATL::IOleObjectImpl::DoVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::DoVerbHide
- ATLCTL/ATL::IOleObjectImpl::DoVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::DoVerbOpen
- ATLCTL/ATL::IOleObjectImpl::DoVerbPrimary
- ATLCTL/ATL::IOleObjectImpl::DoVerbShow
- ATLCTL/ATL::IOleObjectImpl::DoVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::EnumAdvise
- ATLCTL/ATL::IOleObjectImpl::EnumVerbs
- ATLCTL/ATL::IOleObjectImpl::GetClientSite
- ATLCTL/ATL::IOleObjectImpl::GetClipboardData
- ATLCTL/ATL::IOleObjectImpl::GetExtent
- ATLCTL/ATL::IOleObjectImpl::GetMiscStatus
- ATLCTL/ATL::IOleObjectImpl::GetMoniker
- ATLCTL/ATL::IOleObjectImpl::GetUserClassID
- ATLCTL/ATL::IOleObjectImpl::GetUserType
- ATLCTL/ATL::IOleObjectImpl::InitFromData
- ATLCTL/ATL::IOleObjectImpl::IsUpToDate
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbHide
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbOpen
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbShow
- ATLCTL/ATL::IOleObjectImpl::OnPostVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbDiscardUndo
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbHide
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbInPlaceActivate
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbOpen
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbShow
- ATLCTL/ATL::IOleObjectImpl::OnPreVerbUIActivate
- ATLCTL/ATL::IOleObjectImpl::SetClientSite
- ATLCTL/ATL::IOleObjectImpl::SetColorScheme
- ATLCTL/ATL::IOleObjectImpl::SetExtent
- ATLCTL/ATL::IOleObjectImpl::SetHostNames
- ATLCTL/ATL::IOleObjectImpl::SetMoniker
- ATLCTL/ATL::IOleObjectImpl::Unadvise
- ATLCTL/ATL::IOleObjectImpl::Update
helpviewer_keywords:
- ActiveX controls [C++], communication between container and control
- IOleObject, ATL implementation
- IOleObjectImpl class
ms.assetid: 59750b2d-1633-4a51-a4c2-6455b6b90c45
ms.openlocfilehash: 86d82aea2e92eb99903284abe4ac03478369616c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326521"
---
# <a name="ioleobjectimpl-class"></a>Classe IOleObjectImpl

Questa classe `IUnknown` implementa ed è l'interfaccia principale tramite la quale un contenitore comunica con un controllo.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IOleObjectImpl : public IOleObject
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IOleObjectImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IOleObjectImpl::Advise](#advise)|Stabilisce una connessione consultiva con il controllo.|
|[IOleObjectImpl::Chiudi](#close)|Modifica lo stato del controllo da esecuzione a caricato.|
|[IOleObjectImpl::DoVerb](#doverb)|Indica al controllo di eseguire una delle azioni enumerate.|
|[IOleObjectImpl::DoVerbDiscardUndo](#doverbdiscardundo)|Indica al controllo di eliminare qualsiasi stato di annullamento che mantiene.|
|[IOleObjectImpl::DoVerbHideIoleObjectImpl::DoVerbHide](#doverbhide)|Indica al controllo di rimuovere l'interfaccia utente dalla visualizzazione.|
|[IOleObjectImpl::DoVerbInPlaceActivate](#doverbinplaceactivate)|Esegue il controllo e installa la relativa finestra, ma non installa l'interfaccia utente del controllo.|
|[IOleObjectImpl::DoVerbOpen](#doverbopen)|Fa sì che il controllo venga aperto in una finestra separata.|
|[IOleObjectImpl::DoVerbPrimary](#doverbprimary)|Esegue l'azione specificata quando l'utente fa doppio clic sul controllo. Il controllo definisce l'azione, in genere per attivare il controllo sul posto.|
|[IOleObjectImpl::DoVerbShow](#doverbshow)|Mostra un controllo appena inserito all'utente.|
|[IOleObjectImpl::DoVerbUIActivate](#doverbuiactivate)|Attiva il controllo sul posto e mostra l'interfaccia utente del controllo, ad esempio menu e barre degli strumenti.|
|[IOleObjectImpl::EnumAdviseIoleObjectImpl::EnumAdvise](#enumadvise)|Enumera le connessioni consultive del controllo.|
|[IOleObjectImpl::EnumVerbs](#enumverbs)|Enumera le azioni per il controllo.|
|[IOleObjectImpl::GetClientSiteIOleObjectImpl::GetClientSite](#getclientsite)|Recupera il sito client del controllo.|
|[IOleObjectImpl::GetClipboardDataIOleObjectImpl::GetClipboardData](#getclipboarddata)|Recupera i dati dagli Appunti. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl::GetExtentIOleObjectImpl::GetExtent](#getextent)|Recupera l'estensione dell'area di visualizzazione del controllo.|
|[IOleObjectImpl::GetMiscStatusIOleObjectImpl::GetMiscStatus](#getmiscstatus)|Recupera lo stato del controllo.|
|[IOleObjectImpl::GetMoniker](#getmoniker)|Recupera il moniker del controllo. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl::GetUserClassIDIOleObjectImpl::GetUserClassID](#getuserclassid)|Recupera l'identificatore di classe del controllo.|
|[IOleObjectImpl::GetUserTypeIOleObjectImpl::GetUserType](#getusertype)|Recupera il nome del tipo di utente del controllo.|
|[IOleObjectImpl::InitFromDataIOleObjectImpl::InitFromData](#initfromdata)|Inizializza il controllo dai dati selezionati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl::IsUpToDateIOleObjectImpl::IsUpToDate](#isuptodate)|Controlla se il controllo è aggiornato. L'implementazione ATL restituisce S_OK.|
|[IOleObjectImpl::OnPostVerbDiscardUndoIOleObjectImpl::OnPostVerbDiscardUndo](#onpostverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo l'eliminazione dello stato di annullamento.|
|[IOleObjectImpl::OnPostVerbHideIOleObjectImpl::OnPostVerbHide](#onpostverbhide)|Chiamato da [DoVerbHide](#doverbhide) dopo che il controllo è nascosto.|
|[IOleObjectImpl::OnPostVerbInPlaceActivateIOleObjectImpl::OnPostVerbInPlaceActivate](#onpostverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo l'attivazione del controllo sul posto.|
|[IOleObjectImpl::OnPostVerbOpenIOleObjectImpl::OnPostVerbOpen](#onpostverbopen)|Chiamato da [DoVerbOpen](#doverbopen) dopo che il controllo è stato aperto per la modifica in una finestra separata.|
|[IOleObjectImpl::OnPostVerbShowIOleObjectImpl::OnPostVerbShow](#onpostverbshow)|Chiamato da [DoVerbShow](#doverbshow) dopo che il controllo è stato reso visibile.|
|[IOleObjectImpl::OnPostVerbUIActivate](#onpostverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.|
|[IOleObjectImpl::OnPreVerbDiscardUndoIOleObjectImpl::OnPreVerbDiscardUndo](#onpreverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima che lo stato di annullamento venga eliminato.|
|[IOleObjectImpl::OnPreVerbHideIoleObjectImpl::OnPreVerbHide](#onpreverbhide)|Chiamato da [DoVerbHide](#doverbhide) prima che il controllo viene nascosto.|
|[IOleObjectImpl::OnPreVerbInPlaceActivateIOleObjectImpl::OnPreVerbInPlaceActivate](#onpreverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo venga attivato sul posto.|
|[IOleObjectImpl::OnPreVerbOpenIOleObjectImpl::OnPreVerbOpen](#onpreverbopen)|Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo sia stato aperto per la modifica in una finestra separata.|
|[IOleObjectImpl::OnPreVerbShowIOleObjectImpl::OnPreVerbShow](#onpreverbshow)|Chiamato da [DoVerbShow](#doverbshow) prima che il controllo sia stato reso visibile.|
|[IOleObjectImpl::OnPreVerbUIActivate](#onpreverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima dell'attivazione dell'interfaccia utente del controllo.|
|[IOleObjectImpl::SetClientSiteIOleObjectImpl::SetClientSite](#setclientsite)|Indica al controllo il relativo sito client nel contenitore.|
|[IOleObjectImpl::SetColorSchemeIOleObjectImpl::SetColorScheme](#setcolorscheme)|Consiglia una combinazione di colori per l'applicazione del controllo, se presente. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl::SetExtentIOleObjectImpl::SetExtent](#setextent)|Imposta l'estensione dell'area di visualizzazione del controllo.|
|[IOleObjectImpl::SetHostNamesIOleObjectImpl::SetHostNames](#sethostnames)|Indica al controllo i nomi dell'applicazione contenitore e del documento contenitore.|
|[IOleObjectImpl::SetMonikerIObjectObjectImpl::SetMoniker](#setmoniker)|Indica al controllo qual è il relativo moniker. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl::Unadvise](#unadvise)|Elimina una connessione consultiva con il controllo.|
|[IOleObjectImpl::Aggiornamento](#update)|Aggiorna il controllo. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Osservazioni

Il [IOleObject](/windows/win32/api/oleidl/nn-oleidl-ioleobject) interfaccia è l'interfaccia principale tramite la quale un contenitore comunica con un controllo. Classe `IOleObjectImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleObject`

`IOleObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ioleobjectimpladvise"></a><a name="advise"></a>IOleObjectImpl::Advise

Stabilisce una connessione consultiva con il controllo.

```
STDMETHOD(Advise)(
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) in Windows SDK.

## <a name="ioleobjectimplclose"></a><a name="close"></a>IOleObjectImpl::Chiudi

Modifica lo stato del controllo da esecuzione a caricato.

```
STDMETHOD(Close)(DWORD dwSaveOption);
```

### <a name="remarks"></a>Osservazioni

Disattiva il controllo ed elimina la finestra del controllo, se esistente. Se il membro dati della classe di controllo [CComControlBase::m_bRequiresSave](../../atl/reference/ccomcontrolbase-class.md#m_brequiressave) è TRUE e il parametro *dwSaveOption* è OLECLOSE_SAVEIFDIRTY o OLECLOSE_PROMPTSAVE, le proprietà del controllo vengono salvate prima della chiusura.

Vengono rilasciati i puntatori contenuti nei membri dati della classe di controllo [CComControlBase::m_spInPlaceSite](../../atl/reference/ccomcontrolbase-class.md#m_spinplacesite) e [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink) e i membri dati [CComControlBase::m_bNegotiatedWnd](../../atl/reference/ccomcontrolbase-class.md#m_bnegotiatedwnd), [CComControlBase::m_bWndless](../../atl/reference/ccomcontrolbase-class.md#m_bwndless)e [CComControlBase::m_bInPlaceSiteEx](../../atl/reference/ccomcontrolbase-class.md#m_binplacesiteex) vengono impostati su FALSE.

Vedere [IOleObject::Close](/windows/win32/api/oleidl/nf-oleidl-ioleobject-close) in Windows SDK.

## <a name="ioleobjectimpldoverb"></a><a name="doverb"></a>IOleObjectImpl::DoVerb

Indica al controllo di eseguire una delle azioni enumerate.

```
STDMETHOD(DoVerb)(
    LONG iVerb,
    LPMSG /* pMsg */,
    IOleClientSite* pActiveSite,
    LONG /* lindex */,
    HWND hwndParent,
    LPCRECT lprcPosRect);
```

### <a name="remarks"></a>Osservazioni

A seconda del `iVerb`valore di , `DoVerb` viene chiamata una delle funzioni di supporto ATL come segue:

|*IVerbo* Valore|DoVerb (funzione helper chiamata)|
|-------------------|-----------------------------------|
|OLEIVERB_DISCARDUNDOSTATE|[DoVerbDiscardUndo](#doverbdiscardundo)|
|OLEIVERB_HIDE|[DoVerbHide](#doverbhide)|
|OLEIVERB_INPLACEACTIVATE|[DoVerbInPlaceActivate (AttivaAzioneInSito)](#doverbinplaceactivate)|
|OLEIVERB_OPEN|[DoVerbOpen](#doverbopen)|
|OLEIVERB_PRIMARY|[DoVerbPrimary](#doverbprimary)|
|OLEIVERB_PROPERTIES|[CComControlBase::DoVerbProperties](../../atl/reference/ccomcontrolbase-class.md#doverbproperties)|
|OLEIVERB_SHOW|[DoVerbShow](#doverbshow)|
|OLEIVERB_UIACTIVATE|[DoVerbUIActivate](#doverbuiactivate)|

Vedere [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in Windows SDK.

## <a name="ioleobjectimpldoverbdiscardundo"></a><a name="doverbdiscardundo"></a>IOleObjectImpl::DoVerbDiscardUndo

Indica al controllo di eliminare qualsiasi stato di annullamento che mantiene.

```
HRESULT DoVerbDiscardUndo(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbhide"></a><a name="doverbhide"></a>IOleObjectImpl::DoVerbHideIoleObjectImpl::DoVerbHide

Disattiva e rimuove l'interfaccia utente del controllo e nasconde il controllo.

```
HRESULT DoVerbHide(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbinplaceactivate"></a><a name="doverbinplaceactivate"></a>IOleObjectImpl::DoVerbInPlaceActivate

Esegue il controllo e installa la relativa finestra, ma non installa l'interfaccia utente del controllo.

```
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Attiva il controllo sul posto chiamando [CComControlBase::InPlaceActivate](../../atl/reference/ccomcontrolbase-class.md#inplaceactivate). A meno che il `m_bWindowOnly` membro dati `DoVerbInPlaceActivate` della classe del controllo non sia TRUE, prima tenta di attivare il controllo come controllo senza finestra (possibile solo se il contenitore supporta [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless)). Se l'operazione non riesce, la funzione tenta di attivare il controllo con funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)). Se l'operazione non riesce, la funzione tenta di attivare il controllo senza funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite)). Se l'attivazione ha esito positivo, la funzione notifica al contenitore che il controllo è stato attivato.

## <a name="ioleobjectimpldoverbopen"></a><a name="doverbopen"></a>IOleObjectImpl::DoVerbOpen

Fa sì che il controllo venga aperto in una finestra separata.

```
HRESULT DoVerbOpen(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbprimary"></a><a name="doverbprimary"></a>IOleObjectImpl::DoVerbPrimary

Definisce l'azione eseguita quando l'utente fa doppio clic sul controllo.

```
HRESULT DoVerbPrimary(LPCRECT prcPosRect, HWND hwndParent);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, impostare per visualizzare le pagine delle proprietà. È possibile eseguire l'override nella classe del controllo per richiamare un comportamento diverso quando si fa doppio clic; ad esempio, riprodurre un video o attivarlo sul posto.

## <a name="ioleobjectimpldoverbshow"></a><a name="doverbshow"></a>IOleObjectImpl::DoVerbShow

Indica al contenitore di rendere visibile il controllo.

```
HRESULT DoVerbShow(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ioleobjectimpldoverbuiactivate"></a><a name="doverbuiactivate"></a>IOleObjectImpl::DoVerbUIActivate

Attiva l'interfaccia utente del controllo e notifica al contenitore che i relativi menu vengono sostituiti da menu compositi.

```
HRESULT DoVerbUIActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
[in] Puntatore al rettangolo in cui il contenitore desidera disegnare il controllo.

*hwndPadre*<br/>
[in] Handle della finestra contenente il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ioleobjectimplenumadvise"></a><a name="enumadvise"></a>IOleObjectImpl::EnumAdviseIoleObjectImpl::EnumAdvise

Fornisce un'enumerazione di connessioni di advisory registrate per questo controllo.

```
STDMETHOD(EnumAdvise)(IEnumSTATDATA** ppenumAdvise);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::EnumAdvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumadvise) in Windows SDK.

## <a name="ioleobjectimplenumverbs"></a><a name="enumverbs"></a>IOleObjectImpl::EnumVerbs

Fornisce un'enumerazione di azioni registrate (verbi) per questo controllo chiamando `OleRegEnumVerbs`.

```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```

### <a name="remarks"></a>Osservazioni

È possibile aggiungere verbi al file RGS del progetto. Ad esempio, vedere CIRCCTL. RGS nell'esempio [CIRC.](../../overview/visual-cpp-samples.md)

Vedere [IOleObject::EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs) in Windows SDK.

## <a name="ioleobjectimplgetclientsite"></a><a name="getclientsite"></a>IOleObjectImpl::GetClientSiteIOleObjectImpl::GetClientSite

Inserisce il puntatore nel membro dati della classe di controllo [CComControlBase::m_spClientSite](../../atl/reference/ccomcontrolbase-class.md#m_spclientsite) in *ppClientSite* e incrementa il conteggio dei riferimenti nel puntatore.

```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::GetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclientsite) in Windows SDK.

## <a name="ioleobjectimplgetclipboarddata"></a><a name="getclipboarddata"></a>IOleObjectImpl::GetClipboardDataIOleObjectImpl::GetClipboardData

Recupera i dati dagli Appunti.

```
STDMETHOD(GetClipboardData)(
    DWORD /* dwReserved */,
    IDataObject** /* ppDataObject */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::GetClipboardData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclipboarddata) in Windows SDK.

## <a name="ioleobjectimplgetextent"></a><a name="getextent"></a>IOleObjectImpl::GetExtentIOleObjectImpl::GetExtent

Recupera le dimensioni di visualizzazione di un controllo in esecuzione in unità HIMETRIC (0,01 millimetri per unità).

```
STDMETHOD(GetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### <a name="remarks"></a>Osservazioni

La dimensione viene archiviata nel membro dati della classe del controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

Vedere [IOleObject::GetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getextent) in Windows SDK.

## <a name="ioleobjectimplgetmiscstatus"></a><a name="getmiscstatus"></a>IOleObjectImpl::GetMiscStatusIOleObjectImpl::GetMiscStatus

Restituisce un puntatore a informazioni `OleRegGetMiscStatus`sullo stato registrate per il controllo chiamando .

```
STDMETHOD(GetMiscStatus)(
    DWORD dwAspect,
    DWORD* pdwStatus);
```

### <a name="remarks"></a>Osservazioni

Le informazioni sullo stato includono i comportamenti supportati dai dati del controllo e della presentazione. È possibile aggiungere informazioni sullo stato al file RGS del progetto.

Vedere [IOleObject::GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) in Windows SDK.

## <a name="ioleobjectimplgetmoniker"></a><a name="getmoniker"></a>IOleObjectImpl::GetMoniker

Recupera il moniker del controllo.

```
STDMETHOD(GetMoniker)(
    DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker** /* ppmk */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::GetMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmoniker) in Windows SDK.

## <a name="ioleobjectimplgetuserclassid"></a><a name="getuserclassid"></a>IOleObjectImpl::GetUserClassIDIOleObjectImpl::GetUserClassID

Restituisce l'identificatore di classe del controllo.

```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::GetUserClassID](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getuserclassid) in Windows SDK.

## <a name="ioleobjectimplgetusertype"></a><a name="getusertype"></a>IOleObjectImpl::GetUserTypeIOleObjectImpl::GetUserType

Restituisce il nome del tipo `OleRegGetUserType`di utente del controllo chiamando .

```
STDMETHOD(GetUserType)(
    DWORD dwFormOfType,
    LPOLESTR* pszUserType);
```

### <a name="remarks"></a>Osservazioni

Il nome del tipo di utente viene utilizzato per la visualizzazione negli elementi dell'interfaccia utente, ad esempio menu e finestre di dialogo. È possibile modificare il nome del tipo di utente nel file RGS del progetto.

Vedere [IOleObject::GetUserType](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getusertype) in Windows SDK.

## <a name="ioleobjectimplinitfromdata"></a><a name="initfromdata"></a>IOleObjectImpl::InitFromDataIOleObjectImpl::InitFromData

Inizializza il controllo dai dati selezionati.

```
STDMETHOD(InitFromData)(
    IDataObject* /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) in Windows SDK.

## <a name="ioleobjectimplisuptodate"></a><a name="isuptodate"></a>IOleObjectImpl::IsUpToDateIOleObjectImpl::IsUpToDate

Controlla se il controllo è aggiornato.

```
STDMETHOD(IsUpToDate)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::IsUpToDate](/windows/win32/api/oleidl/nf-oleidl-ioleobject-isuptodate) in Windows SDK.

## <a name="ioleobjectimplonpostverbdiscardundo"></a><a name="onpostverbdiscardundo"></a>IOleObjectImpl::OnPostVerbDiscardUndoIOleObjectImpl::OnPostVerbDiscardUndo

Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo l'eliminazione dello stato di annullamento.

```
HRESULT OnPostVerbDiscardUndo();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera venga eseguito dopo l'eliminazione dello stato di annullamento.

## <a name="ioleobjectimplonpostverbhide"></a><a name="onpostverbhide"></a>IOleObjectImpl::OnPostVerbHideIOleObjectImpl::OnPostVerbHide

Chiamato da [DoVerbHide](#doverbhide) dopo che il controllo è nascosto.

```
HRESULT OnPostVerbHide();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera venga eseguito dopo che il controllo è nascosto.

## <a name="ioleobjectimplonpostverbinplaceactivate"></a><a name="onpostverbinplaceactivate"></a>IOleObjectImpl::OnPostVerbInPlaceActivateIOleObjectImpl::OnPostVerbInPlaceActivate

Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo l'attivazione del controllo sul posto.

```
HRESULT OnPostVerbInPlaceActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera venga eseguito dopo l'attivazione del controllo sul posto.

## <a name="ioleobjectimplonpostverbopen"></a><a name="onpostverbopen"></a>IOleObjectImpl::OnPostVerbOpenIOleObjectImpl::OnPostVerbOpen

Chiamato da [DoVerbOpen](#doverbopen) dopo che il controllo è stato aperto per la modifica in una finestra separata.

```
HRESULT OnPostVerbOpen();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera venga eseguito dopo che il controllo è stato aperto per la modifica in una finestra separata.

## <a name="ioleobjectimplonpostverbshow"></a><a name="onpostverbshow"></a>IOleObjectImpl::OnPostVerbShowIOleObjectImpl::OnPostVerbShow

Chiamato da [DoVerbShow](#doverbshow) dopo che il controllo è stato reso visibile.

```
HRESULT OnPostVerbShow();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera eseguire dopo che il controllo è stato reso visibile.

## <a name="ioleobjectimplonpostverbuiactivate"></a><a name="onpostverbuiactivate"></a>IOleObjectImpl::OnPostVerbUIActivate

Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.

```
HRESULT OnPostVerbUIActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo con il codice che si desidera venga eseguito dopo l'attivazione dell'interfaccia utente del controllo.

## <a name="ioleobjectimplonpreverbdiscardundo"></a><a name="onpreverbdiscardundo"></a>IOleObjectImpl::OnPreVerbDiscardUndoIOleObjectImpl::OnPreVerbDiscardUndo

Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima che lo stato di annullamento venga eliminato.

```
HRESULT OnPreVerbDiscardUndo();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per evitare che lo stato di annullamento venga eliminato, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplonpreverbhide"></a><a name="onpreverbhide"></a>IOleObjectImpl::OnPreVerbHideIoleObjectImpl::OnPreVerbHide

Chiamato da [DoVerbHide](#doverbhide) prima che il controllo viene nascosto.

```
HRESULT OnPreVerbHide();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per evitare che il controllo venga nascosto, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplonpreverbinplaceactivate"></a><a name="onpreverbinplaceactivate"></a>IOleObjectImpl::OnPreVerbInPlaceActivateIOleObjectImpl::OnPreVerbInPlaceActivate

Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo venga attivato sul posto.

```
HRESULT OnPreVerbInPlaceActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per impedire che il controllo venga attivato sul posto, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplonpreverbopen"></a><a name="onpreverbopen"></a>IOleObjectImpl::OnPreVerbOpenIOleObjectImpl::OnPreVerbOpen

Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo sia stato aperto per la modifica in una finestra separata.

```
HRESULT OnPreVerbOpen();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per impedire che il controllo venga aperto per la modifica in una finestra separata, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplonpreverbshow"></a><a name="onpreverbshow"></a>IOleObjectImpl::OnPreVerbShowIOleObjectImpl::OnPreVerbShow

Chiamato da [DoVerbShow](#doverbshow) prima che il controllo sia stato reso visibile.

```
HRESULT OnPreVerbShow();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per evitare che il controllo venga reso visibile, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplonpreverbuiactivate"></a><a name="onpreverbuiactivate"></a>IOleObjectImpl::OnPreVerbUIActivate

Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima dell'attivazione dell'interfaccia utente del controllo.

```
HRESULT OnPreVerbUIActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Per impedire l'attivazione dell'interfaccia utente del controllo, eseguire l'override di questo metodo per restituire un HRESULT di errore.

## <a name="ioleobjectimplsetclientsite"></a><a name="setclientsite"></a>IOleObjectImpl::SetClientSiteIOleObjectImpl::SetClientSite

Indica al controllo il relativo sito client nel contenitore.

```
STDMETHOD(SetClientSite)(IOleClientSite* pClientSite);
```

### <a name="remarks"></a>Osservazioni

Il metodo restituisce quindi S_OK.

Vedere [IOleObject::SetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setclientsite) in Windows SDK.

## <a name="ioleobjectimplsetcolorscheme"></a><a name="setcolorscheme"></a>IOleObjectImpl::SetColorSchemeIOleObjectImpl::SetColorScheme

Consiglia una combinazione di colori per l'applicazione del controllo, se presente.

```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) in Windows SDK.

## <a name="ioleobjectimplsetextent"></a><a name="setextent"></a>IOleObjectImpl::SetExtentIOleObjectImpl::SetExtent

Imposta l'estensione dell'area di visualizzazione del controllo.

```
STDMETHOD(SetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### <a name="remarks"></a>Osservazioni

In `SetExtent` caso contrario, `psizel` archivia il valore a cui fa riferimento nel membro dati della classe del controllo [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent). Questo valore è in unità HIMETRIC (0,01 millimetri per unità).

Se il membro dati della classe di controllo `SetExtent` [CComControlBase::m_bResizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_bresizenatural) è TRUE, archivia anche il valore a cui fa riferimento `psizel` nel membro dati della classe di controllo [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural).

Se il membro dati della classe di controllo `SetExtent` [CComControlBase::m_bRecomposeOnResize](../../atl/reference/ccomcontrolbase-class.md#m_brecomposeonresize) è TRUE, le chiamate `SendOnDataChange` e `SendOnViewChange` per notificare a tutti i sink consultivi registrati con il titolare di avviso che la dimensione del controllo è stata modificata.

Vedere [IOleObject::SetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setextent) in Windows SDK.

## <a name="ioleobjectimplsethostnames"></a><a name="sethostnames"></a>IOleObjectImpl::SetHostNamesIOleObjectImpl::SetHostNames

Indica al controllo i nomi dell'applicazione contenitore e del documento contenitore.

```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */, LPCOLESTR /* szContainerObj */);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::SetHostNames](/windows/win32/api/oleidl/nf-oleidl-ioleobject-sethostnames) in Windows SDK.

## <a name="ioleobjectimplsetmoniker"></a><a name="setmoniker"></a>IOleObjectImpl::SetMonikerIObjectObjectImpl::SetMoniker

Indica al controllo qual è il relativo moniker.

```
STDMETHOD(SetMoniker)(
    DWORD /* dwWhichMoniker */,
    IMoniker** /* pmk */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::SetMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setmoniker) in Windows SDK.

## <a name="ioleobjectimplunadvise"></a><a name="unadvise"></a>IOleObjectImpl::Unadvise

Elimina la connessione consultiva archiviata nel `m_spOleAdviseHolder` membro dati della classe del controllo.

```
STDMETHOD(Unadvise)(DWORD dwConnection);
```

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) in Windows SDK.

## <a name="ioleobjectimplupdate"></a><a name="update"></a>IOleObjectImpl::Aggiornamento

Aggiorna il controllo.

```
STDMETHOD(Update)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IOleObject::Update](/windows/win32/api/oleidl/nf-oleidl-ioleobject-update) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce dei controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
