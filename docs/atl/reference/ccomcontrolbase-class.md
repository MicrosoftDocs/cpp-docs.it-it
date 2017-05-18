---
title: Classe CComControlBase | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 7ad253d42c916ec957ef1e6f5067027696103c79
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---
# <a name="ccomcontrolbase-class"></a>Classe CComControlBase
Questa classe fornisce metodi per la creazione e gestione dei controlli ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ATL_NO_VTABLE CComControlBase
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::AppearanceType](#appearancetype)|Eseguire l'override se i `m_nAppearance` proprietà predefinita non è di tipo `short`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::CComControlBase](#ccomcontrolbase)|Costruttore.|  
|[CComControlBase:: ~ CComControlBase](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::ControlQueryInterface](#controlqueryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComControlBase::DoesVerbActivate](#doesverbactivate)|Verifica che il `iVerb` parametro utilizzato dal `IOleObjectImpl::DoVerb` sia attiva l'interfaccia utente del controllo ( `iVerb` è uguale a `OLEIVERB_UIACTIVATE`), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo ( `iVerb` è uguale a `OLEIVERB_PRIMARY`), viene visualizzato il controllo ( `iVerb` è uguale a `OLEIVERB_SHOW`), o attiva il controllo ( `iVerb` è uguale a **OLEIVERB_INPLACEACTIVATE**).|  
|[CComControlBase::DoesVerbUIActivate](#doesverbuiactivate)|Verifica che il `iVerb` parametro utilizzato dal `IOleObjectImpl::DoVerb` causa l'interfaccia utente del controllo attivare e restituisce **TRUE**.|  
|[CComControlBase::DoVerbProperties](#doverbproperties)|Visualizza le pagine delle proprietà del controllo.|  
|[CComControlBase::FireViewChange](#fireviewchange)|Chiamare questo metodo per indicare il contenitore di ridisegnare il controllo o notifica il sink di notifica registrati che è stata modificata la visualizzazione del controllo.|  
|[CComControlBase:: GetAmbientAppearance](#getambientappearance)|Recupera **DISPID_AMBIENT_APPEARANCE**, l'aspetto corrente impostazione per il controllo: 0 per flat e 1 per 3D.|  
|[CComControlBase::GetAmbientAutoClip](#getambientautoclip)|Recupera **DISPID_AMBIENT_AUTOCLIP**, un flag che indica se il contenitore supporta il ridimensionamento automatico dell'area di visualizzazione controllo.|  
|[CComControlBase::GetAmbientBackColor](#getambientbackcolor)|Recupera **DISPID_AMBIENT_BACKCOLOR**, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientCharSet](#getambientcharset)|Recupera **DISPID_AMBIENT_CHARSET**, imposta il carattere di ambiente per tutti i controlli, definiti dal contenitore.|  
|[CComControlBase::GetAmbientCodePage](#getambientcodepage)|Recupera **DISPID_AMBIENT_CODEPAGE**, imposta il carattere di ambiente per tutti i controlli, definiti dal contenitore.|  
|[CComControlBase:: GetAmbientDisplayAsDefault](#getambientdisplayasdefault)|Recupera **DISPID_AMBIENT_DISPLAYASDEFAULT**, un flag **TRUE** se il contenitore è contrassegnato come il controllo del sito come pulsante predefinito e pertanto un controllo button deve essere disegnato da se stesso con un intervallo più spesso.|  
|[CComControlBase::GetAmbientDisplayName](#getambientdisplayname)|Recupera **DISPID_AMBIENT_DISPLAYNAME**, il nome di contenitore è fornito per il controllo.|  
|[CComControlBase::GetAmbientFont](#getambientfont)|Recupera un puntatore per il contenitore dell'ambiente `IFont` interfaccia.|  
|[CComControlBase::GetAmbientFontDisp](#getambientfontdisp)|Recupera un puntatore per il contenitore dell'ambiente **IFontDisp** interfaccia dispatch.|  
|[CComControlBase::GetAmbientForeColor](#getambientforecolor)|Recupera **DISPID_AMBIENT_FORECOLOR**, il colore di primo piano dell'ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientLocaleID](#getambientlocaleid)|Recupera **DISPID_AMBIENT_LOCALEID**, l'identificatore della lingua utilizzata dal contenitore.|  
|[CComControlBase::GetAmbientMessageReflect](#getambientmessagereflect)|Recupera **DISPID_AMBIENT_MESSAGEREFLECT**, un flag che indica se il contenitore desidera ricevere i messaggi della finestra (ad esempio `WM_DRAWITEM`) come eventi.|  
|[CComControlBase::GetAmbientPalette](#getambientpalette)|Recupera **DISPID_AMBIENT_PALETTE**, utilizzato per accedere al contenitore `HPALETTE`.|  
|[CComControlBase::GetAmbientProperty](#getambientproperty)|Recupera la proprietà del contenitore specificata da `id`.|  
|[CComControlBase::GetAmbientRightToLeft](#getambientrighttoleft)|Recupera **DISPID_AMBIENT_RIGHTTOLEFT**, la direzione in cui viene visualizzato contenuto dal contenitore.|  
|[CComControlBase::GetAmbientScaleUnits](#getambientscaleunits)|Recupera **DISPID_AMBIENT_SCALEUNITS**, unità ambiente del contenitore (ad esempio pollici o centimetri) per le etichette consente di visualizzare.|  
|[CComControlBase::GetAmbientShowGrabHandles](#getambientshowgrabhandles)|Recupera **DISPID_AMBIENT_SHOWGRABHANDLES**, un flag che indica se il contenitore consente il controllo da visualizzare quadratini di ridimensionamento per se stesso quando sono attive.|  
|[CComControlBase::GetAmbientShowHatching](#getambientshowhatching)|Recupera **DISPID_AMBIENT_SHOWHATCHING**, un flag che indica se il contenitore consente il controllo da visualizzare se stesso con un motivo tratteggiato quando è attiva l'interfaccia utente.|  
|[CComControlBase::GetAmbientSupportsMnemonics](#getambientsupportsmnemonics)|Recupera **DISPID_AMBIENT_SUPPORTSMNEMONICS**, un flag che indica se il contenitore supporta tasti di scelta della tastiera.|  
|[CComControlBase::GetAmbientTextAlign](#getambienttextalign)|Recupera **DISPID_AMBIENT_TEXTALIGN**, l'allineamento del testo preferita per il contenitore: 0 per l'allineamento generale (numeri, testo a destra a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.|  
|[CComControlBase::GetAmbientTopToBottom](#getambienttoptobottom)|Recupera **DISPID_AMBIENT_TOPTOBOTTOM**, la direzione in cui viene visualizzato contenuto dal contenitore.|  
|[CComControlBase::GetAmbientUIDead](#getambientuidead)|Recupera **DISPID_AMBIENT_UIDEAD**, un flag che indica se il contenitore richiede il controllo di rispondere alle azioni dell'interfaccia utente.|  
|[CComControlBase::GetAmbientUserMode](#getambientusermode)|Recupera **DISPID_AMBIENT_USERMODE**, un flag che indica se il contenitore è in modalità di esecuzione ( **TRUE**) o in modalità progettazione ( **FALSE**).|  
|[CComControlBase::GetDirty](#getdirty)|Restituisce il valore del membro dati `m_bRequiresSave`.|  
|[CComControlBase::GetZoomInfo](#getzoominfo)|Recupera gli assi x e y valori del numeratore e denominatore del fattore di zoom per il controllo è attivato per la modifica in loco.|  
|[CComControlBase::InPlaceActivate](#inplaceactivate)|Comporta il controllo la transizione dallo stato inattivo a qualsiasi stato il verbo `iVerb` indica.|  
|[CComControlBase::InternalGetSite](#internalgetsite)|Chiamare questo metodo per eseguire una query il sito del controllo per un puntatore a interfaccia identificato.|  
|[CComControlBase:: OnDraw](#ondraw)|Eseguire l'override di questo metodo per disegnare il controllo.|  
|[CComControlBase::OnDrawAdvanced](#ondrawadvanced)|Il valore predefinito **oggetto OnDrawAdvanced** prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama la classe di controllo `OnDraw` metodo.|  
|[CComControlBase::OnKillFocus](#onkillfocus)|Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.|  
|[CComControlBase::OnMouseActivate](#onmouseactivate)|Verifica che l'interfaccia utente è in modalità utente, quindi attiva il controllo.|  
|[CComControlBase::OnPaint](#onpaint)|Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama la classe di controllo `OnDraw` metodo.|  
|[CComControlBase::OnSetFocus](#onsetfocus)|Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi informa il contenitore del controllo ha acquisito lo stato attivo.|  
|[CComControlBase::PreTranslateAccelerator](#pretranslateaccelerator)|Eseguire l'override di questo metodo per fornire la propria tastiera gestori di tasti di scelta rapida.|  
|[CComControlBase::SendOnClose](#sendonclose)|Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo è stato chiuso.|  
|[CComControlBase::SendOnDataChange](#sendondatachange)|Notifica al sink consultivo tutti registrati con il titolare advise che i dati di controllo sono stato modificato.|  
|[CComControlBase::SendOnRename](#sendonrename)|Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo dispone di un nuovo moniker.|  
|[CComControlBase::SendOnSave](#sendonsave)|Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo è stato salvato.|  
|[CComControlBase::SendOnViewChange](#sendonviewchange)|Notifica a che tutti i sink consultivo che è stata modificata la visualizzazione del controllo.|  
|[CComControlBase::SetControlFocus](#setcontrolfocus)|Imposta o rimuove lo stato attivo da o verso il controllo.|  
|[CComControlBase::SetDirty](#setdirty)|Imposta il membro dati `m_bRequiresSave` sul valore `bDirty`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::m_bAutoSize](#m_bautosize)|Flag che indica che il controllo non può essere qualsiasi altra dimensione.|  
|[CComControlBase::m_bDrawFromNatural](#m_bdrawfromnatural)|Flag che indica se `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` deve impostare le dimensioni del controllo da `m_sizeNatural` piuttosto che da `m_sizeExtent`.|  
|[CComControlBase::m_bDrawGetDataInHimetric](#m_bdrawgetdatainhimetric)|Flag che indica se `IDataObjectImpl::GetData` unità HIMETRIC e pixel non deve utilizzare durante il disegno.|  
|[CComControlBase::m_bInPlaceActive](#m_binplaceactive)|Flag che indica che il controllo è attivo sul posto.|  
|[CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex)|Flag che indica il contenitore di supporta il **IOleInPlaceSiteEx** interfaccia e OCX96 controllano le funzionalità, ad esempio i controlli privi di finestra e sfarfallio.|  
|[CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd)|Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio i controlli privi di finestra e sfarfallio) e se il controllo è finestre o privi di finestra.|  
|[CComControlBase::m_bRecomposeOnResize](#m_brecomposeonresize)|Flag che indica che il controllo richiede per ricomporre relativa presentazione quando il contenitore di dimensioni di visualizzazione del controllo.|  
|[CComControlBase::m_bRequiresSave](#m_brequiressave)|Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.|  
|[CComControlBase::m_bResizeNatural](#m_bresizenatural)|Flag che indica il controllo richiede ridimensionare l'estensione naturale (le dimensioni fisiche non in scala) quando il contenitore di modifica di dimensioni di visualizzazione del controllo.|  
|[CComControlBase::m_bUIActive](#m_buiactive)|Flag che indica l'interfaccia del controllo utente, ad esempio menu e barre degli strumenti, è attiva.|  
|[CComControlBase::m_bUsingWindowRgn](#m_busingwindowrgn)|Flag che indica che il controllo sta utilizzando l'area della finestra fornito dal contenitore.|  
|[CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)|Flag che indica il controllo è stata privi di finestra, ma può o non siano privi di finestra ora.|  
|[CComControlBase](#m_bwindowonly)|Flag che indica che il controllo deve essere finestra, anche se il contenitore supporta i controlli privi di finestra.|  
|[CComControlBase::m_bWndLess](#m_bwndless)|Flag che indica che il controllo è privo di finestra.|  
|[CComControlBase::m_hWndCD](#m_hwndcd)|Contiene un riferimento all'handle della finestra associato al controllo.|  
|[CComControlBase::m_nFreezeEvents](#m_nfreezeevents)|Un conteggio del numero di volte in cui il contenitore è bloccata (rifiutati di accettare eventi) eventi senza un corrispondente Sblocca di eventi (accettazione di eventi).|  
|[CComControlBase::m_rcPos](#m_rcpos)|La posizione in pixel del controllo, espressa in coordinate del contenitore.|  
|[CComControlBase::m_sizeExtent](#m_sizeextent)|L'estensione del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) per una visualizzazione particolare.|  
|[CComControlBase::m_sizeNatural](#m_sizenatural)|La dimensione fisica del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).|  
|[CComControlBase::m_spAdviseSink](#m_spadvisesink)|Un puntatore diretto per la connessione consultiva nel contenitore (il contenitore [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513)).|  
|[CComControlBase::m_spAmbientDispatch](#m_spambientdispatch)|Oggetto `CComDispatchDriver` oggetto che consente di recuperare e impostare le proprietà del contenitore tramite un `IDispatch` puntatore.|  
|[CComControlBase::m_spClientSite](#m_spclientsite)|Puntatore al sito di client del controllo all'interno del contenitore.|  
|[CComControlBase::m_spDataAdviseHolder](#m_spdataadviseholder)|Fornisce uno standard per le connessioni consultive tra gli oggetti dati e sink di notifica.|  
|[CComControlBase::m_spInPlaceSite](#m_spinplacesite)|Un puntatore per il contenitore [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), o [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) puntatore a interfaccia.|  
|[CComControlBase::m_spOleAdviseHolder](#m_spoleadviseholder)|Fornisce un'implementazione standard di un modo per contenere le connessioni consultive.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la creazione e gestione dei controlli ATL. [Classe CComControl](../../atl/reference/ccomcontrol-class.md) deriva da `CComControlBase`. Quando si crea un controllo di controllo Standard o DHTML mediante la creazione guidata controllo ATL, la procedura guidata verrà automaticamente derivare la classe da `CComControlBase`.  
  
 Per ulteriori informazioni sulla creazione di un controllo, vedere il [esercitazione di ATL](../../atl/active-template-library-atl-tutorial.md). Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="appearancetype"></a>CComControlBase::AppearanceType  
 Eseguire l'override se i **m_nAppearance** proprietà predefinita non è di tipo **breve**.  
  
```
typedef short AppearanceType;
```  
  
### <a name="remarks"></a>Note  
 Creazione guidata controllo ATL aggiunge **m_nAppearance** predefinite delle proprietà di tipo short. Eseguire l'override `AppearanceType` se si utilizza un tipo di dati diverso.  
  
##  <a name="ccomcontrolbase"></a>CComControlBase::CComControlBase  
 Costruttore.  
  
```
CComControlBase(HWND& h);
```  
  
### <a name="parameters"></a>Parametri  
 `h`  
 Handle di finestra associata al controllo.  
  
### <a name="remarks"></a>Note  
 Inizializza la dimensione in unità HIMETRIC 5080 X 5080 (2x "2") e inizializza il `CComControlBase` valori membro dati **NULL** o **FALSE**.  
  
##  <a name="dtor"></a>CComControlBase:: ~ CComControlBase  
 Distruttore.  
  
```
~CComControlBase();
```  
  
### <a name="remarks"></a>Note  
 Se il controllo con finestra, `~CComControlBase` Elimina definitivamente il chiamando [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682).  
  
##  <a name="controlqueryinterface"></a>CComControlBase::ControlQueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 Il GUID dell'interfaccia richiesto.  
  
 `ppv`  
 Un puntatore al puntatore a interfaccia identificato dal `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="remarks"></a>Note  
 Gestisce solo le interfacce nella tabella di mappe COM.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]  
  
##  <a name="doesverbactivate"></a>CComControlBase::DoesVerbActivate  
 Verifica che il `iVerb` parametro utilizzato dal `IOleObjectImpl::DoVerb` sia attiva l'interfaccia utente del controllo ( `iVerb` è uguale a `OLEIVERB_UIACTIVATE`), definisce l'azione eseguita quando l'utente fa doppio clic sul controllo ( `iVerb` è uguale a `OLEIVERB_PRIMARY`), viene visualizzato il controllo ( `iVerb` è uguale a `OLEIVERB_SHOW`), o attiva il controllo ( `iVerb` è uguale a **OLEIVERB_INPLACEACTIVATE**).  
  
```
BOOL DoesVerbActivate(LONG iVerb);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 Valore che indica l'azione che deve essere eseguito da `DoVerb`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se `iVerb` è uguale a `OLEIVERB_UIACTIVATE`, `OLEIVERB_PRIMARY`, `OLEIVERB_SHOW`, o **OLEIVERB_INPLACEACTIVATE**; in caso contrario, restituisce **FALSE**.  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questo metodo per definire la propria verbo di attivazione.  
  
##  <a name="doesverbuiactivate"></a>CComControlBase::DoesVerbUIActivate  
 Verifica che il `iVerb` parametro utilizzato dal `IOleObjectImpl::DoVerb` causa l'interfaccia utente del controllo attivare e restituisce **TRUE**.  
  
```
BOOL DoesVerbUIActivate(LONG iVerb);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 Valore che indica l'azione che deve essere eseguito da `DoVerb`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se `iVerb` è uguale a `OLEIVERB_UIACTIVATE`, `OLEIVERB_PRIMARY`, `OLEIVERB_SHOW`, o **OLEIVERB_INPLACEACTIVATE**. In caso contrario, il metodo restituisce **FALSE**.  
  
##  <a name="doverbproperties"></a>CComControlBase::DoVerbProperties  
 Visualizza le pagine delle proprietà del controllo.  
  
```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */, HWND hwndParent);
```  
  
### <a name="parameters"></a>Parametri  
 `prcPosRec`  
 Riservato.  
  
 *hwndParent*  
 Handle della finestra che contiene il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]  
  
 [!code-cpp[NVC_ATL_COM N. 20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]  
  
##  <a name="fireviewchange"></a>CComControlBase::FireViewChange  
 Chiamare questo metodo per indicare il contenitore di ridisegnare il controllo o notifica il sink di notifica registrati che è stata modificata la visualizzazione del controllo.  
  
```
HRESULT FireViewChange();
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se il controllo è attivo (membro dati classe controllo [CComControlBase::m_bInPlaceActive](#m_binplaceactive) è **TRUE**), notifica al contenitore che si desidera ridisegnare l'intero controllo. Se il controllo è inattivo, invia una notifica di registrare il controllo sink di notifica (tramite il membro dati della classe controllo [CComControlBase::m_spAdviseSink](#m_spadvisesink)) che è stata modificata la visualizzazione del controllo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]  
  
##  <a name="getambientappearance"></a>CComControlBase:: GetAmbientAppearance  
 Recupera **DISPID_AMBIENT_APPEARANCE**, l'aspetto corrente impostazione per il controllo: 0 per flat e 1 per 3D.  
  
```
HRESULT GetAmbientAppearance(short& nAppearance);
```  
  
### <a name="parameters"></a>Parametri  
 `nAppearance`  
 La proprietà **DISPID_AMBIENT_APPEARANCE**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. 22 NVC_ATL_COM](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]  
  
##  <a name="getambientautoclip"></a>CComControlBase::GetAmbientAutoClip  
 Recupera **DISPID_AMBIENT_AUTOCLIP**, un flag che indica se il contenitore supporta il ridimensionamento automatico dell'area di visualizzazione controllo.  
  
```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```  
  
### <a name="parameters"></a>Parametri  
 *bAutoClip*  
 La proprietà **DISPID_AMBIENT_AUTOCLIP**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientbackcolor"></a>CComControlBase::GetAmbientBackColor  
 Recupera **DISPID_AMBIENT_BACKCOLOR**, il colore di sfondo dell'ambiente per tutti i controlli, definito dal contenitore.  
  
```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```  
  
### <a name="parameters"></a>Parametri  
 *Colore di sfondo*  
 La proprietà **DISPID_AMBIENT_BACKCOLOR**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientcharset"></a>CComControlBase::GetAmbientCharSet  
 Recupera **DISPID_AMBIENT_CHARSET**, imposta il carattere di ambiente per tutti i controlli, definiti dal contenitore.  
  
```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrCharSet*  
 La proprietà **DISPID_AMBIENT_CHARSET**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="getambientcodepage"></a>CComControlBase::GetAmbientCodePage  
 Recupera **DISPID_AMBIENT_CODEPAGE**, la tabella codici di ambiente per tutti i controlli, definito dal contenitore.  
  
```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```  
  
### <a name="parameters"></a>Parametri  
 *ulCodePage*  
 La proprietà **DISPID_AMBIENT_CODEPAGE**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="getambientdisplayasdefault"></a>CComControlBase:: GetAmbientDisplayAsDefault  
 Recupera **DISPID_AMBIENT_DISPLAYASDEFAULT**, un flag **TRUE** se il contenitore è contrassegnato come il controllo del sito come pulsante predefinito e pertanto un controllo button deve essere disegnato da se stesso con un intervallo più spesso.  
  
```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `bDisplayAsDefault`  
 La proprietà **DISPID_AMBIENT_DISPLAYASDEFAULT**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientdisplayname"></a>CComControlBase::GetAmbientDisplayName  
 Recupera **DISPID_AMBIENT_DISPLAYNAME**, il nome di contenitore è fornito per il controllo.  
  
```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrDisplayName*  
 La proprietà **DISPID_AMBIENT_DISPLAYNAME**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientfont"></a>CComControlBase::GetAmbientFont  
 Recupera un puntatore per il contenitore dell'ambiente `IFont` interfaccia.  
  
```
HRESULT GetAmbientFont(IFont** ppFont);
```  
  
### <a name="parameters"></a>Parametri  
 `ppFont`  
 Un puntatore per il contenitore dell'ambiente [IFont](http://msdn.microsoft.com/library/windows/desktop/ms680673) interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se la proprietà è **NULL**, il puntatore è **NULL**. Se il puntatore non è **NULL**, il chiamante deve rilasciare il puntatore del mouse.  
  
##  <a name="getambientfontdisp"></a>CComControlBase::GetAmbientFontDisp  
 Recupera un puntatore per il contenitore dell'ambiente **IFontDisp** interfaccia dispatch.  
  
```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```  
  
### <a name="parameters"></a>Parametri  
 `ppFont`  
 Un puntatore per il contenitore dell'ambiente [IFontDisp](http://msdn.microsoft.com/library/windows/desktop/ms692695) interfaccia dispatch.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se la proprietà è **NULL**, il puntatore è **NULL**. Se il puntatore non è **NULL**, il chiamante deve rilasciare il puntatore del mouse.  
  
##  <a name="getambientforecolor"></a>CComControlBase::GetAmbientForeColor  
 Recupera **DISPID_AMBIENT_FORECOLOR**, il colore di primo piano dell'ambiente per tutti i controlli, definito dal contenitore.  
  
```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```  
  
### <a name="parameters"></a>Parametri  
 *Colore di primo piano*  
 La proprietà **DISPID_AMBIENT_FORECOLOR**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientlocaleid"></a>CComControlBase::GetAmbientLocaleID  
 Recupera **DISPID_AMBIENT_LOCALEID**, l'identificatore della lingua utilizzata dal contenitore.  
  
```
HRESULT GetAmbientLocaleID(LCID& lcid);
```  
  
### <a name="parameters"></a>Parametri  
 `lcid`  
 La proprietà **DISPID_AMBIENT_LOCALEID**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Il controllo è possibile utilizzare questo identificatore per adattare l'interfaccia utente per diverse lingue.  
  
##  <a name="getambientmessagereflect"></a>CComControlBase::GetAmbientMessageReflect  
 Recupera **DISPID_AMBIENT_MESSAGEREFLECT**, un flag che indica se il contenitore desidera ricevere i messaggi della finestra (ad esempio `WM_DRAWITEM`) come eventi.  
  
```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```  
  
### <a name="parameters"></a>Parametri  
 `bMessageReflect`  
 La proprietà **DISPID_AMBIENT_MESSAGEREFLECT**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientpalette"></a>CComControlBase::GetAmbientPalette  
 Recupera **DISPID_AMBIENT_PALETTE**, utilizzato per accedere al contenitore `HPALETTE`.  
  
```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```  
  
### <a name="parameters"></a>Parametri  
 `hPalette`  
 La proprietà **DISPID_AMBIENT_PALETTE**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientproperty"></a>CComControlBase::GetAmbientProperty  
 Recupera la proprietà del contenitore specificata da `dispid`.  
  
```
HRESULT GetAmbientProperty(DISPID dispid, VARIANT& var);
```  
  
### <a name="parameters"></a>Parametri  
 `dispid`  
 Identificatore della proprietà contenitore da recuperare.  
  
 `var`  
 Variabile per la ricezione della proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 ATL ha fornito un set di funzioni di supporto per recuperare le proprietà specifiche, ad esempio, [CComControlBase::GetAmbientBackColor](#getambientbackcolor). Se non è disponibile alcun metodo adatto, utilizzare `GetAmbientProperty`.  
  
##  <a name="getambientrighttoleft"></a>CComControlBase::GetAmbientRightToLeft  
 Recupera **DISPID_AMBIENT_RIGHTTOLEFT**, la direzione in cui viene visualizzato contenuto dal contenitore.  
  
```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```  
  
### <a name="parameters"></a>Parametri  
 *bRightToLeft*  
 La proprietà **DISPID_AMBIENT_RIGHTTOLEFT**. Impostare su **TRUE** se il contenuto viene visualizzato da destra a sinistra, **FALSE** se viene visualizzato da sinistra a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="getambientscaleunits"></a>CComControlBase::GetAmbientScaleUnits  
 Recupera **DISPID_AMBIENT_SCALEUNITS**, unità ambiente del contenitore (ad esempio pollici o centimetri) per le etichette consente di visualizzare.  
  
```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrScaleUnits*  
 La proprietà **DISPID_AMBIENT_SCALEUNITS**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientshowgrabhandles"></a>CComControlBase::GetAmbientShowGrabHandles  
 Recupera **DISPID_AMBIENT_SHOWGRABHANDLES**, un flag che indica se il contenitore consente il controllo da visualizzare quadratini di ridimensionamento per se stesso quando sono attive.  
  
```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```  
  
### <a name="parameters"></a>Parametri  
 *bShowGrabHandles*  
 La proprietà **DISPID_AMBIENT_SHOWGRABHANDLES**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientshowhatching"></a>CComControlBase::GetAmbientShowHatching  
 Recupera **DISPID_AMBIENT_SHOWHATCHING**, un flag che indica se il contenitore consente il controllo da visualizzare se stesso con un motivo tratteggiato quando l'interfaccia utente del controllo è attivo.  
  
```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```  
  
### <a name="parameters"></a>Parametri  
 *bShowHatching*  
 La proprietà **DISPID_AMBIENT_SHOWHATCHING**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambientsupportsmnemonics"></a>CComControlBase::GetAmbientSupportsMnemonics  
 Recupera **DISPID_AMBIENT_SUPPORTSMNEMONICS**, un flag che indica se il contenitore supporta tasti di scelta della tastiera.  
  
```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```  
  
### <a name="parameters"></a>Parametri  
 *bSupportsMnemonics*  
 La proprietà **DISPID_AMBIENT_SUPPORTSMNEMONICS**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambienttextalign"></a>CComControlBase::GetAmbientTextAlign  
 Recupera **DISPID_AMBIENT_TEXTALIGN**, l'allineamento del testo preferita per il contenitore: 0 per l'allineamento generale (numeri, testo a destra a sinistra), 1 per l'allineamento a sinistra, 2 per l'allineamento al centro e 3 per l'allineamento a destra.  
  
```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```  
  
### <a name="parameters"></a>Parametri  
 *nTextAlign*  
 La proprietà **DISPID_AMBIENT_TEXTALIGN**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getambienttoptobottom"></a>CComControlBase::GetAmbientTopToBottom  
 Recupera **DISPID_AMBIENT_TOPTOBOTTOM**, la direzione in cui viene visualizzato contenuto dal contenitore.  
  
```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```  
  
### <a name="parameters"></a>Parametri  
 *bTopToBottom*  
 La proprietà **DISPID_AMBIENT_TOPTOBOTTOM**. Impostare su **TRUE** se il testo viene visualizzato dall'alto verso il basso, **FALSE** se viene visualizzato dal basso verso l'alto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="getambientuidead"></a>CComControlBase::GetAmbientUIDead  
 Recupera **DISPID_AMBIENT_UIDEAD**, un flag che indica se il contenitore richiede il controllo di rispondere alle azioni dell'interfaccia utente.  
  
```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```  
  
### <a name="parameters"></a>Parametri  
 *bUIDead*  
 La proprietà **DISPID_AMBIENT_UIDEAD**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se **TRUE**, il controllo potrebbe non rispondere. Questo flag si applica indipendentemente dal valore di **DISPID_AMBIENT_USERMODE** flag. Vedere [CComControlBase::GetAmbientUserMode](#getambientusermode).  
  
##  <a name="getambientusermode"></a>CComControlBase::GetAmbientUserMode  
 Recupera **DISPID_AMBIENT_USERMODE**, un flag che indica se il contenitore è in modalità di esecuzione ( **TRUE**) o in modalità progettazione ( **FALSE**).  
  
```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```  
  
### <a name="parameters"></a>Parametri  
 `bUserMode`  
 La proprietà **DISPID_AMBIENT_USERMODE**.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
##  <a name="getdirty"></a>CComControlBase::GetDirty  
 Restituisce il valore del membro dati `m_bRequiresSave`.  
  
```
BOOL GetDirty();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del membro dati [m_bRequiresSave](#m_brequiressave).  
  
### <a name="remarks"></a>Note  
 Questo valore viene impostato utilizzando [CComControlBase::SetDirty](#setdirty).  
  
##  <a name="getzoominfo"></a>CComControlBase::GetZoomInfo  
 Recupera gli assi x e y valori del numeratore e denominatore del fattore di zoom per il controllo è attivato per la modifica in loco.  
  
```
void GetZoomInfo(ATL_DRAWINFO& di);
```  
  
### <a name="parameters"></a>Parametri  
 `di`  
 Struttura che conterrà il fattore di zoom numeratore e il denominatore. Per ulteriori informazioni, vedere [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).  
  
### <a name="remarks"></a>Note  
 Il fattore di zoom è la proporzione tra le dimensioni del controllo naturale per la misura corrente.  
  
##  <a name="inplaceactivate"></a>CComControlBase::InPlaceActivate  
 Comporta il controllo la transizione dallo stato inattivo a qualsiasi stato il verbo `iVerb` indica.  
  
```
HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `iVerb`  
 Valore che indica l'azione che deve essere eseguito da [IOleObjectImpl::DoVerb](../../atl/reference/ioleobjectimpl-class.md#doverb).  
  
 *prcPosRect*  
 Puntatore alla posizione del controllo sul posto.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Prima dell'attivazione, questo metodo controlla che il controllo dispone di un sito del client, controlla la quantità del controllo è visibile e ottiene il percorso del controllo nella finestra padre. Dopo aver attivato il controllo, questo metodo attiva l'interfaccia utente del controllo e indica al contenitore di rendere visibile il controllo.  
  
 Questo metodo recupera una `IOleInPlaceSite`, **IOleInPlaceSiteEx**, o **IOleInPlaceSiteWindowless** puntatore a interfaccia per il controllo e viene memorizzato nel membro dati della classe del controllo [CComControlBase::m_spInPlaceSite](#m_spinplacesite). I membri dati della classe controllo [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex), [CComControlBase::m_bWndLess](#m_bwndless), [CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless), e [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) impostato su true a seconda dei casi.  
  
##  <a name="internalgetsite"></a>CComControlBase::InternalGetSite  
 Chiamare questo metodo per eseguire una query il sito del controllo per un puntatore a interfaccia identificato.  
  
```
HRESULT InternalGetSite(REFIID riid, void** ppUnkSite);
```  
  
### <a name="parameters"></a>Parametri  
 `riid`  
 IID del puntatore a interfaccia che deve essere restituito in `ppUnkSite`.  
  
 `ppUnkSite`  
 Indirizzo della variabile puntatore che riceve il puntatore di interfaccia richiesto `riid`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Se il sito supporta l'interfaccia richiesta `riid`, viene restituito il puntatore di `ppUnkSite`. In caso contrario, `ppUnkSite` è impostato su NULL.  
  
##  <a name="m_bautosize"></a>CComControlBase::m_bAutoSize  
 Flag che indica che il controllo non può essere qualsiasi altra dimensione.  
  
```
unsigned m_bAutoSize:1;
```  
  
### <a name="remarks"></a>Note  
 Questo flag è controllato dal `IOleObjectImpl::SetExtent` e, se **TRUE**, la funzione restituire **E_FAIL**.  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Se si aggiunge il **il ridimensionamento automatico** opzione il [proprietà predefinite](../../atl/reference/stock-properties-atl-control-wizard.md) scheda della creazione guidata controllo ATL, la procedura guidata crea il membro dati nella classe del controllo, crea put e automaticamente ai metodi get per la proprietà e supporta [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) per notificare automaticamente il contenitore quando cambia la proprietà.  
  
##  <a name="m_bdrawfromnatural"></a>CComControlBase::m_bDrawFromNatural  
 Flag che indica se `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` deve impostare le dimensioni del controllo da `m_sizeNatural` piuttosto che da `m_sizeExtent`.  
  
```
unsigned m_bDrawFromNatural:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_bdrawgetdatainhimetric"></a>CComControlBase::m_bDrawGetDataInHimetric  
 Flag che indica se `IDataObjectImpl::GetData` unità HIMETRIC e pixel non deve utilizzare durante il disegno.  
  
```
unsigned m_bDrawGetDataInHimetric:1;
```  
  
### <a name="remarks"></a>Note  
 Ogni unità HIMETRIC logica corrisponde a 0,01 millimetri.  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_binplaceactive"></a>CComControlBase::m_bInPlaceActive  
 Flag che indica che il controllo è attivo sul posto.  
  
```
unsigned m_bInPlaceActive:1;
```  
  
### <a name="remarks"></a>Note  
 Ciò significa che il controllo è visibile e la finestra, se presente, è visibile, ma i menu e barre degli strumenti non può essere attivi. Il `m_bUIActive` flag indica l'interfaccia utente del controllo, ad esempio menu, inoltre è attiva.  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_binplacesiteex"></a>CComControlBase::m_bInPlaceSiteEx  
 Flag che indica il contenitore di supporta il **IOleInPlaceSiteEx** interfaccia e OCX96 controllano le funzionalità, ad esempio i controlli privi di finestra e sfarfallio.  
  
```
unsigned m_bInPlaceSiteEx:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Il membro dati `m_spInPlaceSite` punta a un [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), o [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interfaccia, a seconda del valore del `m_bWndLess` e `m_bInPlaceSiteEx` flag. (Membro dati `m_bNegotiatedWnd` deve essere **TRUE** per il `m_spInPlaceSite` puntatore è valido.)  
  
 Se `m_bWndLess` è **FALSE** e `m_bInPlaceSiteEx` è **TRUE**, `m_spInPlaceSite` è un **IOleInPlaceSiteEx** puntatore a interfaccia. Vedere [m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra la relazione tra queste tre membri dati.  
  
##  <a name="m_bnegotiatedwnd"></a>CComControlBase::m_bNegotiatedWnd  
 Flag che indica se il controllo ha negoziato con il contenitore sul supporto per le funzionalità di controllo OCX96 (ad esempio i controlli privi di finestra e sfarfallio) e se il controllo è finestre o privi di finestra.  
  
```
unsigned m_bNegotiatedWnd:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Il `m_bNegotiatedWnd` flag deve essere **TRUE** per il `m_spInPlaceSite` puntatore è valido.  
  
##  <a name="m_brecomposeonresize"></a>CComControlBase::m_bRecomposeOnResize  
 Flag che indica che il controllo richiede per ricomporre relativa presentazione quando il contenitore di dimensioni di visualizzazione del controllo.  
  
```
unsigned m_bRecomposeOnResize:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Questo flag è controllato dal [IOleObjectImpl::SetExtent](../../atl/reference/ioleobjectimpl-class.md#setextent) e, se **TRUE**, `SetExtent` notifica al contenitore delle modifiche di visualizzazione. Se questo flag è impostato, il **OLEMISC_RECOMPOSEONRESIZE** bit il [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumerazione deve inoltre essere impostato.  
  
##  <a name="m_brequiressave"></a>CComControlBase::m_bRequiresSave  
 Flag che indica che il controllo è stato modificato dall'ultimo salvataggio.  
  
```
unsigned m_bRequiresSave:1;
```  
  
### <a name="remarks"></a>Note  
 Il valore di `m_bRequiresSave` possono essere impostati con [CComControlBase::SetDirty](#setdirty) e recuperati con [CComControlBase::GetDirty](#getdirty).  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_bresizenatural"></a>CComControlBase::m_bResizeNatural  
 Flag che indica il controllo richiede ridimensionare l'estensione naturale (le dimensioni fisiche non in scala) quando il contenitore di modifica di dimensioni di visualizzazione del controllo.  
  
```
unsigned m_bResizeNatural:1;
```  
  
### <a name="remarks"></a>Note  
 Questo flag è controllato dal `IOleObjectImpl::SetExtent` e, se **TRUE**, le dimensioni passato `SetExtent` viene assegnato a `m_sizeNatural`.  
  
 Le dimensioni passato `SetExtent` viene sempre assegnato al `m_sizeExtent`, indipendentemente dal valore di `m_bResizeNatural`.  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_buiactive"></a>CComControlBase::m_bUIActive  
 Flag che indica l'interfaccia del controllo utente, ad esempio menu e barre degli strumenti, è attiva.  
  
```
unsigned m_bUIActive:1;
```  
  
### <a name="remarks"></a>Note  
 Il `m_bInPlaceActive` flag indica che il controllo è attivo, ma che non è attiva la relativa interfaccia utente.  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_busingwindowrgn"></a>CComControlBase::m_bUsingWindowRgn  
 Flag che indica che il controllo sta utilizzando l'area della finestra fornito dal contenitore.  
  
```
unsigned m_bUsingWindowRgn:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_bwasoncewindowless"></a>CComControlBase::m_bWasOnceWindowless  
 Flag che indica il controllo è stata privi di finestra, ma può o non siano privi di finestra ora.  
  
```
unsigned m_bWasOnceWindowless:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_bwindowonly"></a>CComControlBase  
 Flag che indica che il controllo deve essere finestra, anche se il contenitore supporta i controlli privi di finestra.  
  
```
unsigned m_bWindowOnly:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_bwndless"></a>CComControlBase::m_bWndLess  
 Flag che indica che il controllo è privo di finestra.  
  
```
unsigned m_bWndLess:1;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Il membro dati `m_spInPlaceSite` punta a un [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), o [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interfaccia, a seconda del valore del `m_bWndLess` e [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex) flag. (Membro dati [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) deve essere **TRUE** per il [CComControlBase::m_spInPlaceSite](#m_spinplacesite) puntatore è valido.)  
  
 Se `m_bWndLess` è **TRUE**, `m_spInPlaceSite` è un **IOleInPlaceSiteWindowless** puntatore a interfaccia. Vedere [CComControlBase::m_spInPlaceSite](#m_spinplacesite) per una tabella che mostra la relazione tra questi membri di dati completezza.  
  
##  <a name="m_hwndcd"></a>CComControlBase::m_hWndCD  
 Contiene un riferimento all'handle della finestra associato al controllo.  
  
```
HWND& m_hWndCD;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_nfreezeevents"></a>CComControlBase::m_nFreezeEvents  
 Un conteggio del numero di volte in cui il contenitore è bloccata (rifiutati di accettare eventi) eventi senza un corrispondente Sblocca di eventi (accettazione di eventi).  
  
```
short m_nFreezeEvents;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_rcpos"></a>CComControlBase::m_rcPos  
 La posizione in pixel del controllo, espressa in coordinate del contenitore.  
  
```
RECT m_rcPos;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_sizeextent"></a>CComControlBase::m_sizeExtent  
 L'estensione del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri) per una visualizzazione particolare.  
  
```
SIZE m_sizeExtent;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Questa dimensione viene ridimensionata per la visualizzazione. Dimensioni fisiche del controllo sono incluso il `m_sizeNatural` (membro dati) e viene risolto.  
  
 È possibile convertire le dimensioni in pixel, con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).  
  
##  <a name="m_sizenatural"></a>CComControlBase::m_sizeNatural  
 La dimensione fisica del controllo in unità HIMETRIC (ogni unità corrisponde a 0,01 millimetri).  
  
```
SIZE m_sizeNatural;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Questa dimensione è fissa, mentre le dimensioni in `m_sizeExtent` viene ridimensionato per la visualizzazione.  
  
 È possibile convertire le dimensioni in pixel, con la funzione globale [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).  
  
##  <a name="m_spadvisesink"></a>CComControlBase::m_spAdviseSink  
 Un puntatore diretto per la connessione consultiva nel contenitore (il contenitore [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513)).  
  
```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```     
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_spambientdispatch"></a>CComControlBase::m_spAmbientDispatch  
 Oggetto `CComDispatchDriver` oggetto che consente di recuperare e impostare le proprietà di un oggetto tramite un `IDispatch` puntatore.  
  
```
CComDispatchDriver m_spAmbientDispatch;
```  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_spclientsite"></a>CComControlBase::m_spClientSite  
 Puntatore al sito di client del controllo all'interno del contenitore.  
  
```
CComPtr<IOleClientSite>
    m_spClientSite;
```     
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
##  <a name="m_spdataadviseholder"></a>CComControlBase::m_spDataAdviseHolder  
 Fornisce uno standard per le connessioni consultive tra gli oggetti dati e sink di notifica.  
  
```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```     
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Un oggetto dati è un controllo che può trasferire i dati e che implementa [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421), i cui metodi specificano il supporto del formato e il trasferimento dei dati.  
  
 L'interfaccia `m_spDataAdviseHolder` implementa il [IDataObject::DAdvise](http://msdn.microsoft.com/library/windows/desktop/ms692579) e [IDataObject::DUnadvise](http://msdn.microsoft.com/library/windows/desktop/ms692448) metodi per creare ed eliminare le connessioni consultive al contenitore. Il contenitore del controllo deve implementare un sink di notifica tramite il supporto di [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interfaccia.  
  
##  <a name="m_spinplacesite"></a>CComControlBase::m_spInPlaceSite  
 Un puntatore per il contenitore [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), o [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) puntatore a interfaccia.  
  
```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```     
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 Il `m_spInPlaceSite` puntatore è valido solo se il [m_bNegotiatedWnd](#m_bnegotiatedwnd) flag **TRUE**.  
  
 La tabella seguente mostra come `m_spInPlaceSite` dipende dal tipo di puntatore il [m_bWndLess](#m_bwndless) e [m_bInPlaceSiteEx](#m_binplacesiteex) flag di membro dati:  
  
|Tipo m_spInPlaceSite|Valore m_bWndLess|Valore m_bInPlaceSiteEx|  
|---------------------------|-----------------------|-----------------------------|  
|**IOleInPlaceSiteWindowless**|**TRUE**|**TRUE** o **FALSE**|  
|**IOleInPlaceSiteEx**|**FALSE**|**TRUE**|  
|`IOleInPlaceSite`|**FALSE**|**FALSE**|  
  
##  <a name="m_spoleadviseholder"></a>CComControlBase::m_spOleAdviseHolder  
 Fornisce un'implementazione standard di un modo per contenere le connessioni consultive.  
  
```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```     
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Per utilizzare questo membro dei dati all'interno della classe di controllo, è necessario dichiararlo come un membro dati nella classe del controllo. La classe di controllo non erediterà il membro dati dalla classe di base perché è dichiarato all'interno di un'unione nella classe base.  
  
 L'interfaccia `m_spOleAdviseHolder` implementa il [IOleObject::Advise](http://msdn.microsoft.com/library/windows/desktop/ms686573) e [IOleObject::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms693749) metodi per creare ed eliminare le connessioni consultive al contenitore. Il contenitore del controllo deve implementare un sink di notifica tramite il supporto di [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interfaccia.  
  
##  <a name="ondraw"></a>CComControlBase:: OnDraw  
 Eseguire l'override di questo metodo per disegnare il controllo.  
  
```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```  
  
### <a name="parameters"></a>Parametri  
 `di`  
 Un riferimento di [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) struttura che contiene informazioni sul disegno, ad esempio l'aspetto di disegno, i limiti del controllo, e se il disegno ottimizzato o non.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito `OnDraw` Elimina o Ripristina il contesto di dispositivo non esegue alcuna operazione, a seconda di flag impostati nel [CComControlBase::OnDrawAdvanced](#ondrawadvanced).  
  
 Un `OnDraw` metodo viene aggiunto automaticamente alla classe del controllo quando si crea il controllo con la creazione guidata controllo ATL. Valore predefinito della procedura guidata `OnDraw` Disegna un rettangolo con etichetta "ATL 8.0".  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CComControlBase:: GetAmbientAppearance](#getambientappearance).  
  
##  <a name="ondrawadvanced"></a>CComControlBase::OnDrawAdvanced  
 Il valore predefinito `OnDrawAdvanced` prepara un contesto di dispositivo normalizzato per il disegno, quindi chiama la classe di controllo `OnDraw` metodo.  
  
```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```  
  
### <a name="parameters"></a>Parametri  
 `di`  
 Un riferimento di [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) struttura che contiene informazioni sul disegno, ad esempio l'aspetto di disegno, i limiti del controllo, e se il disegno ottimizzato o non.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera accettare il contesto di dispositivo passato dal contenitore senza normalizzarlo.  
  
 Vedere [CComControlBase:: OnDraw](#ondraw) per altri dettagli.  
  
##  <a name="onkillfocus"></a>CComControlBase::OnKillFocus  
 Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi informa il contenitore che il controllo ha perso lo stato attivo.  
  
```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### <a name="parameters"></a>Parametri  
 `nMsg`  
 Riservato.  
  
 `wParam`  
 Riservato.  
  
 `lParam`  
 Riservato.  
  
 `bHandled`  
 Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
##  <a name="onmouseactivate"></a>CComControlBase::OnMouseActivate  
 Verifica che l'interfaccia utente è in modalità utente, quindi attiva il controllo.  
  
```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### <a name="parameters"></a>Parametri  
 `nMsg`  
 Riservato.  
  
 `wParam`  
 Riservato.  
  
 `lParam`  
 Riservato.  
  
 `bHandled`  
 Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
##  <a name="onpaint"></a>CComControlBase::OnPaint  
 Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama la classe di controllo `OnDrawAdvanced` metodo.  
  
```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```  
  
### <a name="parameters"></a>Parametri  
 `nMsg`  
 Riservato.  
  
 `wParam`  
 Un HDC esistente.  
  
 `lParam`  
 Riservato.  
  
 `lResult`  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre zero.  
  
### <a name="remarks"></a>Note  
 Se `wParam` non è NULL, `OnPaint` si presuppone che contiene un HDC valido e viene utilizzato al posto di [CComControlBase::m_hWndCD](#m_hwndcd).  
  
##  <a name="onsetfocus"></a>CComControlBase::OnSetFocus  
 Verifica che il controllo è attivo sul posto e dispone di un sito di controllo valido, quindi informa il contenitore del controllo ha acquisito lo stato attivo.  
  
```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### <a name="parameters"></a>Parametri  
 `nMsg`  
 Riservato.  
  
 `wParam`  
 Riservato.  
  
 `lParam`  
 Riservato.  
  
 `bHandled`  
 Flag che indica se la finestra di messaggio è stato gestito correttamente. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre 1.  
  
### <a name="remarks"></a>Note  
 Invia una notifica al contenitore che il controllo ha ricevuto lo stato attivo.  
  
##  <a name="pretranslateaccelerator"></a>CComControlBase::PreTranslateAccelerator  
 Eseguire l'override di questo metodo per fornire la propria tastiera gestori di tasti di scelta rapida.  
  
```
BOOL PreTranslateAccelerator(LPMSG /* pMsg */,
    HRESULT& /* hRet */);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Riservato.  
  
 *hRet*  
 Riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Per impostazione predefinita restituisce **FALSE**.  
  
##  <a name="sendonclose"></a>CComControlBase::SendOnClose  
 Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo è stato chiuso.  
  
```
HRESULT SendOnClose();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Invia una notifica che il controllo ha chiuso il sink consultivo.  
  
##  <a name="sendondatachange"></a>CComControlBase::SendOnDataChange  
 Notifica al sink consultivo tutti registrati con il titolare advise che i dati di controllo sono stato modificato.  
  
```
HRESULT SendOnDataChange(DWORD advf = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *ADVF*  
 Consigliare i flag che specificano come la chiamata a [IAdviseSink::OnDataChange](http://msdn.microsoft.com/library/windows/desktop/ms687283) viene eseguita. I valori sono compresi il [ADVF](http://msdn.microsoft.com/library/windows/desktop/ms693742) enumerazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
##  <a name="sendonrename"></a>CComControlBase::SendOnRename  
 Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo dispone di un nuovo moniker.  
  
```
HRESULT SendOnRename(IMoniker* pmk);
```  
  
### <a name="parameters"></a>Parametri  
 *PMK*  
 Puntatore al nuovo moniker del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Invia una notifica che il moniker per il controllo è stato modificato.  
  
##  <a name="sendonsave"></a>CComControlBase::SendOnSave  
 Notifica al sink consultivo tutti registrati con il titolare di notifica che il controllo è stato salvato.  
  
```
HRESULT SendOnSave();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Invia una notifica che il controllo ha salvato i dati.  
  
##  <a name="sendonviewchange"></a>CComControlBase::SendOnViewChange  
 Notifica a che tutti i sink consultivo che è stata modificata la visualizzazione del controllo.  
  
```
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `dwAspect`  
 L'aspetto o la visualizzazione del controllo.  
  
 *lindex*  
 La parte della vista che è stato modificato. Solo i -1 è valida.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 `SendOnViewChange`chiamate [IAdviseSink::OnViewChange](http://msdn.microsoft.com/library/windows/desktop/ms694337). L'unico valore di *lindex* attualmente supportato è -1, che indica che l'intera vista è di particolare interesse.  
  
##  <a name="setcontrolfocus"></a>CComControlBase::SetControlFocus  
 Imposta o rimuove lo stato attivo da o verso il controllo.  
  
```
BOOL SetControlFocus(BOOL bGrab);
```  
  
### <a name="parameters"></a>Parametri  
 *bGrab*  
 Se **TRUE**, imposta lo stato attivo al controllo chiamante. Se **FALSE**, rimuove lo stato attivo dal controllo chiamante, purché abbia lo stato attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se il controllo riceve correttamente lo stato attivo; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per un controllo con finestra, la funzione API Windows [SetFocus](http://msdn.microsoft.com/library/windows/desktop/ms646312) viene chiamato. Per un controllo senza finestra, [IOleInPlaceSiteWindowless::SetFocus](http://msdn.microsoft.com/library/windows/desktop/ms679745) viene chiamato. Tramite questa chiamata, un controllo senza finestra Ottiene lo stato attivo e può rispondere ai messaggi della finestra.  
  
##  <a name="setdirty"></a>CComControlBase::SetDirty  
 Imposta il membro dati `m_bRequiresSave` sul valore `bDirty`.  
  
```
void SetDirty(BOOL bDirty);
```  
  
### <a name="parameters"></a>Parametri  
 `bDirty`  
 Valore del membro dati [CComControlBase::m_bRequiresSave](#m_brequiressave).  
  
### <a name="remarks"></a>Note  
 **SetDirty(TRUE)** deve essere chiamato per contrassegnare il controllo modificato dall'ultimo salvataggio. Il valore di `m_bRequiresSave` recuperato con [CComControlBase::GetDirty](#getdirty).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

