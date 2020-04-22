---
title: CComControlBase (classe)
ms.date: 11/04/2016
f1_keywords:
- CComControlBase
- ATLCTL/ATL::CComControlBase
- ATLCTL/ATL::CComControlBase::AppearanceType
- ATLCTL/ATL::CComControlBase::CComControlBase
- ATLCTL/ATL::CComControlBase::ControlQueryInterface
- ATLCTL/ATL::CComControlBase::DoesVerbActivate
- ATLCTL/ATL::CComControlBase::DoesVerbUIActivate
- ATLCTL/ATL::CComControlBase::DoVerbProperties
- ATLCTL/ATL::CComControlBase::FireViewChange
- ATLCTL/ATL::CComControlBase::GetAmbientAppearance
- ATLCTL/ATL::CComControlBase::GetAmbientAutoClip
- ATLCTL/ATL::CComControlBase::GetAmbientBackColor
- ATLCTL/ATL::CComControlBase::GetAmbientCharSet
- ATLCTL/ATL::CComControlBase::GetAmbientCodePage
- ATLCTL/ATL::CComControlBase::GetAmbientDisplayAsDefault
- ATLCTL/ATL::CComControlBase::GetAmbientDisplayName
- ATLCTL/ATL::CComControlBase::GetAmbientFont
- ATLCTL/ATL::CComControlBase::GetAmbientFontDisp
- ATLCTL/ATL::CComControlBase::GetAmbientForeColor
- ATLCTL/ATL::CComControlBase::GetAmbientLocaleID
- ATLCTL/ATL::CComControlBase::GetAmbientMessageReflect
- ATLCTL/ATL::CComControlBase::GetAmbientPalette
- ATLCTL/ATL::CComControlBase::GetAmbientProperty
- ATLCTL/ATL::CComControlBase::GetAmbientRightToLeft
- ATLCTL/ATL::CComControlBase::GetAmbientScaleUnits
- ATLCTL/ATL::CComControlBase::GetAmbientShowGrabHandles
- ATLCTL/ATL::CComControlBase::GetAmbientShowHatching
- ATLCTL/ATL::CComControlBase::GetAmbientSupportsMnemonics
- ATLCTL/ATL::CComControlBase::GetAmbientTextAlign
- ATLCTL/ATL::CComControlBase::GetAmbientTopToBottom
- ATLCTL/ATL::CComControlBase::GetAmbientUIDead
- ATLCTL/ATL::CComControlBase::GetAmbientUserMode
- ATLCTL/ATL::CComControlBase::GetDirty
- ATLCTL/ATL::CComControlBase::GetZoomInfo
- ATLCTL/ATL::CComControlBase::InPlaceActivate
- ATLCTL/ATL::CComControlBase::InternalGetSite
- ATLCTL/ATL::CComControlBase::OnDraw
- ATLCTL/ATL::CComControlBase::OnDrawAdvanced
- ATLCTL/ATL::CComControlBase::OnKillFocus
- ATLCTL/ATL::CComControlBase::OnMouseActivate
- ATLCTL/ATL::CComControlBase::OnPaint
- ATLCTL/ATL::CComControlBase::OnSetFocus
- ATLCTL/ATL::CComControlBase::PreTranslateAccelerator
- ATLCTL/ATL::CComControlBase::SendOnClose
- ATLCTL/ATL::CComControlBase::SendOnDataChange
- ATLCTL/ATL::CComControlBase::SendOnRename
- ATLCTL/ATL::CComControlBase::SendOnSave
- ATLCTL/ATL::CComControlBase::SendOnViewChange
- ATLCTL/ATL::CComControlBase::SetControlFocus
- ATLCTL/ATL::CComControlBase::SetDirty
- ATLCTL/ATL::CComControlBase::m_bAutoSize
- ATLCTL/ATL::CComControlBase::m_bDrawFromNatural
- ATLCTL/ATL::CComControlBase::m_bDrawGetDataInHimetric
- ATLCTL/ATL::CComControlBase::m_bInPlaceActive
- ATLCTL/ATL::CComControlBase::m_bInPlaceSiteEx
- ATLCTL/ATL::CComControlBase::m_bNegotiatedWnd
- ATLCTL/ATL::CComControlBase::m_bRecomposeOnResize
- ATLCTL/ATL::CComControlBase::m_bRequiresSave
- ATLCTL/ATL::CComControlBase::m_bResizeNatural
- ATLCTL/ATL::CComControlBase::m_bUIActive
- ATLCTL/ATL::CComControlBase::m_bUsingWindowRgn
- ATLCTL/ATL::CComControlBase::m_bWasOnceWindowless
- ATLCTL/ATL::CComControlBase::m_bWindowOnly
- ATLCTL/ATL::CComControlBase::m_bWndLess
- ATLCTL/ATL::CComControlBase::m_hWndCD
- ATLCTL/ATL::CComControlBase::m_nFreezeEvents
- ATLCTL/ATL::CComControlBase::m_rcPos
- ATLCTL/ATL::CComControlBase::m_sizeExtent
- ATLCTL/ATL::CComControlBase::m_sizeNatural
- ATLCTL/ATL::CComControlBase::m_spAdviseSink
- ATLCTL/ATL::CComControlBase::m_spAmbientDispatch
- ATLCTL/ATL::CComControlBase::m_spClientSite
- ATLCTL/ATL::CComControlBase::m_spDataAdviseHolder
- ATLCTL/ATL::CComControlBase::m_spInPlaceSite
- ATLCTL/ATL::CComControlBase::m_spOleAdviseHolder
helpviewer_keywords:
- CComControlBase class
ms.assetid: 3d1bf022-acf2-4092-8283-ff8cee6332f3
ms.openlocfilehash: 15cfa205337248181f02e6a1218d49e75bda58e6
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748119"
---
# <a name="ccomcontrolbase-class"></a>CComControlBase (classe)

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CComControlBase
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::AppearanceType](#appearancetype)|Eseguire l'override se la `m_nAppearance` proprietà predefinita non è di tipo **short**.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::CComControlBase](#ccomcontrolbase)|Costruttore.|
|[CComControlBase:: CComControlBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComControlBase::DoesVerbActivate](#doesverbactivate)|Verifica che il parametro `IOleObjectImpl::DoVerb` *iVerb* utilizzato da attivi l'interfaccia utente del controllo (*iVerb* è uguale a OLEIVERB_UIACTIVATE), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo *(iVerb* è uguale a OLEIVERB_PRIMARY), visualizza il controllo (*iVerb* uguale a OLEIVERB_SHOW) o attiva il controllo (*iVerb* uguale a OLEIVERB_INPLACEACTIVATE).|
|[CComControlBase::DoesVerbUIActivate](#doesverbuiactivate)|Verifica che il parametro `IOleObjectImpl::DoVerb` *iVerb* utilizzato da provochi l'attivazione dell'interfaccia utente del controllo e restituisca TRUE.|
|[CComControlBase::DoVerbProperties](#doverbproperties)|Visualizza le pagine delle proprietà del controllo.|
|[CComControlBase::FireViewChange (informazioni in base alla visualizzazione di un'azione utente)](#fireviewchange)|Chiamare questo metodo per indicare al contenitore di ridisegnare il controllo o notificare ai sink di avviso registrati che la visualizzazione del controllo è stata modificata.|
|[CComControlBase::GetAmbientAppearance](#getambientappearance)|Recupera DISPID_AMBIENT_APPEARANCE, l'impostazione dell'aspetto corrente per il controllo: 0 per flat e 1 per 3D.|
|[CComControlBase::GetAmbientAutoClip](#getambientautoclip)|Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ritaglio automatico dell'area di visualizzazione del controllo.|
|[CComControlBase::GetAmbientBackColor](#getambientbackcolor)|Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientCharSet](#getambientcharset)|Recupera DISPID_AMBIENT_CHARSET, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientCodePage](#getambientcodepage)|Recupera DISPID_AMBIENT_CODEPAGE, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientDisplayAsDefault](#getambientdisplayasdefault)|Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come un pulsante predefinito e pertanto un controllo pulsante deve disegnare se stesso con un frame più spesso.|
|[CComControlBase::GetAmbientDisplayName](#getambientdisplayname)|Recupera DISPID_AMBIENT_DISPLAYNAME, il nome fornito dal contenitore al controllo.|
|[CComControlBase::GetAmbientFont](#getambientfont)|Recupera un puntatore all'interfaccia `IFont` di ambiente del contenitore.|
|[CComControlBase::GetAmbientFontDisp](#getambientfontdisp)|Recupera un puntatore all'interfaccia `IFontDisp` di invio dell'ambiente del contenitore.|
|[CComControlBase::GetAmbientForeColor](#getambientforecolor)|Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientLocaleID](#getambientlocaleid)|Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.|
|[CComControlBase::GetAmbientMessageReflect](#getambientmessagereflect)|Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore desidera ricevere i messaggi della finestra (ad esempio WM_DRAWITEM) come eventi.|
|[CComControlBase::GetAmbientPalette](#getambientpalette)|Recupera DISPID_AMBIENT_PALETTE, utilizzato per accedere a HPALETTE del contenitore.|
|[CComControlBase::GetAmbientProperty](#getambientproperty)|Recupera la proprietà del contenitore specificata da *id*.|
|[CComControlBase::GetAmbientRightToLeft](#getambientrighttoleft)|Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui il contenuto viene visualizzato dal contenitore.|
|[CComControlBase::GetAmbientScaleUnits](#getambientscaleunits)|Recupera DISPID_AMBIENT_SCALEUNITS, le unità di ambiente del contenitore (ad esempio pollici o centimetri) per l'etichettatura delle visualizzazioni.|
|[CComControlBase::GetAmbientShowGrabHandles](#getambientshowgrabhandles)|Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente al controllo di visualizzare gli handle di acquisizione per se stesso quando è attivo.|
|[CComControlBase::GetAmbientShowHatching (CComControlBase::GetAmbientShowHatching)](#getambientshowhatching)|Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente al controllo di visualizzarsi con un modello tratteggiato quando l'interfaccia utente è attiva.|
|[CComControlBase::GetAmbientSupportsMnemonics](#getambientsupportsmnemonics)|Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta rapida della tastiera.|
|[CComControlBase::GetAmbientTextAlign](#getambienttextalign)|Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferito dal contenitore: 0 per l'allineamento generale (numeri a destra, testo a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.|
|[CComControlBase::GetAmbientTopToBottom](#getambienttoptobottom)|Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui il contenuto viene visualizzato dal contenitore.|
|[CComControlBase::GetAmbientUI Dead](#getambientuidead)|Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore desidera che il controllo risponda alle azioni dell'interfaccia utente.|
|[CComControlBase::GetAmbientUserMode](#getambientusermode)|Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).|
|[CComControlBase::GetDirty](#getdirty)|Restituisce il valore `m_bRequiresSave`del membro dati.|
|[CComControlBase::Get](#getzoominfo)|Recupera i valori x e y del numeratore e del denominatore del fattore di zoom per un controllo attivato per la modifica sul posto.|
|[CComControlBase::InPlaceActivate (InPlaceActivate)](#inplaceactivate)|Determina la transizione del controllo dallo stato inattivo a qualsiasi stato indicato dal verbo in *iVerb.*|
|[CComControlBase::InternalGetSito](#internalgetsite)|Chiamare questo metodo per eseguire una query sul sito del controllo per un puntatore all'interfaccia identificata.|
|[CComControlBase::OnDraw](#ondraw)|Eseguire l'override di questo metodo per disegnare il controllo.|
|[CComControlBase::OnDrawAdvanced](#ondrawadvanced)|L'impostazione predefinita `OnDrawAdvanced` prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama il metodo della classe del `OnDraw` controllo.|
|[CComControlBase::OnKillFocus](#onkillfocus)|Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.|
|[CComControlBase::OnMouseActivate (Informazioni in base alle funzionalità)](#onmouseactivate)|Controlla che l'interfaccia utente sia in modalità utente, quindi attiva il controllo.|
|[CComControlBase::OnPaint](#onpaint)|Prepara il contenitore per il disegno, ottiene l'area client `OnDraw` del controllo, quindi chiama il metodo della classe del controllo.|
|[CComControlBase::OnSetFocus](#onsetfocus)|Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha acquisito lo stato attivo.|
|[CComControlBase::PreTranslateAccelerator](#pretranslateaccelerator)|Eseguire l'override di questo metodo per fornire gestori dei tasti di scelta rapida personalizzati.|
|[CComControlBase::SendOnClose](#sendonclose)|Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che il controllo è stato chiuso.|
|[CComControlBase::SendOnDataChange (Informazioni su datidi base)](#sendondatachange)|Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che i dati di controllo sono stati modificati.|
|[CComControlBase::SendOnRename](#sendonrename)|Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che il controllo ha un nuovo moniker.|
|[CComControlBase::SendOnSave](#sendonsave)|Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che il controllo è stato salvato.|
|[CComControlBase::SendOnViewChange (Informazioni in base alle informazioni in questo campo)](#sendonviewchange)|Notifica a tutti i sink consultivi registrati che la visualizzazione del controllo è stata modificata.|
|[CComControlBase::SetControlFocus](#setcontrolfocus)|Imposta o rimuove lo stato attivo della tastiera da o verso il controllo.|
|[CComControlBase::SetDirty](#setdirty)|Imposta il `m_bRequiresSave` membro dati sul valore in *bDirty*.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::m_bAutoSize](#m_bautosize)|Flag che indica che il controllo non può essere di altre dimensioni.|
|[CComControlBase::m_bDrawFromNatural](#m_bdrawfromnatural)|Flag che `IDataObjectImpl::GetData` indica `CComControlBase::GetZoomInfo` che e deve `m_sizeNatural` impostare `m_sizeExtent`la dimensione del controllo da anziché da .|
|[CComControlBase::m_bDrawGetDataInHimetric](#m_bdrawgetdatainhimetric)|Flag che `IDataObjectImpl::GetData` indica che deve utilizzare unità HIMETRIC e non pixel durante il disegno.|
|[CComControlBase::m_bInPlaceActive](#m_binplaceactive)|Flag che indica che il controllo è attivo sul posto.|
|[CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex)|Flag che indica che `IOleInPlaceSiteEx` il contenitore supporta l'interfaccia e le funzionalità di controllo OCX96, ad esempio i controlli senza finestra e senza sfarfallio.|
|[CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd)|Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità del controllo OCX96 (ad esempio controlli senza sfarfallio e senza finestra) e se il controllo è privo di finestra o senza finestra.|
|[CComControlBase::m_bRecomposeOnResize](#m_brecomposeonresize)|Flag che indica che il controllo desidera ricomporre la presentazione quando il contenitore modifica le dimensioni di visualizzazione del controllo.|
|[CComControlBase::m_bRequiresSave](#m_brequiressave)|Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.|
|[CComControlBase::m_bResizeNatural](#m_bresizenatural)|Flag che indica che il controllo desidera ridimensionarne l'estensione naturale (le dimensioni fisiche non in scala) quando il contenitore modifica le dimensioni di visualizzazione del controllo.|
|[CComControlBase::m_bUIActive](#m_buiactive)|Flag che indica l'interfaccia utente del controllo, ad esempio menu e barre degli strumenti, è attivo.|
|[CComControlBase::m_bUsingWindowRgn](#m_busingwindowrgn)|Flag che indica che il controllo utilizza l'area della finestra fornita dal contenitore.|
|[CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)|Flag che indica che il controllo è stato privo di finestra, ma può essere o meno senza finestra ora.|
|[CComControlBase::m_bWindowOnly](#m_bwindowonly)|Flag che indica che il controllo deve essere sottoposto a window, anche se il contenitore supporta i controlli senza finestra.|
|[CComControlBase::m_bWndLess](#m_bwndless)|Flag che indica che il controllo è senza finestra.|
|[CComControlBase::m_hWndCD](#m_hwndcd)|Contiene un riferimento all'handle di finestra associato al controllo.|
|[CComControlBase::m_nFreezeEvents](#m_nfreezeevents)|Conteggio del numero di volte in cui il contenitore ha bloccato gli eventi (rifiutato di accettare eventi) senza intervenire degli eventi (accettazione degli eventi).|
|[CComControlBase::m_rcPos](#m_rcpos)|Posizione in pixel del controllo, espressa nelle coordinate del contenitore.|
|[CComControlBase::m_sizeExtent](#m_sizeextent)|L'estensione del controllo nelle unità HIMETRIC (ogni unità è 0,01 millimetri) per una particolare visualizzazione.|
|[CComControlBase::m_sizeNatural](#m_sizenatural)|La dimensione fisica del controllo in unità HIMETRIC (ogni unità è di 0,01 millimetri).|
|[CComControlBase::m_spAdviseSink](#m_spadvisesink)|Puntatore diretto alla connessione consultiva nel contenitore [(IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)del contenitore ).|
|[CComControlBase::m_spAmbientDispatch](#m_spambientdispatch)|Oggetto `CComDispatchDriver` che consente di recuperare e impostare `IDispatch` le proprietà del contenitore tramite un puntatore.|
|[CComControlBase::m_spClientSite](#m_spclientsite)|Puntatore al sito client del controllo all'interno del contenitore.|
|[CComControlBase::m_spDataAdviseHolder](#m_spdataadviseholder)|Fornisce un mezzo standard per mantenere connessioni consultive tra oggetti dati e consigliare i sink.|
|[CComControlBase::m_spInPlaceSite](#m_spinplacesite)|Puntatore al puntatore a interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) del contenitore.|
|[CComControlBase::m_spOleAdviseHolder](#m_spoleadviseholder)|Fornisce un'implementazione standard di un modo per mantenere le connessioni di consulenza.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL. [La classe CComControl](../../atl/reference/ccomcontrol-class.md) deriva da `CComControlBase`. Quando si crea un controllo Standard o un controllo DHTML utilizzando la `CComControlBase`Creazione guidata controllo ATL, la procedura guidata deriverà automaticamente la classe da .

Per ulteriori informazioni sulla creazione di un controllo, vedere [l'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla Creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="ccomcontrolbaseappearancetype"></a><a name="appearancetype"></a>CComControlBase::AppearanceType

Eseguire l'override se la `m_nAppearance` proprietà predefinita non è di tipo **short**.

```
typedef short AppearanceType;
```

### <a name="remarks"></a>Osservazioni

La Creazione guidata `m_nAppearance` controllo ATL aggiunge proprietà predefinite di tipo short. Eseguire `AppearanceType` l'override se si utilizza un tipo di dati diverso.

## <a name="ccomcontrolbaseccomcontrolbase"></a><a name="ccomcontrolbase"></a>CComControlBase::CComControlBase

Costruttore.

```
CComControlBase(HWND& h);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Handle per la finestra associata al controllo.

### <a name="remarks"></a>Osservazioni

Inizializza la dimensione del controllo su 5080X5080 HIMETRIC unità (2"X2") e inizializza i valori dei `CComControlBase` membri dati su NULL o FALSE.

## <a name="ccomcontrolbaseccomcontrolbase"></a><a name="dtor"></a>CComControlBase:: CComControlBase

Distruttore.

```
~CComControlBase();
```

### <a name="remarks"></a>Osservazioni

Se il controllo è `~CComControlBase` finestra, lo elimina chiamando [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow).

## <a name="ccomcontrolbasecontrolqueryinterface"></a><a name="controlqueryinterface"></a>CComControlBase::ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```

### <a name="parameters"></a>Parametri

*Iid*<br/>
GUID dell'interfaccia richiesta.

*Ppv*<br/>
Puntatore al puntatore a interfaccia identificato da *iid*o NULL se l'interfaccia non viene trovata.

### <a name="remarks"></a>Osservazioni

Gestisce solo le interfacce nella tabella della mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]

## <a name="ccomcontrolbasedoesverbactivate"></a><a name="doesverbactivate"></a>CComControlBase::DoesVerbActivate

Verifica che il parametro `IOleObjectImpl::DoVerb` *iVerb* utilizzato da attivi l'interfaccia utente del controllo (*iVerb* è uguale a OLEIVERB_UIACTIVATE), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo *(iVerb* è uguale a OLEIVERB_PRIMARY), visualizza il controllo (*iVerb* uguale a OLEIVERB_SHOW) o attiva il controllo (*iVerb* uguale a OLEIVERB_INPLACEACTIVATE).

```
BOOL DoesVerbActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Valore che indica l'azione `DoVerb`che deve essere eseguita da .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se *iVerb* è uguale a OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override di questo metodo per definire un verbo di attivazione personalizzato.

## <a name="ccomcontrolbasedoesverbuiactivate"></a><a name="doesverbuiactivate"></a>CComControlBase::DoesVerbUIActivate

Verifica che il parametro `IOleObjectImpl::DoVerb` *iVerb* utilizzato da provochi l'attivazione dell'interfaccia utente del controllo e restituisca TRUE.

```
BOOL DoesVerbUIActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Valore che indica l'azione `DoVerb`che deve essere eseguita da .

### <a name="return-value"></a>Valore restituito

Restituisce VERO se *iVerb* è uguale a OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE. In caso contrario, il metodo restituisce FALSE.

## <a name="ccomcontrolbasedoverbproperties"></a><a name="doverbproperties"></a>CComControlBase::DoVerbProperties

Visualizza le pagine delle proprietà del controllo.

```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */, HWND hwndParent);
```

### <a name="parameters"></a>Parametri

*prcPosRec (informazioni in base alle proprietà è instato di*<br/>
Riservato.

*hwndPadre*<br/>
Handle della finestra contenente il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]

[!code-cpp[NVC_ATL_COM#20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]

## <a name="ccomcontrolbasefireviewchange"></a><a name="fireviewchange"></a>CComControlBase::FireViewChange (informazioni in base alla visualizzazione di un'azione utente)

Chiamare questo metodo per indicare al contenitore di ridisegnare il controllo o notificare ai sink di avviso registrati che la visualizzazione del controllo è stata modificata.

```
HRESULT FireViewChange();
```

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se il controllo è attivo (il membro dati della classe di controllo [CComControlBase::m_bInPlaceActive](#m_binplaceactive) è TRUE), notifica al contenitore che si desidera ridisegnare l'intero controllo. Se il controllo è inattivo, notifica ai sink di avviso registrati del controllo (tramite il membro dati della classe del controllo [CComControlBase::m_spAdviseSink](#m_spadvisesink)) che la visualizzazione del controllo è stata modificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]

## <a name="ccomcontrolbasegetambientappearance"></a><a name="getambientappearance"></a>CComControlBase::GetAmbientAppearance

Recupera DISPID_AMBIENT_APPEARANCE, l'impostazione dell'aspetto corrente per il controllo: 0 per flat e 1 per 3D.

```
HRESULT GetAmbientAppearance(short& nAppearance);
```

### <a name="parameters"></a>Parametri

*nApparizione*<br/>
La struttura DISPID_AMBIENT_APPEARANCE.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#22](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]

## <a name="ccomcontrolbasegetambientautoclip"></a><a name="getambientautoclip"></a>CComControlBase::GetAmbientAutoClip

Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ritaglio automatico dell'area di visualizzazione del controllo.

```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```

### <a name="parameters"></a>Parametri

*bClipAuto*<br/>
La struttura DISPID_AMBIENT_AUTOCLIP.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientbackcolor"></a><a name="getambientbackcolor"></a>CComControlBase::GetAmbientBackColor

Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```

### <a name="parameters"></a>Parametri

*Backcolor*<br/>
La proprietà DISPID_AMBIENT_BACKCOLOR.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientcharset"></a><a name="getambientcharset"></a>CComControlBase::GetAmbientCharSet

Recupera DISPID_AMBIENT_CHARSET, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```

### <a name="parameters"></a>Parametri

*BstrCharSet (insieme bstrCharSet)*<br/>
La struttura DISPID_AMBIENT_CHARSET.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomcontrolbasegetambientcodepage"></a><a name="getambientcodepage"></a>CComControlBase::GetAmbientCodePage

Recupera DISPID_AMBIENT_CODEPAGE, la tabella codici di ambiente per tutti i controlli, definita dal contenitore.

```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```

### <a name="parameters"></a>Parametri

*ulTabellaDibase*<br/>
La struttura DISPID_AMBIENT_CODEPAGE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomcontrolbasegetambientdisplayasdefault"></a><a name="getambientdisplayasdefault"></a>CComControlBase::GetAmbientDisplayAsDefault

Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come un pulsante predefinito e pertanto un controllo pulsante deve disegnare se stesso con un frame più spesso.

```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bValore predefinito*<br/>
La proprietà DISPID_AMBIENT_DISPLAYASDEFAULT.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientdisplayname"></a><a name="getambientdisplayname"></a>CComControlBase::GetAmbientDisplayName

Recupera DISPID_AMBIENT_DISPLAYNAME, il nome fornito dal contenitore al controllo.

```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```

### <a name="parameters"></a>Parametri

*BstrDisplayName (nome di testo)*<br/>
La struttura DISPID_AMBIENT_DISPLAYNAME.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientfont"></a><a name="getambientfont"></a>CComControlBase::GetAmbientFont

Recupera un puntatore all'interfaccia `IFont` di ambiente del contenitore.

```
HRESULT GetAmbientFont(IFont** ppFont);
```

### <a name="parameters"></a>Parametri

*file ppFont*<br/>
Puntatore all'interfaccia [IFont](/windows/win32/api/ocidl/nn-ocidl-ifont) di ambiente del contenitore.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non è NULL, il chiamante deve rilasciare il puntatore.

## <a name="ccomcontrolbasegetambientfontdisp"></a><a name="getambientfontdisp"></a>CComControlBase::GetAmbientFontDisp

Recupera un puntatore all'interfaccia `IFontDisp` di invio dell'ambiente del contenitore.

```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```

### <a name="parameters"></a>Parametri

*file ppFont*<br/>
Puntatore all'interfaccia [dispatch IFontDisp](/windows/win32/api/ocidl/nn-ocidl-ifontdisp) di ambiente del contenitore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non è NULL, il chiamante deve rilasciare il puntatore.

## <a name="ccomcontrolbasegetambientforecolor"></a><a name="getambientforecolor"></a>CComControlBase::GetAmbientForeColor

Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```

### <a name="parameters"></a>Parametri

*Forecolor*<br/>
La proprietà DISPID_AMBIENT_FORECOLOR.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientlocaleid"></a><a name="getambientlocaleid"></a>CComControlBase::GetAmbientLocaleID

Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.

```
HRESULT GetAmbientLocaleID(LCID& lcid);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
La DISPID_AMBIENT_LOCALEID della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il controllo può utilizzare questo identificatore per adattare l'interfaccia utente a lingue diverse.

## <a name="ccomcontrolbasegetambientmessagereflect"></a><a name="getambientmessagereflect"></a>CComControlBase::GetAmbientMessageReflect

Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore `WM_DRAWITEM`desidera ricevere messaggi di finestra (ad esempio ) come eventi.

```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect (Informazioni in base ai messaggi in*<br/>
La struttura DISPID_AMBIENT_MESSAGEREFLECT.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientpalette"></a><a name="getambientpalette"></a>CComControlBase::GetAmbientPalette

Recupera DISPID_AMBIENT_PALETTE, utilizzato per accedere a HPALETTE del contenitore.

```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```

### <a name="parameters"></a>Parametri

*HPalette (in modo insep*<br/>
La proprietà DISPID_AMBIENT_PALETTE.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientproperty"></a><a name="getambientproperty"></a>CComControlBase::GetAmbientProperty

Recupera la proprietà del contenitore specificata da *dispid*.

```
HRESULT GetAmbientProperty(DISPID dispid, VARIANT& var);
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
Identificatore della proprietà del contenitore da recuperare.

*var*<br/>
Variabile per ricevere la proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

ATL ha fornito un set di funzioni di supporto per recuperare proprietà specifiche, ad esempio [CComControlBase::GetAmbientBackColor](#getambientbackcolor). Se non è disponibile un `GetAmbientProperty`metodo adatto, utilizzare .

## <a name="ccomcontrolbasegetambientrighttoleft"></a><a name="getambientrighttoleft"></a>CComControlBase::GetAmbientRightToLeft

Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui il contenuto viene visualizzato dal contenitore.

```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```

### <a name="parameters"></a>Parametri

*bRightToLeft (In fintosinistra)*<br/>
DISPID_AMBIENT_RIGHTTOLEFT della proprietà. Impostare su TRUE se il contenuto viene visualizzato da destra a sinistra, FALSE se viene visualizzato da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomcontrolbasegetambientscaleunits"></a><a name="getambientscaleunits"></a>CComControlBase::GetAmbientScaleUnits

Recupera DISPID_AMBIENT_SCALEUNITS, le unità di ambiente del contenitore (ad esempio pollici o centimetri) per l'etichettatura delle visualizzazioni.

```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```

### <a name="parameters"></a>Parametri

*BstrScaleUnits (unità BstrScaleUnits)*<br/>
La proprietà DISPID_AMBIENT_SCALEUNITS.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientshowgrabhandles"></a><a name="getambientshowgrabhandles"></a>CComControlBase::GetAmbientShowGrabHandles

Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente al controllo di visualizzare gli handle di acquisizione per se stesso quando è attivo.

```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*bShowGrabHandles (in cui i dati)*<br/>
La proprietà DISPID_AMBIENT_SHOWGRABHANDLES.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientshowhatching"></a><a name="getambientshowhatching"></a>CComControlBase::GetAmbientShowHatching (CComControlBase::GetAmbientShowHatching)

Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente al controllo di visualizzarsi con un modello tratteggiato quando l'interfaccia utente del controllo è attiva.

```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```

### <a name="parameters"></a>Parametri

*bTratteggio di visualizzazione*<br/>
La struttura DISPID_AMBIENT_SHOWHATCHING.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambientsupportsmnemonics"></a><a name="getambientsupportsmnemonics"></a>CComControlBase::GetAmbientSupportsMnemonics

Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta rapida della tastiera.

```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```

### <a name="parameters"></a>Parametri

*bSupportsMnemonics*<br/>
La struttura DISPID_AMBIENT_SUPPORTSMNEMONICS.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambienttextalign"></a><a name="getambienttextalign"></a>CComControlBase::GetAmbientTextAlign

Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferito dal contenitore: 0 per l'allineamento generale (numeri a destra, testo a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.

```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```

### <a name="parameters"></a>Parametri

*nTextAlign (Instilea)*<br/>
La proprietà DISPID_AMBIENT_TEXTALIGN.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetambienttoptobottom"></a><a name="getambienttoptobottom"></a>CComControlBase::GetAmbientTopToBottom

Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui il contenuto viene visualizzato dal contenitore.

```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```

### <a name="parameters"></a>Parametri

*bTopToBottom (in basso)*<br/>
Il DISPID_AMBIENT_TOPTOBOTTOM della proprietà. Impostare su TRUE se il testo viene visualizzato dall'alto verso il basso, FALSE se viene visualizzato dal basso verso l'alto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomcontrolbasegetambientuidead"></a><a name="getambientuidead"></a>CComControlBase::GetAmbientUI Dead

Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore desidera che il controllo risponda alle azioni dell'interfaccia utente.

```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```

### <a name="parameters"></a>Parametri

*bUI Morto*<br/>
L'DISPID_AMBIENT_UIDEAD della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se TRUE, il controllo non deve rispondere. Questo flag si applica indipendentemente dal flag di DISPID_AMBIENT_USERMODE. Vedere [CComControlBase::GetAmbientUserMode](#getambientusermode).

## <a name="ccomcontrolbasegetambientusermode"></a><a name="getambientusermode"></a>CComControlBase::GetAmbientUserMode

Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).

```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```

### <a name="parameters"></a>Parametri

*bModalitàUtente*<br/>
L'DISPID_AMBIENT_USERMODE.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

## <a name="ccomcontrolbasegetdirty"></a><a name="getdirty"></a>CComControlBase::GetDirty

Restituisce il valore `m_bRequiresSave`del membro dati.

```
BOOL GetDirty();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del membro dati [m_bRequiresSave.](#m_brequiressave)

### <a name="remarks"></a>Osservazioni

Questo valore viene impostato utilizzando [CComControlBase::SetDirty](#setdirty).

## <a name="ccomcontrolbasegetzoominfo"></a><a name="getzoominfo"></a>CComControlBase::Get

Recupera i valori x e y del numeratore e del denominatore del fattore di zoom per un controllo attivato per la modifica sul posto.

```cpp
void GetZoomInfo(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*di di*<br/>
Struttura che conterrà il numeratore e il denominatore del fattore di zoom. Per ulteriori informazioni, vedere [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).

### <a name="remarks"></a>Osservazioni

Il fattore di zoom è la proporzione della dimensione naturale del controllo nella sua estensione corrente.

## <a name="ccomcontrolbaseinplaceactivate"></a><a name="inplaceactivate"></a>CComControlBase::InPlaceActivate (InPlaceActivate)

Determina la transizione del controllo dallo stato inattivo a qualsiasi stato indicato dal verbo in *iVerb.*

```
HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
```

### <a name="parameters"></a>Parametri

*IVerbo*<br/>
Valore che indica l'azione che deve essere eseguita da [IOleObjectImpl::DoVerb](../../atl/reference/ioleobjectimpl-class.md#doverb).

*prcPosRect (informazioni in base al t).*<br/>
Puntatore alla posizione del controllo sul posto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Prima dell'attivazione, questo metodo verifica che il controllo disponga di un sito client, controlla la quantità di controllo visibile e ottiene la posizione del controllo nella finestra padre. Dopo l'attivazione del controllo, questo metodo attiva l'interfaccia utente del controllo e indica al contenitore di rendere visibile il controllo.

Questo metodo recupera `IOleInPlaceSite`anche `IOleInPlaceSiteEx`un `IOleInPlaceSiteWindowless` puntatore a interfaccia , , o per il controllo e lo archivia nel membro dati [CComControlBase::m_spInPlaceSite](#m_spinplacesite)della classe del controllo. I membri dati della classe di controllo [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex), [CComControlBase::m_bWndLess](#m_bwndless), [CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)e [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) sono impostati su true in base alle esigenze.

## <a name="ccomcontrolbaseinternalgetsite"></a><a name="internalgetsite"></a>CComControlBase::InternalGetSito

Chiamare questo metodo per eseguire una query sul sito del controllo per un puntatore all'interfaccia identificata.

```
HRESULT InternalGetSite(REFIID riid, void** ppUnkSite);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
IID del puntatore a interfaccia che deve essere restituito in *ppUnkSite*.

*ppUnkSito (informazioni in inglese)*<br/>
Indirizzo della variabile puntatore che riceve il puntatore a interfaccia richiesto in *riid*.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Se il sito supporta l'interfaccia richiesta in *riid*, il puntatore viene restituito tramite *ppUnkSite*. In caso contrario, *ppUnkSite* è impostato su NULL.

## <a name="ccomcontrolbasem_bautosize"></a><a name="m_bautosize"></a>CComControlBase::m_bAutoSize

Flag che indica che il controllo non può essere di altre dimensioni.

```
unsigned m_bAutoSize:1;
```

### <a name="remarks"></a>Osservazioni

Questo flag viene `IOleObjectImpl::SetExtent` controllato da e, se TRUE, fa sì che la funzione restituisca E_FAIL.

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Se si aggiunge l'opzione **Dimensione automatica** nella scheda [Proprietà predefinite](../../atl/reference/stock-properties-atl-control-wizard.md) della Creazione guidata controllo ATL, la procedura guidata crea automaticamente questo membro dati nella classe del controllo, crea i metodi put e get per la proprietà e supporta [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) per notificare automaticamente al contenitore quando la proprietà viene modificata.

## <a name="ccomcontrolbasem_bdrawfromnatural"></a><a name="m_bdrawfromnatural"></a>CComControlBase::m_bDrawFromNatural

Flag che `IDataObjectImpl::GetData` indica `CComControlBase::GetZoomInfo` che e deve `m_sizeNatural` impostare `m_sizeExtent`la dimensione del controllo da anziché da .

```
unsigned m_bDrawFromNatural:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_bdrawgetdatainhimetric"></a><a name="m_bdrawgetdatainhimetric"></a>CComControlBase::m_bDrawGetDataInHimetric

Flag che `IDataObjectImpl::GetData` indica che deve utilizzare unità HIMETRIC e non pixel durante il disegno.

```
unsigned m_bDrawGetDataInHimetric:1;
```

### <a name="remarks"></a>Osservazioni

Ogni unità HIMETRIC logica è di 0,01 millimetri.

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_binplaceactive"></a><a name="m_binplaceactive"></a>CComControlBase::m_bInPlaceActive

Flag che indica che il controllo è attivo sul posto.

```
unsigned m_bInPlaceActive:1;
```

### <a name="remarks"></a>Osservazioni

Ciò significa che il controllo è visibile e la relativa finestra, se presente, è visibile, ma i relativi menu e barre degli strumenti potrebbero non essere attivi. Il `m_bUIActive` flag indica che è attiva anche l'interfaccia utente del controllo, ad esempio i menu.

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_binplacesiteex"></a><a name="m_binplacesiteex"></a>CComControlBase::m_bInPlaceSiteEx

Flag che indica che `IOleInPlaceSiteEx` il contenitore supporta l'interfaccia e le funzionalità di controllo OCX96, ad esempio i controlli senza finestra e senza sfarfallio.

```
unsigned m_bInPlaceSiteEx:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Il membro `m_spInPlaceSite` dati punta a un'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) , a seconda del valore di `m_bWndLess` e `m_bInPlaceSiteEx` flags. Il membro `m_bNegotiatedWnd` dati deve essere `m_spInPlaceSite` TRUE affinché il puntatore sia valido.

Se `m_bWndLess` è `m_bInPlaceSiteEx` FALSE e `m_spInPlaceSite` è `IOleInPlaceSiteEx` TRUE, è un puntatore a interfaccia. Vedere [m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra la relazione tra questi tre membri dati.

## <a name="ccomcontrolbasem_bnegotiatedwnd"></a><a name="m_bnegotiatedwnd"></a>CComControlBase::m_bNegotiatedWnd

Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità del controllo OCX96 (ad esempio controlli senza sfarfallio e senza finestra) e se il controllo è privo di finestra o senza finestra.

```
unsigned m_bNegotiatedWnd:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Il `m_bNegotiatedWnd` flag deve essere `m_spInPlaceSite` TRUE affinché il puntatore sia valido.

## <a name="ccomcontrolbasem_brecomposeonresize"></a><a name="m_brecomposeonresize"></a>CComControlBase::m_bRecomposeOnResize

Flag che indica che il controllo desidera ricomporre la presentazione quando il contenitore modifica le dimensioni di visualizzazione del controllo.

```
unsigned m_bRecomposeOnResize:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Questo flag viene controllato da [IOleObjectImpl::SetExtent](../../atl/reference/ioleobjectimpl-class.md#setextent) e, se TRUE, `SetExtent` notifica il contenitore delle modifiche alla visualizzazione. Se questo flag è impostato, deve essere impostato anche il bit di OLEMISC_RECOMPOSEONRESIZE nell'enumerazione [OLEMISC.](/windows/win32/api/oleidl/ne-oleidl-olemisc)

## <a name="ccomcontrolbasem_brequiressave"></a><a name="m_brequiressave"></a>CComControlBase::m_bRequiresSave

Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.

```
unsigned m_bRequiresSave:1;
```

### <a name="remarks"></a>Osservazioni

Il valore `m_bRequiresSave` di può essere impostato con [CComControlBase::SetDirty](#setdirty) e recuperato con [CComControlBase::GetDirty](#getdirty).

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_bresizenatural"></a><a name="m_bresizenatural"></a>CComControlBase::m_bResizeNatural

Flag che indica che il controllo desidera ridimensionarne l'estensione naturale (le dimensioni fisiche non in scala) quando il contenitore modifica le dimensioni di visualizzazione del controllo.

```
unsigned m_bResizeNatural:1;
```

### <a name="remarks"></a>Osservazioni

Questo flag viene `IOleObjectImpl::SetExtent` controllato da e, se `SetExtent` TRUE, `m_sizeNatural`la dimensione passata viene assegnata a .

La dimensione `SetExtent` passata in `m_sizeExtent`viene sempre assegnata `m_bResizeNatural`a , indipendentemente dal valore di .

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_buiactive"></a><a name="m_buiactive"></a>CComControlBase::m_bUIActive

Flag che indica l'interfaccia utente del controllo, ad esempio menu e barre degli strumenti, è attivo.

```
unsigned m_bUIActive:1;
```

### <a name="remarks"></a>Osservazioni

Il `m_bInPlaceActive` flag indica che il controllo è attivo, ma non che la relativa interfaccia utente è attiva.

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_busingwindowrgn"></a><a name="m_busingwindowrgn"></a>CComControlBase::m_bUsingWindowRgn

Flag che indica che il controllo utilizza l'area della finestra fornita dal contenitore.

```
unsigned m_bUsingWindowRgn:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_bwasoncewindowless"></a><a name="m_bwasoncewindowless"></a>CComControlBase::m_bWasOnceWindowless

Flag che indica che il controllo è stato privo di finestra, ma può essere o meno senza finestra ora.

```
unsigned m_bWasOnceWindowless:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_bwindowonly"></a><a name="m_bwindowonly"></a>CComControlBase::m_bWindowOnly

Flag che indica che il controllo deve essere sottoposto a window, anche se il contenitore supporta i controlli senza finestra.

```
unsigned m_bWindowOnly:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_bwndless"></a><a name="m_bwndless"></a>CComControlBase::m_bWndLess

Flag che indica che il controllo è senza finestra.

```
unsigned m_bWndLess:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Il membro `m_spInPlaceSite` dati punta a un'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) , a seconda del valore dei flag `m_bWndLess` e [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex) . Il membro dati [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) deve essere TRUE affinché il puntatore [CComControlBase::m_spInPlaceSite](#m_spinplacesite) sia valido.

Se `m_bWndLess` è `m_spInPlaceSite` TRUE, `IOleInPlaceSiteWindowless` è un puntatore a interfaccia. Vedere [CComControlBase::m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra la relazione completa tra questi membri dati.

## <a name="ccomcontrolbasem_hwndcd"></a><a name="m_hwndcd"></a>CComControlBase::m_hWndCD

Contiene un riferimento all'handle di finestra associato al controllo.

```
HWND& m_hWndCD;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_nfreezeevents"></a><a name="m_nfreezeevents"></a>CComControlBase::m_nFreezeEvents

Conteggio del numero di volte in cui il contenitore ha bloccato gli eventi (rifiutato di accettare eventi) senza intervenire degli eventi (accettazione degli eventi).

```
short m_nFreezeEvents;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_rcpos"></a><a name="m_rcpos"></a>CComControlBase::m_rcPos

Posizione in pixel del controllo, espressa nelle coordinate del contenitore.

```
RECT m_rcPos;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_sizeextent"></a><a name="m_sizeextent"></a>CComControlBase::m_sizeExtent

L'estensione del controllo nelle unità HIMETRIC (ogni unità è 0,01 millimetri) per una particolare visualizzazione.

```
SIZE m_sizeExtent;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Questa dimensione viene ridimensionata dal display. La dimensione fisica del controllo `m_sizeNatural` è specificata nel membro dati ed è fissa.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

## <a name="ccomcontrolbasem_sizenatural"></a><a name="m_sizenatural"></a>CComControlBase::m_sizeNatural

La dimensione fisica del controllo in unità HIMETRIC (ogni unità è di 0,01 millimetri).

```
SIZE m_sizeNatural;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Questa dimensione è fissa, `m_sizeExtent` mentre la dimensione in viene ridimensionata dal display.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

## <a name="ccomcontrolbasem_spadvisesink"></a><a name="m_spadvisesink"></a>CComControlBase::m_spAdviseSink

Puntatore diretto alla connessione consultiva nel contenitore [(IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)del contenitore ).

```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_spambientdispatch"></a><a name="m_spambientdispatch"></a>CComControlBase::m_spAmbientDispatch

Oggetto `CComDispatchDriver` che consente di recuperare e impostare `IDispatch` le proprietà di un oggetto tramite un puntatore.

```
CComDispatchDriver m_spAmbientDispatch;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_spclientsite"></a><a name="m_spclientsite"></a>CComControlBase::m_spClientSite

Puntatore al sito client del controllo all'interno del contenitore.

```
CComPtr<IOleClientSite>
    m_spClientSite;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

## <a name="ccomcontrolbasem_spdataadviseholder"></a><a name="m_spdataadviseholder"></a>CComControlBase::m_spDataAdviseHolder

Fornisce un mezzo standard per mantenere connessioni consultive tra oggetti dati e consigliare i sink.

```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Un oggetto dati è un controllo che può trasferire dati e che implementa [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject), i cui metodi specificano il formato e il supporto di trasferimento dei dati.

L'interfaccia `m_spDataAdviseHolder` implementa i metodi [IDataObject::DAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) e [IDataObject::DUnadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) per stabilire ed eliminare connessioni advisory al contenitore. Il contenitore del controllo deve implementare un sink di avviso supportando l'interfaccia [IAdviseSink.The](/windows/win32/api/objidl/nn-objidl-iadvisesink) control's container must implement an advise sink by supporting the IAdviseSink interface.

## <a name="ccomcontrolbasem_spinplacesite"></a><a name="m_spinplacesite"></a>CComControlBase::m_spInPlaceSite

Puntatore al puntatore a interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) del contenitore.

```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

Il `m_spInPlaceSite` puntatore è valido solo se il [flag m_bNegotiatedWnd](#m_bnegotiatedwnd) è TRUE.

Nella tabella seguente `m_spInPlaceSite` viene illustrato come il tipo di puntatore dipende dai flag del membro dati [m_bWndLess](#m_bwndless) e [m_bInPlaceSiteEx:](#m_binplacesiteex)

|Tipo di m_spInPlaceSite|Valore m_bWndLess|Valore m_bInPlaceSiteEx|
|---------------------------|-----------------------|-----------------------------|
|`IOleInPlaceSiteWindowless`|TRUE|VERO o FALSO|
|`IOleInPlaceSiteEx`|FALSE|TRUE|
|`IOleInPlaceSite`|FALSE|FALSE|

## <a name="ccomcontrolbasem_spoleadviseholder"></a><a name="m_spoleadviseholder"></a>CComControlBase::m_spOleAdviseHolder

Fornisce un'implementazione standard di un modo per mantenere le connessioni di consulenza.

```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Per utilizzare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'unione nella classe base.

L'interfaccia `m_spOleAdviseHolder` implementa il [IOleObject::Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) e [IOleObject::Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) metodi per stabilire ed eliminare le connessioni consultive al contenitore. Il contenitore del controllo deve implementare un sink di avviso supportando l'interfaccia [IAdviseSink.The](/windows/win32/api/objidl/nn-objidl-iadvisesink) control's container must implement an advise sink by supporting the IAdviseSink interface.

## <a name="ccomcontrolbaseondraw"></a><a name="ondraw"></a>CComControlBase::OnDraw

Eseguire l'override di questo metodo per disegnare il controllo.

```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*di di*<br/>
Riferimento alla [struttura ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) che contiene informazioni sul disegno quali l'aspetto di disegno, i limiti del controllo e se il disegno è ottimizzato o meno.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il `OnDraw` valore predefinito elimina o ripristina il contesto di periferica o non esegue alcuna operazione, a seconda dei flag impostati in [CComControlBase::OnDrawAdvanced](#ondrawadvanced).

Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. L'impostazione `OnDraw` predefinita della procedura guidata disegna un rettangolo con l'etichetta "ATL 8.0".

### <a name="example"></a>Esempio

Vedere l'esempio per [CComControlBase::GetAmbientAppearance](#getambientappearance).

## <a name="ccomcontrolbaseondrawadvanced"></a><a name="ondrawadvanced"></a>CComControlBase::OnDrawAdvanced

L'impostazione predefinita `OnDrawAdvanced` prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama il metodo della classe del `OnDraw` controllo.

```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*di di*<br/>
Riferimento alla [struttura ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) che contiene informazioni sul disegno quali l'aspetto di disegno, i limiti del controllo e se il disegno è ottimizzato o meno.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo se si desidera accettare il contesto di dispositivo passato dal contenitore senza normalizzarlo.

Vedere [CComControlBase::OnDraw](#ondraw) per ulteriori dettagli.

## <a name="ccomcontrolbaseonkillfocus"></a><a name="onkillfocus"></a>CComControlBase::OnKillFocus

Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.

```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nM*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bGestito*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

## <a name="ccomcontrolbaseonmouseactivate"></a><a name="onmouseactivate"></a>CComControlBase::OnMouseActivate (Informazioni in base alle funzionalità)

Controlla che l'interfaccia utente sia in modalità utente, quindi attiva il controllo.

```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nM*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bGestito*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

## <a name="ccomcontrolbaseonpaint"></a><a name="onpaint"></a>CComControlBase::OnPaint

Prepara il contenitore per il disegno, ottiene l'area client `OnDrawAdvanced` del controllo, quindi chiama il metodo della classe del controllo.

```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```

### <a name="parameters"></a>Parametri

*nM*<br/>
Riservato.

*wParam*<br/>
Un HDC esistente.

*lParam*<br/>
Riservato.

*lResult*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce sempre zero.

### <a name="remarks"></a>Osservazioni

Se *wParam* non `OnPaint` è NULL, presuppone che contenga un HDC valido e lo utilizzi al posto di [CComControlBase::m_hWndCD](#m_hwndcd).

## <a name="ccomcontrolbaseonsetfocus"></a><a name="onsetfocus"></a>CComControlBase::OnSetFocus

Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha acquisito lo stato attivo.

```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nM*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bGestito*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Osservazioni

Invia una notifica al contenitore che il controllo ha ricevuto lo stato attivo.

## <a name="ccomcontrolbasepretranslateaccelerator"></a><a name="pretranslateaccelerator"></a>CComControlBase::PreTranslateAccelerator

Eseguire l'override di questo metodo per fornire gestori dei tasti di scelta rapida personalizzati.

```
BOOL PreTranslateAccelerator(LPMSG /* pMsg */,
    HRESULT& /* hRet */);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Riservato.

*hRet*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita restituisce FALSE.

## <a name="ccomcontrolbasesendonclose"></a><a name="sendonclose"></a>CComControlBase::SendOnClose

Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che il controllo è stato chiuso.

```
HRESULT SendOnClose();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il controllo ha chiuso i sink consultivi.

## <a name="ccomcontrolbasesendondatachange"></a><a name="sendondatachange"></a>CComControlBase::SendOnDataChange (Informazioni su datidi base)

Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che i dati di controllo sono stati modificati.

```
HRESULT SendOnDataChange(DWORD advf = 0);
```

### <a name="parameters"></a>Parametri

*advf*<br/>
Consigliare i flag che specificano come viene effettuata la chiamata a [IAdviseSink::OnDataChange.Advise](/windows/win32/api/objidl/nf-objidl-iadvisesink-ondatachange) flags that specify how the call to IAdviseSink::OnDataChange is made. I valori sono dell'enumerazione [ADVF.](/windows/win32/api/objidl/ne-objidl-advf)

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

## <a name="ccomcontrolbasesendonrename"></a><a name="sendonrename"></a>CComControlBase::SendOnRename

Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che il controllo ha un nuovo moniker.

```
HRESULT SendOnRename(IMoniker* pmk);
```

### <a name="parameters"></a>Parametri

*Pmk*<br/>
Puntatore al nuovo moniker del controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il moniker per il controllo è stato modificato.

## <a name="ccomcontrolbasesendonsave"></a><a name="sendonsave"></a>CComControlBase::SendOnSave

Notifica a tutti i sink consultivi registrati presso il titolare dell'avviso che il controllo è stato salvato.

```
HRESULT SendOnSave();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il controllo ha appena salvato i dati.

## <a name="ccomcontrolbasesendonviewchange"></a><a name="sendonviewchange"></a>CComControlBase::SendOnViewChange (Informazioni in base alle informazioni in questo campo)

Notifica a tutti i sink consultivi registrati che la visualizzazione del controllo è stata modificata.

```
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
```

### <a name="parameters"></a>Parametri

*Dwaspect*<br/>
Aspetto o visualizzazione del controllo.

*Lindex*<br/>
Parte della visualizzazione modificata. Solo -1 è valido.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di errore.

### <a name="remarks"></a>Osservazioni

`SendOnViewChange`chiama [IAdviseSink::OnViewChange](/windows/win32/api/objidl/nf-objidl-iadvisesink-onviewchange). L'unico valore di *lindex* attualmente supportato è -1, che indica che l'intera visualizzazione è di interesse.

## <a name="ccomcontrolbasesetcontrolfocus"></a><a name="setcontrolfocus"></a>CComControlBase::SetControlFocus

Imposta o rimuove lo stato attivo della tastiera da o verso il controllo.

```
BOOL SetControlFocus(BOOL bGrab);
```

### <a name="parameters"></a>Parametri

*bAfferrare*<br/>
Se TRUE, imposta lo stato attivo della tastiera sul controllo chiamante. Se FALSE, rimuove lo stato attivo dal controllo chiamante, purché abbia lo stato attivo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il controllo riceve correttamente lo stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per un controllo con finestra, viene chiamata la funzione API di Windows [SetFocus.For](/windows/win32/api/winuser/nf-winuser-setfocus) a windowed control, the Windows API function SetFocus is called. Per un controllo senza finestra, viene chiamato [IOleInPlaceSiteWindowless::SetFocus.For a windowless control, IOleInPlaceSiteWindowless::SetFocus](/windows/win32/api/ocidl/nf-ocidl-ioleinplacesitewindowless-setfocus) is called. Tramite questa chiamata, un controllo senza finestra ottiene lo stato attivo della tastiera e può rispondere ai messaggi della finestra.

## <a name="ccomcontrolbasesetdirty"></a><a name="setdirty"></a>CComControlBase::SetDirty

Imposta il `m_bRequiresSave` membro dati sul valore in *bDirty*.

```cpp
void SetDirty(BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*bSporco*<br/>
Valore del membro dati [CComControlBase::m_bRequiresSave](#m_brequiressave).

### <a name="remarks"></a>Osservazioni

`SetDirty(TRUE)`deve essere chiamato per segnalare che il controllo è stato modificato dall'ultimo salvataggio. Il valore `m_bRequiresSave` di viene recuperato con [CComControlBase::GetDirty](#getdirty).

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
