---
title: Classe CComControlBase | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CComControlBase class
ms.assetid: 3d1bf022-acf2-4092-8283-ff8cee6332f3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 17661f7497711449397ae2f64c9d6eff52d5f403
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43766925"
---
# <a name="ccomcontrolbase-class"></a>Classe CComControlBase

Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CComControlBase
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::AppearanceType](#appearancetype)|Eseguire l'override se le `m_nAppearance` proprietà predefinita non è di tipo **breve**.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::CComControlBase](#ccomcontrolbase)|Costruttore.|
|[CComControlBase:: ~ CComControlBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|
|[CComControlBase::DoesVerbActivate](#doesverbactivate)|Verifica che il *iVerb* parametro utilizzato dal `IOleObjectImpl::DoVerb` uno attiva dell'interfaccia utente del controllo (*iVerb* OLEIVERB_UIACTIVATE è uguale a), definisce l'azione eseguita quando l'utente fa doppio clic il controllo (*iVerb* OLEIVERB_PRIMARY è uguale a), Visualizza il controllo (*iVerb* OLEIVERB_SHOW è uguale a), o attivato il controllo (*iVerb* OLEIVERB è uguale a _INPLACEACTIVATE).|
|[CComControlBase::DoesVerbUIActivate](#doesverbuiactivate)|Verifica che il *iVerb* parametro utilizzato dal `IOleObjectImpl::DoVerb` causa l'interfaccia utente del controllo attivare e restituisce TRUE.|
|[CComControlBase::DoVerbProperties](#doverbproperties)|Consente di visualizzare le pagine delle proprietà del controllo.|
|[CComControlBase::FireViewChange](#fireviewchange)|Chiamare questo metodo per indicare il contenitore di ridisegnare il controllo o inviare una notifica di sink di notifica registrata la visualizzazione del controllo è stato modificato.|
|[CComControlBase:: GetAmbientAppearance](#getambientappearance)|Recupera DISPID_AMBIENT_APPEARANCE, l'aspetto corrente l'impostazione per il controllo: 0 per flat e 1 per 3D.|
|[CComControlBase::GetAmbientAutoClip](#getambientautoclip)|Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ridimensionamento automatico dell'area di visualizzazione controllo.|
|[CComControlBase::GetAmbientBackColor](#getambientbackcolor)|Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientCharSet](#getambientcharset)|Recupera DISPID_AMBIENT_CHARSET, il carattere di ambiente impostate per tutti i controlli, definiti dal contenitore.|
|[CComControlBase::GetAmbientCodePage](#getambientcodepage)|Recupera DISPID_AMBIENT_CODEPAGE, il carattere di ambiente impostate per tutti i controlli, definiti dal contenitore.|
|[CComControlBase:: GetAmbientDisplayAsDefault](#getambientdisplayasdefault)|Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come pulsante predefinito e pertanto un controllo button deve disegnarsi con un intervallo più spesso.|
|[CComControlBase::GetAmbientDisplayName](#getambientdisplayname)|Recupera DISPID_AMBIENT_DISPLAYNAME, il nome di contenitore è fornito per il controllo.|
|[CComControlBase::GetAmbientFont](#getambientfont)|Recupera un puntatore al contenitore dell'ambiente `IFont` interfaccia.|
|[CComControlBase::GetAmbientFontDisp](#getambientfontdisp)|Recupera un puntatore al contenitore dell'ambiente `IFontDisp` interfaccia dispatch.|
|[CComControlBase::GetAmbientForeColor](#getambientforecolor)|Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano di ambiente per tutti i controlli, definito dal contenitore.|
|[CComControlBase::GetAmbientLocaleID](#getambientlocaleid)|Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.|
|[CComControlBase::GetAmbientMessageReflect](#getambientmessagereflect)|Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore richiede la ricezione dei messaggi di finestra (ad esempio WM_DRAWITEM) come eventi.|
|[CComControlBase::GetAmbientPalette](#getambientpalette)|Recupera DISPID_AMBIENT_PALETTE, utilizzato per accedere a HPALETTE del contenitore.|
|[CComControlBase::GetAmbientProperty](#getambientproperty)|Recupera le proprietà del contenitore specificata da *id*.|
|[CComControlBase::GetAmbientRightToLeft](#getambientrighttoleft)|Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui viene visualizzato il contenuto dal contenitore.|
|[CComControlBase::GetAmbientScaleUnits](#getambientscaleunits)|Recupera DISPID_AMBIENT_SCALEUNITS, unità ambiente del contenitore (ad esempio pollici o in centimetri) per le etichette vengono visualizzati.|
|[CComControlBase::GetAmbientShowGrabHandles](#getambientshowgrabhandles)|Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente il controllo da visualizzare quadratini di ridimensionamento per se stessa quando è attivo.|
|[CComControlBase::GetAmbientShowHatching](#getambientshowhatching)|Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente il controllo da visualizzare se stesso con un motivo a tratteggio quando l'interfaccia utente è attivo.|
|[CComControlBase::GetAmbientSupportsMnemonics](#getambientsupportsmnemonics)|Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta da tastiera.|
|[CComControlBase::GetAmbientTextAlign](#getambienttextalign)|Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferita per il contenitore: 0 per l'allineamento generale (numeri, testo a destra a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.|
|[CComControlBase::GetAmbientTopToBottom](#getambienttoptobottom)|Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui viene visualizzato il contenuto dal contenitore.|
|[CComControlBase::GetAmbientUIDead](#getambientuidead)|Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore richieda il controllo per rispondere alle azioni dell'interfaccia utente.|
|[CComControlBase::GetAmbientUserMode](#getambientusermode)|Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).|
|[CComControlBase::GetDirty](#getdirty)|Restituisce il valore del membro dati `m_bRequiresSave`.|
|[CComControlBase::GetZoomInfo](#getzoominfo)|Recupera gli assi x e y i valori del numeratore e del denominatore del fattore di zoom per il controllo è attivato per la modifica in loco.|
|[CComControlBase::InPlaceActivate](#inplaceactivate)|Fa sì che il controllo per la transizione dallo stato inattivo per qualsiasi stato il verbo *iVerb* indica.|
|[CComControlBase::InternalGetSite](#internalgetsite)|Chiamare questo metodo per eseguire una query il sito di controllo per un puntatore all'interfaccia identificata.|
|[CComControlBase:: OnDraw](#ondraw)|Eseguire l'override di questo metodo per creare il controllo.|
|[CComControlBase::OnDrawAdvanced](#ondrawadvanced)|Il valore predefinito `OnDrawAdvanced` prepara un contesto di dispositivo normalizzato per il disegno e quindi chiama la classe di controllo `OnDraw` (metodo).|
|[CComControlBase::OnKillFocus](#onkillfocus)|Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi segnala il contenitore che il controllo ha perso lo stato attivo.|
|[CComControlBase::OnMouseActivate](#onmouseactivate)|Verifica che l'interfaccia utente è in modalità utente, quindi attiva il controllo.|
|[CComControlBase::OnPaint](#onpaint)|Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama la classe di controllo `OnDraw` (metodo).|
|[CComControlBase::OnSetFocus](#onsetfocus)|Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi segnala il contenitore del controllo ha acquisito lo stato attivo.|
|[CComControlBase::PreTranslateAccelerator](#pretranslateaccelerator)|Eseguire l'override di questo metodo per fornire il proprio tastiera gestori tasti di scelta rapida.|
|[CComControlBase::SendOnClose](#sendonclose)|Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo è stata chiusa.|
|[CComControlBase::SendOnDataChange](#sendondatachange)|Notifica a sink consultivi tutto registrato con il titolare di notifica che i dati del controllo sono stato modificato.|
|[CComControlBase::SendOnRename](#sendonrename)|Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo ha un nuovo moniker.|
|[CComControlBase::SendOnSave](#sendonsave)|Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo è stato salvato.|
|[CComControlBase::SendOnViewChange](#sendonviewchange)|Notifica a che tutti i sink consultivi registrati che la visualizzazione del controllo è stato modificato.|
|[CComControlBase::SetControlFocus](#setcontrolfocus)|Imposta o rimuove lo stato attivo da o verso il controllo.|
|[CComControlBase::SetDirty](#setdirty)|Imposta il membro dati `m_bRequiresSave` al valore nella *bDirty*.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComControlBase::m_bAutoSize](#m_bautosize)|Flag che indica che il controllo non può essere qualsiasi altra dimensione.|
|[CComControlBase::m_bDrawFromNatural](#m_bdrawfromnatural)|Flag che indica che `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` deve impostare le dimensioni del controllo da `m_sizeNatural` piuttosto che da `m_sizeExtent`.|
|[CComControlBase::m_bDrawGetDataInHimetric](#m_bdrawgetdatainhimetric)|Flag che indica che `IDataObjectImpl::GetData` utilizzino non pixel e unità HIMETRIC durante il disegno.|
|[CComControlBase::m_bInPlaceActive](#m_binplaceactive)|Flag che indica che il controllo è attivo sul posto.|
|[CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex)|Flag che indica il contenitore supporta il `IOleInPlaceSiteEx` interfaccia e OCX96 controllano le funzionalità, ad esempio i controlli privi di finestra e sfarfallio.|
|[CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd)|Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio i controlli privi di finestra e sfarfallio) e se il controllo è a finestre o privi di finestra.|
|[CComControlBase::m_bRecomposeOnResize](#m_brecomposeonresize)|Flag che indica che il controllo desidera ricomporre la presentazione quando il contenitore di dimensioni di visualizzazione del controllo viene modificato.|
|[CComControlBase::m_bRequiresSave](#m_brequiressave)|Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.|
|[CComControlBase::m_bResizeNatural](#m_bresizenatural)|Flag che indica il controllo desidera ridimensionare relativa estensione naturale (le dimensioni fisiche non ridimensionata) quando il contenitore di modifica delle dimensioni di visualizzazione del controllo.|
|[CComControlBase::m_bUIActive](#m_buiactive)|Flag che indica di interfaccia utente del controllo, ad esempio menu e barre degli strumenti, è attivo.|
|[CComControlBase::m_bUsingWindowRgn](#m_busingwindowrgn)|Flag che indica che il controllo utilizza l'area della finestra fornito dal contenitore.|
|[CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)|Flag che indica il controllo è stata privi di finestra, ma può o potrebbe non essere ora privi di finestra.|
|[CComControlBase](#m_bwindowonly)|Flag che indica che il controllo deve essere a finestre, anche se il contenitore supporta i controlli privi di finestra.|
|[CComControlBase::m_bWndLess](#m_bwndless)|Flag che indica che il controllo è attivo.|
|[CComControlBase::m_hWndCD](#m_hwndcd)|Contiene un riferimento all'handle della finestra associato al controllo.|
|[CComControlBase::m_nFreezeEvents](#m_nfreezeevents)|Un conteggio del numero di volte in cui il contenitore ha bloccato gli eventi (rifiutati di accettare gli eventi) senza una corrispondente thaw degli eventi (accettazione degli eventi).|
|[CComControlBase::m_rcPos](#m_rcpos)|La posizione in pixel del controllo, espressa nelle coordinate del contenitore.|
|[CComControlBase::m_sizeExtent](#m_sizeextent)|L'estensione del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) per una visualizzazione particolare.|
|[CComControlBase::m_sizeNatural](#m_sizenatural)|La dimensione fisica del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).|
|[CComControlBase::m_spAdviseSink](#m_spadvisesink)|Un puntatore diretto per la connessione consultiva sul contenitore (del contenitore [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink)).|
|[CComControlBase::m_spAmbientDispatch](#m_spambientdispatch)|Oggetto `CComDispatchDriver` oggetto che consente di recuperare e impostare le proprietà del contenitore tramite un `IDispatch` puntatore.|
|[CComControlBase::m_spClientSite](#m_spclientsite)|Puntatore al sito di client del controllo all'interno del contenitore.|
|[CComControlBase::m_spDataAdviseHolder](#m_spdataadviseholder)|Fornisce uno standard contenere le connessioni consultive tra gli oggetti dati e sink di notifica.|
|[CComControlBase::m_spInPlaceSite](#m_spinplacesite)|Un puntatore al contenitore [IOleInPlaceSite](/windows/desktop/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesiteex), o [IOleInPlaceSiteWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesitewindowless) puntatore a interfaccia.|
|[CComControlBase::m_spOleAdviseHolder](#m_spoleadviseholder)|Fornisce un'implementazione standard di un modo per mantenere le connessioni consultive.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la creazione e gestione dei controlli ATL. [Classe CComControl](../../atl/reference/ccomcontrol-class.md) deriva da `CComControlBase`. Quando si crea un controllo di controllo Standard o DHTML utilizzando la creazione guidata controllo ATL, la procedura guidata verrà automaticamente derivare la classe da `CComControlBase`.

Per altre informazioni sulla creazione di un controllo, vedere la [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per altre informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="appearancetype"></a>  CComControlBase::AppearanceType

Eseguire l'override se le `m_nAppearance` proprietà predefinita non è di tipo **breve**.

```
typedef short AppearanceType;
```

### <a name="remarks"></a>Note

Aggiunge la creazione guidata controllo ATL `m_nAppearance` azionari vlastnosti typu brevi. Eseguire l'override `AppearanceType` se si usa un tipo di dati diverso.

##  <a name="ccomcontrolbase"></a>  CComControlBase::CComControlBase

Costruttore.

```
CComControlBase(HWND& h);
```

### <a name="parameters"></a>Parametri

*h*  
L'handle della finestra associata al controllo.

### <a name="remarks"></a>Note

Inizializza la dimensione in unità HIMETRIC 5080 X 5080 (2x "2") e inizializza il `CComControlBase` valori dei membri dati su NULL o su FALSE.

##  <a name="dtor"></a>  CComControlBase:: ~ CComControlBase

Distruttore.

```
~CComControlBase();
```

### <a name="remarks"></a>Note

Se il controllo è a, finestre `~CComControlBase` lo elimina chiamando [DestroyWindow](/windows/desktop/api/winuser/nf-winuser-destroywindow).

##  <a name="controlqueryinterface"></a>  CComControlBase::ControlQueryInterface

Recupera un puntatore all'interfaccia richiesta.

```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```

### <a name="parameters"></a>Parametri

*IID*  
Il GUID dell'interfaccia richiesto.

*ppv*  
Un puntatore al puntatore a interfaccia identificato dal *iid*, oppure NULL se l'interfaccia non viene trovato.

### <a name="remarks"></a>Note

gestisce solo le interfacce nella tabella di mappe COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]

##  <a name="doesverbactivate"></a>  CComControlBase::DoesVerbActivate

Verifica che il *iVerb* parametro utilizzato dal `IOleObjectImpl::DoVerb` uno attiva dell'interfaccia utente del controllo (*iVerb* OLEIVERB_UIACTIVATE è uguale a), definisce l'azione eseguita quando l'utente fa doppio clic il controllo (*iVerb* OLEIVERB_PRIMARY è uguale a), Visualizza il controllo (*iVerb* OLEIVERB_SHOW è uguale a), o attivato il controllo (*iVerb* OLEIVERB è uguale a _INPLACEACTIVATE).

```
BOOL DoesVerbActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*  
Valore che indica l'azione che deve essere eseguito da `DoVerb`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se *iVerb* OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE è uguale; in caso contrario, restituisce FALSE.

### <a name="remarks"></a>Note

È possibile eseguire l'override di questo metodo per definire il proprio verbo di attivazione.

##  <a name="doesverbuiactivate"></a>  CComControlBase::DoesVerbUIActivate

Verifica che il *iVerb* parametro utilizzato dal `IOleObjectImpl::DoVerb` causa l'interfaccia utente del controllo attivare e restituisce TRUE.

```
BOOL DoesVerbUIActivate(LONG iVerb);
```

### <a name="parameters"></a>Parametri

*iVerb*  
Valore che indica l'azione che deve essere eseguito da `DoVerb`.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se *iVerb* OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW o OLEIVERB_INPLACEACTIVATE è uguale. In caso contrario, il metodo restituisce FALSE.

##  <a name="doverbproperties"></a>  CComControlBase::DoVerbProperties

Consente di visualizzare le pagine delle proprietà del controllo.

```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */, HWND hwndParent);
```

### <a name="parameters"></a>Parametri

*prcPosRec*  
Riservato.

*hwndParent*  
Handle della finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]

[!code-cpp[NVC_ATL_COM#20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]

##  <a name="fireviewchange"></a>  CComControlBase::FireViewChange

Chiamare questo metodo per indicare il contenitore di ridisegnare il controllo o inviare una notifica di sink di notifica registrata la visualizzazione del controllo è stato modificato.

```
HRESULT FireViewChange();
```

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Se il controllo è attivo (membro dati classe controllo [CComControlBase::m_bInPlaceActive](#m_binplaceactive) è TRUE), notifica al contenitore che si desidera ridisegna l'intero controllo. Se il controllo è inattivo, invia una notifica di registrare il controllo sink di notifica (tramite il membro dati di controllo della classe [CComControlBase::m_spAdviseSink](#m_spadvisesink)) che la visualizzazione del controllo è stato modificato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]

##  <a name="getambientappearance"></a>  CComControlBase:: GetAmbientAppearance

Recupera DISPID_AMBIENT_APPEARANCE, l'aspetto corrente l'impostazione per il controllo: 0 per flat e 1 per 3D.

```
HRESULT GetAmbientAppearance(short& nAppearance);
```

### <a name="parameters"></a>Parametri

*nAppearance*  
La proprietà DISPID_AMBIENT_APPEARANCE.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#22](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]

##  <a name="getambientautoclip"></a>  CComControlBase::GetAmbientAutoClip

Recupera DISPID_AMBIENT_AUTOCLIP, un flag che indica se il contenitore supporta il ridimensionamento automatico dell'area di visualizzazione controllo.

```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```

### <a name="parameters"></a>Parametri

*bAutoClip*  
La proprietà DISPID_AMBIENT_AUTOCLIP.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientbackcolor"></a>  CComControlBase::GetAmbientBackColor

Recupera DISPID_AMBIENT_BACKCOLOR, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```

### <a name="parameters"></a>Parametri

*Colore di sfondo*  
La proprietà DISPID_AMBIENT_BACKCOLOR.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientcharset"></a>  CComControlBase::GetAmbientCharSet

Recupera DISPID_AMBIENT_CHARSET, il carattere di ambiente impostate per tutti i controlli, definiti dal contenitore.

```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```

### <a name="parameters"></a>Parametri

*bstrCharSet*  
La proprietà DISPID_AMBIENT_CHARSET.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="getambientcodepage"></a>  CComControlBase::GetAmbientCodePage

Recupera DISPID_AMBIENT_CODEPAGE, la tabella codici ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```

### <a name="parameters"></a>Parametri

*ulCodePage*  
La proprietà DISPID_AMBIENT_CODEPAGE.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="getambientdisplayasdefault"></a>  CComControlBase:: GetAmbientDisplayAsDefault

Recupera DISPID_AMBIENT_DISPLAYASDEFAULT, un flag che è TRUE se il contenitore ha contrassegnato il controllo in questo sito come pulsante predefinito e pertanto un controllo button deve disegnarsi con un intervallo più spesso.

```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bDisplayAsDefault*  
La proprietà DISPID_AMBIENT_DISPLAYASDEFAULT.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientdisplayname"></a>  CComControlBase::GetAmbientDisplayName

Recupera DISPID_AMBIENT_DISPLAYNAME, il nome di contenitore è fornito per il controllo.

```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```

### <a name="parameters"></a>Parametri

*bstrDisplayName*  
La proprietà DISPID_AMBIENT_DISPLAYNAME.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientfont"></a>  CComControlBase::GetAmbientFont

Recupera un puntatore al contenitore dell'ambiente `IFont` interfaccia.

```
HRESULT GetAmbientFont(IFont** ppFont);
```

### <a name="parameters"></a>Parametri

*ppFont*  
Un puntatore al contenitore dell'ambiente [IFont](/windows/desktop/api/ocidl/nn-ocidl-ifont) interfaccia.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non NULL, il chiamante deve rilasciare il puntatore del mouse.

##  <a name="getambientfontdisp"></a>  CComControlBase::GetAmbientFontDisp

Recupera un puntatore al contenitore dell'ambiente `IFontDisp` interfaccia dispatch.

```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```

### <a name="parameters"></a>Parametri

*ppFont*  
Un puntatore al contenitore dell'ambiente [IFontDisp](https://msdn.microsoft.com/library/windows/desktop/ms692695) interfaccia dispatch.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Se la proprietà è NULL, il puntatore è NULL. Se il puntatore non NULL, il chiamante deve rilasciare il puntatore del mouse.

##  <a name="getambientforecolor"></a>  CComControlBase::GetAmbientForeColor

Recupera DISPID_AMBIENT_FORECOLOR, il colore di primo piano di ambiente per tutti i controlli, definito dal contenitore.

```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```

### <a name="parameters"></a>Parametri

*Colore di primo piano*  
La proprietà DISPID_AMBIENT_FORECOLOR.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientlocaleid"></a>  CComControlBase::GetAmbientLocaleID

Recupera DISPID_AMBIENT_LOCALEID, l'identificatore della lingua utilizzata dal contenitore.

```
HRESULT GetAmbientLocaleID(LCID& lcid);
```

### <a name="parameters"></a>Parametri

*lcid*  
La proprietà DISPID_AMBIENT_LOCALEID.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Il controllo è possibile usare questo identificatore di adattare l'interfaccia utente in lingue diverse.

##  <a name="getambientmessagereflect"></a>  CComControlBase::GetAmbientMessageReflect

Recupera DISPID_AMBIENT_MESSAGEREFLECT, un flag che indica se il contenitore richiede la ricezione dei messaggi di finestra (ad esempio `WM_DRAWITEM`) come eventi.

```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect*  
La proprietà DISPID_AMBIENT_MESSAGEREFLECT.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientpalette"></a>  CComControlBase::GetAmbientPalette

Recupera DISPID_AMBIENT_PALETTE, utilizzato per accedere a HPALETTE del contenitore.

```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```

### <a name="parameters"></a>Parametri

*hPalette*  
La proprietà DISPID_AMBIENT_PALETTE.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientproperty"></a>  CComControlBase::GetAmbientProperty

Recupera le proprietà del contenitore specificata da *dispid*.

```
HRESULT GetAmbientProperty(DISPID dispid, VARIANT& var);
```

### <a name="parameters"></a>Parametri

*DISPID*  
Identificatore della proprietà contenitore da recuperare.

*var*  
Variabile per ricevere la proprietà.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

ATL ha reso disponibile un set di funzioni di supporto per recuperare le proprietà specifiche, ad esempio, [CComControlBase::GetAmbientBackColor](#getambientbackcolor). Se non è disponibile alcun metodo adatto, usare `GetAmbientProperty`.

##  <a name="getambientrighttoleft"></a>  CComControlBase::GetAmbientRightToLeft

Recupera DISPID_AMBIENT_RIGHTTOLEFT, la direzione in cui viene visualizzato il contenuto dal contenitore.

```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```

### <a name="parameters"></a>Parametri

*bRightToLeft*  
La proprietà DISPID_AMBIENT_RIGHTTOLEFT. Impostare su TRUE se il contenuto viene visualizzato da destra a sinistra, FALSE se viene visualizzato da sinistra verso destra.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="getambientscaleunits"></a>  CComControlBase::GetAmbientScaleUnits

Recupera DISPID_AMBIENT_SCALEUNITS, unità ambiente del contenitore (ad esempio pollici o in centimetri) per le etichette vengono visualizzati.

```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```

### <a name="parameters"></a>Parametri

*bstrScaleUnits*  
La proprietà DISPID_AMBIENT_SCALEUNITS.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientshowgrabhandles"></a>  CComControlBase::GetAmbientShowGrabHandles

Recupera DISPID_AMBIENT_SHOWGRABHANDLES, un flag che indica se il contenitore consente il controllo da visualizzare quadratini di ridimensionamento per se stessa quando è attivo.

```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*bShowGrabHandles*  
La proprietà DISPID_AMBIENT_SHOWGRABHANDLES.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientshowhatching"></a>  CComControlBase::GetAmbientShowHatching

Recupera DISPID_AMBIENT_SHOWHATCHING, un flag che indica se il contenitore consente il controllo da visualizzare se stesso con un motivo a tratteggio quando l'interfaccia utente del controllo è attivo.

```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```

### <a name="parameters"></a>Parametri

*bShowHatching*  
La proprietà DISPID_AMBIENT_SHOWHATCHING.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambientsupportsmnemonics"></a>  CComControlBase::GetAmbientSupportsMnemonics

Recupera DISPID_AMBIENT_SUPPORTSMNEMONICS, un flag che indica se il contenitore supporta i tasti di scelta da tastiera.

```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```

### <a name="parameters"></a>Parametri

*bSupportsMnemonics*  
La proprietà DISPID_AMBIENT_SUPPORTSMNEMONICS.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambienttextalign"></a>  CComControlBase::GetAmbientTextAlign

Recupera DISPID_AMBIENT_TEXTALIGN, l'allineamento del testo preferita per il contenitore: 0 per l'allineamento generale (numeri, testo a destra a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.

```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```

### <a name="parameters"></a>Parametri

*nTextAlign*  
La proprietà DISPID_AMBIENT_TEXTALIGN.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getambienttoptobottom"></a>  CComControlBase::GetAmbientTopToBottom

Recupera DISPID_AMBIENT_TOPTOBOTTOM, la direzione in cui viene visualizzato il contenuto dal contenitore.

```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```

### <a name="parameters"></a>Parametri

*bTopToBottom*  
La proprietà DISPID_AMBIENT_TOPTOBOTTOM. Impostare su TRUE se il testo viene visualizzato dall'alto verso il basso, FALSE se è visualizzata in basso verso l'alto.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="getambientuidead"></a>  CComControlBase::GetAmbientUIDead

Recupera DISPID_AMBIENT_UIDEAD, un flag che indica se il contenitore richieda il controllo per rispondere alle azioni dell'interfaccia utente.

```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```

### <a name="parameters"></a>Parametri

*bUIDead*  
La proprietà DISPID_AMBIENT_UIDEAD.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Se TRUE, il controllo non deve rispondere. Questo flag si applica indipendentemente dal flag DISPID_AMBIENT_USERMODE. Visualizzare [CComControlBase::GetAmbientUserMode](#getambientusermode).

##  <a name="getambientusermode"></a>  CComControlBase::GetAmbientUserMode

Recupera DISPID_AMBIENT_USERMODE, un flag che indica se il contenitore è in modalità di esecuzione (TRUE) o in modalità progettazione (FALSE).

```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```

### <a name="parameters"></a>Parametri

*bUserMode*  
La proprietà DISPID_AMBIENT_USERMODE.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

##  <a name="getdirty"></a>  CComControlBase::GetDirty

Restituisce il valore del membro dati `m_bRequiresSave`.

```
BOOL GetDirty();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore del membro dei dati [m_bRequiresSave](#m_brequiressave).

### <a name="remarks"></a>Note

Questo valore viene impostato usando [CComControlBase::SetDirty](#setdirty).

##  <a name="getzoominfo"></a>  CComControlBase::GetZoomInfo

Recupera gli assi x e y i valori del numeratore e del denominatore del fattore di zoom per il controllo è attivato per la modifica in loco.

```
void GetZoomInfo(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*  
Struttura che conterrà il fattore di zoom numeratore e del denominatore. Per altre informazioni, vedere [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).

### <a name="remarks"></a>Note

Il fattore di zoom è la percentuale delle dimensioni fisiche del controllo relativo misura corrente.

##  <a name="inplaceactivate"></a>  CComControlBase::InPlaceActivate

Fa sì che il controllo per la transizione dallo stato inattivo per qualsiasi stato il verbo *iVerb* indica.

```
HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
```

### <a name="parameters"></a>Parametri

*iVerb*  
Valore che indica l'azione che deve essere eseguito da [IOleObjectImpl::DoVerb](../../atl/reference/ioleobjectimpl-class.md#doverb).

*prcPosRect*  
Puntatore alla posizione del controllo sul posto.

### <a name="return-value"></a>Valore restituito

Uno dei valori di HRESULT standard.

### <a name="remarks"></a>Note

Prima dell'attivazione, questo metodo controlla che il controllo dispone di un sito di client, controlla in che misura il controllo è visibile e ottiene la posizione del controllo nella finestra padre. Dopo aver attivato il controllo, questo metodo attiva dell'interfaccia utente del controllo e indica al contenitore per rendere visibile il controllo.

Questo metodo recupera inoltre un' `IOleInPlaceSite`, `IOleInPlaceSiteEx`, o `IOleInPlaceSiteWindowless` puntatore a interfaccia per il controllo e la archivia nel membro dati della classe control [CComControlBase::m_spInPlaceSite](#m_spinplacesite). I membri dati classe del controllo [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex), [CComControlBase::m_bWndLess](#m_bwndless), [CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)e [ CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) sono impostate su true come appropriato.

##  <a name="internalgetsite"></a>  CComControlBase::InternalGetSite

Chiamare questo metodo per eseguire una query il sito di controllo per un puntatore all'interfaccia identificata.

```
HRESULT InternalGetSite(REFIID riid, void** ppUnkSite);
```

### <a name="parameters"></a>Parametri

*riid*  
IID del puntatore a interfaccia che deve essere restituito nelle *ppUnkSite*.

*ppUnkSite*  
Indirizzo della variabile puntatore che riceve il puntatore a interfaccia richiesto *riid*.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Se il sito supporta l'interfaccia richiesto in *riid*, viene restituito il puntatore per mezzo della *ppUnkSite*. In caso contrario, *ppUnkSite* è impostato su NULL.

##  <a name="m_bautosize"></a>  CComControlBase::m_bAutoSize

Flag che indica che il controllo non può essere qualsiasi altra dimensione.

```
unsigned m_bAutoSize:1;
```

### <a name="remarks"></a>Note

Questo flag viene controllato dal `IOleObjectImpl::SetExtent` e, se è TRUE, fa sì che la funzione restituisce E_FAIL.

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Se si aggiunge il **ridimensionamento automatico** opzione il [proprietà predefinite](../../atl/reference/stock-properties-atl-control-wizard.md) scheda della creazione guidata controllo ATL, la procedura guidata automaticamente crea questo membro dei dati nella classe del controllo, crea put e metodi per la proprietà get e supporta [IPropertyNotifySink](/windows/desktop/api/ocidl/nn-ocidl-ipropertynotifysink) per notificare automaticamente il contenitore quando cambia la proprietà.

##  <a name="m_bdrawfromnatural"></a>  CComControlBase::m_bDrawFromNatural

Flag che indica che `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` deve impostare le dimensioni del controllo da `m_sizeNatural` piuttosto che da `m_sizeExtent`.

```
unsigned m_bDrawFromNatural:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_bdrawgetdatainhimetric"></a>  CComControlBase::m_bDrawGetDataInHimetric

Flag che indica che `IDataObjectImpl::GetData` utilizzino non pixel e unità HIMETRIC durante il disegno.

```
unsigned m_bDrawGetDataInHimetric:1;
```

### <a name="remarks"></a>Note

Ogni unità HIMETRIC logica corrisponde a 0,01 millimetri.

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_binplaceactive"></a>  CComControlBase::m_bInPlaceActive

Flag che indica che il controllo è attivo sul posto.

```
unsigned m_bInPlaceActive:1;
```

### <a name="remarks"></a>Note

Ciò significa che il controllo è visibile e la finestra, se presente, è visibile, ma i menu e barre degli strumenti potrebbero non essere attivi. Il `m_bUIActive` flag indica l'interfaccia utente del controllo, ad esempio menu, inoltre è attiva.

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_binplacesiteex"></a>  CComControlBase::m_bInPlaceSiteEx

Flag che indica il contenitore supporta il `IOleInPlaceSiteEx` interfaccia e OCX96 controllano le funzionalità, ad esempio i controlli privi di finestra e sfarfallio.

```
unsigned m_bInPlaceSiteEx:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Il membro dati `m_spInPlaceSite` punta a un [IOleInPlaceSite](/windows/desktop/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesiteex), o [IOleInPlaceSiteWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interfaccia, in base al valore di `m_bWndLess` e `m_bInPlaceSiteEx` flag. (Membro dati `m_bNegotiatedWnd` deve essere TRUE per il `m_spInPlaceSite` puntatore sia valido.)

Se `m_bWndLess` è FALSE e `m_bInPlaceSiteEx` è TRUE, `m_spInPlaceSite` è un `IOleInPlaceSiteEx` puntatore a interfaccia. Visualizzare [m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra le relazioni tra questi tre membri dati.

##  <a name="m_bnegotiatedwnd"></a>  CComControlBase::m_bNegotiatedWnd

Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio i controlli privi di finestra e sfarfallio) e se il controllo è a finestre o privi di finestra.

```
unsigned m_bNegotiatedWnd:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Il `m_bNegotiatedWnd` flag deve essere TRUE per il `m_spInPlaceSite` puntatore sia valido.

##  <a name="m_brecomposeonresize"></a>  CComControlBase::m_bRecomposeOnResize

Flag che indica che il controllo desidera ricomporre la presentazione quando il contenitore di dimensioni di visualizzazione del controllo viene modificato.

```
unsigned m_bRecomposeOnResize:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Questo flag viene controllato dal [IOleObjectImpl::SetExtent](../../atl/reference/ioleobjectimpl-class.md#setextent) e, se è TRUE, `SetExtent` notifica al contenitore di visualizzazione. Se questo flag è impostato, il OLEMISC_RECOMPOSEONRESIZE bit nel [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc) enumerazione deve essere impostato.

##  <a name="m_brequiressave"></a>  CComControlBase::m_bRequiresSave

Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.

```
unsigned m_bRequiresSave:1;
```

### <a name="remarks"></a>Note

Il valore di `m_bRequiresSave` può essere impostato tramite [CComControlBase::SetDirty](#setdirty) e recuperate con [CComControlBase::GetDirty](#getdirty).

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_bresizenatural"></a>  CComControlBase::m_bResizeNatural

Flag che indica il controllo desidera ridimensionare relativa estensione naturale (le dimensioni fisiche non ridimensionata) quando il contenitore di modifica delle dimensioni di visualizzazione del controllo.

```
unsigned m_bResizeNatural:1;
```

### <a name="remarks"></a>Note

Questo flag viene controllato dal `IOleObjectImpl::SetExtent` e, se è TRUE, la dimensione passato `SetExtent` viene assegnato a `m_sizeNatural`.

Le dimensioni passati `SetExtent` viene sempre assegnato al `m_sizeExtent`, indipendentemente dal valore di `m_bResizeNatural`.

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_buiactive"></a>  CComControlBase::m_bUIActive

Flag che indica di interfaccia utente del controllo, ad esempio menu e barre degli strumenti, è attivo.

```
unsigned m_bUIActive:1;
```

### <a name="remarks"></a>Note

Il `m_bInPlaceActive` flag indica che il controllo è attivo, ma non che la relativa interfaccia utente è attivo.

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_busingwindowrgn"></a>  CComControlBase::m_bUsingWindowRgn

Flag che indica che il controllo utilizza l'area della finestra fornito dal contenitore.

```
unsigned m_bUsingWindowRgn:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_bwasoncewindowless"></a>  CComControlBase::m_bWasOnceWindowless

Flag che indica il controllo è stata privi di finestra, ma può o potrebbe non essere ora privi di finestra.

```
unsigned m_bWasOnceWindowless:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_bwindowonly"></a>  CComControlBase

Flag che indica che il controllo deve essere a finestre, anche se il contenitore supporta i controlli privi di finestra.

```
unsigned m_bWindowOnly:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_bwndless"></a>  CComControlBase::m_bWndLess

Flag che indica che il controllo è attivo.

```
unsigned m_bWndLess:1;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Il membro dati `m_spInPlaceSite` punta a un [IOleInPlaceSite](/windows/desktop/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesiteex), o [IOleInPlaceSiteWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interfaccia, in base al valore di `m_bWndLess` e [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex) flag. (Membro dati [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) deve essere TRUE per il [CComControlBase::m_spInPlaceSite](#m_spinplacesite) puntatore sia valido.)

Se `m_bWndLess` è TRUE, `m_spInPlaceSite` è un `IOleInPlaceSiteWindowless` puntatore a interfaccia. Visualizzare [CComControlBase::m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra le relazioni tra questi membri dati completata.

##  <a name="m_hwndcd"></a>  CComControlBase::m_hWndCD

Contiene un riferimento all'handle della finestra associato al controllo.

```
HWND& m_hWndCD;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_nfreezeevents"></a>  CComControlBase::m_nFreezeEvents

Un conteggio del numero di volte in cui il contenitore ha bloccato gli eventi (rifiutati di accettare gli eventi) senza una corrispondente thaw degli eventi (accettazione degli eventi).

```
short m_nFreezeEvents;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_rcpos"></a>  CComControlBase::m_rcPos

La posizione in pixel del controllo, espressa nelle coordinate del contenitore.

```
RECT m_rcPos;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_sizeextent"></a>  CComControlBase::m_sizeExtent

L'estensione del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) per una visualizzazione particolare.

```
SIZE m_sizeExtent;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Queste dimensioni sono ridimensionare la visualizzazione. Dimensioni fisiche del controllo specificata nel `m_sizeNatural` (membro dati) e viene risolto.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

##  <a name="m_sizenatural"></a>  CComControlBase::m_sizeNatural

La dimensione fisica del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).

```
SIZE m_sizeNatural;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Questo è fissa, mentre le dimensioni in `m_sizeExtent` viene ridimensionato per la visualizzazione.

È possibile convertire le dimensioni in pixel con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

##  <a name="m_spadvisesink"></a>  CComControlBase::m_spAdviseSink

Un puntatore diretto per la connessione consultiva sul contenitore (del contenitore [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink)).

```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_spambientdispatch"></a>  CComControlBase::m_spAmbientDispatch

Oggetto `CComDispatchDriver` oggetto che consente di recuperare e impostare le proprietà di un oggetto tramite un `IDispatch` puntatore.

```
CComDispatchDriver m_spAmbientDispatch;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_spclientsite"></a>  CComControlBase::m_spClientSite

Puntatore al sito di client del controllo all'interno del contenitore.

```
CComPtr<IOleClientSite>
    m_spClientSite;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

##  <a name="m_spdataadviseholder"></a>  CComControlBase::m_spDataAdviseHolder

Fornisce uno standard contenere le connessioni consultive tra gli oggetti dati e sink di notifica.

```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Un oggetto dati è un controllo che può trasferire i dati e che implementa [IDataObject](/windows/desktop/api/objidl/nn-objidl-idataobject), i cui metodi specificano il supporto di formato e il trasferimento dei dati.

L'interfaccia `m_spDataAdviseHolder` implementa la [IDataObject::DAdvise](/windows/desktop/api/objidl/nf-objidl-idataobject-dadvise) e [IDataObject::DUnadvise](/windows/desktop/api/objidl/nf-objidl-idataobject-dunadvise) metodi per definire ed eliminare le connessioni consultive al contenitore. Contenitore del controllo deve implementare un sink di notifica mediante il supporto di [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink) interfaccia.

##  <a name="m_spinplacesite"></a>  CComControlBase::m_spInPlaceSite

Un puntatore al contenitore [IOleInPlaceSite](/windows/desktop/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesiteex), o [IOleInPlaceSiteWindowless](/windows/desktop/api/ocidl/nn-ocidl-ioleinplacesitewindowless) puntatore a interfaccia.

```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

Il `m_spInPlaceSite` puntatore è valido solo se il [m_bNegotiatedWnd](#m_bnegotiatedwnd) flag è TRUE.

La tabella seguente illustra come la `m_spInPlaceSite` dipende dal tipo di puntatore il [m_bWndLess](#m_bwndless) e [m_bInPlaceSiteEx](#m_binplacesiteex) i flag di membro dei dati:

|m_spInPlaceSite tipo|m_bWndLess valore|m_bInPlaceSiteEx valore|
|---------------------------|-----------------------|-----------------------------|
|`IOleInPlaceSiteWindowless`|true|TRUE o FALSE|
|`IOleInPlaceSiteEx`|false|true|
|`IOleInPlaceSite`|false|false|

##  <a name="m_spoleadviseholder"></a>  CComControlBase::m_spOleAdviseHolder

Fornisce un'implementazione standard di un modo per mantenere le connessioni consultive.

```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```

### <a name="remarks"></a>Note

> [!NOTE]
>  Per usare questo membro dei dati all'interno della classe di controllo, è necessario dichiararla come membro dei dati nella classe del controllo. La classe del controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe di base.

L'interfaccia `m_spOleAdviseHolder` implementa la [IOleObject::Advise](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-advise) e [IOleObject::Unadvise](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-unadvise) metodi per definire ed eliminare le connessioni consultive al contenitore. Contenitore del controllo deve implementare un sink di notifica mediante il supporto di [IAdviseSink](/windows/desktop/api/objidl/nn-objidl-iadvisesink) interfaccia.

##  <a name="ondraw"></a>  CComControlBase:: OnDraw

Eseguire l'override di questo metodo per creare il controllo.

```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*  
Un riferimento per la [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) struttura che contiene informazioni sul disegno, ad esempio l'aspetto di disegno, i limiti del controllo, e se il disegno sia ottimizzato o No.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Il valore predefinito `OnDraw` consente di eliminare o Ripristina il contesto di dispositivo o non esegue alcuna operazione, a seconda del flag impostati nel [CComControlBase::OnDrawAdvanced](#ondrawadvanced).

Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Impostazione predefinita della procedura guidata `OnDraw` Disegna un rettangolo con etichetta "ATL 8.0".

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CComControlBase:: GetAmbientAppearance](#getambientappearance).

##  <a name="ondrawadvanced"></a>  CComControlBase::OnDrawAdvanced

Il valore predefinito `OnDrawAdvanced` prepara un contesto di dispositivo normalizzato per il disegno e quindi chiama la classe di controllo `OnDraw` (metodo).

```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```

### <a name="parameters"></a>Parametri

*inserimento delle dipendenze*  
Un riferimento per la [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) struttura che contiene informazioni sul disegno, ad esempio l'aspetto di disegno, i limiti del controllo, e se il disegno sia ottimizzato o No.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo se si desidera accettare il contesto di dispositivo passato dal contenitore senza normalizzarlo.

Visualizzare [CComControlBase:: OnDraw](#ondraw) per altri dettagli.

##  <a name="onkillfocus"></a>  CComControlBase::OnKillFocus

Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi segnala il contenitore che il controllo ha perso lo stato attivo.

```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*  
Riservato.

*wParam*  
Riservato.

*lParam*  
Riservato.

*bHandled*  
Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

##  <a name="onmouseactivate"></a>  CComControlBase::OnMouseActivate

Verifica che l'interfaccia utente è in modalità utente, quindi attiva il controllo.

```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*  
Riservato.

*wParam*  
Riservato.

*lParam*  
Riservato.

*bHandled*  
Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

##  <a name="onpaint"></a>  CComControlBase::OnPaint

Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama la classe di controllo `OnDrawAdvanced` (metodo).

```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```

### <a name="parameters"></a>Parametri

*nMsg*  
Riservato.

*wParam*  
Un HDC esistente.

*lParam*  
Riservato.

*lResult*  
Riservato.

### <a name="return-value"></a>Valore restituito

Restituisce sempre zero.

### <a name="remarks"></a>Note

Se *wParam* non è NULL, `OnPaint` presuppone che contiene un HDC valido e lo usa invece [CComControlBase::m_hWndCD](#m_hwndcd).

##  <a name="onsetfocus"></a>  CComControlBase::OnSetFocus

Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi segnala il contenitore del controllo ha acquisito lo stato attivo.

```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*nMsg*  
Riservato.

*wParam*  
Riservato.

*lParam*  
Riservato.

*bHandled*  
Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è FALSE.

### <a name="return-value"></a>Valore restituito

Restituisce sempre 1.

### <a name="remarks"></a>Note

Invia una notifica al contenitore che il controllo ha ricevuto lo stato attivo.

##  <a name="pretranslateaccelerator"></a>  CComControlBase::PreTranslateAccelerator

Eseguire l'override di questo metodo per fornire il proprio tastiera gestori tasti di scelta rapida.

```
BOOL PreTranslateAccelerator(LPMSG /* pMsg */,
    HRESULT& /* hRet */);
```

### <a name="parameters"></a>Parametri

*pMsg*  
Riservato.

*hRet*  
Riservato.

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita restituisce FALSE.

##  <a name="sendonclose"></a>  CComControlBase::SendOnClose

Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo è stata chiusa.

```
HRESULT SendOnClose();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Invia una notifica che il controllo ha chiuso il sink consultivi.

##  <a name="sendondatachange"></a>  CComControlBase::SendOnDataChange

Notifica a sink consultivi tutto registrato con il titolare di notifica che i dati del controllo sono stato modificato.

```
HRESULT SendOnDataChange(DWORD advf = 0);
```

### <a name="parameters"></a>Parametri

*ADVF*  
Consigliare i flag che specificano il modo in cui la chiamata a [IAdviseSink::OnDataChange](/windows/desktop/api/objidl/nf-objidl-iadvisesink-ondatachange) viene effettuata. I valori sono compresi i [ADVF](/windows/desktop/api/objidl/ne-objidl-tagadvf) enumerazione.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

##  <a name="sendonrename"></a>  CComControlBase::SendOnRename

Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo ha un nuovo moniker.

```
HRESULT SendOnRename(IMoniker* pmk);
```

### <a name="parameters"></a>Parametri

*PMK*  
Puntatore al moniker del nuovo del controllo.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Invia una notifica che il moniker per il controllo è stato modificato.

##  <a name="sendonsave"></a>  CComControlBase::SendOnSave

Notifica a sink consultivi tutto registrato con il titolare di notifica che il controllo è stato salvato.

```
HRESULT SendOnSave();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

Invia una notifica che il controllo ha appena salvato i dati.

##  <a name="sendonviewchange"></a>  CComControlBase::SendOnViewChange

Notifica a che tutti i sink consultivi registrati che la visualizzazione del controllo è stato modificato.

```
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
```

### <a name="parameters"></a>Parametri

*dwAspect*  
L'aspetto o la visualizzazione del controllo.

*lindex*  
La parte della vista che è stato modificato. Solo -1 è valida.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.

### <a name="remarks"></a>Note

`SendOnViewChange` le chiamate [IAdviseSink::OnViewChange](/windows/desktop/api/objidl/nf-objidl-iadvisesink-onviewchange). L'unico valore di *lindex* attualmente supportato è -1, che indica che l'intera vista è di particolare interesse.

##  <a name="setcontrolfocus"></a>  CComControlBase::SetControlFocus

Imposta o rimuove lo stato attivo da o verso il controllo.

```
BOOL SetControlFocus(BOOL bGrab);
```

### <a name="parameters"></a>Parametri

*bGrab*  
Se TRUE, imposta lo stato attivo al controllo chiama. Se FALSE, rimuove lo stato attivo del controllo chiamante, purché abbia lo stato attivo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il controllo riceve correttamente lo stato attivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per un controllo con finestra, la funzione API Windows [SetFocus](https://msdn.microsoft.com/library/windows/desktop/ms646312) viene chiamato. Per un controllo senza finestra [IOleInPlaceSiteWindowless::SetFocus](/windows/desktop/api/ocidl/nf-ocidl-ioleinplacesitewindowless-setfocus) viene chiamato. Tramite questa chiamata, un controllo senza finestra Ottiene lo stato attivo e può rispondere ai messaggi di finestra.

##  <a name="setdirty"></a>  CComControlBase::SetDirty

Imposta il membro dati `m_bRequiresSave` al valore nella *bDirty*.

```
void SetDirty(BOOL bDirty);
```

### <a name="parameters"></a>Parametri

*bDirty*  
Valore del membro dati [CComControlBase::m_bRequiresSave](#m_brequiressave).

### <a name="remarks"></a>Note

`SetDirty(TRUE)` deve essere chiamato per flag che il controllo è stato modificato dall'ultimo salvataggio. Il valore di `m_bRequiresSave` viene recuperato con [CComControlBase::GetDirty](#getdirty).

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
