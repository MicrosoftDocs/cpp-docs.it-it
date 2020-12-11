---
description: 'Altre informazioni su: classe IOleObjectImpl'
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
ms.openlocfilehash: a8e9fd7dc370ee3f0861ab152061e4a0b96465ef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158179"
---
# <a name="ioleobjectimpl-class"></a>Classe IOleObjectImpl

Questa classe implementa `IUnknown` e è l'interfaccia principale attraverso la quale un contenitore comunica con un controllo.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ATL_NO_VTABLE IOleObjectImpl : public IOleObject
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IOleObjectImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IOleObjectImpl:: Advise](#advise)|Stabilisce una connessione consultiva con il controllo.|
|[IOleObjectImpl:: Close](#close)|Modifica lo stato del controllo da running a Loaded.|
|[IOleObjectImpl::D oVerb](#doverb)|Indica al controllo di eseguire una delle azioni enumerate.|
|[IOleObjectImpl::D oVerbDiscardUndo](#doverbdiscardundo)|Indica al controllo di rimuovere qualsiasi stato di annullamento che sta gestendo.|
|[IOleObjectImpl::D oVerbHide](#doverbhide)|Indica al controllo di rimuovere la relativa interfaccia utente dalla visualizzazione.|
|[IOleObjectImpl::D oVerbInPlaceActivate](#doverbinplaceactivate)|Esegue il controllo e installa la finestra, ma non installa l'interfaccia utente del controllo.|
|[IOleObjectImpl::D oVerbOpen](#doverbopen)|Consente di modificare il controllo in una finestra separata.|
|[IOleObjectImpl::D oVerbPrimary](#doverbprimary)|Esegue l'azione specificata quando l'utente fa doppio clic sul controllo. Il controllo definisce l'azione, in genere per attivare il controllo sul posto.|
|[IOleObjectImpl::D oVerbShow](#doverbshow)|Mostra un nuovo controllo inserito all'utente.|
|[IOleObjectImpl::D oVerbUIActivate](#doverbuiactivate)|Attiva il controllo sul posto e Mostra l'interfaccia utente del controllo, ad esempio i menu e le barre degli strumenti.|
|[IOleObjectImpl:: EnumAdvise](#enumadvise)|Enumera le connessioni consultive del controllo.|
|[IOleObjectImpl:: EnumVerbs](#enumverbs)|Enumera le azioni per il controllo.|
|[IOleObjectImpl:: GetClientSite](#getclientsite)|Recupera il sito client del controllo.|
|[IOleObjectImpl:: GetClipboardData](#getclipboarddata)|Recupera i dati dagli Appunti. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl:: GetExtent](#getextent)|Recupera l'ambito dell'area di visualizzazione del controllo.|
|[IOleObjectImpl:: GetMiscStatus](#getmiscstatus)|Recupera lo stato del controllo.|
|[IOleObjectImpl:: GetMoniker](#getmoniker)|Recupera il moniker del controllo. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl:: GetUserClassID](#getuserclassid)|Recupera l'identificatore di classe del controllo.|
|[IOleObjectImpl:: GetUserType](#getusertype)|Recupera il nome del tipo utente del controllo.|
|[IOleObjectImpl:: InitFromData](#initfromdata)|Inizializza il controllo dai dati selezionati. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl:: IsUpToDate](#isuptodate)|Verifica se il controllo è aggiornato. L'implementazione ATL restituisce S_OK.|
|[IOleObjectImpl:: OnPostVerbDiscardUndo](#onpostverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo l'eliminazione dello stato di annullamento.|
|[IOleObjectImpl:: OnPostVerbHide](#onpostverbhide)|Chiamato da [DoVerbHide](#doverbhide) dopo che il controllo è nascosto.|
|[IOleObjectImpl:: OnPostVerbInPlaceActivate](#onpostverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo che il controllo è stato attivato sul posto.|
|[IOleObjectImpl:: OnPostVerbOpen](#onpostverbopen)|Chiamato da [DoVerbOpen](#doverbopen) dopo che il controllo è stato aperto per la modifica in una finestra separata.|
|[IOleObjectImpl:: OnPostVerbShow](#onpostverbshow)|Chiamato da [DoVerbShow](#doverbshow) dopo che il controllo è stato reso visibile.|
|[IOleObjectImpl:: OnPostVerbUIActivate](#onpostverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.|
|[IOleObjectImpl:: OnPreVerbDiscardUndo](#onpreverbdiscardundo)|Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima che lo stato di annullamento venga eliminato.|
|[IOleObjectImpl:: OnPreVerbHide](#onpreverbhide)|Chiamato da [DoVerbHide](#doverbhide) prima che il controllo venga nascosto.|
|[IOleObjectImpl:: OnPreVerbInPlaceActivate](#onpreverbinplaceactivate)|Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo venga attivato sul posto.|
|[IOleObjectImpl:: OnPreVerbOpen](#onpreverbopen)|Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo venga aperto per la modifica in una finestra separata.|
|[IOleObjectImpl:: OnPreVerbShow](#onpreverbshow)|Chiamato da [DoVerbShow](#doverbshow) prima che il controllo venga reso visibile.|
|[IOleObjectImpl:: OnPreVerbUIActivate](#onpreverbuiactivate)|Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima dell'attivazione dell'interfaccia utente del controllo.|
|[IOleObjectImpl:: SetClientSite](#setclientsite)|Indica al controllo il relativo sito client nel contenitore.|
|[IOleObjectImpl:: SetColorScheme](#setcolorscheme)|Consiglia una combinazione di colori per l'applicazione del controllo, se disponibile. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl:: secertal](#setextent)|Imposta l'ambito dell'area di visualizzazione del controllo.|
|[IOleObjectImpl:: sehostnames](#sethostnames)|Indica al controllo i nomi dell'applicazione contenitore e del documento contenitore.|
|[IOleObjectImpl:: semoniker](#setmoniker)|Indica al controllo il relativo moniker. L'implementazione ATL restituisce E_NOTIMPL.|
|[IOleObjectImpl:: Unadvise](#unadvise)|Elimina una connessione consultiva con il controllo.|
|[IOleObjectImpl:: Update](#update)|Aggiorna il controllo. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Commenti

L'interfaccia [IOleObject](/windows/win32/api/oleidl/nn-oleidl-ioleobject) è l'interfaccia principale attraverso la quale un contenitore comunica con un controllo. La classe `IOleObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IOleObject`

`IOleObjectImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="ioleobjectimpladvise"></a><a name="advise"></a> IOleObjectImpl:: Advise

Stabilisce una connessione consultiva con il controllo.

```
STDMETHOD(Advise)(
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) nella Windows SDK.

## <a name="ioleobjectimplclose"></a><a name="close"></a> IOleObjectImpl:: Close

Modifica lo stato del controllo da running a Loaded.

```
STDMETHOD(Close)(DWORD dwSaveOption);
```

### <a name="remarks"></a>Commenti

Disattiva il controllo ed elimina la finestra di controllo, se esistente. Se il membro dati della classe del controllo [CComControlBase:: m_bRequiresSave](../../atl/reference/ccomcontrolbase-class.md#m_brequiressave) è true e il parametro *dwSaveOption* è OLECLOSE_SAVEIFDIRTY o OLECLOSE_PROMPTSAVE, le proprietà del controllo vengono salvate prima della chiusura.

I puntatori conservati nei membri dati della classe del controllo [CComControlBase:: m_spInPlaceSite](../../atl/reference/ccomcontrolbase-class.md#m_spinplacesite) e [CComControlBase:: m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink) vengono rilasciati e i membri dati [CComControlBase:: m_bNegotiatedWnd](../../atl/reference/ccomcontrolbase-class.md#m_bnegotiatedwnd), [CComControlBase:: m_bWndless](../../atl/reference/ccomcontrolbase-class.md#m_bwndless)e [CComControlBase:: m_bInPlaceSiteEx](../../atl/reference/ccomcontrolbase-class.md#m_binplacesiteex) sono impostati su false.

Vedere [IOleObject:: Close](/windows/win32/api/oleidl/nf-oleidl-ioleobject-close) nell'Windows SDK.

## <a name="ioleobjectimpldoverb"></a><a name="doverb"></a> IOleObjectImpl::D oVerb

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

### <a name="remarks"></a>Commenti

A seconda del valore di `iVerb` , una delle `DoVerb` funzioni helper ATL viene chiamata come indicato di seguito:

|*iVerb* Valore|Chiamata della funzione helper DoVerb|
|-------------------|-----------------------------------|
|OLEIVERB_DISCARDUNDOSTATE|[DoVerbDiscardUndo](#doverbdiscardundo)|
|OLEIVERB_HIDE|[DoVerbHide](#doverbhide)|
|OLEIVERB_INPLACEACTIVATE|[DoVerbInPlaceActivate](#doverbinplaceactivate)|
|OLEIVERB_OPEN|[DoVerbOpen](#doverbopen)|
|OLEIVERB_PRIMARY|[DoVerbPrimary](#doverbprimary)|
|OLEIVERB_PROPERTIES|[CComControlBase::D oVerbProperties](../../atl/reference/ccomcontrolbase-class.md#doverbproperties)|
|OLEIVERB_SHOW|[DoVerbShow](#doverbshow)|
|OLEIVERB_UIACTIVATE|[DoVerbUIActivate](#doverbuiactivate)|

Vedere [IOleObject::D overb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) nella Windows SDK.

## <a name="ioleobjectimpldoverbdiscardundo"></a><a name="doverbdiscardundo"></a> IOleObjectImpl::D oVerbDiscardUndo

Indica al controllo di rimuovere qualsiasi stato di annullamento che sta gestendo.

```
HRESULT DoVerbDiscardUndo(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbhide"></a><a name="doverbhide"></a> IOleObjectImpl::D oVerbHide

Disattiva e rimuove l'interfaccia utente del controllo e nasconde il controllo.

```
HRESULT DoVerbHide(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbinplaceactivate"></a><a name="doverbinplaceactivate"></a> IOleObjectImpl::D oVerbInPlaceActivate

Esegue il controllo e installa la finestra, ma non installa l'interfaccia utente del controllo.

```
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Attiva il controllo sul posto chiamando [CComControlBase:: InPlaceActivate](../../atl/reference/ccomcontrolbase-class.md#inplaceactivate). A meno che il membro dati della classe del controllo non `m_bWindowOnly` sia true, `DoVerbInPlaceActivate` tenta innanzitutto di attivare il controllo come controllo senza finestra (possibile solo se il contenitore supporta [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless)). Se l'operazione ha esito negativo, la funzione tenta di attivare il controllo con funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)). Se l'operazione ha esito negativo, la funzione tenta di attivare il controllo senza funzionalità estese (possibile solo se il contenitore supporta [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite)). Se l'attivazione ha esito positivo, la funzione notifica al contenitore che il controllo è stato attivato.

## <a name="ioleobjectimpldoverbopen"></a><a name="doverbopen"></a> IOleObjectImpl::D oVerbOpen

Consente di modificare il controllo in una finestra separata.

```
HRESULT DoVerbOpen(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="ioleobjectimpldoverbprimary"></a><a name="doverbprimary"></a> IOleObjectImpl::D oVerbPrimary

Definisce l'azione eseguita quando l'utente fa doppio clic sul controllo.

```
HRESULT DoVerbPrimary(LPCRECT prcPosRect, HWND hwndParent);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, impostare per visualizzare le pagine delle proprietà. È possibile eseguire l'override di questo nella classe del controllo per richiamare un comportamento diverso in un doppio clic; ad esempio, riprodurre un video o passare al posto attivo.

## <a name="ioleobjectimpldoverbshow"></a><a name="doverbshow"></a> IOleObjectImpl::D oVerbShow

Indica al contenitore di rendere visibile il controllo.

```
HRESULT DoVerbShow(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ioleobjectimpldoverbuiactivate"></a><a name="doverbuiactivate"></a> IOleObjectImpl::D oVerbUIActivate

Attiva l'interfaccia utente del controllo e notifica al contenitore che i menu vengono sostituiti dai menu compositi.

```
HRESULT DoVerbUIActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
in Puntatore al rettangolo in cui il contenitore vuole creare il controllo.

*hwndParent*<br/>
in Handle della finestra che contiene il controllo. Non utilizzato nell'implementazione ATL.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ioleobjectimplenumadvise"></a><a name="enumadvise"></a> IOleObjectImpl:: EnumAdvise

Fornisce un'enumerazione delle connessioni consultive registrate per questo controllo.

```
STDMETHOD(EnumAdvise)(IEnumSTATDATA** ppenumAdvise);
```

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: enumAdvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumadvise) nel Windows SDK.

## <a name="ioleobjectimplenumverbs"></a><a name="enumverbs"></a> IOleObjectImpl:: EnumVerbs

Fornisce un'enumerazione delle azioni registrate (verbi) per questo controllo chiamando `OleRegEnumVerbs` .

```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```

### <a name="remarks"></a>Commenti

È possibile aggiungere verbi al file con estensione rgs del progetto. Vedere ad esempio CIRCCTL. RGS nell'esempio [circ](../../overview/visual-cpp-samples.md) .

Vedere [IOleObject:: EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs) nel Windows SDK.

## <a name="ioleobjectimplgetclientsite"></a><a name="getclientsite"></a> IOleObjectImpl:: GetClientSite

Inserisce il puntatore nel membro dati della classe del controllo [CComControlBase:: m_spClientSite](../../atl/reference/ccomcontrolbase-class.md#m_spclientsite) in *ppClientSite* e incrementa il conteggio dei riferimenti sull'indicatore di misura.

```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: GetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclientsite) nel Windows SDK.

## <a name="ioleobjectimplgetclipboarddata"></a><a name="getclipboarddata"></a> IOleObjectImpl:: GetClipboardData

Recupera i dati dagli Appunti.

```
STDMETHOD(GetClipboardData)(
    DWORD /* dwReserved */,
    IDataObject** /* ppDataObject */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: GetClipboardData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclipboarddata) nel Windows SDK.

## <a name="ioleobjectimplgetextent"></a><a name="getextent"></a> IOleObjectImpl:: GetExtent

Recupera le dimensioni di visualizzazione di un controllo in esecuzione in unità HIMETRIC (0,01 millimetri per unità).

```
STDMETHOD(GetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### <a name="remarks"></a>Commenti

La dimensione viene archiviata nel membro dati della classe del controllo [CComControlBase:: m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

Vedere [IOleObject:: GetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getextent) nel Windows SDK.

## <a name="ioleobjectimplgetmiscstatus"></a><a name="getmiscstatus"></a> IOleObjectImpl:: GetMiscStatus

Restituisce un puntatore alle informazioni di stato registrate per il controllo chiamando `OleRegGetMiscStatus` .

```
STDMETHOD(GetMiscStatus)(
    DWORD dwAspect,
    DWORD* pdwStatus);
```

### <a name="remarks"></a>Commenti

Le informazioni sullo stato includono comportamenti supportati dai dati di controllo e presentazione. È possibile aggiungere informazioni sullo stato al file con estensione rgs del progetto.

Vedere [IOleObject:: GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) nel Windows SDK.

## <a name="ioleobjectimplgetmoniker"></a><a name="getmoniker"></a> IOleObjectImpl:: GetMoniker

Recupera il moniker del controllo.

```
STDMETHOD(GetMoniker)(
    DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker** /* ppmk */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: GetMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmoniker) nell'Windows SDK.

## <a name="ioleobjectimplgetuserclassid"></a><a name="getuserclassid"></a> IOleObjectImpl:: GetUserClassID

Restituisce l'identificatore di classe del controllo.

```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: GetUserClassID](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getuserclassid) nel Windows SDK.

## <a name="ioleobjectimplgetusertype"></a><a name="getusertype"></a> IOleObjectImpl:: GetUserType

Restituisce il nome del tipo utente del controllo chiamando `OleRegGetUserType` .

```
STDMETHOD(GetUserType)(
    DWORD dwFormOfType,
    LPOLESTR* pszUserType);
```

### <a name="remarks"></a>Commenti

Il nome del tipo utente viene usato per la visualizzazione in elementi di interfacce utente, ad esempio menu e finestre di dialogo. È possibile modificare il nome del tipo di utente nel file con estensione rgs del progetto.

Vedere [IOleObject:: GetUserType](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getusertype) nel Windows SDK.

## <a name="ioleobjectimplinitfromdata"></a><a name="initfromdata"></a> IOleObjectImpl:: InitFromData

Inizializza il controllo dai dati selezionati.

```
STDMETHOD(InitFromData)(
    IDataObject* /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) nel Windows SDK.

## <a name="ioleobjectimplisuptodate"></a><a name="isuptodate"></a> IOleObjectImpl:: IsUpToDate

Verifica se il controllo è aggiornato.

```
STDMETHOD(IsUpToDate)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: IsUpToDate](/windows/win32/api/oleidl/nf-oleidl-ioleobject-isuptodate) nel Windows SDK.

## <a name="ioleobjectimplonpostverbdiscardundo"></a><a name="onpostverbdiscardundo"></a> IOleObjectImpl:: OnPostVerbDiscardUndo

Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) dopo l'eliminazione dello stato di annullamento.

```
HRESULT OnPostVerbDiscardUndo();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si desidera eseguire dopo l'eliminazione dello stato di annullamento.

## <a name="ioleobjectimplonpostverbhide"></a><a name="onpostverbhide"></a> IOleObjectImpl:: OnPostVerbHide

Chiamato da [DoVerbHide](#doverbhide) dopo che il controllo è nascosto.

```
HRESULT OnPostVerbHide();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si vuole eseguire dopo che il controllo è nascosto.

## <a name="ioleobjectimplonpostverbinplaceactivate"></a><a name="onpostverbinplaceactivate"></a> IOleObjectImpl:: OnPostVerbInPlaceActivate

Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) dopo che il controllo è stato attivato sul posto.

```
HRESULT OnPostVerbInPlaceActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si vuole eseguire dopo che il controllo è stato attivato sul posto.

## <a name="ioleobjectimplonpostverbopen"></a><a name="onpostverbopen"></a> IOleObjectImpl:: OnPostVerbOpen

Chiamato da [DoVerbOpen](#doverbopen) dopo che il controllo è stato aperto per la modifica in una finestra separata.

```
HRESULT OnPostVerbOpen();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si desidera eseguire dopo che il controllo è stato aperto per la modifica in una finestra separata.

## <a name="ioleobjectimplonpostverbshow"></a><a name="onpostverbshow"></a> IOleObjectImpl:: OnPostVerbShow

Chiamato da [DoVerbShow](#doverbshow) dopo che il controllo è stato reso visibile.

```
HRESULT OnPostVerbShow();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si vuole eseguire dopo che il controllo è stato reso visibile.

## <a name="ioleobjectimplonpostverbuiactivate"></a><a name="onpostverbuiactivate"></a> IOleObjectImpl:: OnPostVerbUIActivate

Chiamato da [DoVerbUIActivate](#doverbuiactivate) dopo l'attivazione dell'interfaccia utente del controllo.

```
HRESULT OnPostVerbUIActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo con il codice che si desidera eseguire dopo l'attivazione dell'interfaccia utente del controllo.

## <a name="ioleobjectimplonpreverbdiscardundo"></a><a name="onpreverbdiscardundo"></a> IOleObjectImpl:: OnPreVerbDiscardUndo

Chiamato da [DoVerbDiscardUndo](#doverbdiscardundo) prima che lo stato di annullamento venga eliminato.

```
HRESULT OnPreVerbDiscardUndo();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire che lo stato di annullamento venga ignorato, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplonpreverbhide"></a><a name="onpreverbhide"></a> IOleObjectImpl:: OnPreVerbHide

Chiamato da [DoVerbHide](#doverbhide) prima che il controllo venga nascosto.

```
HRESULT OnPreVerbHide();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire che il controllo venga nascosto, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplonpreverbinplaceactivate"></a><a name="onpreverbinplaceactivate"></a> IOleObjectImpl:: OnPreVerbInPlaceActivate

Chiamato da [DoVerbInPlaceActivate](#doverbinplaceactivate) prima che il controllo venga attivato sul posto.

```
HRESULT OnPreVerbInPlaceActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire che il controllo venga attivato sul posto, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplonpreverbopen"></a><a name="onpreverbopen"></a> IOleObjectImpl:: OnPreVerbOpen

Chiamato da [DoVerbOpen](#doverbopen) prima che il controllo venga aperto per la modifica in una finestra separata.

```
HRESULT OnPreVerbOpen();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire che il controllo venga aperto per la modifica in una finestra separata, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplonpreverbshow"></a><a name="onpreverbshow"></a> IOleObjectImpl:: OnPreVerbShow

Chiamato da [DoVerbShow](#doverbshow) prima che il controllo venga reso visibile.

```
HRESULT OnPreVerbShow();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire che il controllo venga reso visibile, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplonpreverbuiactivate"></a><a name="onpreverbuiactivate"></a> IOleObjectImpl:: OnPreVerbUIActivate

Chiamato da [DoVerbUIActivate](#doverbuiactivate) prima dell'attivazione dell'interfaccia utente del controllo.

```
HRESULT OnPreVerbUIActivate();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Per impedire l'attivazione dell'interfaccia utente del controllo, eseguire l'override di questo metodo per restituire un errore HRESULT.

## <a name="ioleobjectimplsetclientsite"></a><a name="setclientsite"></a> IOleObjectImpl:: SetClientSite

Indica al controllo il relativo sito client nel contenitore.

```
STDMETHOD(SetClientSite)(IOleClientSite* pClientSite);
```

### <a name="remarks"></a>Commenti

Il metodo restituisce quindi S_OK.

Vedere [IOleObject:: SetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setclientsite) nel Windows SDK.

## <a name="ioleobjectimplsetcolorscheme"></a><a name="setcolorscheme"></a> IOleObjectImpl:: SetColorScheme

Consiglia una combinazione di colori per l'applicazione del controllo, se disponibile.

```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) nel Windows SDK.

## <a name="ioleobjectimplsetextent"></a><a name="setextent"></a> IOleObjectImpl:: secertal

Imposta l'ambito dell'area di visualizzazione del controllo.

```
STDMETHOD(SetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### <a name="remarks"></a>Commenti

In caso contrario, `SetExtent` archivia il valore a cui punta `psizel` nel membro dati della classe del controllo [CComControlBase:: m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent). Questo valore è in unità HIMETRIC (0,01 millimetri per unità).

Se il membro dati della classe del controllo [CComControlBase:: m_bResizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_bresizenatural) è true, `SetExtent` archivia anche il valore a cui punta `psizel` nel membro dati della classe del controllo [CComControlBase:: m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural).

Se il membro dati della classe del controllo [CComControlBase:: m_bRecomposeOnResize](../../atl/reference/ccomcontrolbase-class.md#m_brecomposeonresize) è true, `SetExtent` chiama `SendOnDataChange` e `SendOnViewChange` per notificare a tutti i sink consultivi registrati con il titolare dell'avviso che le dimensioni del controllo sono state modificate.

Vedere [IOleObject:: seextent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setextent) nel Windows SDK.

## <a name="ioleobjectimplsethostnames"></a><a name="sethostnames"></a> IOleObjectImpl:: sehostnames

Indica al controllo i nomi dell'applicazione contenitore e del documento contenitore.

```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */, LPCOLESTR /* szContainerObj */);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: Sehostnames](/windows/win32/api/oleidl/nf-oleidl-ioleobject-sethostnames) nel Windows SDK.

## <a name="ioleobjectimplsetmoniker"></a><a name="setmoniker"></a> IOleObjectImpl:: semoniker

Indica al controllo il relativo moniker.

```
STDMETHOD(SetMoniker)(
    DWORD /* dwWhichMoniker */,
    IMoniker** /* pmk */);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: FileMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setmoniker) nell'Windows SDK.

## <a name="ioleobjectimplunadvise"></a><a name="unadvise"></a> IOleObjectImpl:: Unadvise

Elimina la connessione consultiva archiviata nel membro dati della classe del controllo `m_spOleAdviseHolder` .

```
STDMETHOD(Unadvise)(DWORD dwConnection);
```

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) nel Windows SDK.

## <a name="ioleobjectimplupdate"></a><a name="update"></a> IOleObjectImpl:: Update

Aggiorna il controllo.

```
STDMETHOD(Update)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IOleObject:: Update](/windows/win32/api/oleidl/nf-oleidl-ioleobject-update) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Interfacce di controlli ActiveX](/windows/win32/com/activex-controls-interfaces)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
