---
title: Classe COleIPFrameWndEx | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleIPFrameWndEx
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::AddDockSite
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::AddPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::AdjustDockingLayout
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::DockPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::DockPaneLeftOf
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::EnableAutoHidePanes
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::EnableDocking
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::EnablePaneMenu
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetActivePopup
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetContainerFrameWindow
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetDefaultResId
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetDockFrame
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetDockingManager
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetMainFrame
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetMenuBar
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetTearOffBars
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::GetToolbarButtonToolTipText
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::InsertPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::IsMenuBarAvailable
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::IsPointNearDockSite
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::LoadFrame
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnCloseDockingPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnCloseMiniFrame
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnClosePopupMenu
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnCmdMsg
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnDrawMenuImage
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnDrawMenuLogo
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnMenuButtonToolHitTest
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnMoveMiniFrame
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnSetPreviewMode
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnShowCustomizePane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnShowPanes
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnShowPopupMenu
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::OnTearOffMenu
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::PaneFromPoint
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::PreTranslateMessage
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::RecalcLayout
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::RemovePaneFromDockManager
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::SetDockState
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::SetupToolbarMenu
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::ShowPane
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::WinHelpA
- AFXOLEIPFRAMEWNDEX/COleIPFrameWndEx::InitUserToobars
dev_langs:
- C++
helpviewer_keywords:
- COleIPFrameWndEx class
ms.assetid: ebff1560-a1eb-4854-af00-95d4a192bd55
caps.latest.revision: 34
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 5eec8e3a9cc4ad71a1ee3de9f6d5f25cffef1242
ms.lasthandoff: 02/24/2017

