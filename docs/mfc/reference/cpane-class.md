---
title: Classe CPane | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPane
- AFXPANE/CPane
- AFXPANE/CPane::AdjustSizeImmediate
- AFXPANE/CPane::AllocElements
- AFXPANE/CPane::AllowShowOnPaneMenu
- AFXPANE/CPane::CalcAvailableSize
- AFXPANE/CPane::CalcInsideRect
- AFXPANE/CPane::CalcRecentDockedRect
- AFXPANE/CPane::CalcSize
- AFXPANE/CPane::CanBeDocked
- AFXPANE/CPane::CanBeTabbedDocument
- AFXPANE/CPane::ConvertToTabbedDocument
- AFXPANE/CPane::CopyState
- AFXPANE/CPane::Create
- AFXPANE/CPane::CreateDefaultMiniframe
- AFXPANE/CPane::CreateEx
- AFXPANE/CPane::DockByMouse
- AFXPANE/CPane::DockPane
- AFXPANE/CPane::DockPaneStandard
- AFXPANE/CPane::DockToFrameWindow
- AFXPANE/CPane::DoesAllowSiblingBars
- AFXPANE/CPane::FloatPane
- AFXPANE/CPane::GetAvailableExpandSize
- AFXPANE/CPane::GetAvailableStretchSize
- AFXPANE/CPane::GetBorders
- AFXPANE/CPane::GetClientHotSpot
- AFXPANE/CPane::GetDockSiteRow
- AFXPANE/CPane::GetExclusiveRowMode
- AFXPANE/CPane::GetHotSpot
- AFXPANE/CPane::GetMinSize
- AFXPANE/CPane::GetPaneName
- AFXPANE/CPane::GetVirtualRect
- AFXPANE/CPane::IsChangeState
- AFXPANE/CPane::IsDragMode
- AFXPANE/CPane::IsInFloatingMultiPaneFrameWnd
- AFXPANE/CPane::IsLeftOf
- AFXPANE/CPane::IsResizable
- AFXPANE/CPane::IsTabbed
- AFXPANE/CPane::LoadState
- AFXPANE/CPane::MoveByAlignment
- AFXPANE/CPane::MovePane
- AFXPANE/CPane::OnAfterChangeParent
- AFXPANE/CPane::OnBeforeChangeParent
- AFXPANE/CPane::OnPressCloseButton
- AFXPANE/CPane::OnShowControlBarMenu
- AFXPANE/CPane::OnShowControlBarMenu
- AFXPANE/CPane::RecalcLayout
- AFXPANE/CPane::SaveState
- AFXPANE/CPane::SetActiveInGroup
- AFXPANE/CPane::SetBorders
- AFXPANE/CPane::SetClientHotSpot
- AFXPANE/CPane::SetDockState
- AFXPANE/CPane::SetExclusiveRowMode
- AFXPANE/CPane::SetMiniFrameRTC
- AFXPANE/CPane::SetMinSize
- AFXPANE/CPane::SetVirtualRect
- AFXPANE/CPane::StretchPaneDeferWndPos
- AFXPANE/CPane::ToggleAutoHide
- AFXPANE/CPane::UndockPane
- AFXPANE/CPane::UpdateVirtualRect
- AFXPANE/CPane::OnAfterDock
- AFXPANE/CPane::OnAfterFloat
- AFXPANE/CPane::OnBeforeDock
- AFXPANE/CPane::OnBeforeFloat
- AFXPANE/CPane::m_bHandleMinSize
- AFXPANE/CPane::m_recentDockInfo
dev_langs:
- C++
helpviewer_keywords:
- CPane class
ms.assetid: 5c651a64-3c79-4d94-9676-45f6402a6bc5
caps.latest.revision: 30
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
translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 30edd65a50d3aa20850eace07407a709bd2b837e
ms.lasthandoff: 04/01/2017

