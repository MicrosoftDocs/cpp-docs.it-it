---
title: "CComControlBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComControlBase"
  - "ATL.CComControlBase"
  - "ATL::CComControlBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComControlBase class"
ms.assetid: 3d1bf022-acf2-4092-8283-ff8cee6332f3
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CComControlBase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare e gestire i controlli ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class ATL_NO_VTABLE CComControlBase  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::AppearanceType](../Topic/CComControlBase::AppearanceType.md)|Override se la proprietà di azione `m_nAppearance` non è di tipo `short`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::CComControlBase](../Topic/CComControlBase::CComControlBase.md)|Costruttore.|  
|[CComControlBase::~CComControlBase](../Topic/CComControlBase::~CComControlBase.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::ControlQueryInterface](../Topic/CComControlBase::ControlQueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta.|  
|[CComControlBase::DoesVerbActivate](../Topic/CComControlBase::DoesVerbActivate.md)|I controlli che il parametro `iVerb` utilizzato da `IOleObjectImpl::DoVerb` uno attiva l'interfaccia utente del controllo \(`iVerb` equivale a `OLEIVERB_UIACTIVATE`\), definisce le azioni eseguite quando l'utente fa doppio clic sul controllo \(`iVerb` equivale a `OLEIVERB_PRIMARY`\), visualizzare il controllo \(`iVerb` equivale a `OLEIVERB_SHOW`, oppure attiva il controllo \(`iVerb` equivale a **OLEIVERB\_INPLACEACTIVATE**\).|  
|[CComControlBase::DoesVerbUIActivate](../Topic/CComControlBase::DoesVerbUIActivate.md)|I controlli che il parametro `iVerb` utilizzato da `IOleObjectImpl::DoVerb` genera l'interfaccia utente del controllo per attivare e restituisce **TRUE**.|  
|[CComControlBase::DoVerbProperties](../Topic/CComControlBase::DoVerbProperties.md)|Visualizza le pagine delle proprietà del controllo.|  
|[CComControlBase::FireViewChange](../Topic/CComControlBase::FireViewChange.md)|Chiamare questo metodo per indicare il contenitore di ridisegnare il controllo, o aggiornare i sink di notifica registrati nella visualizzazione del controllo è stato modificato.|  
|[CComControlBase::GetAmbientAppearance](../Topic/CComControlBase::GetAmbientAppearance.md)|Recupera **DISPID\_AMBIENT\_APPEARANCE**, l'impostazione corrente dell'aspetto del controllo: 0 per il piano e 1 per tridimensionale.|  
|[CComControlBase::GetAmbientAutoClip](../Topic/CComControlBase::GetAmbientAutoClip.md)|Recupera **DISPID\_AMBIENT\_AUTOCLIP**, un flag che indica se il contenitore supporta l'area di visualizzazione automatica dell'area di visualizzazione del controllo.|  
|[CComControlBase::GetAmbientBackColor](../Topic/CComControlBase::GetAmbientBackColor.md)|Recupera **DISPID\_AMBIENT\_BACKCOLOR**, il colore di sfondo di ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientCharSet](../Topic/CComControlBase::GetAmbientCharSet.md)|Recupera **DISPID\_AMBIENT\_CHARSET**, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientCodePage](../Topic/CComControlBase::GetAmbientCodePage.md)|Recupera **DISPID\_AMBIENT\_CODEPAGE**, il set di caratteri di ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientDisplayAsDefault](../Topic/CComControlBase::GetAmbientDisplayAsDefault.md)|Recupera **DISPID\_AMBIENT\_DISPLAYASDEFAULT**, un flag che è **TRUE** se il contenitore ha contrassegnato il controllo in questo sito per essere un pulsante predefinito e pertanto il pulsante deve possibile disegnare con un frame più spesso.|  
|[CComControlBase::GetAmbientDisplayName](../Topic/CComControlBase::GetAmbientDisplayName.md)|Recupera **DISPID\_AMBIENT\_DISPLAYNAME**, il nome del contenitore ha fornito al controllo.|  
|[CComControlBase::GetAmbientFont](../Topic/CComControlBase::GetAmbientFont.md)|Recupera un puntatore a interfaccia di ambiente `IFont` del contenitore.|  
|[CComControlBase::GetAmbientFontDisp](../Topic/CComControlBase::GetAmbientFontDisp.md)|Recupera un puntatore a interfaccia dispatch di ambiente **IFontDisp** del contenitore.|  
|[CComControlBase::GetAmbientForeColor](../Topic/CComControlBase::GetAmbientForeColor.md)|Recupera **DISPID\_AMBIENT\_FORECOLOR**, il colore di primo piano di ambiente per tutti i controlli, definito dal contenitore.|  
|[CComControlBase::GetAmbientLocaleID](../Topic/CComControlBase::GetAmbientLocaleID.md)|Recupera **DISPID\_AMBIENT\_LOCALEID**, l'identificatore del linguaggio utilizzato dal contenitore.|  
|[CComControlBase::GetAmbientMessageReflect](../Topic/CComControlBase::GetAmbientMessageReflect.md)|Recupera **DISPID\_AMBIENT\_MESSAGEREFLECT**, un flag che indica se il contenitore desidera ricevere i messaggi della finestra \(come `WM_DRAWITEM`\) come eventi.|  
|[CComControlBase::GetAmbientPalette](../Topic/CComControlBase::GetAmbientPalette.md)|Recupera **DISPID\_AMBIENT\_PALETTE**, utilizzato per accedere `HPALETTE`del contenitore.|  
|[CComControlBase::GetAmbientProperty](../Topic/CComControlBase::GetAmbientProperty.md)|Recupera la proprietà del contenitore specificato da `id`.|  
|[CComControlBase::GetAmbientRightToLeft](../Topic/CComControlBase::GetAmbientRightToLeft.md)|Recupera **DISPID\_AMBIENT\_RIGHTTOLEFT**, la direzione in cui il contenuto visualizzato dal contenitore.|  
|[CComControlBase::GetAmbientScaleUnits](../Topic/CComControlBase::GetAmbientScaleUnits.md)|Recupera **DISPID\_AMBIENT\_SCALEUNITS**, le unità di ambiente del contenitore quali i pollici o cm\) per le visualizzazioni di contrassegno.|  
|[CComControlBase::GetAmbientShowGrabHandles](../Topic/CComControlBase::GetAmbientShowGrabHandles.md)|Recupera **DISPID\_AMBIENT\_SHOWGRABHANDLES**, un flag che indica se il contenitore consente il controllo a maniglie di visualizzazione per se stesso quando attivo.|  
|[CComControlBase::GetAmbientShowHatching](../Topic/CComControlBase::GetAmbientShowHatching.md)|Recupera **DISPID\_AMBIENT\_SHOWHATCHING**, un flag che indica se il contenitore consente del controllo viene visualizzato con un modello tratteggiato quando l'interfaccia utente è attiva.|  
|[CComControlBase::GetAmbientSupportsMnemonics](../Topic/CComControlBase::GetAmbientSupportsMnemonics.md)|Recupera **DISPID\_AMBIENT\_SUPPORTSMNEMONICS**, un flag che indica se il contenitore supporta i tasti di scelta rapida.|  
|[CComControlBase::GetAmbientTextAlign](../Topic/CComControlBase::GetAmbientTextAlign.md)|Recupera **DISPID\_AMBIENT\_TEXTALIGN**, l'allineamento del testo desiderato dal contenitore: 0 per l'allineamento generale \(numeri a destra, testo a sinistra\), 1 per l'allineamento sinistro, 2 per allineamento centrale e 3 per destra allineamento.|  
|[CComControlBase::GetAmbientTopToBottom](../Topic/CComControlBase::GetAmbientTopToBottom.md)|Recupera **DISPID\_AMBIENT\_TOPTOBOTTOM**, la direzione in cui il contenuto visualizzato dal contenitore.|  
|[CComControlBase::GetAmbientUIDead](../Topic/CComControlBase::GetAmbientUIDead.md)|Recupera **DISPID\_AMBIENT\_UIDEAD**, un flag che indica se il contenitore desidera un controllo per rispondere alle azioni dell'interfaccia utente.|  
|[CComControlBase::GetAmbientUserMode](../Topic/CComControlBase::GetAmbientUserMode.md)|Recupera **DISPID\_AMBIENT\_USERMODE**, un flag che indica se il contenitore è in modalità di esecuzione \(**TRUE**\) o in modalità progettazione \(**FALSE**\).|  
|[CComControlBase::GetDirty](../Topic/CComControlBase::GetDirty.md)|Restituisce il valore del membro dati `m_bRequiresSave`.|  
|[CComControlBase::GetZoomInfo](../Topic/CComControlBase::GetZoomInfo.md)|Recupera i valori x e y del numeratore e un denominatore del fattore di zoom per un controllo abilitato per la modifica sul posto.|  
|[CComControlBase::InPlaceActivate](../Topic/CComControlBase::InPlaceActivate.md)|Causa il controllo per la transizione dallo stato inattivo a qualsiasi stato il verbo in `iVerb` indica.|  
|[CComControlBase::InternalGetSite](../Topic/CComControlBase::InternalGetSite.md)|Chiamare questo metodo per eseguire una query sul sito del controllo per un puntatore a un'interfaccia identificata.|  
|[CComControlBase::OnDraw](../Topic/CComControlBase::OnDraw.md)|Eseguire l'override di questo metodo per estrarre il controllo.|  
|[CComControlBase::OnDrawAdvanced](../Topic/CComControlBase::OnDrawAdvanced.md)|**OnDrawAdvanced** predefinito rende un contesto di dispositivo normalizzato per disegnare, quindi chiama il metodo `OnDraw` della classe del controllo.|  
|[CComControlBase::OnKillFocus](../Topic/CComControlBase::OnKillFocus.md)|I controlli che il controllo è attivo sul posto e ha un sito valido del controllo, è possibile indicare al contenitore che il controllo ha perde lo stato attivo.|  
|[CComControlBase::OnMouseActivate](../Topic/CComControlBase::OnMouseActivate.md)|I controlli che l'interfaccia utente è in modalità utente, quest'ultima attiva il controllo.|  
|[CComControlBase::OnPaint](../Topic/CComControlBase::OnPaint.md)|Prepara il contenitore per il disegno, ottiene l'area client del controllo, quindi chiama il metodo `OnDraw` della classe del controllo.|  
|[CComControlBase::OnSetFocus](../Topic/CComControlBase::OnSetFocus.md)|I controlli che il controllo è attivo sul posto e ha un sito valido del controllo, è possibile indicare al contenitore che il controllo che presenta lo stato attivo.|  
|[CComControlBase::PreTranslateAccelerator](../Topic/CComControlBase::PreTranslateAccelerator.md)|Eseguire l'override di questo metodo per fornire i propri gestori del tasto di scelta rapida.|  
|[CComControlBase::SendOnClose](../Topic/CComControlBase::SendOnClose.md)|Notifica a tutti i sink consultivi registrati con il supporto di consigliare che il controllo è stato chiuso.|  
|[CComControlBase::SendOnDataChange](../Topic/CComControlBase::SendOnDataChange.md)|Notifica a tutti i sink consultivi registrati con il supporto di consigliare che i dati del controllo sono stati modificati.|  
|[CComControlBase::SendOnRename](../Topic/CComControlBase::SendOnRename.md)|Notifica a tutti i sink consultivi registrati con il supporto di consigliare che il controllo ha un nuovo moniker.|  
|[CComControlBase::SendOnSave](../Topic/CComControlBase::SendOnSave.md)|Notifica a tutti i sink consultivi registrati con il supporto di consigliare che il controllo è stato salvato.|  
|[CComControlBase::SendOnViewChange](../Topic/CComControlBase::SendOnViewChange.md)|Notifica a tutti i sink consultivi registrati nella visualizzazione del controllo è stato modificato.|  
|[CComControlBase::SetControlFocus](../Topic/CComControlBase::SetControlFocus.md)|Consente di impostare o rimuovere lo stato attivo a o dal controllo.|  
|[CComControlBase::SetDirty](../Topic/CComControlBase::SetDirty.md)|Imposta il membro dati `m_bRequiresSave` al valore in `bDirty`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControlBase::m\_bAutoSize](../Topic/CComControlBase::m_bAutoSize.md)|Il flag che indica il controllo non può essere qualsiasi altra dimensione.|  
|[CComControlBase::m\_bDrawFromNatural](../Topic/CComControlBase::m_bDrawFromNatural.md)|Contrassegnare indica che `IDataObjectImpl::GetData` e `CComControlBase::GetZoomInfo` devono impostare la dimensione del controllo da `m_sizeNatural` anziché da `m_sizeExtent`.|  
|[CComControlBase::m\_bDrawGetDataInHimetric](../Topic/CComControlBase::m_bDrawGetDataInHimetric.md)|Contrassegnare indica che `IDataObjectImpl::GetData` deve utilizzare unità e non i pixel di HIMETRIC quando si disegna.|  
|[CComControlBase::m\_bInPlaceActive](../Topic/CComControlBase::m_bInPlaceActive.md)|Il flag che indica il controllo è attivo sul posto.|  
|[CComControlBase::m\_bInPlaceSiteEx](../Topic/CComControlBase::m_bInPlaceSiteEx.md)|Il flag che indica il contenitore supporta le funzionalità dell'interfaccia e del controllo OCX96 **IOleInPlaceSiteEx**, ad esempio controlli privi di finestra e senza sfarfallio.|  
|[CComControlBase::m\_bNegotiatedWnd](../Topic/CComControlBase::m_bNegotiatedWnd.md)|Contrassegnare indica se il controllo di negoziazione con il contenitore su supporto per le funzionalità del controllo OCX96 \(come controlli senza sfarfallio e senza finestra\) e se il controllo è compilazione o senza finestra.|  
|[CComControlBase::m\_bRecomposeOnResize](../Topic/CComControlBase::m_bRecomposeOnResize.md)|Il flag che indica il controllo desidera ricomporre la presentazione quando il contenitore modificare le dimensioni di visualizzazione del controllo.|  
|[CComControlBase::m\_bRequiresSave](../Topic/CComControlBase::m_bRequiresSave.md)|Il flag che indica il controllo è stato modificato da quando è stato salvato per ultima.|  
|[CComControlBase::m\_bResizeNatural](../Topic/CComControlBase::m_bResizeNatural.md)|Il flag che indica il controllo desidera ridimensionare il relativo ambito naturale \(la dimensione fisica non ridimensionata\) quando il contenitore modificare le dimensioni di visualizzazione del controllo.|  
|[CComControlBase::m\_bUIActive](../Topic/CComControlBase::m_bUIActive.md)|Contrassegnare indica dell'interfaccia utente del controllo, ad esempio menu e barre degli strumenti, è attiva.|  
|[CComControlBase::m\_bUsingWindowRgn](../Topic/CComControlBase::m_bUsingWindowRgn.md)|Il flag che indica il controllo utilizza l'area della finestra contenitore\- fornita.|  
|[CComControlBase::m\_bWasOnceWindowless](../Topic/CComControlBase::m_bWasOnceWindowless.md)|Il flag che indica il controllo è stato senza finestra, ma può essere senza finestra ora.|  
|[CComControlBase::m\_bWindowOnly](../Topic/CComControlBase::m_bWindowOnly.md)|Il flag che indica il controllo deve essere compilazione, anche se il contenitore supporta i controlli privi di finestra.|  
|[CComControlBase::m\_bWndLess](../Topic/CComControlBase::m_bWndLess.md)|Il flag che indica il controllo è senza finestra.|  
|[CComControlBase::m\_hWndCD](../Topic/CComControlBase::m_hWndCD.md)|Contiene un riferimento all'handle della finestra associato al controllo.|  
|[CComControlBase::m\_nFreezeEvents](../Topic/CComControlBase::m_nFreezeEvents.md)|Un conteggio del numero di volte il contenitore ha bloccato eventi \(rifiutati per accettare eventi\) senza un sblocca corrispondente degli eventi \(accettazione di eventi\).|  
|[CComControlBase::m\_rcPos](../Topic/CComControlBase::m_rcPos.md)|La posizione in pixel del controllo, espressi in coordinate del contenitore.|  
|[CComControlBase::m\_sizeExtent](../Topic/CComControlBase::m_sizeExtent.md)|L'ambito del controllo in unità di HIMETRIC \(ogni unità è 0,01 millimetri\) per una determinata visualizzazione.|  
|[CComControlBase::m\_sizeNatural](../Topic/CComControlBase::m_sizeNatural.md)|La dimensione fisica del controllo in unità di HIMETRIC \(ogni unità è 0,01 millimetri\).|  
|[CComControlBase::m\_spAdviseSink](../Topic/CComControlBase::m_spAdviseSink.md)|Un puntatore diretto alla connessione consultiva sul contenitore \( [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513)del contenitore\).|  
|[CComControlBase::m\_spAmbientDispatch](../Topic/CComControlBase::m_spAmbientDispatch.md)|Un oggetto `CComDispatchDriver` che consente di recuperare e impostare le proprietà del contenitore tramite un puntatore `IDispatch`.|  
|[CComControlBase::m\_spClientSite](../Topic/CComControlBase::m_spClientSite.md)|Un puntatore al sito client del controllo nel contenitore.|  
|[CComControlBase::m\_spDataAdviseHolder](../Topic/CComControlBase::m_spDataAdviseHolder.md)|Consente di uno standard per utilizzare le connessioni consultive tra gli oggetti dati e i sink di notifica.|  
|[CComControlBase::m\_spInPlaceSite](../Topic/CComControlBase::m_spInPlaceSite.md)|Un puntatore a un puntatore a interfaccia [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), o [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) del contenitore.|  
|[CComControlBase::m\_spOleAdviseHolder](../Topic/CComControlBase::m_spOleAdviseHolder.md)|Fornisce un'implementazione standard di come utilizzare connessioni consultive.|  
  
## Note  
 Questa classe fornisce metodi per creare e gestire i controlli ATL.  [classe di CComControl](../../atl/reference/ccomcontrol-class.md) deriva da `CComControlBase`.  Quando si crea un controllo standard o il controllo DHTML utilizzando la creazione guidata controllo ATL, la procedura guidata automaticamente derivare la classe da `CComControlBase`.  
  
 Per ulteriori informazioni sulla creazione di un controllo, vedere [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md).  Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)