---
# <a name="coleipframewndex-class"></a>Classe COleIPFrameWndEx
La classe `COleIPFrameWndEx` implementa un contenitore OLE che supporta MFC. È necessario derivare la classe finestra cornice sul posto per l'applicazione dal `COleIPFrameWndEx` anziché dalla classe di [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md)(classe).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleIPFrameWndEx : public COleIPFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWndEx::AddDockSite](#adddocksite)||  
|[COleIPFrameWndEx::AddPane](#addpane)||  
|[COleIPFrameWndEx::AdjustDockingLayout](#adjustdockinglayout)||  
|[COleIPFrameWndEx::DockPane](#dockpane)||  
|[COleIPFrameWndEx::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[COleIPFrameWndEx::EnableAutoHidePanes](#enableautohidepanes)||  
|[COleIPFrameWndEx::EnableDocking](#enabledocking)||  
|[COleIPFrameWndEx::EnablePaneMenu](#enablepanemenu)||  
|[COleIPFrameWndEx::GetActivePopup](#getactivepopup)|Restituisce un puntatore al menu di scelta rapida attualmente visualizzato.|  
|[COleIPFrameWndEx::GetContainerFrameWindow](#getcontainerframewindow)||  
|[COleIPFrameWndEx::GetDefaultResId](#getdefaultresid)|Restituisce l'ID risorsa della finestra cornice specificata quando è stata caricata la finestra.|  
|[COleIPFrameWndEx::GetDockFrame](#getdockframe)||  
|[COleIPFrameWndEx::GetDockingManager](#getdockingmanager)||  
|[COleIPFrameWndEx::GetMainFrame](#getmainframe)||  
|[COleIPFrameWndEx::GetMenuBar](#getmenubar)|Restituisce un puntatore all'oggetto della barra dei menu collegato alla finestra cornice.|  
|[COleIPFrameWndEx::GetPane](#getpane)||  
|[COleIPFrameWndEx::GetTearOffBars](#gettearoffbars)|Restituisce un elenco di oggetti del riquadro che si trovano in uno stato a comparsa.|  
|[COleIPFrameWndEx::GetToolbarButtonToolTipText](#gettoolbarbuttontooltiptext)|Chiamato dal framework prima che venga visualizzata la descrizione comando per un pulsante.|  
|[COleIPFrameWndEx::InsertPane](#insertpane)||  
|[COleIPFrameWndEx::IsMenuBarAvailable](#ismenubaravailable)|Determina se il puntatore all'oggetto della barra dei menu non è `NULL`.|  
|[COleIPFrameWndEx::IsPointNearDockSite](#ispointneardocksite)||  
|[COleIPFrameWndEx::LoadFrame](#loadframe)|Esegue l'override di `COleIPFrameWnd::LoadFrame`.|  
|[COleIPFrameWndEx::OnCloseDockingPane](#onclosedockingpane)||  
|[COleIPFrameWndEx::OnCloseMiniFrame](#oncloseminiframe)||  
|[COleIPFrameWndEx::OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|  
|[COleIPFrameWndEx::OnCmdMsg](#oncmdmsg)|Esegue l'override di `CFrameWnd::OnCmdMsg`.|  
|[COleIPFrameWndEx::OnDrawMenuImage](#ondrawmenuimage)|Chiamato dal framework quando viene disegnata l'immagine associata a una voce di menu.|  
|[COleIPFrameWndEx::OnDrawMenuLogo](#ondrawmenulogo)|Chiamato dal framework quando un [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)oggetto elabora un messaggio WM_PAINT.|  
|[COleIPFrameWndEx::OnMenuButtonToolHitTest](#onmenubuttontoolhittest)|Chiamato dal framework quando un [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)oggetto elabora WM_NCHITTEST messaggio.|  
|[COleIPFrameWndEx::OnMoveMiniFrame](#onmoveminiframe)||  
|[COleIPFrameWndEx::OnSetPreviewMode](#onsetpreviewmode)|Chiamare questa funzione membro per impostare la finestra cornice principale dell'applicazione nella modalità di anteprima di stampa ed e al di fuori di essa. (Esegue l'override di [CFrameWnd::OnSetPreviewMode](../../mfc/reference/cframewnd-class.md#onsetpreviewmode).)|  
|[COleIPFrameWndEx::OnShowCustomizePane](#onshowcustomizepane)||  
|[COleIPFrameWndEx::OnShowPanes](#onshowpanes)||  
|[COleIPFrameWndEx::OnShowPopupMenu](#onshowpopupmenu)|Chiamato dal framework durante l'attivazione di un menu a comparsa.|  
|[COleIPFrameWndEx::OnTearOffMenu](#ontearoffmenu)|Chiamato dal framework durante l'attivazione di un menu con barra a comparsa.|  
|[COleIPFrameWndEx::PaneFromPoint](#panefrompoint)||  
|[COleIPFrameWndEx::PreTranslateMessage](#pretranslatemessage)|Esegue l'override di `COleIPFrameWnd::PreTranslateMessage`.|  
|[COleIPFrameWndEx::RecalcLayout](#recalclayout)|Esegue l'override di `COleIPFrameWnd::RecalcLayout`.|  
|[COleIPFrameWndEx::RemovePaneFromDockManager](#removepanefromdockmanager)||  
|[COleIPFrameWndEx::SetDockState](#setdockstate)|Si applica lo stato di ancoraggio specificato ai pannelli che appartengono alla finestra cornice.|  
|[COleIPFrameWndEx::SetupToolbarMenu](#setuptoolbarmenu)|Modifica un oggetto barra degli strumenti cercando elementi fittizi e sostituendoli con gli elementi definiti dall'utente specificati.|  
|[COleIPFrameWndEx::ShowPane](#showpane)||  
|[COleIPFrameWndEx::WinHelpA](#winhelpa)|Chiamato dal framework per avviare l'applicazione WinHelp o la Guida sensibile al contesto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWndEx::InitUserToobars](#initusertoobars)|Indica al framework di inizializzare un intervallo di ID dei controlli assegnati alle barre degli strumenti definite dall'utente.|  
  
## <a name="example"></a>Esempio  
 L'esempio seguente illustra come creare una sottoclasse per un'istanza della classe `COleIPFrameWndEx` e sostituirne il metodo. L'esempio illustra come sostituire i metodi `OnDestory` , `RepositionFrame` , `RecalcLayout` e `CalcWindowRect` . Questo frammento di codice fa parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad n.&1;](../../mfc/reference/codesnippet/cpp/coleipframewndex-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md)  
  
 [COleIPFrameWndEx](../../mfc/reference/coleipframewndex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxoleipframewndex.h  
  
##  <a name="adddocksite"></a>COleIPFrameWndEx::AddDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void AddDockSite();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="addpane"></a>COleIPFrameWndEx::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `bTail`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="adjustdockinglayout"></a>COleIPFrameWndEx::AdjustDockingLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hdwp`  
  
### <a name="remarks"></a>Note  
  
##  <a name="dockpane"></a>COleIPFrameWndEx::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `nDockBarID`  
 [in] `lpRect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="dockpaneleftof"></a>COleIPFrameWndEx::DockPaneLeftOf  
 Ancora un riquadro a sinistra di un altro riquadro.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore al riquadro per ancorare.  
  
 [in] `pLeftOf`  
 Puntatore al riquadro che funge da origine.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se l'operazione ha esito positivo. In caso contrario restituisce `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ancorare diversi oggetti riquadro in un ordine predefinito. Questo metodo viene ancorato riquadro specificato da `pBar` a sinistra del riquadro specificato da `pLeftOf`.  
  
##  <a name="enableautohidepanes"></a>COleIPFrameWndEx::EnableAutoHidePanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabledocking"></a>COleIPFrameWndEx::EnableDocking  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enablepanemenu"></a>COleIPFrameWndEx::EnablePaneMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnablePaneMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeLabel,  
    UINT uiViewToolbarsMenuEntryID,  
    BOOL bContextMenuShowsToolbarsOnly = FALSE,  
    BOOL bViewMenuShowsToolbarsOnly = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 [in] `uiCustomizeCmd`  
 [in] `strCustomizeLabel`  
 [in] `uiViewToolbarsMenuEntryID`  
 [in] `bContextMenuShowsToolbarsOnly`  
 [in] `bViewMenuShowsToolbarsOnly`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getactivepopup"></a>COleIPFrameWndEx::GetActivePopup  
 Restituisce un puntatore al menu di scelta rapida attualmente visualizzato.  
  
```  
CMFCPopupMenu* GetActivePopup() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al menu popup attivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per ottenere un puntatore per il [CMFCPopupMenu classe](../../mfc/reference/cmfcpopupmenu-class.md) oggetto attualmente visualizzato.  
  
##  <a name="getcontainerframewindow"></a>COleIPFrameWndEx::GetContainerFrameWindow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
COleCntrFrameWndEx* GetContainerFrameWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdefaultresid"></a>COleIPFrameWndEx::GetDefaultResId  
 Restituisce l'ID di risorsa di menu che è stato specificato quando la finestra cornice caricato il menu.  
  
```  
UINT GetDefaultResId() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ID di risorsa del menu o 0 se la finestra cornice non dispone di alcuna barra di menu.  
  
### <a name="remarks"></a>Note  
 Chiamata questa funzione per recuperare l'ID di risorsa che è stato specificato quando la finestra cornice caricato la risorsa menu chiamando `COleIPFrameWndEx::LoadFrame`.  
  
##  <a name="getdockframe"></a>COleIPFrameWndEx::GetDockFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CFrameWnd* GetDockFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdockingmanager"></a>COleIPFrameWndEx::GetDockingManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CDockingManager* GetDockingManager();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getmainframe"></a>COleIPFrameWndEx::GetMainFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CFrameWnd* GetMainFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getmenubar"></a>COleIPFrameWndEx::GetMenuBar  
 Restituisce un puntatore all'oggetto della barra dei menu collegato alla finestra cornice.  
  
```  
const CMFCMenuBar* GetMenuBar() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto barra dei menu.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per recuperare un puntatore all'oggetto barra dei menu a cui appartiene il `COleIPFrameWndEx` oggetto.  
  
##  <a name="getpane"></a>COleIPFrameWndEx::GetPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettearoffbars"></a>COleIPFrameWndEx::GetTearOffBars  
 Restituisce un elenco di oggetti del riquadro che si trovano in uno stato a comparsa.  
  
```  
const CObList& GetTearOffBars() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un `CObList` oggetto che contiene una raccolta di puntatori al [CBasePane classe](../../mfc/reference/cbasepane-class.md)-oggetti derivati.  
  
### <a name="remarks"></a>Note  
 Il `COleIPFrameWndEx` oggetto gestisce la raccolta di menu a comparsa come un elenco di [CBasePane classe](../../mfc/reference/cbasepane-class.md)-oggetti derivati. Utilizzare questo metodo per recuperare un riferimento a questo elenco.  
  
##  <a name="gettoolbarbuttontooltiptext"></a>COleIPFrameWndEx::GetToolbarButtonToolTipText  
 Chiamato dal framework prima che venga visualizzata la descrizione comando per un pulsante.  
  
```  
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton* pButton,  
    CString& strTTText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Puntatore al pulsante.  
  
 [in] `strTTText`  
 Puntatore al testo della descrizione comandi.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare la visualizzazione delle descrizioni comandi sulle barre degli strumenti.  
  
##  <a name="initusertoobars"></a>COleIPFrameWndEx::InitUserToobars  
 Specifica un intervallo di ID di controllo che assegna il framework per le barre degli strumenti definiti dall'utente.  
  
```  
void InitUserToolbars(
    LPCTSTR lpszRegEntry,   
    UINT uiUserToolbarFirst,   
    UINT uiUserToolbarLast)  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszRegEntry`  
 La voce del Registro di sistema in cui la libreria archivia le impostazioni della barra degli strumenti dell'utente.  
  
 [in] `uiUserToolbarFirst`  
 ID controllo assegnato alla barra degli strumenti definiti dall'utente prima.  
  
 [in] `uiUserToolbarLast`  
 ID controllo assegnato alla barra degli strumenti ultimo definito dall'utente.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per inizializzare un intervallo di ID di controllo per l'assegnazione alle barre degli strumenti che gli utenti definiscono in modo dinamico. I parametri `uiUserToolbarFirst` e `uiUserToolbarLast` definire un intervallo di ID di controllo della barra degli strumenti consentiti. Per disabilitare la creazione di barre degli strumenti definiti dall'utente, impostare `uiUserToolbarFirst` o `uiUserToolbarLast` su -1.  
  
##  <a name="insertpane"></a>COleIPFrameWndEx::InsertPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `pTarget`  
 [in] `bAfter`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ismenubaravailable"></a>COleIPFrameWndEx::IsMenuBarAvailable  
 Determina se non è il puntatore all'oggetto barra dei menu`NULL`  
  
```  
BOOL IsMenuBarAvailable() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore restituisce un diverso da zero se la finestra cornice include una barra dei menu; in caso contrario, restituisce 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare se la finestra cornice gestisce non `NULL` puntatore al relativo oggetto barra dei menu.  
  
##  <a name="ispointneardocksite"></a>COleIPFrameWndEx::IsPointNearDockSite  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `dwBarAlignment`  
 [in] `bOuterEdge`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="loadframe"></a>COleIPFrameWndEx::LoadFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nIDResource`  
 [in] `dwDefaultStyle`  
 [in] `pParentWnd`  
 [in] `pContext`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onclosedockingpane"></a>COleIPFrameWndEx::OnCloseDockingPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCloseDockingPane(CDockablePane*);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CDockablePane*`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="oncloseminiframe"></a>COleIPFrameWndEx::OnCloseMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCloseMiniFrame(CPaneFrameWnd*);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CPaneFrameWnd*`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onclosepopupmenu"></a>COleIPFrameWndEx::OnClosePopupMenu  
 Chiamato dal framework quando un menu a comparsa attivo elabora un `WM_DESTROY` messaggio.  
  
```  
virtual void OnClosePopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuPopup`  
 Puntatore all'oggetto dal menu a comparsa.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per ricevere notifiche da `CMFCPopupMenu` oggetti durante l'elaborazione `WM_DESTROY` messaggi.  
  
##  <a name="oncmdmsg"></a>COleIPFrameWndEx::OnCmdMsg  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 [in] `nCode`  
 [in] `pExtra`  
 [in] `pHandlerInfo`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawmenuimage"></a>COleIPFrameWndEx::OnDrawMenuImage  
 Chiamato dal framework quando viene disegnata l'immagine associata a una voce di menu.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC* pDC,  
    const CMFCToolBarMenuButton* pMenuButton,  
    const CRect& rectImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo.  
  
 [in] `pMenuButton`  
 Puntatore al pulsante di menu.  
  
 [in] `rectImage`  
 L'immagine associata alla voce di menu.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita non esegue alcuna operazione e restituisce 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera personalizzare per le voci di menu che appartengono alla barra dei menu di proprietà di disegno immagine di `COleIPFrameWndEx`-oggetto derivato.  
  
##  <a name="ondrawmenulogo"></a>COleIPFrameWndEx::OnDrawMenuLogo  
 Chiamato dal framework quando un [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)oggetto processi un `WM_PAINT` messaggio.  
  
```  
virtual void OnDrawMenuLogo(
    CDC* pDC,  
    CMFCPopupMenu* pMenu,  
    const CRect& rectLogo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo.  
  
 [in] `pMenu`  
 Puntatore all'oggetto dal menu a comparsa.  
  
 [in] `rectLogo`  
 Puntatore per il logo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per visualizzare un logo nel menu a comparsa associato a una barra dei menu di proprietà di `COleIPFrameWndEx`-oggetto derivato. L'implementazione predefinita non esegue alcuna operazione.  
  
##  <a name="onmenubuttontoolhittest"></a>COleIPFrameWndEx::OnMenuButtonToolHitTest  
 Chiamato dal framework quando un [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)oggetto processi un `WM_NCHITTEST` messaggio.  
  
```  
virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,  
    TOOLINFO* pTI);
```  
  
### <a name="parameters"></a>Parametri  
 [in] pButton  
 Puntatore a un pulsante di menu.  
  
 [out] pTI  
 Puntatore a una struttura `TOOLINFO`.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita non esegue alcuna operazione e restituisce 0. L'implementazione deve restituire un valore diverso da zero se questa si riempie il `pTI` parametro.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per fornire informazioni di descrizione comando su una voce di menu specifiche.  
  
##  <a name="onmoveminiframe"></a>COleIPFrameWndEx::OnMoveMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onsetpreviewmode"></a>COleIPFrameWndEx::OnSetPreviewMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bPreview`  
 [in] `pState`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowcustomizepane"></a>COleIPFrameWndEx::OnShowCustomizePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,  
    UINT uiToolbarID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuPane`  
 [in] `uiToolbarID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowpanes"></a>COleIPFrameWndEx::OnShowPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnShowPanes(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowpopupmenu"></a>COleIPFrameWndEx::OnShowPopupMenu  
 Chiamato dal framework quando viene visualizzato un menu a comparsa.  
  
```  
virtual BOOL OnShowPopupMenu(CMFCPopupMenu* pMenuPopup);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pMenuPopup`  
 Puntatore al menu a comparsa da visualizzare.  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita non esegue alcuna operazione e restituisce un valore diverso da zero. L'implementazione deve restituire `FALSE` se non è visualizzato il menu a comparsa.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per personalizzare la visualizzazione di un menu a comparsa. Ad esempio, è Impossibile modificare i pulsanti di menu per i pulsanti di menu colore o inizializzare barre tear-off.  
  
##  <a name="ontearoffmenu"></a>COleIPFrameWndEx::OnTearOffMenu  
 Chiamato dal framework quando l'utente seleziona un menu che dispone di una barra a comparsa.  
  
```  
virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,  
    CPane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenuPopup`  
 Un puntatore per il menu a comparsa con l'utente selezionato.  
  
 [in] `pBar`  
 Puntatore al riquadro che ospita il menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se si desidera che il framework per attivare il menu a comparsa. in caso contrario `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si desidera personalizzare l'installazione della barra a comparsa.  
  
##  <a name="panefrompoint"></a>COleIPFrameWndEx::PaneFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    bool bExactBar,  
    CRuntimeClass* pRTCBarType) const;  
  
CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    DWORD& dwAlignment,  
    CRuntimeClass* pRTCBarType) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `nSensitivity`  
 [in] `bExactBar`  
 [in] `pRTCBarType`  
 [in] `dwAlignment`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="pretranslatemessage"></a>COleIPFrameWndEx::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMsg`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="recalclayout"></a>COleIPFrameWndEx::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bNotify`  
  
### <a name="remarks"></a>Note  
  
##  <a name="removepanefromdockmanager"></a>COleIPFrameWndEx::RemovePaneFromDockManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pControlBar,  
    BOOL bDestroy,  
    BOOL bAdjustLayout,  
    BOOL bAutoHide,  
    CBasePane* pBarReplacement);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `bDestroy`  
 [in] `bAdjustLayout`  
 [in] `bAutoHide`  
 [in] `pBarReplacement`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdockstate"></a>COleIPFrameWndEx::SetDockState  
 Applica lo stato di ancoraggio specificato in riquadri che appartengono alla finestra cornice.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `state`  
 Specifica lo stato di ancoraggio.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per specificare un nuovo stato di ancoraggio per i riquadri che appartengono a di `COleIPFrameWndEx` oggetto.  
  
##  <a name="setuptoolbarmenu"></a>COleIPFrameWndEx::SetupToolbarMenu  
 Modifica un oggetto barra degli strumenti cercando elementi fittizi e sostituendoli con gli elementi definiti dall'utente specificati.  
  
```  
void SetupToolbarMenu(
    CMenu& menu,  
    const UINT uiViewUserToolbarCmdFirst,  
    const UINT uiViewUserToolbarCmdLast);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `menu`  
 Un riferimento a un [CMenu](../../mfc/reference/cmenu-class.md) oggetto da modificare.  
  
 [in] `uiViewUserToolbarCmdFirst`  
 Specifica il primo comando definito dall'utente.  
  
 [in] `uiViewUserToolbarCmdLast`  
 Specifica l'ultimo comando definito dall'utente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="showpane"></a>COleIPFrameWndEx::ShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ShowPane(
    CBasePane* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bShow`  
 [in] `bDelay`  
 [in] `bActivate`  
  
### <a name="remarks"></a>Note  
  
##  <a name="winhelpa"></a>COleIPFrameWndEx::WinHelpA  
 Chiamato dal framework per avviare l'applicazione WinHelp o la Guida sensibile al contesto.  
  
```  
virtual void WinHelp(
    DWORD dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### <a name="parameters"></a>Parametri  
 [in] dwData  
 Specifica i dati necessari per il tipo di Guida specificato da `nCmd`.  
  
 [in] `nCmd`  
 Specifica il tipo di Guida richiesto. Per un elenco dei valori possibili e per sapere come influiscono sul parametro `dwData` , vedere la [funzione WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267) in Windows SDK.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)