---
# <a name="cpane-class"></a>CPane Class
Il `CPane` classe rappresenta un miglioramento del [classe CControlBar](../../mfc/reference/ccontrolbar-class.md). Se si sta aggiornando un progetto MFC esistente, sostituire tutte le occorrenze di `CControlBar` con `CPane`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPane : public CBasePane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CPane::~CPane`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::AdjustSizeImmediate](#adjustsizeimmediate)|Immediatamente Ricalcola il layout di un riquadro.|  
|[CPane::AllocElements](#allocelements)|Allocare spazio di archiviazione per uso interno.|  
|[CPane::AllowShowOnPaneMenu](#allowshowonpanemenu)|Specifica se il riquadro è elencato nell'elenco dei riquadri per l'applicazione generati dal runtime.|  
|[CPane::CalcAvailableSize](#calcavailablesize)|Calcola la differenza dimensioni tra un rettangolo specificato e il rettangolo della finestra corrente.|  
|[CPane::CalcInsideRect](#calcinsiderect)|Calcola l'interno del rettangolo di un riquadro, tenendo in considerazione i bordi e i gripper.|  
|[CPane::CalcRecentDockedRect](#calcrecentdockedrect)|Calcola il rettangolo recente ancorato.|  
|[CPane::CalcSize](#calcsize)|Calcola le dimensioni del riquadro.|  
|[CPane::CanBeDocked](#canbedocked)|Determina se il riquadro può essere ancorato al riquadro di base specificato.|  
|[CPane::CanBeTabbedDocument](#canbetabbeddocument)|Determina se il riquadro può essere convertito in un documento a schede.|  
|[CPane::ConvertToTabbedDocument](#converttotabbeddocument)|Converte un riquadro ancorato in un documento a schede.|  
|[CPane::CopyState](#copystate)|Copia lo stato di un riquadro. (Esegue l'override [CBasePane::CopyState](../../mfc/reference/cbasepane-class.md#copystate).)|  
|[Cpane:: Create](#create)|Crea una barra di controllo e lo collega al `CPane` oggetto.|  
|[Cpane:: Createdefaultminiframe](#createdefaultminiframe)|Crea una finestra con mini-cornice per un riquadro mobile.|  
|[Cpane:: CreateEx](#createex)|Crea una barra di controllo e lo collega al `CPane` oggetto.|  
|`CPane::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CPane::DockByMouse](#dockbymouse)|Ancora un riquadro usando il mouse ancoraggio metodo.|  
|[CPane::DockPane](#dockpane)|Il riquadro mobile viene ancorato a un riquadro di base.|  
|[CPane::DockPaneStandard](#dockpanestandard)|Ancora un riquadro con contorno di ancoraggio (standard).|  
|[CPane::DockToFrameWindow](#docktoframewindow)|Ancora un riquadro ancorato a un frame. Esegue l'override di `CBasePane::DockToFrameWindow`.|  
|[CPane::DoesAllowSiblingBars](#doesallowsiblingbars)|Indica se è possibile ancorare un altro riquadro nella stessa riga in cui il riquadro corrente è ancorato.|  
|[CPane::FloatPane](#floatpane)|Scorre il riquadro.|  
|[CPane::GetAvailableExpandSize](#getavailableexpandsize)|Restituisce la quantità, in pixel, che è possibile espandere il riquadro.|  
|[CPane::GetAvailableStretchSize](#getavailablestretchsize)|Restituisce la quantità, in pixel, che è possibile ridurre il riquadro.|  
|[CPane::GetBorders](#getborders)|Restituisce lo spessore dei bordi del riquadro.|  
|[CPane::GetClientHotSpot](#getclienthotspot)|Restituisce il *sensibile* per il riquadro.|  
|[CPane::GetDockSiteRow](#getdocksiterow)|Restituisce la riga di ancoraggio in cui il riquadro è ancorato.|  
|[CPane::GetExclusiveRowMode](#getexclusiverowmode)|Determina se il riquadro è in modalità riga esclusivo.|  
|[CPane::GetHotSpot](#gethotspot)|Restituisce l'area sensibile che viene archiviato in un oggetto sottostante `CMFCDragFrameImpl` oggetto.|  
|[CPane::GetMinSize](#getminsize)|Recupera il valore minimo consentito per il riquadro.|  
|[CPane::GetPaneName](#getpanename)|Recupera il titolo del riquadro.|  
|`CPane::GetResizeStep`|Utilizzata internamente.|  
|`CPane::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CPane::GetVirtualRect](#getvirtualrect)|Recupera il *virtuale rettangolo* del riquadro.|  
|[CPane::IsChangeState](#ischangestate)|Come il riquadro è stato spostato, questo metodo consente di analizzare la posizione del riquadro relativo altri riquadri, le righe di ancoraggio e windows con mini-cornice e restituisce l'oggetto appropriato `AFX_CS_STATUS` valore.|  
|[CPane::IsDragMode](#isdragmode)|Specifica se il riquadro viene trascinato.|  
|[CPane::IsInFloatingMultiPaneFrameWnd](#isinfloatingmultipaneframewnd)|Specifica se il riquadro è in una finestra cornice a più riquadri. Esegue l'override di `CBasePane::IsInFloatingMultiPaneFrameWnd`.|  
|[CPane::IsLeftOf](#isleftof)|Determina se il riquadro viene lasciato di (o versione successiva) del rettangolo specificato.|  
|[CPane::IsResizable](#isresizable)|Determina se il riquadro può essere ridimensionato. (Esegue l'override [cbasepane:: isResizable](../../mfc/reference/cbasepane-class.md#isresizable).)|  
|[CPane::IsTabbed](#istabbed)|Determina se il riquadro è stato inserito nel controllo della scheda di una finestra a schede. (Esegue l'override [CBasePane::IsTabbed](../../mfc/reference/cbasepane-class.md#istabbed).)|  
|[CPane::LoadState](#loadstate)|Carica lo stato del riquadro dal Registro di sistema. (Esegue l'override [CBasePane::LoadState](../../mfc/reference/cbasepane-class.md#loadstate).)|  
|[CPane::MoveByAlignment](#movebyalignment)|Sposta il riquadro e il rettangolo virtuale la quantità specificata.|  
|[CPane::MovePane](#movepane)|Sposta il riquadro nel rettangolo specificato.|  
|[CPane::OnAfterChangeParent](#onafterchangeparent)|Chiamato dal framework quando l'elemento padre di un riquadro è stato modificato.|  
|[CPane::OnBeforeChangeParent](#onbeforechangeparent)|Chiamato dal framework quando sta per modificare l'elemento padre del riquadro.|  
|[CPane::OnPressCloseButton](#onpressclosebutton)|Chiamato dal framework quando l'utente sceglie il pulsante Chiudi la didascalia per il riquadro.|  
|`CPane::OnProcessDblClk`|Utilizzata internamente.|  
|[Cpane:: Onshowcontrolbarmenu](#onshowcontrolbarmenu)|Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato.|  
|[Cpane:: Onshowcontrolbarmenu](#onshowcontrolbarmenu)|Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato.|  
|`CPane::PrepareToDock`|Utilizzata internamente.|  
|[Cpane:: RecalcLayout](#recalclayout)|Ricalcola le informazioni di layout per il riquadro. (Esegue l'override [CBasePane::RecalcLayout](../../mfc/reference/cbasepane-class.md#recalclayout).)|  
|[CPane::SaveState](#savestate)|Salva lo stato del riquadro nel Registro di sistema. (Esegue l'override [CBasePane::SaveState](../../mfc/reference/cbasepane-class.md#savestate).)|  
|[Cpane:: Setactiveingroup](#setactiveingroup)|Contrassegna un riquadro come attiva.|  
|[CPane::SetBorders](#setborders)|Imposta i valori del bordo del riquadro.|  
|[CPane::SetClientHotSpot](#setclienthotspot)|Imposta l'area sensibile per il riquadro.|  
|[CPane::SetDockState](#setdockstate)|Ripristina informazioni sullo stato per il riquadro di ancoraggio.|  
|[CPane::SetExclusiveRowMode](#setexclusiverowmode)|Abilita o disabilita la modalità di riga esclusivi.|  
|[CPane::SetMiniFrameRTC](#setminiframertc)|Imposta le informazioni sulla classe di runtime per la finestra con mini-cornice predefinita.|  
|[CPane::SetMinSize](#setminsize)|Imposta il valore minimo consentito per il riquadro.|  
|[CPane::SetVirtualRect](#setvirtualrect)|Imposta il *virtuale rettangolo* del riquadro.|  
|[CPane::StretchPaneDeferWndPos](#stretchpanedeferwndpos)|Estende il riquadro verticale o orizzontale in base stile di ancoraggio.|  
|[CPane::ToggleAutoHide](#toggleautohide)|Attiva la modalità Nascondi automaticamente.|  
|[CPane::UndockPane](#undockpane)|Rimuove il riquadro dal sito di ancoraggio, il dispositivo di scorrimento predefinito o finestra con mini-cornice in cui è attualmente ancorato. (Esegue l'override [CBasePane::UndockPane](../../mfc/reference/cbasepane-class.md#undockpane).)|  
|[CPane::UpdateVirtualRect](#updatevirtualrect)|Aggiorna il rettangolo virtuale.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::OnAfterDock](#onafterdock)|Chiamato dal framework quando un riquadro è stato ancorato.|  
|[CPane::OnAfterFloat](#onafterfloat)|Chiamato dal framework quando un riquadro è stata resa mobile.|  
|[CPane::OnBeforeDock](#onbeforedock)|Chiamato dal framework quando sta per essere ancorato nel riquadro.|  
|[CPane::OnBeforeFloat](#onbeforefloat)|Chiamato dal framework quando un riquadro sta per essere resa mobile.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::m_bHandleMinSize](#m_bhandleminsize)|Consente una gestione coerente della dimensione minima per i riquadri.|  
|[Cpane:: M_recentdockinfo](#m_recentdockinfo)|Contiene informazioni di ancoraggio recenti.|  
  
## <a name="remarks"></a>Note  
 In genere, `CPane` oggetti non vengono create istanze direttamente. Se è necessario un riquadro che include funzionalità di ancoraggio, derivare l'oggetto da [CDockablePane](../../mfc/reference/cdockablepane-class.md). Se sono necessarie funzionalità degli strumenti, derivare l'oggetto da [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).  
  
 Quando si deriva una classe da `CPane`, può essere ancorato un [CDockSite](../../mfc/reference/cdocksite-class.md) e possono essere spostata in un [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxPane.h  
  
##  <a name="adjustsizeimmediate"></a>CPane::AdjustSizeImmediate  
 Immediatamente Ricalcola il layout di un riquadro.  
  
```  
virtual void AdjustSizeImmediate(BOOL bRecalcLayout = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bRecalcLayout`  
 `TRUE`Per ricalcolare automaticamente il layout del riquadro. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando si modifica in modo dinamico il layout di un riquadro. Potrebbe ad esempio, si desidera chiamare questo metodo quando si nasconde o mostrano i pulsanti della barra degli strumenti.  
  
##  <a name="allocelements"></a>CPane::AllocElements  
 Allocare spazio di archiviazione per uso interno.  
  
```  
BOOL AllocElements(
    int nElements,  
    int cbElement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nElements`  
 Il numero di elementi per cui si desidera allocare spazio di archiviazione.  
  
 [in] `cbElement`  
 Le dimensioni in byte, di un elemento.  
  
### <a name="return-value"></a>Valore restituito  
 `FALSE`Se l'allocazione di memoria ha esito negativo; in caso contrario, `TRUE`.  
  
##  <a name="allowshowonpanemenu"></a>CPane::AllowShowOnPaneMenu  
 Specifica se il riquadro è elencato nell'elenco dei riquadri per l'applicazione generati dal runtime.  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è visualizzato nell'elenco. in caso contrario, `FALSE`. Restituisce sempre l'implementazione di base `TRUE`.  
  
### <a name="remarks"></a>Note  
 L'applicazione generato dalla creazione guidata applicazioni contiene un'opzione di menu in cui sono elencati i riquadri in esso contenuti. Questo metodo determina se il riquadro è visualizzato nell'elenco.  
  
##  <a name="calcavailablesize"></a>CPane::CalcAvailableSize  
 Calcola la differenza dimensioni tra un rettangolo specificato e il rettangolo della finestra corrente.  
  
```  
virtual CSize CalcAvailableSize(CRect rectRequired);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectRequired`  
 Il rettangolo obbligatorio.  
  
### <a name="return-value"></a>Valore restituito  
 La differenza tra larghezza e altezza tra `rectRequired` e il rettangolo della finestra corrente.  
  
##  <a name="calcinsiderect"></a>CPane::CalcInsideRect  
 Calcola l'interno del rettangolo di un riquadro, inclusi i bordi e i gripper.  
  
```  
void CalcInsideRect(
    CRect& rect,  
    BOOL bHorz) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rect`  
 Contiene le dimensioni e offset dell'area client del riquadro.  
  
 [in] `bHorz`  
 `TRUE`Se il riquadro è orientato orizzontalmente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando è necessario ricalcolare il layout di un riquadro. Il `rect` parametro viene riempito con le dimensioni e offset dell'area client del riquadro. Sono inclusi i relativi bordi e i gripper.  
  
##  <a name="calcrecentdockedrect"></a>CPane::CalcRecentDockedRect  
 Calcola il rettangolo recente ancorato.  
  
```  
void CalcRecentDockedRect();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiorna [cpane:: M_recentdockinfo](#m_recentdockinfo).  
  
##  <a name="calcsize"></a>CPane::CalcSize  
 Calcola le dimensioni del riquadro.  
  
```  
virtual CSize CalcSize(BOOL bVertDock);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bVertDock`  
 `TRUE`Se il riquadro viene ancorato in verticale, `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita di questo metodo restituisce una dimensione pari a (0, 0).  
  
### <a name="remarks"></a>Note  
 Le classi derivate devono eseguire l'override di questo metodo.  
  
##  <a name="canbedocked"></a>CPane::CanBeDocked  
 Determina se il riquadro può essere ancorato al riquadro di base specificato.  
  
```  
virtual BOOL CanBeDocked(CBasePane* pDockBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockBar`  
 Specifica il riquadro in cui questo riquadro è ancorato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo riquadro può essere ancorato nel riquadro di ancoraggio specificato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 In genere, questo metodo viene chiamato dal framework per determinare se un riquadro può essere ancorato al riquadro di ancoraggio specificato. Per determinare che se il riquadro può essere ancorato, il metodo restituisce il riquadro attualmente abilitato l'allineamento di ancoraggio.  
  
 Attivare l'ancoraggio a diversi lati della finestra cornice chiamando [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).  
  
##  <a name="canbetabbeddocument"></a>CPane::CanBeTabbedDocument  
 Determina se il riquadro può essere convertito in un documento a schede.  
  
```  
virtual BOOL CanBeTabbedDocument() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro può essere convertito in un documento a schede. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata e restituire `FALSE` se si desidera impedire che un riquadro viene convertito in un documento a schede. Un documento a schede non verrà elencato nel menu di posizione della finestra.  
  
##  <a name="converttotabbeddocument"></a>CPane::ConvertToTabbedDocument  
 Converte un riquadro ancorato in un documento a schede.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActiveTabOnly`  
 Non utilizzato in `CPane::ConvertToTabbedDocument`.  
  
### <a name="remarks"></a>Note  
 Solo i riquadri ancorabili possono essere convertiti in documenti a schede. Per informazioni, vedere [CDockablePane::ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument).  
  
##  <a name="copystate"></a>CPane::CopyState  
 Copia lo stato di un riquadro.  
  
```  
virtual void CopyState(CPane* pOrgBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pOrgBar`  
 Un puntatore a un riquadro.  
  
### <a name="remarks"></a>Note  
 Questo metodo copia lo stato di `pOrgBar` al riquadro corrente.  
  
##  <a name="create"></a>Cpane:: Create  
 Crea una barra di controllo e lo collega al [CPane](../../mfc/reference/cpane-class.md) oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszClassName`  
 Specifica il nome della classe Windows.  
  
 [in] `dwStyle`  
 Specifica gli attributi di stile della finestra. Per ulteriori informazioni, vedere [stili finestra](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifica le dimensioni iniziali e la posizione del `pParentWnd` finestra, nelle coordinate client.  
  
 [in] [out]`pParentWnd`  
 Specifica la finestra padre di questo riquadro.  
  
 [in] `nID`  
 Specifica l'ID del riquadro.  
  
 [in] `dwControlBarStyle`  
 Specifica lo stile del riquadro. Per ulteriori informazioni, vedere [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).  
  
 [in] [out]`pContext`  
 Specifica il contesto di creazione del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato creato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un riquadro di Windows e lo collega al `CPane` oggetto.  
  
 Se non sono inizializzati in modo esplicito [cpane:: M_recentdockinfo](#m_recentdockinfo) prima di chiamare `Create`, il parametro `rect` verrà utilizzato come il rettangolo quando mobile o ancoraggio del riquadro.  
  
##  <a name="createdefaultminiframe"></a>Cpane:: Createdefaultminiframe  
 Crea una finestra con mini-cornice per un riquadro mobile.  
  
```  
virtual CPaneFrameWnd* CreateDefaultMiniframe(CRect rectInitial);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectInitial`  
 Specifica le dimensioni iniziali e la posizione, nelle coordinate dello schermo, della finestra con mini-cornice per creare.  
  
### <a name="return-value"></a>Valore restituito  
 La finestra cornice appena creato.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per creare una finestra con mini-cornice quando un riquadro è resa mobile. La finestra con mini-cornice può essere di tipo [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) o di tipo [CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md). Viene creata una finestra con mini-cornice più se il riquadro ha il `AFX_CBRS_FLOAT_MULTI` stile.  
  
 Le informazioni sulla classe di runtime per la finestra con mini-cornice viene archiviati nel `CPane::m_pMiniFrameRTC` membro. È possibile utilizzare una classe derivata per impostare il membro se si decide di creare finestre personalizzate con mini-cornice.  
  
##  <a name="createex"></a>Cpane:: CreateEx  
 Crea una barra di controllo e lo collega al [CPane](../../mfc/reference/cpane-class.md) oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    LPCTSTR lpszClassName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    DWORD dwControlBarStyle = AFX_DEFAULT_PANE_STYLE,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwStyleEx`  
 Specifica gli attributi di stile di finestra esteso. Per ulteriori informazioni, vedere [stili finestra estesi](../../mfc/reference/extended-window-styles.md).  
  
 [in] `lpszClassName`  
 Specifica il nome della classe Windows.  
  
 [in] `dwStyle`  
 Specifica gli attributi di stile di finestra. Per ulteriori informazioni, vedere [stili finestra](../../mfc/reference/window-styles.md).  
  
 [in] `rect`  
 Specifica le dimensioni iniziali e la posizione del `pParentWnd` finestra, nelle coordinate client.  
  
 [in] [out]`pParentWnd`  
 Specifica la finestra padre di questo riquadro.  
  
 [in] `nID`  
 Specifica l'ID del riquadro.  
  
 [in] `dwControlBarStyle`  
 Specifica lo stile del riquadro. Per ulteriori informazioni, vedere [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).  
  
 [in] [out]`pContext`  
 Specifica il contesto di creazione per il riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato creato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un riquadro di Windows e lo collega al `CPane` oggetto.  
  
 Se non sono inizializzati in modo esplicito [cpane:: M_recentdockinfo](#m_recentdockinfo) prima di chiamare `CreateEx`, il parametro `rect` verrà utilizzato come il rettangolo quando mobile o ancoraggio del riquadro.  
  
##  <a name="dockbymouse"></a>CPane::DockByMouse  
 Ancora un riquadro usando il mouse.  
  
```  
virtual BOOL DockByMouse(CBasePane* pDockBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockBar`  
 Specifica il riquadro di base per cui si desidera ancorare il riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato ancorato correttamente. in caso contrario, `FALSE`.  
  
##  <a name="dockpane"></a>CPane::DockPane  
 Il riquadro mobile viene ancorato a un riquadro di base.  
  
```  
virtual BOOL DockPane(
    CBasePane* pDockBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pDockBar`  
 Specifica il riquadro di base per ancorare il riquadro.  
  
 [in] `lpRect`  
 Specifica il rettangolo nel riquadro di base in cui questo riquadro è ancorato.  
  
 [in] `dockMethod`  
 Specifica il metodo di ancoraggio da utilizzare. Le opzioni disponibili sono i seguenti:  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`DM_UNKNOWN`|Il framework utilizza questa opzione quando il metodo di ancoraggio è sconosciuto. Il riquadro non archivia posizione mobile più recente. È anche possibile utilizzare questa opzione per ancorare a livello di codice un riquadro quando non è necessario archiviare la posizione mobile recente.|  
|`DM_MOUSE`|Utilizzata internamente.|  
|`DM_DBL_CLICK`|Questa opzione viene utilizzata quando si fa doppio clic gripper. Il riquadro viene riposizionato in corrispondenza della posizione di ancoraggio più recente. Se il riquadro è disinserito facendo doppio clic su, il riquadro viene riposizionato in corrispondenza della posizione a virgola mobile più recente.|  
|`DM_SHOW`|Questa opzione può essere utilizzata a livello di codice ancorare il riquadro. Il riquadro archivia posizione mobile più recente.|  
|`DM_RECT`|Il riquadro viene ancorato nella regione specificata dal `lpRect`.|  
|`DM_STANDARD`|Quando si utilizza questa opzione, il framework disegna il riquadro come un frame di struttura durante lo spostamento.|  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato ancorato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo, il riquadro viene ancorato al riquadro base specificato da di `pDockBar` parametro. È necessario abilitare prima l'ancoraggio chiamando [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).  
  
##  <a name="dockpanestandard"></a>CPane::DockPaneStandard  
 Ancora un riquadro con contorno di ancoraggio (standard).  
  
```  
virtual CPane* DockPaneStandard(BOOL& bWasDocked);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bWasDocked`  
 `TRUE`Se il riquadro è stato correttamente ancorato; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce sempre il `this` puntatore.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato solo per i riquadri che derivano dal [classe CDockablePane](../../mfc/reference/cdockablepane-class.md). Per ulteriori informazioni, vedere [CDockablePane::DockPaneStandard](../../mfc/reference/cdockablepane-class.md#dockpanestandard).  
  
##  <a name="docktoframewindow"></a>CPane::DockToFrameWindow  
 Ancora un riquadro ancorato a un frame.  
  
```  
virtual BOOL DockToFrameWindow(
    DWORD dwAlignment,  
    LPCRECT lpRect = NULL,  
    DWORD dwDockFlags = DT_DOCK_LAST,  
    CBasePane* pRelativeBar = NULL,  
    int nRelativeIndex = -1,  
    BOOL bOuterEdge = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlignment`  
 Il lato del frame principale che si desidera ancorare il riquadro.  
  
 [in] `lpRect`  
 Le dimensioni specificate.  
  
 [in] `dwDockFlags`  
 Ignorato.  
  
 [in] `pRelativeBar`  
 Ignorato.  
  
 [in] `nRelativeIndex`  
 Ignorato.  
  
 [in] `bOuterEdge`  
 Se `TRUE` ed esistono altri riquadri ancorabile sul lato specificati da `dwAlignment`, il riquadro è ancorato all'esterno di altri riquadri, più vicino al bordo del frame principale. Se `FALSE`, il riquadro viene ancorato più vicino al centro dell'area client.  
  
### <a name="return-value"></a>Valore restituito  
 `FALSE`Se un divisore di riquadro ( [CPaneDivider classe](../../mfc/reference/cpanedivider-class.md)) non può essere creato; in caso contrario, `TRUE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="doesallowsiblingbars"></a>CPane::DoesAllowSiblingBars  
 Indica se è possibile ancorare un altro riquadro nella stessa riga in cui il riquadro corrente è ancorato.  
  
```  
virtual BOOL DoesAllowSiblingBars() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se questo riquadro è possibile ancorare a un altro riquadro nella stessa riga come stesso. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 È possibile abilitare o disabilitare questo comportamento chiamando [CPane::SetExclusiveRowMode](#setexclusiverowmode).  
  
 Per impostazione predefinita, le barre degli strumenti sono la modalità di riga esclusivi disabilitata e la barra dei menu è abilitata la modalità riga esclusivi.  
  
##  <a name="floatpane"></a>CPane::FloatPane  
 Scorre il riquadro.  
  
```  
virtual BOOL FloatPane(
    CRect rectFloat,  
    AFX_DOCK_METHOD dockMethod = DM_UNKNOWN,  
    bool bShow = true);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectFloat`  
 Specifica la posizione, nelle coordinate dello schermo, per posizionare il riquadro quando si è resa mobile.  
  
 [in] `dockMethod`  
 Specifica il metodo da usare quando si è resa mobile riquadro ancorato. Per un elenco di valori possibili, vedere [CPane::DockPane](#dockpane).  
  
 [in] `bShow`  
 `TRUE`Per visualizzare il riquadro quando resa mobile; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stata resa mobile correttamente o se il riquadro non è resa mobile poiché [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat) restituisce `FALSE`; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per il riquadro in corrispondenza della posizione specificata da float il `rectFloat` parametro. Questo metodo crea automaticamente una finestra con mini-cornice padre per il riquadro.  
  
##  <a name="getavailableexpandsize"></a>CPane::GetAvailableExpandSize  
 Restituisce la quantità, in pixel, che è possibile espandere il riquadro.  
  
```  
virtual int GetAvailableExpandSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il riquadro è ancorato in orizzontale, il valore restituito è la larghezza disponibile; in caso contrario, il valore restituito è l'altezza disponibile.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getavailablestretchsize"></a>CPane::GetAvailableStretchSize  
 Restituisce la quantità, in pixel, che è possibile ridurre il riquadro.  
  
```  
virtual int GetAvailableStretchSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Quantità, in pixel, che è possibile ridurre il riquadro. Se il riquadro è ancorato in orizzontale, questa quantità corrisponde alla larghezza disponibile; in caso contrario, è l'altezza disponibile.  
  
### <a name="remarks"></a>Note  
 La dimensione di estensione disponibile viene calcolata sottraendo il valore minimo consentito per il riquadro ( [CPane::GetMinSize](#getminsize)) rispetto alla dimensione corrente ( [CWnd::GetWindowRect](../../mfc/reference/cwnd-class.md#getwindowrect)).  
  
##  <a name="getborders"></a>CPane::GetBorders  
 Restituisce lo spessore dei bordi del riquadro.  
  
```  
CRect GetBorders() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la larghezza corrente, in pixel, di ogni lato del riquadro. Ad esempio, il valore del `left` appartenente il `CRect` oggetto è la larghezza del bordo sinistro.  
  
### <a name="remarks"></a>Note  
 Per impostare le dimensioni dei bordi, chiamare [CPane::SetBorders](#setborders).  
  
##  <a name="getclienthotspot"></a>CPane::GetClientHotSpot  
 Restituisce il *sensibile* per il riquadro.  
  
```  
CPoint GetClientHotSpot() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il *sensibile* è il punto nel riquadro che l'utente seleziona e contiene per spostare il riquadro. Un'area sensibile viene utilizzata per l'animazione smooth quando il riquadro viene spostato da una posizione ancorata.  
  
##  <a name="getdocksiterow"></a>CPane::GetDockSiteRow  
 Restituisce la riga di ancoraggio ( [CDockingPanesRow classe](../../mfc/reference/cdockingpanesrow-class.md)) in cui il riquadro è ancorato.  
  
```  
CDockingPanesRow* GetDockSiteRow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CDockingPanesRow`* che punta alla riga di ancoraggio in cui il riquadro è ancorato, o `NULL` se il riquadro non è ancorato.  
  
##  <a name="getexclusiverowmode"></a>CPane::GetExclusiveRowMode  
 Determina se il riquadro è in modalità riga esclusivo.  
  
```  
virtual BOOL GetExclusiveRowMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro in modalità riga esclusivi. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulla modalità di riga esclusivi, vedere [CPane::SetExclusiveRowMode](#setexclusiverowmode).  
  
##  <a name="gethotspot"></a>CPane::GetHotSpot  
 Restituisce l'area sensibile che viene archiviato in un oggetto sottostante `CMFCDragFrameImpl` oggetto.  
  
```  
CPoint GetHotSpot() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Il `CPane` classe contiene un `CMFCDragFrameImpl` oggetto `m_dragFrameImpl`, che è responsabile per disegnare il rettangolo che viene visualizzata quando l'utente sposta un riquadro nella modalità di ancoraggio standard. L'area sensibile viene utilizzato per disegnare il rettangolo rispetto alla posizione del mouse corrente quando l'utente sposta il riquadro.  
  
##  <a name="getminsize"></a>CPane::GetMinSize  
 Recupera il valore minimo consentito per il riquadro.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `size`  
 Oggetto `CSize` oggetto che viene riempito con il valore minimo consentito.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanename"></a>CPane::GetPaneName  
 Recupera il titolo del riquadro.  
  
```  
virtual void GetPaneName(CString& strName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `strName`  
 Oggetto `CString` oggetto che viene riempito con il nome della didascalia.  
  
### <a name="remarks"></a>Note  
 Il titolo del riquadro viene visualizzato nell'area della didascalia quando il riquadro è ancorato o mobile. Se il riquadro è parte di un gruppo a schede, il titolo viene visualizzato nell'area delle schede. Se il riquadro in modalità Nascondi automaticamente, il titolo viene visualizzato un `CMFCAutoHideButton`.  
  
##  <a name="getvirtualrect"></a>CPane::GetVirtualRect  
 Recupera il *virtuale rettangolo* del riquadro.  
  
```  
void GetVirtualRect(CRect& rectVirtual) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectVirtual`  
 Oggetto `CRect` oggetto che viene riempito con il rettangolo virtuale.  
  
### <a name="remarks"></a>Note  
 Quando si sposta un riquadro, il framework memorizza dalla posizione originale del riquadro in un rettangolo virtuale. Il framework è possibile utilizzare il rettangolo virtuale per ripristinare la posizione originale del riquadro.  
  
 Non chiamare metodi che sono correlati ai rettangoli virtuali, a meno che non si stanno spostando i riquadri a livello di codice.  
  
##  <a name="ischangestate"></a>CPane::IsChangeState  
 Come il riquadro è stato spostato, questo metodo consente di analizzare la posizione rispetto agli altri riquadri, le righe di ancoraggio e windows con mini-cornice e restituisce l'oggetto appropriato `AFX_CS_STATUS` valore.  
  
```  
virtual AFX_CS_STATUS IsChangeState(
    int nOffset,  
    CBasePane** ppTargetBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nOffset`  
 Specifica la sensibilità ancoraggio. Ad esempio, un riquadro che viene spostato all'interno di `nOffset` pixel da una riga ancorare la finestra risulterà ancorata.  
  
 [in] `ppTargetBar`  
 Quando termina, il metodo `ppTargetBar` contiene un puntatore all'oggetto a cui il riquadro corrente deve essere ancorato, o `NULL` se nessun tipo di ancoraggio deve essere eseguita.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei seguenti `AFX_CS_STATUS` valori:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`CS_NOTHING`|Il riquadro non è vicino a un sito di ancoraggio. Il framework non ancorare il riquadro.|  
|`CS_DOCK_IMMEDIATELY`|Il riquadro è su un sito di ancoraggio e `DT_IMMEDIATE` stile è abilitato. Il framework ancora il riquadro immediatamente.|  
|`CS_DELAY_DOCK`|Il riquadro è su un sito di ancoraggio è un altro riquadro ancorato o un bordo della cornice principale. Il riquadro viene ancorato framework quando l'utente rilascia lo spostamento.|  
|`CS_DELAY_DOCK_TO_TAB`|Il riquadro è su un sito di ancoraggio che causa il riquadro per essere inserito in una finestra a schede. Questo errore si verifica quando il riquadro è tramite la didascalia di un altro riquadro ancorato o sull'area della scheda di un riquadro a schede. Il riquadro viene ancorato framework quando l'utente rilascia lo spostamento.|  
  
##  <a name="isdragmode"></a>CPane::IsDragMode  
 Specifica se il riquadro è stato spostato.  
  
```  
virtual BOOL IsDragMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro viene spostato; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isinfloatingmultipaneframewnd"></a>CPane::IsInFloatingMultiPaneFrameWnd  
 Specifica se il riquadro è in una finestra cornice a più riquadri ( [CMultiPaneFrameWnd classe](../../mfc/reference/cmultipaneframewnd-class.md)).  
  
```  
virtual BOOL IsInFloatingMultiPaneFrameWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro in una finestra cornice a più riquadri. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Solo i riquadri ancorabili possono spostarsi in una finestra cornice a più riquadri. Pertanto, `CPane::IsInFloatingMultiPaneFrameWnd` restituisce sempre `FALSE`.  
  
##  <a name="isleftof"></a>CPane::IsLeftOf  
 Determina se il riquadro viene lasciato di (o versione successiva) del rettangolo specificato.  
  
```  
bool IsLeftOf(
    CRect rect,  
    bool bWindowRect = true) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Oggetto `CRect` oggetto utilizzato per il confronto.  
  
 [in] `bWindowRect`  
 Se `TRUE`, `rect` si presuppone che le coordinate dello schermo; se `FALSE`, `rect` si presuppone che le coordinate del client.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Se il riquadro è ancorato in orizzontale, questo metodo controlla se il percorso è a sinistra della `rect`. In caso contrario, questo metodo controlla se il percorso è sopra `rect`.  
  
##  <a name="isresizable"></a>CPane::IsResizable  
 Specifica se il riquadro è ridimensionabile.  
  
```  
virtual BOOL IsResizable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è ridimensionabile. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Base `CPane` oggetti non sono ridimensionabili.  
  
 Il gestore di ancoraggio utilizza il flag ridimensionabile per determinare il layout del riquadro. Riquadri ridimensionabili non si trovano sempre ai bordi esterni del frame principale.  
  
 Riquadri non ridimensionabile non possono trovarsi in contenitori di ancoraggio.  
  
##  <a name="istabbed"></a>CPane::IsTabbed  
 Determina se il riquadro è stato inserito nel controllo struttura a schede di una finestra a schede.  
  
```  
virtual BOOL IsTabbed() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è a schede; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Lo stato a schede viene gestito separatamente da Mobile ancorato e stati Nascondi automaticamente.  
  
##  <a name="loadstate"></a>CPane::LoadState  
 Carica lo stato del riquadro dal Registro di sistema.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Nome del profilo.  
  
 [in] `nIndex`  
 Indice di profilo.  
  
 [in] `uiID`  
 ID del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato del riquadro è stato caricato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per caricare lo stato del riquadro dal Registro di sistema. Eseguire l'override in una classe derivata per caricare le informazioni aggiuntive che viene salvata dal [CPane::SaveState](#savestate).  
  
 Quando si esegue l'override di questo metodo, anche chiamare il metodo di base e restituire `FALSE` se il metodo di base restituisce `FALSE`.  
  
##  <a name="m_bhandleminsize"></a>CPane::m_bHandleMinSize  
 Consente una gestione coerente della dimensione minima del riquadro.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHandleMinSize;  
```  
  
### <a name="remarks"></a>Note  
 Se uno o più riquadri ancorati nell'applicazione di eseguire l'override `GetMinSize`, o se l'applicazione chiama `SetMinSize`, si consiglia di impostare il membro statico `TRUE` per permettere il framework di gestire in modo coerente come vengono ridimensionati i riquadri.  
  
 Se questo valore è impostato su `TRUE`, la cui dimensione deve essere ridotta la dimensione minima di sotto di tutti i riquadri vengono ritagliati, non estesa. Poiché il framework utilizza aree della finestra per scopi di ridimensionamento di riquadro, non modificare le dimensioni dell'area della finestra per ancorare i riquadri se questo valore è impostato su `TRUE`.  
  
##  <a name="m_recentdockinfo"></a>Cpane:: M_recentdockinfo  
 Contiene informazioni di ancoraggio recenti.  
  
```  
CRecentDockSiteInfo m_recentDockInfo;  
```  
  
### <a name="remarks"></a>Note  
 Il framework memorizza le informazioni sullo stato di ancoraggio più recente per il riquadro di questo membro.  
  
##  <a name="movebyalignment"></a>CPane::MoveByAlignment  
 Sposta il riquadro e il rettangolo virtuale la quantità specificata.  
  
```  
BOOL MoveByAlignment(
    DWORD dwAlignment,  
    int nOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlignment`  
 Specifica l'allineamento di riquadro.  
  
 [in] `nOffset`  
 Quantità, in pixel, per cui si desidera spostare il riquadro e il rettangolo virtuale.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 `dwAlignment`può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`CBRS_ALIGN_TOP`|Consente il riquadro essere ancorata nella parte superiore dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_BOTTOM`|Consente il riquadro essere ancorata nella parte inferiore dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_LEFT`|Consente il riquadro ancorato a sinistra dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_RIGHT`|Consente il riquadro ancorato a destra dell'area client di una finestra cornice.|  
|`CBRS_ALIGN_ANY`|Consente il riquadro ancorato a qualsiasi lato dell'area client di una finestra cornice.|  
  
 Se `dwAlignment` contiene il `CBRS_ALIGN_LEFT` o `CBRS_ALIGN_RIGHT` flag, il riquadro e rettangolo virtuale vengono spostati a orizzontalmente; in caso contrario, se `dwAlignment` contiene il `CBRS_ALIGN_TOP` o `CBRS_ALIGN_BOTTOM` flag, il riquadro e rettangolo virtuale vengono spostati in senso verticale.  
  
##  <a name="movepane"></a>CPane::MovePane  
 Sposta il riquadro nel rettangolo specificato.  
  
```  
virtual CSize MovePane(
    CRect rectNew,  
    BOOL bForceMove,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectNew`  
 Specifica il nuovo rettangolo per il riquadro.  
  
 [in] `bForceMove`  
 Se `TRUE`, questo metodo ignora la dimensione minima del riquadro consentiti ( [CPane::GetMinSize](#getminsize)); in caso contrario, il riquadro viene modificato, se necessario, per assicurarsi che sia almeno il valore minimo consentito.  
  
 [in] `hdwp`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che contiene le differenze di larghezza e altezza tra i rettangoli nuovi e precedenti (vecchio rettangolo - `rectNew`).  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato solo per i riquadri ancorabili.  
  
##  <a name="onafterchangeparent"></a>CPane::OnAfterChangeParent  
 Chiamato dal framework quando l'elemento padre di un riquadro è stato modificato.  
  
```  
virtual void OnAfterChangeParent(CWnd* pWndOldParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pWndOldParent`  
 Finestra padre di precedente del riquadro.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'elemento padre di un riquadro è stato modificato a causa di un'operazione di ancoraggio o a virgola mobile.  
  
##  <a name="onafterdock"></a>CPane::OnAfterDock  
 Chiamato dal framework quando un riquadro è stato ancorato.  
  
```  
virtual void OnAfterDock(
    CBasePane* pBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Questo parametro non viene usato.  
  
 [in] `lpRect`  
 Questo parametro non viene usato.  
  
 [in] `dockMethod`  
 Questo parametro non viene usato.  
  
##  <a name="onafterfloat"></a>CPane::OnAfterFloat  
 Chiamato dal framework dopo un riquadro mobile.  
  
```  
virtual void OnAfterFloat();
```  
  
### <a name="remarks"></a>Note  
 È possibile eseguire l'override di questo metodo in una classe derivata se si desidera eseguire l'elaborazione dopo che un riquadro mobile.  
  
##  <a name="onbeforechangeparent"></a>CPane::OnBeforeChangeParent  
 Chiamato dal framework quando sta per modificare l'elemento padre del riquadro.  
  
```  
virtual void OnBeforeChangeParent(
    CWnd* pWndNewParent,  
    BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pWndNewParent`  
 Specifica la nuova finestra padre.  
  
 [in] `bDelay`  
 `TRUE`Per ritardare la regolazione di layout ancoraggio globale; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'elemento padre del riquadro sta per essere modificata perché è in corso il riquadro ancorato o mobile.  
  
 Per impostazione predefinita, il riquadro è registrato con il riquadro ancorato chiamando `CDockSite::RemovePane`.  
  
##  <a name="onbeforedock"></a>CPane::OnBeforeDock  
 Chiamato dal framework quando sta per ancorare il riquadro.  
  
```  
virtual BOOL OnBeforeDock(
    CBasePane** ppDockBar,  
    LPCRECT lpRect,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`ppDockBar`  
 Specifica il riquadro che in questo riquadro è ancoraggio a.  
  
 [in] `lpRect`  
 Specifica il rettangolo di ancoraggio.  
  
 [in] `dockMethod`  
 Specifica il metodo di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro può essere ancorato. Se la funzione restituisce `FALSE`, verrà interrotto l'operazione di ancoraggio.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un riquadro sta per essere ancorato. È possibile eseguire l'override di questo metodo in una classe derivata se si desidera eseguire l'elaborazione prima di un riquadro è infine ancorato.  
  
##  <a name="onbeforefloat"></a>CPane::OnBeforeFloat  
 Chiamato dal framework quando un riquadro sta per float.  
  
```  
virtual BOOL OnBeforeFloat(
    CRect& rectFloat,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectFloat`  
 Specifica la posizione e dimensioni del riquadro quando è in uno stato a virgola mobile.  
  
 [in] `dockMethod`  
 Specifica il metodo di ancoraggio del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se nel riquadro può essere resa mobile; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando un riquadro sta per float. È possibile eseguire l'override di questo metodo in una classe derivata se si desidera eseguire l'elaborazione prima che il riquadro infine tipi a virgola mobile.  
  
##  <a name="onpressclosebutton"></a>CPane::OnPressCloseButton  
 Chiamato dal framework quando l'utente preme il pulsante Chiudi la didascalia per il riquadro.  
  
```  
virtual void OnPressCloseButton();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando l'utente preme il **Chiudi** pulsante sulla didascalia del riquadro. Per ricevere notifiche sul **Chiudi** evento, è possibile eseguire l'override di questo metodo in una classe derivata.  
  
##  <a name="onshowcontrolbarmenu"></a>Cpane:: Onshowcontrolbarmenu  
 Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato.  
  
```  
virtual BOOL OnShowControlBarMenu(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Specifica il percorso di menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il menu può essere visualizzato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il menu contiene più elementi che consentono di specificare il comportamento del riquadro, vale a dire: **mobile**, **ancoraggio**, **Nascondi automaticamente**, e **nascondere**. È possibile abilitare questo menu per tutti i riquadri chiamando [CDockingManager::EnableDockSiteMenu](../../mfc/reference/cdockingmanager-class.md#enabledocksitemenu).  
  
##  <a name="recalclayout"></a>Cpane:: RecalcLayout  
 Ricalcola le informazioni di layout per il riquadro.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Se il riquadro è ancorato, questo metodo aggiorna il rettangolo virtuale per il riquadro impostandone la dimensione alla dimensione corrente del riquadro.  
  
 Se il riquadro è mobile, questo metodo invia una notifica di con mini-cornice padre per modificare le dimensioni del riquadro per le dimensioni della mini-cornice. Il framework garantisce la mini-cornice è maggiore o uguale al minimo consentito di dimensioni per il riquadro ( [CPane::GetMinSize](#getminsize)) e, se necessario, ridimensiona la mini-cornice.  
  
##  <a name="savestate"></a>CPane::SaveState  
 Salva lo stato del riquadro nel Registro di sistema.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Nome del profilo.  
  
 [in] `nIndex`  
 Indice di profilo.  
  
 [in] `uiID`  
 ID del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato è stato salvato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando si salva lo stato del riquadro nel Registro di sistema. Eseguire l'override `SaveState` in una classe derivata per archiviare informazioni aggiuntive.  
  
 Quando si esegue l'override di questo metodo, anche chiamare il metodo di base e restituire `FALSE` se il metodo di base restituisce `FALSE`.  
  
##  <a name="setactiveingroup"></a>Cpane:: Setactiveingroup  
 Contrassegna un riquadro come attiva.  
  
```  
virtual void SetActiveInGroup(BOOL bActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActive`  
 Oggetto `BOOL` che specifica se il riquadro è contrassegnato come attiva.  
  
### <a name="remarks"></a>Note  
 Quando viene visualizzato un riquadro ancorato o viene scelto un pulsante Nascondi automaticamente, il riquadro Nascondi automaticamente corrispondente è contrassegnato come attivo.  
  
 L'aspetto di un pulsante Nascondi automaticamente associato il riquadro si basa su due fattori. Se il riquadro è attivo e `static``BOOL``CMFCAutoHideButton::m_bOverlappingTabs` è `TRUE`, il framework Visualizza il pulsante Nascondi automaticamente come un'icona e un'etichetta. Per un riquadro inattivo, il framework visualizza solo l'icona Nascondi automaticamente.  
  
 Se `CMFCAutoHideButton::m_bOverlappingTabs` è `FALSE`, o se il riquadro non si trova in un gruppo, il framework Visualizza il pulsante Nascondi automaticamente associato come un'icona e un'etichetta.  
  
##  <a name="setborders"></a>CPane::SetBorders  
 Imposta i valori del bordo del riquadro.  
  
```  
void SetBorders(
    int cxLeft = 0,  
    int cyTop = 0,  
    int cxRight = 0,  
    int cyBottom = 0);  
  
void SetBorders(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `cxLeft`  
 Specifica la larghezza, in pixel, del bordo sinistro del riquadro.  
  
 [in] `cyTop`  
 Specifica la larghezza, in pixel, del bordo superiore del riquadro.  
  
 [in] `cxRight`  
 Specifica la larghezza, in pixel, del bordo destro del riquadro.  
  
 [in] `cyBottom`  
 Specifica la larghezza, in pixel, del bordo inferiore del riquadro.  
  
 [in] `lpRect`  
 Oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la larghezza, in pixel, di ogni bordo del riquadro.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare le dimensioni dei bordi del riquadro.  
  
##  <a name="setclienthotspot"></a>CPane::SetClientHotSpot  
 Imposta il *sensibile* per il riquadro.  
  
```  
void SetClientHotSpot(const CPoint& ptNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ptNew`  
 Oggetto `CPoint` oggetto che specifica la nuova area sensibile.  
  
### <a name="remarks"></a>Note  
 Il *sensibile* è il punto nel riquadro che l'utente seleziona e contiene per spostare il riquadro. Un'area sensibile viene utilizzata per smooth animazione quando viene trascinato il riquadro da una posizione ancorata.  
  
##  <a name="setdockstate"></a>CPane::SetDockState  
 Ripristina informazioni sullo stato per il riquadro di ancoraggio.  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockManager`  
 Puntatore al gestore di ancoraggio per la finestra cornice principale.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per il ripristino delle informazioni sullo stato di ancoraggio recenti per il riquadro. Un riquadro archivia informazioni sullo stato di ancoraggio recenti in [cpane:: M_recentdockinfo](#m_recentdockinfo). Per ulteriori informazioni, vedere il [CRecentDockSiteInfo classe](../../mfc/reference/crecentdocksiteinfo-class.md).  
  
 È anche possibile chiamare questo metodo per impostare lo stato di ancoraggio quando si caricano informazioni del riquadro da un'origine esterna.  
  
##  <a name="setexclusiverowmode"></a>CPane::SetExclusiveRowMode  
 Abilita o disabilita la modalità di riga esclusivi.  
  
```  
virtual void SetExclusiveRowMode(BOOL bExclusive = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bExclusive`  
 `TRUE`Per abilitare la modalità di riga esclusivi; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per abilitare o disabilitare la modalità di riga esclusivi. Quando un riquadro è in modalità riga esclusivo, non è possibile condividere la stessa riga con le barre degli strumenti.  
  
 Per impostazione predefinita, tutte le barre degli strumenti sono la modalità di riga esclusivi disabilitata e la barra dei menu è abilitata la modalità riga esclusivi.  
  
##  <a name="setminsize"></a>CPane::SetMinSize  
 Imposta il valore minimo consentito per il riquadro.  
  
```  
void SetMinSize(const CSize& size);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `size`  
 Oggetto `CSize` oggetto che contiene il valore minimo consentito per il riquadro.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setvirtualrect"></a>CPane::SetVirtualRect  
 Imposta il *virtuale rettangolo* del riquadro.  
  
```  
void SetVirtualRect(
    const CRect& rect,  
    BOOL bMapToParent = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Oggetto `CRect` oggetto che specifica il rettangolo virtuale da impostare.  
  
 [in] `bMapToParent`  
 Specificare `TRUE` se `rect` contiene punti rispetto alla finestra padre.  
  
### <a name="remarks"></a>Note  
 Oggetto *virtuale rettangolo* archivia dalla posizione originale di un riquadro quando viene spostato. Il framework è possibile utilizzare il rettangolo virtuale per ripristinare la posizione originale.  
  
 Non chiamare metodi che sono correlati ai rettangoli virtuali, a meno che non si stanno spostando i riquadri a livello di codice.  
  
##  <a name="setminiframertc"></a>CPane::SetMiniFrameRTC  
 Imposta le informazioni sulla classe di runtime per la finestra con mini-cornice predefinita.  
  
```  
void SetMiniFrameRTC(CRuntimeClass* pClass);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out]`pClass`  
 Specifica le informazioni sulla classe di runtime per la finestra con mini-cornice.  
  
### <a name="remarks"></a>Note  
 Quando un riquadro è resa mobile, viene posto un [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) finestra (mini-cornice). È possibile fornire un oggetto personalizzato `CPaneFrameWnd`-classe derivata che sarà utilizzata quando [cpane:: Createdefaultminiframe](#createdefaultminiframe) viene chiamato.  
  
##  <a name="stretchpanedeferwndpos"></a>CPane::StretchPaneDeferWndPos  
 Estende il riquadro verticale o orizzontale in base stile di ancoraggio.  
  
```  
virtual int StretchPaneDeferWndPos(
    int nStretchSize,  
    HDWP& hdwp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nStretchSize`  
 Quantità, in pixel, per l'estensione nel riquadro. Utilizzare un valore negativo per compattare il riquadro.  
  
 [in] `hdwp`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 La quantità effettiva, in pixel, che è stato esteso il riquadro.  
  
### <a name="remarks"></a>Note  
 Se necessario, questo metodo modifica `nStretchSize` per garantire che il riquadro non superi i limiti delle dimensioni. Questi limiti vengono ottenuti chiamando [CPane::GetAvailableStretchSize](#getavailablestretchsize) e [CPane::GetAvailableExpandSize](#getavailableexpandsize).  
  
##  <a name="toggleautohide"></a>CPane::ToggleAutoHide  
 Attiva la modalità Nascondi automaticamente.  
  
```  
virtual void ToggleAutoHide();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per attivare o disattivare la modalità Nascondi automaticamente. Per poter essere passa alla modalità Nascondi automaticamente, un riquadro deve essere ancorato a una finestra cornice principale.  
  
##  <a name="undockpane"></a>CPane::UndockPane  
 Rimuove il riquadro dal sito di ancoraggio, il dispositivo di scorrimento predefinito o finestra con mini-cornice in cui è attualmente ancorato.  
  
```  
virtual void UndockPane(BOOL bDelay = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDelay`  
 Se `FALSE`, il framework chiama [cbasepane:: Adjustdockinglayout](../../mfc/reference/cbasepane-class.md#adjustdockinglayout) per adattare il layout di ancoraggio.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per annullare l'ancoraggio a livello di codice un riquadro.  
  
##  <a name="updatevirtualrect"></a>CPane::UpdateVirtualRect  
 Aggiorna il rettangolo virtuale.  
  
```  
void UpdateVirtualRect();  
void UpdateVirtualRect(CPoint ptOffset);  
  void UpdateVirtualRect(CSize sizeNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ptOffset`  
 Oggetto `CPoint` oggetto che specifica un offset dal quale spostare il riquadro.  
  
 [in] `sizeNew`  
 Oggetto `CSize` oggetto che specifica una nuova dimensione per il riquadro.  
  
### <a name="remarks"></a>Note  
 Il primo overload imposta il rettangolo virtuale utilizzando la posizione corrente e le dimensioni del riquadro.  
  
 Il secondo overload viene spostata in avanti il rettangolo virtuale la quantità specificata dal `ptOffset`.  
  
 Il terzo overload imposta il rettangolo virtuale utilizzando la posizione corrente del riquadro e la dimensione specificata dal `sizeNew`.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CBasePane](../../mfc/reference/cbasepane-class.md)

