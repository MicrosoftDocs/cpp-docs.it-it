---
title: Classe CComControlBase
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
ms.openlocfilehash: 36afd716009848ccd2e2f0ab966f66f573acdfd8
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417894"
---
# <a name="ccomcontrolbase-class"></a>Classe CComControlBase

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CComControlBase
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase:: AppearanceType](#appearancetype)|Eseguire l'override se il `m_nAppearance` proprietà predefinita non è di tipo **short**.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase:: CComControlBase](#ccomcontrolbase)|Costruttore.|
|[CComControlBase:: ~ CComControlBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase:: ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComControlBase::D oesVerbActivate](#doesverbactivate)|Verifica che il parametro *iVerb* usato da `IOleObjectImpl::DoVerb` attiva l'interfaccia utente del controllo (*iVerb* Equals OLEIVERB_UIACTIVATE), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo (*iVerb* Equals OLEIVERB_PRIMARY), Visualizza il controllo (*iVerb* uguale a OLEIVERB_SHOW) o attiva il controllo (*iVerb* equivale a OLEIVERB_INPLACEACTIVATE).|
|[CComControlBase::D oesVerbUIActivate](#doesverbuiactivate)|Verifica che il parametro *iVerb* usato da `IOleObjectImpl::DoVerb` provochi l'attivazione dell'interfaccia utente del controllo e restituisca true.|
|[CComControlBase::D oVerbProperties](#doverbproperties)|Visualizza le pagine delle proprietà del controllo.|
|[CComControlBase:: FireViewChange](#fireviewchange)|Chiamare questo metodo per indicare al contenitore di ricreare il controllo o notificare ai sink di notifica registrati che la visualizzazione del controllo è cambiata.|
|[CComControlBase:: GetAmbientAppearance](#getambientappearance)|Recupera DISPID_AMBIENT_APPEARANCE, l'impostazione dell'aspetto corrente per il controllo: 0 per flat e 1 per 3D.|
|[CComControlBase:: GetAmbientAutoClip](#getambientautoclip)|Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ritaglio automatico dell'area di visualizzazione del controllo.|
|[CComControlBase:: GetAmbientBackColor](#getambientbackcolor)|Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase:: GetAmbientCharSet](#getambientcharset)|Recupera DISPID_AMBIENT_CHARSET, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase:: GetAmbientCodePage](#getambientcodepage)|Recupera DISPID_AMBIENT_CODEPAGE, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase:: GetAmbientDisplayAsDefault](#getambientdisplayasdefault)|Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come pulsante predefinito e pertanto un controllo Button deve disegnarsi con un frame più spessa.|
|[CComControlBase:: GetAmbientDisplayName](#getambientdisplayname)|Recupera DISPID_AMBIENT_DISPLAYNAME, il nome fornito dal contenitore al controllo.|
|[CComControlBase:: GetAmbientFont](#getambientfont)|Recupera un puntatore all'interfaccia del `IFont` di ambiente del contenitore.|
|[CComControlBase:: GetAmbientFontDisp](#getambientfontdisp)|Recupera un puntatore all'interfaccia di invio `IFontDisp` di ambiente del contenitore.|
|[CComControlBase:: GetAmbientForeColor](#getambientforecolor)|Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase:: GetAmbientLocaleID](#getambientlocaleid)|Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.|
|[CComControlBase:: GetAmbientMessageReflect](#getambientmessagereflect)|Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore vuole ricevere i messaggi della finestra, ad esempio WM_DRAWITEM, come eventi.|
|[CComControlBase:: GetAmbientPalette](#getambientpalette)|Recupera DISPID_AMBIENT_PALETTE, usato per accedere al HPALETTE del contenitore.|
|[CComControlBase:: GetAmbientProperty](#getambientproperty)|Recupera la proprietà del contenitore specificata da *ID*.|
|[CComControlBase:: GetAmbientRightToLeft](#getambientrighttoleft)|Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui il contenuto viene visualizzato dal contenitore.|
|[CComControlBase:: GetAmbientScaleUnits](#getambientscaleunits)|Recupera DISPID_AMBIENT_SCALEUNITS, unità di ambiente del contenitore (ad esempio pollici o centimetri) per la visualizzazione delle etichette.|
|[CComControlBase:: GetAmbientShowGrabHandles](#getambientshowgrabhandles)|Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente al controllo di visualizzare i quadratini di controllo per se stesso quando è attivo.|
|[CComControlBase:: GetAmbientShowHatching](#getambientshowhatching)|Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente al controllo di essere visualizzato con un motivo tratteggiato quando l'interfaccia utente è attiva.|
|[CComControlBase:: GetAmbientSupportsMnemonics](#getambientsupportsmnemonics)|Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta rapida.|
|[CComControlBase:: GetAmbientTextAlign](#getambienttextalign)|Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferito dal contenitore: 0 per l'allineamento generale (numeri a destra, testo a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.|
|[CComControlBase:: GetAmbientTopToBottom](#getambienttoptobottom)|Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui il contenuto viene visualizzato dal contenitore.|
|[CComControlBase:: GetAmbientUIDead](#getambientuidead)|Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore vuole che il controllo risponda alle azioni dell'interfaccia utente.|
|[CComControlBase:: GetAmbientUserMode](#getambientusermode)|Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).|
|[CComControlBase:: GetDirty](#getdirty)|Restituisce il valore dell'`m_bRequiresSave`del membro dati.|
|[CComControlBase:: GetZoomInfo](#getzoominfo)|Recupera i valori x e y del numeratore e del denominatore del fattore di zoom per un controllo attivato per la modifica sul posto.|
|[CComControlBase:: InPlaceActivate](#inplaceactivate)|Determina la transizione del controllo dallo stato inattivo a qualsiasi stato indicato dal verbo in *iVerb* .|
|[CComControlBase:: InternalGetSite](#internalgetsite)|Chiamare questo metodo per eseguire una query sul sito di controllo per un puntatore all'interfaccia identificata.|
|[CComControlBase:: onpare](#ondraw)|Eseguire l'override di questo metodo per creare il controllo.|
|[CComControlBase:: OnDrawAdvanced](#ondrawadvanced)|Il `OnDrawAdvanced` predefinito prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama il metodo di `OnDraw` della classe del controllo.|
|[CComControlBase:: OnKillFocus](#onkillfocus)|Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.|
|[CComControlBase:: OnMouseActivate](#onmouseactivate)|Verifica che l'interfaccia utente sia in modalità utente, quindi attiva il controllo.|
|[CComControlBase:: OnPaint](#onpaint)|Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama il metodo `OnDraw` della classe del controllo.|
|[CComControlBase:: OnSetFocus](#onsetfocus)|Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha ottenuto lo stato attivo.|
|[CComControlBase::P reTranslateAccelerator](#pretranslateaccelerator)|Eseguire l'override di questo metodo per fornire i propri gestori di tasti di scelta rapida.|
|[CComControlBase:: SendOnClose](#sendonclose)|Notifica a tutti i sink consultivi registrati con il titolare del preavviso che il controllo è stato chiuso.|
|[CComControlBase:: SendOnDataChange](#sendondatachange)|Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che i dati di controllo sono stati modificati.|
|[CComControlBase:: SendOnRename](#sendonrename)|Notifica a tutti i sink consultivi registrati con il titolare del preavviso che il controllo dispone di un nuovo moniker.|
|[CComControlBase:: SendOnSave](#sendonsave)|Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che il controllo è stato salvato.|
|[CComControlBase:: SendOnViewChange](#sendonviewchange)|Notifica a tutti i sink consultivi registrati che la visualizzazione del controllo è cambiata.|
|[CComControlBase:: SetControlFocus](#setcontrolfocus)|Imposta o rimuove lo stato attivo della tastiera su o dal controllo.|
|[CComControlBase:: IsDirty](#setdirty)|Imposta il `m_bRequiresSave` del membro dati sul valore in *bDirty*.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase:: m_bAutoSize](#m_bautosize)|Flag che indica che il controllo non può essere di altre dimensioni.|
|[CComControlBase:: m_bDrawFromNatural](#m_bdrawfromnatural)|Flag che indica che `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` devono impostare le dimensioni del controllo da `m_sizeNatural` anziché da `m_sizeExtent`.|
|[CComControlBase:: m_bDrawGetDataInHimetric](#m_bdrawgetdatainhimetric)|Flag che indica che `IDataObjectImpl::GetData` deve usare unità HIMETRIC e non i pixel durante il disegno.|
|[CComControlBase:: m_bInPlaceActive](#m_binplaceactive)|Flag che indica che il controllo è attivo sul posto.|
|[CComControlBase:: m_bInPlaceSiteEx](#m_binplacesiteex)|Flag che indica che il contenitore supporta le funzionalità di `IOleInPlaceSiteEx` dell'interfaccia e del controllo OCX96, ad esempio i controlli senza finestra e senza sfarfallio.|
|[CComControlBase:: m_bNegotiatedWnd](#m_bnegotiatedwnd)|Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio, i controlli privi di sfarfallio e senza finestra) e se il controllo è con finestra o senza finestra.|
|[CComControlBase:: m_bRecomposeOnResize](#m_brecomposeonresize)|Flag che indica che il controllo vuole ricomporre la presentazione quando il contenitore modifica la dimensione di visualizzazione del controllo.|
|[CComControlBase:: m_bRequiresSave](#m_brequiressave)|Flag che indica che il controllo è stato modificato dopo l'ultimo salvataggio.|
|[CComControlBase:: m_bResizeNatural](#m_bresizenatural)|Flag che indica che il controllo vuole ridimensionare l'extent naturale (le dimensioni fisiche non ridimensionate) quando il contenitore modifica la dimensione di visualizzazione del controllo.|
|[CComControlBase:: m_bUIActive](#m_buiactive)|Flag che indica che l'interfaccia utente del controllo, ad esempio i menu e le barre degli strumenti, è attiva.|
|[CComControlBase:: m_bUsingWindowRgn](#m_busingwindowrgn)|Flag che indica che il controllo utilizza l'area della finestra fornita dal contenitore.|
|[CComControlBase:: m_bWasOnceWindowless](#m_bwasoncewindowless)|Flag che indica che il controllo è stato privo di finestra, ma che ora può essere non disponibile.|
|[CComControlBase:: m_bWindowOnly](#m_bwindowonly)|Flag che indica che il controllo deve essere finestra, anche se il contenitore supporta controlli privi di finestra.|
|[CComControlBase:: m_bWndLess](#m_bwndless)|Flag che indica che il controllo è privo di finestra.|
|[CComControlBase:: m_hWndCD](#m_hwndcd)|Contiene un riferimento all'handle della finestra associato al controllo.|
|[CComControlBase:: m_nFreezeEvents](#m_nfreezeevents)|Conteggio del numero di volte in cui il contenitore contiene eventi bloccati (rifiutati di accettare gli eventi) senza un disgelo degli eventi (accettazione degli eventi).|
|[CComControlBase:: m_rcPos](#m_rcpos)|Posizione in pixel del controllo espressa nelle coordinate del contenitore.|
|[CComControlBase:: m_sizeExtent](#m_sizeextent)|L'entità del controllo in unità HIMETRIC (ogni unità è 0,01 millimetri) per una particolare visualizzazione.|
|[CComControlBase:: m_sizeNatural](#m_sizenatural)|Dimensioni fisiche del controllo in unità HIMETRIC (ogni unità è 0,01 millimetri).|
|[CComControlBase:: m_spAdviseSink](#m_spadvisesink)|Puntatore diretto alla connessione consultiva sul contenitore ( [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)del contenitore).|
|[CComControlBase:: m_spAmbientDispatch](#m_spambientdispatch)|Oggetto `CComDispatchDriver` che consente di recuperare e impostare le proprietà del contenitore tramite un puntatore `IDispatch`.|
|[CComControlBase:: m_spClientSite](#m_spclientsite)|Puntatore al sito client del controllo all'interno del contenitore.|
|[CComControlBase:: m_spDataAdviseHolder](#m_spdataadviseholder)|Fornisce un metodo standard per mantenere le connessioni consultive tra oggetti dati e sink di notifica.|
|[CComControlBase:: m_spInPlaceSite](#m_spinplacesite)|Puntatore al puntatore all'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) del contenitore.|
|[CComControlBase:: m_spOleAdviseHolder](#m_spoleadviseholder)|Fornisce un'implementazione standard di un modo per mantenere le connessioni consultive.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la creazione e la gestione di controlli ATL. La [classe CComControl](../../atl/reference/ccomcontrol-class.md) deriva da `CComControlBase`. Quando si crea un controllo standard o un controllo DHTML mediante la creazione guidata controllo ATL, la procedura guidata deriverà automaticamente la classe da `CComControlBase`.

Per ulteriori informazioni sulla creazione di un controllo, vedere l' [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="appearancetype"></a>CComControlBase:: AppearanceType

Eseguire l'override se il `m_nAppearance` proprietà predefinita non è di tipo **short**.

```
typedef short AppearanceType;
```

### <a name="remarks"></a>Osservazioni

La creazione guidata controllo ATL aggiunge `m_nAppearance` proprietà predefinita di tipo short. Eseguire l'override `AppearanceType` se si utilizza un tipo di dati diverso.

##  <a name="ccomcontrolbase"></a>CComControlBase:: CComControlBase

Costruttore.

```
CComControlBase(HWND& h);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per la finestra associata al controllo.

### <a name="remarks"></a>Osservazioni

Inizializza le dimensioni del controllo per le unità 5080X5080 HIMETRIC (2 "X2") e inizializza i valori del membro dati `CComControlBase` su NULL o FALSE.

##  <a name="dtor"></a>CComControlBase:: ~ CComControlBase

Distruttore.

```
~CComControlBase();
```

### <a name="remarks"></a>Osservazioni

Se il controllo è a finestra, `~CComControlBase` lo distrugge chiamando [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow).

##  <a name="controlqueryinterface"></a>CComControlBase:: ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```

### <a name="parameters"></a>Parametri

*IID*<br/>
GUID dell'interfaccia richiesta.

*PPV*<br/>
Puntatore al puntatore a interfaccia identificato da *IID*oppure null se l'interfaccia non viene trovata.

### <a name="remarks"></a>Osservazioni

Gestisce solo le interfacce nella tabella della mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]

##  <a name="doesverbactivate"></a>CComControlBase::D oesVerbActivate

Verifica che il parametro *iVerb* usato da `IOleObjectImpl::DoVerb` attiva l'interfaccia utente del controllo (*iVerb* Equals OLEIVERB_UIACTIVATE), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo (*iVerb* Equals OLEIVERB_PRIMARY), Visualizza il controllo (*iVerb* uguale a OLEIVERB_SHOW) o attiva il controllo (*iVerb* equivale a OLEIVERB_INPLACEACTIVATE).

```
BOOL DoesVerbActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Valore che indica l'azione che deve essere eseguita dal `DoVerb`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se *iVerb* è uguale a OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Osservazioni

È possibile eseguire l'override di questo metodo per definire un verbo di attivazione personalizzato.

##  <a name="doesverbuiactivate"></a>CComControlBase::D oesVerbUIActivate

Verifica che il parametro *iVerb* usato da `IOleObjectImpl::DoVerb` provochi l'attivazione dell'interfaccia utente del controllo e restituisca true.

```
BOOL DoesVerbUIActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Valore che indica l'azione che deve essere eseguita dal `DoVerb`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se *iVerb* è uguale a OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE. In caso contrario, il metodo restituisce FALSE.

##  <a name="doverbproperties"></a>CComControlBase::D oVerbProperties

Visualizza le pagine delle proprietà del controllo.

```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */, HWND hwndParent);
```

### <a name="parameters"></a>Parametri

*prcPosRec*<br/>
Riservato.

*hwndParent*<br/>
Handle della finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]

[!code-cpp[NVC_ATL_COM#20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]

##  <a name="fireviewchange"></a>CComControlBase:: FireViewChange

Chiamare questo metodo per indicare al contenitore di ricreare il controllo o notificare ai sink di notifica registrati che la visualizzazione del controllo è cambiata.

```
HRESULT FireViewChange();
```

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se il controllo è attivo (il membro dati della classe del controllo [CComControlBase:: m_bInPlaceActive](#m_binplaceactive) è true), notifica al contenitore che si vuole ricreare l'intero controllo. Se il controllo è inattivo, notifica ai sink di notifica registrati del controllo (tramite il membro dati della classe del controllo [CComControlBase:: m_spAdviseSink](#m_spadvisesink)) che la visualizzazione del controllo è stata modificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]

##  <a name="getambientappearance"></a>CComControlBase:: GetAmbientAppearance

Recupera DISPID_AMBIENT_APPEARANCE, l'impostazione dell'aspetto corrente per il controllo: 0 per flat e 1 per 3D.

```
HRESULT GetAmbientAppearance(short& nAppearance);
```

### <a name="parameters"></a>Parametri

*nAppearance*<br/>
DISPID_AMBIENT_APPEARANCE della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#22](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]

##  <a name="getambientautoclip"></a>CComControlBase:: GetAmbientAutoClip

Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ritaglio automatico dell'area di visualizzazione del controllo.

```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```

### <a name="parameters"></a>Parametri

*bAutoClip*<br/>
DISPID_AMBIENT_AUTOCLIP della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientbackcolor"></a>CComControlBase:: GetAmbientBackColor

Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```

### <a name="parameters"></a>Parametri

*BackColor*<br/>
DISPID_AMBIENT_BACKCOLOR della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientcharset"></a>CComControlBase:: GetAmbientCharSet

Recupera DISPID_AMBIENT_CHARSET, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```

### <a name="parameters"></a>Parametri

*bstrCharSet*<br/>
DISPID_AMBIENT_CHARSET della proprietà.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="getambientcodepage"></a>CComControlBase:: GetAmbientCodePage

Recupera DISPID_AMBIENT_CODEPAGE, la tabella codici di ambiente per tutti i controlli, definiti dal contenitore.

```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```

### <a name="parameters"></a>Parametri

*ulCodePage*<br/>
DISPID_AMBIENT_CODEPAGE della proprietà.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="getambientdisplayasdefault"></a>CComControlBase:: GetAmbientDisplayAsDefault

Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come pulsante predefinito e pertanto un controllo Button deve disegnarsi con un frame più spessa.

```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bDisplayAsDefault*<br/>
DISPID_AMBIENT_DISPLAYASDEFAULT della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientdisplayname"></a>CComControlBase:: GetAmbientDisplayName

Recupera DISPID_AMBIENT_DISPLAYNAME, il nome fornito dal contenitore al controllo.

```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```

### <a name="parameters"></a>Parametri

*bstrDisplayName*<br/>
DISPID_AMBIENT_DISPLAYNAME della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientfont"></a>CComControlBase:: GetAmbientFont

Recupera un puntatore all'interfaccia del `IFont` di ambiente del contenitore.

```
HRESULT GetAmbientFont(IFont** ppFont);
```

### <a name="parameters"></a>Parametri

*ppFont*<br/>
Puntatore all'interfaccia [IFont](/windows/win32/api/ocidl/nn-ocidl-ifont) di ambiente del contenitore.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non è NULL, il chiamante deve rilasciare il puntatore.

##  <a name="getambientfontdisp"></a>CComControlBase:: GetAmbientFontDisp

Recupera un puntatore all'interfaccia di invio `IFontDisp` di ambiente del contenitore.

```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```

### <a name="parameters"></a>Parametri

*ppFont*<br/>
Puntatore all'interfaccia di dispatch [IFontDisp](/windows/win32/api/ocidl/nn-ocidl-ifontdisp) di ambiente del contenitore.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non è NULL, il chiamante deve rilasciare il puntatore.

##  <a name="getambientforecolor"></a>CComControlBase:: GetAmbientForeColor

Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano di ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```

### <a name="parameters"></a>Parametri

*ForeColor*<br/>
DISPID_AMBIENT_FORECOLOR della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientlocaleid"></a>CComControlBase:: GetAmbientLocaleID

Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.

```
HRESULT GetAmbientLocaleID(LCID& lcid);
```

### <a name="parameters"></a>Parametri

*lcid*<br/>
DISPID_AMBIENT_LOCALEID della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il controllo può utilizzare questo identificatore per adattare l'interfaccia utente a linguaggi diversi.

##  <a name="getambientmessagereflect"></a>CComControlBase:: GetAmbientMessageReflect

Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore vuole ricevere i messaggi della finestra, ad esempio `WM_DRAWITEM`, come eventi.

```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect*<br/>
DISPID_AMBIENT_MESSAGEREFLECT della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientpalette"></a>CComControlBase:: GetAmbientPalette

Recupera DISPID_AMBIENT_PALETTE, usato per accedere al HPALETTE del contenitore.

```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```

### <a name="parameters"></a>Parametri

*hPalette*<br/>
DISPID_AMBIENT_PALETTE della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientproperty"></a>CComControlBase:: GetAmbientProperty

Recupera la proprietà del contenitore specificata da *DISPID*.

```
HRESULT GetAmbientProperty(DISPID dispid, VARIANT& var);
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
Identificatore della proprietà del contenitore da recuperare.

*var*<br/>
Variabile per la ricezione della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

ATL ha fornito un set di funzioni helper per recuperare proprietà specifiche, ad esempio [CComControlBase:: GetAmbientBackColor](#getambientbackcolor). Se non è disponibile alcun metodo appropriato, utilizzare `GetAmbientProperty`.

##  <a name="getambientrighttoleft"></a>CComControlBase:: GetAmbientRightToLeft

Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui il contenuto viene visualizzato dal contenitore.

```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```

### <a name="parameters"></a>Parametri

*bRightToLeft*<br/>
DISPID_AMBIENT_RIGHTTOLEFT della proprietà. Impostare su TRUE se il contenuto viene visualizzato da destra a sinistra, FALSE se viene visualizzato da sinistra a destra.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="getambientscaleunits"></a>CComControlBase:: GetAmbientScaleUnits

Recupera DISPID_AMBIENT_SCALEUNITS, unità di ambiente del contenitore (ad esempio pollici o centimetri) per la visualizzazione delle etichette.

```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```

### <a name="parameters"></a>Parametri

*bstrScaleUnits*<br/>
DISPID_AMBIENT_SCALEUNITS della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientshowgrabhandles"></a>CComControlBase:: GetAmbientShowGrabHandles

Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente al controllo di visualizzare i quadratini di controllo per se stesso quando è attivo.

```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*bShowGrabHandles*<br/>
DISPID_AMBIENT_SHOWGRABHANDLES della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientshowhatching"></a>CComControlBase:: GetAmbientShowHatching

Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente al controllo di essere visualizzato con un motivo tratteggiato quando l'interfaccia utente del controllo è attiva.

```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```

### <a name="parameters"></a>Parametri

*bShowHatching*<br/>
DISPID_AMBIENT_SHOWHATCHING della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambientsupportsmnemonics"></a>CComControlBase:: GetAmbientSupportsMnemonics

Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta rapida.

```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```

### <a name="parameters"></a>Parametri

*bSupportsMnemonics*<br/>
DISPID_AMBIENT_SUPPORTSMNEMONICS della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambienttextalign"></a>CComControlBase:: GetAmbientTextAlign

Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferito dal contenitore: 0 per l'allineamento generale (numeri a destra, testo a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.

```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```

### <a name="parameters"></a>Parametri

*nTextAlign*<br/>
DISPID_AMBIENT_TEXTALIGN della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getambienttoptobottom"></a>CComControlBase:: GetAmbientTopToBottom

Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui il contenuto viene visualizzato dal contenitore.

```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```

### <a name="parameters"></a>Parametri

*bTopToBottom*<br/>
DISPID_AMBIENT_TOPTOBOTTOM della proprietà. Impostare su TRUE se il testo viene visualizzato dall'alto verso il basso, FALSE se viene visualizzato dal basso verso l'alto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="getambientuidead"></a>CComControlBase:: GetAmbientUIDead

Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore vuole che il controllo risponda alle azioni dell'interfaccia utente.

```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```

### <a name="parameters"></a>Parametri

*bUIDead*<br/>
DISPID_AMBIENT_UIDEAD della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Se TRUE, il controllo non deve rispondere. Questo flag si applica indipendentemente dal flag di DISPID_AMBIENT_USERMODE. Vedere [CComControlBase:: GetAmbientUserMode](#getambientusermode).

##  <a name="getambientusermode"></a>CComControlBase:: GetAmbientUserMode

Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).

```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```

### <a name="parameters"></a>Parametri

*bUserMode*<br/>
DISPID_AMBIENT_USERMODE della proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

##  <a name="getdirty"></a>CComControlBase:: GetDirty

Restituisce il valore dell'`m_bRequiresSave`del membro dati.

```
BOOL GetDirty();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore dell' [m_bRequiresSave](#m_brequiressave)del membro dati.

### <a name="remarks"></a>Osservazioni

Questo valore viene impostato utilizzando [CComControlBase:: todirty](#setdirty).

##  <a name="getzoominfo"></a>CComControlBase:: GetZoomInfo

Recupera i valori x e y del numeratore e del denominatore del fattore di zoom per un controllo attivato per la modifica sul posto.

```
void GetZoomInfo(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*<br/>
Struttura che conterrà il numeratore e il denominatore del fattore di zoom. Per ulteriori informazioni, vedere [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).

### <a name="remarks"></a>Osservazioni

Il fattore di zoom è la percentuale della dimensione naturale del controllo nell'extent corrente.

##  <a name="inplaceactivate"></a>CComControlBase:: InPlaceActivate

Determina la transizione del controllo dallo stato inattivo a qualsiasi stato indicato dal verbo in *iVerb* .

```
HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
```

### <a name="parameters"></a>Parametri

*iVerb*<br/>
Valore che indica l'azione che deve essere eseguita da [IOleObjectImpl::D overb](../../atl/reference/ioleobjectimpl-class.md#doverb).

*prcPosRect*<br/>
Puntatore alla posizione del controllo sul posto.

### <a name="return-value"></a>Valore restituito

Uno dei valori HRESULT standard.

### <a name="remarks"></a>Osservazioni

Prima dell'attivazione, questo metodo verifica che il controllo disponga di un sito client, controlla la quantità di controllo visibile e ottiene la posizione del controllo nella finestra padre. Dopo l'attivazione del controllo, questo metodo attiva l'interfaccia utente del controllo e indica al contenitore di rendere visibile il controllo.

Questo metodo recupera anche un puntatore di interfaccia `IOleInPlaceSite`, `IOleInPlaceSiteEx`o `IOleInPlaceSiteWindowless` per il controllo e lo archivia nel membro dati della classe del controllo [CComControlBase:: m_spInPlaceSite](#m_spinplacesite). I membri dati della classe del controllo [CComControlBase:: m_bInPlaceSiteEx](#m_binplacesiteex), [CComControlBase:: m_bWndLess](#m_bwndless), [CComControlBase:: m_bWasOnceWindowless](#m_bwasoncewindowless)e [CComControlBase:: m_bNegotiatedWnd](#m_bnegotiatedwnd) sono impostati su true, a seconda dei casi.

##  <a name="internalgetsite"></a>CComControlBase:: InternalGetSite

Chiamare questo metodo per eseguire una query sul sito di controllo per un puntatore all'interfaccia identificata.

```
HRESULT InternalGetSite(REFIID riid, void** ppUnkSite);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
IID del puntatore a interfaccia che deve essere restituito in *ppUnkSite*.

*ppUnkSite*<br/>
Indirizzo della variabile puntatore che riceve il puntatore a interfaccia richiesto in *riid*.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Se il sito supporta l'interfaccia richiesta in *riid*, il puntatore viene restituito per mezzo di *ppUnkSite*. In caso contrario, *ppUnkSite* è impostato su null.

##  <a name="m_bautosize"></a>CComControlBase:: m_bAutoSize

Flag che indica che il controllo non può essere di altre dimensioni.

```
unsigned m_bAutoSize:1;
```

### <a name="remarks"></a>Osservazioni

Questo flag viene controllato dal `IOleObjectImpl::SetExtent` e, se TRUE, determina la restituzione della funzione E_FAIL.

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Se si aggiunge l'opzione **dimensioni automatiche** nella scheda [proprietà predefinite](../../atl/reference/stock-properties-atl-control-wizard.md) della creazione guidata controllo ATL, la procedura guidata crea automaticamente il membro dati nella classe del controllo, crea i metodi put e Get per la proprietà e supporta [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) per notificare automaticamente il contenitore quando la proprietà viene modificata.

##  <a name="m_bdrawfromnatural"></a>CComControlBase:: m_bDrawFromNatural

Flag che indica che `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` devono impostare le dimensioni del controllo da `m_sizeNatural` anziché da `m_sizeExtent`.

```
unsigned m_bDrawFromNatural:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_bdrawgetdatainhimetric"></a>CComControlBase:: m_bDrawGetDataInHimetric

Flag che indica che `IDataObjectImpl::GetData` deve usare unità HIMETRIC e non i pixel durante il disegno.

```
unsigned m_bDrawGetDataInHimetric:1;
```

### <a name="remarks"></a>Osservazioni

Ogni unità HIMETRIC logica è 0,01 millimetri.

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_binplaceactive"></a>CComControlBase:: m_bInPlaceActive

Flag che indica che il controllo è attivo sul posto.

```
unsigned m_bInPlaceActive:1;
```

### <a name="remarks"></a>Osservazioni

Ciò significa che il controllo è visibile e la relativa finestra, se presente, è visibile, ma i menu e le barre degli strumenti potrebbero non essere attivi. Il flag `m_bUIActive` indica anche che l'interfaccia utente del controllo, ad esempio i menu, è attiva.

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_binplacesiteex"></a>CComControlBase:: m_bInPlaceSiteEx

Flag che indica che il contenitore supporta le funzionalità di `IOleInPlaceSiteEx` dell'interfaccia e del controllo OCX96, ad esempio i controlli senza finestra e senza sfarfallio.

```
unsigned m_bInPlaceSiteEx:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Il membro dati `m_spInPlaceSite` punta a un'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) , a seconda del valore dei flag `m_bWndLess` e `m_bInPlaceSiteEx`. Il `m_bNegotiatedWnd` del membro dati deve essere TRUE affinché il puntatore `m_spInPlaceSite` sia valido.

Se `m_bWndLess` è FALSE e `m_bInPlaceSiteEx` è TRUE, `m_spInPlaceSite` è un puntatore a interfaccia `IOleInPlaceSiteEx`. Per una tabella che mostra la relazione tra questi tre membri dati, vedere [m_spInPlaceSite](#m_spinplacesite) .

##  <a name="m_bnegotiatedwnd"></a>CComControlBase:: m_bNegotiatedWnd

Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio, i controlli privi di sfarfallio e senza finestra) e se il controllo è con finestra o senza finestra.

```
unsigned m_bNegotiatedWnd:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Il flag di `m_bNegotiatedWnd` deve essere TRUE affinché il puntatore `m_spInPlaceSite` sia valido.

##  <a name="m_brecomposeonresize"></a>CComControlBase:: m_bRecomposeOnResize

Flag che indica che il controllo vuole ricomporre la presentazione quando il contenitore modifica la dimensione di visualizzazione del controllo.

```
unsigned m_bRecomposeOnResize:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Questo flag viene controllato da [IOleObjectImpl::](../../atl/reference/ioleobjectimpl-class.md#setextent) Severity e, se TRUE, `SetExtent` notifica al contenitore le modifiche della visualizzazione. Se questo flag è impostato, è necessario impostare anche il bit OLEMISC_RECOMPOSEONRESIZE nell'enumerazione [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) .

##  <a name="m_brequiressave"></a>CComControlBase:: m_bRequiresSave

Flag che indica che il controllo è stato modificato dopo l'ultimo salvataggio.

```
unsigned m_bRequiresSave:1;
```

### <a name="remarks"></a>Osservazioni

Il valore di `m_bRequiresSave` può essere impostato con [CComControlBase:: todirty](#setdirty) e recuperato con [CComControlBase:: GetDirty](#getdirty).

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_bresizenatural"></a>CComControlBase:: m_bResizeNatural

Flag che indica che il controllo vuole ridimensionare l'extent naturale (le dimensioni fisiche non ridimensionate) quando il contenitore modifica la dimensione di visualizzazione del controllo.

```
unsigned m_bResizeNatural:1;
```

### <a name="remarks"></a>Osservazioni

Questo flag viene controllato dal `IOleObjectImpl::SetExtent` e, se TRUE, la dimensione passata in `SetExtent` viene assegnata al `m_sizeNatural`.

La dimensione passata in `SetExtent` viene sempre assegnata al `m_sizeExtent`, indipendentemente dal valore di `m_bResizeNatural`.

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_buiactive"></a>CComControlBase:: m_bUIActive

Flag che indica che l'interfaccia utente del controllo, ad esempio i menu e le barre degli strumenti, è attiva.

```
unsigned m_bUIActive:1;
```

### <a name="remarks"></a>Osservazioni

Il flag di `m_bInPlaceActive` indica che il controllo è attivo, ma non che l'interfaccia utente è attiva.

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_busingwindowrgn"></a>CComControlBase:: m_bUsingWindowRgn

Flag che indica che il controllo utilizza l'area della finestra fornita dal contenitore.

```
unsigned m_bUsingWindowRgn:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_bwasoncewindowless"></a>CComControlBase:: m_bWasOnceWindowless

Flag che indica che il controllo è stato privo di finestra, ma che ora può essere non disponibile.

```
unsigned m_bWasOnceWindowless:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_bwindowonly"></a>CComControlBase:: m_bWindowOnly

Flag che indica che il controllo deve essere finestra, anche se il contenitore supporta controlli privi di finestra.

```
unsigned m_bWindowOnly:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_bwndless"></a>CComControlBase:: m_bWndLess

Flag che indica che il controllo è privo di finestra.

```
unsigned m_bWndLess:1;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Il membro dati `m_spInPlaceSite` punta a un'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) , a seconda del valore dei flag `m_bWndLess` e [CComControlBase:: m_bInPlaceSiteEx](#m_binplacesiteex) . Il membro dati [CComControlBase:: m_bNegotiatedWnd](#m_bnegotiatedwnd) deve essere true per il puntatore [CComControlBase:: m_spInPlaceSite](#m_spinplacesite) essere valido.

Se `m_bWndLess` è TRUE, `m_spInPlaceSite` è un puntatore a interfaccia `IOleInPlaceSiteWindowless`. Per una tabella che mostra la relazione completa tra questi membri dati, vedere [CComControlBase:: m_spInPlaceSite](#m_spinplacesite) .

##  <a name="m_hwndcd"></a>CComControlBase:: m_hWndCD

Contiene un riferimento all'handle della finestra associato al controllo.

```
HWND& m_hWndCD;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_nfreezeevents"></a>CComControlBase:: m_nFreezeEvents

Conteggio del numero di volte in cui il contenitore contiene eventi bloccati (rifiutati di accettare gli eventi) senza un disgelo degli eventi (accettazione degli eventi).

```
short m_nFreezeEvents;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_rcpos"></a>CComControlBase:: m_rcPos

Posizione in pixel del controllo espressa nelle coordinate del contenitore.

```
RECT m_rcPos;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_sizeextent"></a>CComControlBase:: m_sizeExtent

L'entità del controllo in unità HIMETRIC (ogni unità è 0,01 millimetri) per una particolare visualizzazione.

```
SIZE m_sizeExtent;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Questa dimensione viene ridimensionata in base alla visualizzazione. Le dimensioni fisiche del controllo vengono specificate nel `m_sizeNatural` membro dati e sono fisse.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

##  <a name="m_sizenatural"></a>CComControlBase:: m_sizeNatural

Dimensioni fisiche del controllo in unità HIMETRIC (ogni unità è 0,01 millimetri).

```
SIZE m_sizeNatural;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Questa dimensione è fissa, mentre le dimensioni in `m_sizeExtent` vengono ridimensionate in base alla visualizzazione.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

##  <a name="m_spadvisesink"></a>CComControlBase:: m_spAdviseSink

Puntatore diretto alla connessione consultiva sul contenitore ( [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)del contenitore).

```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_spambientdispatch"></a>CComControlBase:: m_spAmbientDispatch

Oggetto `CComDispatchDriver` che consente di recuperare e impostare le proprietà di un oggetto tramite un puntatore di `IDispatch`.

```
CComDispatchDriver m_spAmbientDispatch;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_spclientsite"></a>CComControlBase:: m_spClientSite

Puntatore al sito client del controllo all'interno del contenitore.

```
CComPtr<IOleClientSite>
    m_spClientSite;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

##  <a name="m_spdataadviseholder"></a>CComControlBase:: m_spDataAdviseHolder

Fornisce un metodo standard per mantenere le connessioni consultive tra oggetti dati e sink di notifica.

```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Un oggetto dati è un controllo che può trasferire dati e che implementa [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject), i cui metodi specificano il formato e il supporto di trasferimento dei dati.

L'interfaccia `m_spDataAdviseHolder` implementa i metodi [IDataObject::D advise](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) e [IDataObject::D Unadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) per stabilire ed eliminare le connessioni consultive al contenitore. Il contenitore del controllo deve implementare un sink di notifica supportando l'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) .

##  <a name="m_spinplacesite"></a>CComControlBase:: m_spInPlaceSite

Puntatore al puntatore all'interfaccia [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)o [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) del contenitore.

```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

Il puntatore `m_spInPlaceSite` è valido solo se il flag di [m_bNegotiatedWnd](#m_bnegotiatedwnd) è true.

Nella tabella seguente viene illustrato il modo in cui il tipo di puntatore `m_spInPlaceSite` dipende dai flag del membro dati [m_bWndLess](#m_bwndless) e [m_bInPlaceSiteEx](#m_binplacesiteex) :

|Tipo di m_spInPlaceSite|Valore m_bWndLess|Valore m_bInPlaceSiteEx|
|---------------------------|-----------------------|-----------------------------|
|`IOleInPlaceSiteWindowless`|TRUE|TRUE o FALSE|
|`IOleInPlaceSiteEx`|FALSE|TRUE|
|`IOleInPlaceSite`|FALSE|FALSE|

##  <a name="m_spoleadviseholder"></a>CComControlBase:: m_spOleAdviseHolder

Fornisce un'implementazione standard di un modo per mantenere le connessioni consultive.

```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```

### <a name="remarks"></a>Osservazioni

> [!NOTE]
>  Per usare questo membro dati all'interno della classe del controllo, è necessario dichiararlo come membro dati nella classe del controllo. La classe del controllo non erediterà questo membro dati dalla classe base perché è dichiarato all'interno di un'Unione nella classe di base.

L'interfaccia `m_spOleAdviseHolder` implementa i metodi [IOleObject:: Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) e [IOleObject:: Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) per stabilire ed eliminare le connessioni consultive al contenitore. Il contenitore del controllo deve implementare un sink di notifica supportando l'interfaccia [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) .

##  <a name="ondraw"></a>CComControlBase:: onpare

Eseguire l'override di questo metodo per creare il controllo.

```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*<br/>
Riferimento alla struttura [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) che contiene informazioni di disegno, ad esempio l'aspetto di disegno, i limiti del controllo e se il disegno è ottimizzato o meno.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il `OnDraw` predefinito Elimina o Ripristina il contesto di dispositivo o non esegue alcuna operazione, a seconda dei flag impostati in [CComControlBase:: OnDrawAdvanced](#ondrawadvanced).

Un metodo di `OnDraw` viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Il `OnDraw` predefinito della procedura guidata disegna un rettangolo con l'etichetta "ATL 8,0".

### <a name="example"></a>Esempio

Vedere l'esempio per [CComControlBase:: GetAmbientAppearance](#getambientappearance).

##  <a name="ondrawadvanced"></a>CComControlBase:: OnDrawAdvanced

Il `OnDrawAdvanced` predefinito prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama il metodo di `OnDraw` della classe del controllo.

```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*<br/>
Riferimento alla struttura [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) che contiene informazioni di disegno, ad esempio l'aspetto di disegno, i limiti del controllo e se il disegno è ottimizzato o meno.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo se si vuole accettare il contesto di dispositivo passato dal contenitore senza normalizzarlo.

Per ulteriori informazioni, vedere [CComControlBase:: onpare](#ondraw) .

##  <a name="onkillfocus"></a>CComControlBase:: OnKillFocus

Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.

```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bHandled*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

##  <a name="onmouseactivate"></a>CComControlBase:: OnMouseActivate

Verifica che l'interfaccia utente sia in modalità utente, quindi attiva il controllo.

```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bHandled*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

##  <a name="onpaint"></a>CComControlBase:: OnPaint

Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama il metodo `OnDrawAdvanced` della classe del controllo.

```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```

### <a name="parameters"></a>Parametri

*nMsg*<br/>
Riservato.

*wParam*<br/>
HDC esistente.

*lParam*<br/>
Riservato.

*lResult*<br/>
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce sempre zero.

### <a name="remarks"></a>Osservazioni

Se *wParam* non è NULL, `OnPaint` presuppone che contenga un HDC valido e lo usi invece di [CComControlBase:: m_hWndCD](#m_hwndcd).

##  <a name="onsetfocus"></a>CComControlBase:: OnSetFocus

Verifica che il controllo sia attivo sul posto e disponga di un sito di controllo valido, quindi informa il contenitore che il controllo ha ottenuto lo stato attivo.

```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*<br/>
Riservato.

*wParam*<br/>
Riservato.

*lParam*<br/>
Riservato.

*bHandled*<br/>
Flag che indica se il messaggio della finestra è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Osservazioni

Invia una notifica al contenitore che il controllo ha ricevuto lo stato attivo.

##  <a name="pretranslateaccelerator"></a>CComControlBase::P reTranslateAccelerator

Eseguire l'override di questo metodo per fornire i propri gestori di tasti di scelta rapida.

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

Per impostazione predefinita, restituisce FALSE.

##  <a name="sendonclose"></a>CComControlBase:: SendOnClose

Notifica a tutti i sink consultivi registrati con il titolare del preavviso che il controllo è stato chiuso.

```
HRESULT SendOnClose();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il controllo ha chiuso i sink consultivi.

##  <a name="sendondatachange"></a>CComControlBase:: SendOnDataChange

Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che i dati di controllo sono stati modificati.

```
HRESULT SendOnDataChange(DWORD advf = 0);
```

### <a name="parameters"></a>Parametri

*ADVF*<br/>
Avvisare i flag che specificano come viene effettuata la chiamata a [IAdviseSink:: OnDataChange](/windows/win32/api/objidl/nf-objidl-iadvisesink-ondatachange) . I valori sono dall'enumerazione [ADVF](/windows/win32/api/objidl/ne-objidl-advf) .

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

##  <a name="sendonrename"></a>CComControlBase:: SendOnRename

Notifica a tutti i sink consultivi registrati con il titolare del preavviso che il controllo dispone di un nuovo moniker.

```
HRESULT SendOnRename(IMoniker* pmk);
```

### <a name="parameters"></a>Parametri

*PMK*<br/>
Puntatore al nuovo moniker del controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il moniker per il controllo è stato modificato.

##  <a name="sendonsave"></a>CComControlBase:: SendOnSave

Notifica a tutti i sink consultivi registrati con il titolare dell'avviso che il controllo è stato salvato.

```
HRESULT SendOnSave();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

Invia una notifica che il controllo ha appena salvato i dati.

##  <a name="sendonviewchange"></a>CComControlBase:: SendOnViewChange

Notifica a tutti i sink consultivi registrati che la visualizzazione del controllo è cambiata.

```
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
```

### <a name="parameters"></a>Parametri

*dwAspect*<br/>
Aspetto o visualizzazione del controllo.

*Lindex*<br/>
Parte della visualizzazione modificata. Il valore-1 è valido.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Osservazioni

`SendOnViewChange` chiama [IAdviseSink:: OnViewChange](/windows/win32/api/objidl/nf-objidl-iadvisesink-onviewchange). L'unico valore di *lIndex* attualmente supportato è-1, che indica che l'intera vista è di interesse.

##  <a name="setcontrolfocus"></a>CComControlBase:: SetControlFocus

Imposta o rimuove lo stato attivo della tastiera su o dal controllo.

```
BOOL SetControlFocus(BOOL bGrab);
```

### <a name="parameters"></a>Parametri

*bGrab*<br/>
Se TRUE, imposta lo stato attivo della tastiera sul controllo chiamante. Se FALSE, rimuove lo stato attivo dalla tastiera dal controllo chiamante, purché abbia lo stato attivo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il controllo riceve correttamente lo stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per un controllo a finestra, viene chiamata la funzione dell'API Windows [SetFocus](/windows/win32/api/winuser/nf-winuser-setfocus) . Per un controllo senza finestra, viene chiamato [IOleInPlaceSiteWindowless:: SetFocus](/windows/win32/api/ocidl/nf-ocidl-ioleinplacesitewindowless-setfocus) . Tramite questa chiamata, un controllo senza finestra ottiene lo stato attivo della tastiera e può rispondere ai messaggi della finestra.

##  <a name="setdirty"></a>CComControlBase:: IsDirty

Imposta il `m_bRequiresSave` del membro dati sul valore in *bDirty*.

```
void SetDirty(BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*bDirty*<br/>
Valore del membro dati [CComControlBase:: m_bRequiresSave](#m_brequiressave).

### <a name="remarks"></a>Osservazioni

è necessario chiamare `SetDirty(TRUE)` per contrassegnare che il controllo è stato modificato dopo l'ultimo salvataggio. Il valore di `m_bRequiresSave` viene recuperato con [CComControlBase:: GetDirty](#getdirty).

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
