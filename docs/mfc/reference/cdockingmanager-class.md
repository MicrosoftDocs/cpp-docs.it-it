---
title: Classe CDockingManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDockingManager
- AFXDOCKINGMANAGER/CDockingManager
- AFXDOCKINGMANAGER/CDockingManager::AddDockSite
- AFXDOCKINGMANAGER/CDockingManager::AddHiddenMDITabbedBar
- AFXDOCKINGMANAGER/CDockingManager::AddMiniFrame
- AFXDOCKINGMANAGER/CDockingManager::AddPane
- AFXDOCKINGMANAGER/CDockingManager::AdjustDockingLayout
- AFXDOCKINGMANAGER/CDockingManager::AdjustPaneFrames
- AFXDOCKINGMANAGER/CDockingManager::AdjustRectToClientArea
- AFXDOCKINGMANAGER/CDockingManager::AlignAutoHidePane
- AFXDOCKINGMANAGER/CDockingManager::AutoHidePane
- AFXDOCKINGMANAGER/CDockingManager::BringBarsToTop
- AFXDOCKINGMANAGER/CDockingManager::BuildPanesMenu
- AFXDOCKINGMANAGER/CDockingManager::CalcExpectedDockedRect
- AFXDOCKINGMANAGER/CDockingManager::Create
- AFXDOCKINGMANAGER/CDockingManager::DeterminePaneAndStatus
- AFXDOCKINGMANAGER/CDockingManager::DisableRestoreDockState
- AFXDOCKINGMANAGER/CDockingManager::DockPane
- AFXDOCKINGMANAGER/CDockingManager::DockPaneLeftOf
- AFXDOCKINGMANAGER/CDockingManager::EnableAutoHidePanes
- AFXDOCKINGMANAGER/CDockingManager::EnableDocking
- AFXDOCKINGMANAGER/CDockingManager::EnableDockSiteMenu
- AFXDOCKINGMANAGER/CDockingManager::EnablePaneContextMenu
- AFXDOCKINGMANAGER/CDockingManager::FindDockSite
- AFXDOCKINGMANAGER/CDockingManager::FindDockSiteByPane
- AFXDOCKINGMANAGER/CDockingManager::FindPaneByID
- AFXDOCKINGMANAGER/CDockingManager::FixupVirtualRects
- AFXDOCKINGMANAGER/CDockingManager::FrameFromPoint
- AFXDOCKINGMANAGER/CDockingManager::GetClientAreaBounds
- AFXDOCKINGMANAGER/CDockingManager::GetDockingMode
- AFXDOCKINGMANAGER/CDockingManager::GetDockSiteFrameWnd
- AFXDOCKINGMANAGER/CDockingManager::GetEnabledAutoHideAlignment
- AFXDOCKINGMANAGER/CDockingManager::GetMiniFrames
- AFXDOCKINGMANAGER/CDockingManager::GetOuterEdgeBounds
- AFXDOCKINGMANAGER/CDockingManager::GetPaneList
- AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingManager
- AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingManagerPermanent
- AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingParams
- AFXDOCKINGMANAGER/CDockingManager::GetSmartDockingTheme
- AFXDOCKINGMANAGER/CDockingManager::HideAutoHidePanes
- AFXDOCKINGMANAGER/CDockingManager::InsertDockSite
- AFXDOCKINGMANAGER/CDockingManager::InsertPane
- AFXDOCKINGMANAGER/CDockingManager::IsDockSiteMenu
- AFXDOCKINGMANAGER/CDockingManager::IsInAdjustLayout
- AFXDOCKINGMANAGER/CDockingManager::IsOLEContainerMode
- AFXDOCKINGMANAGER/CDockingManager::IsPointNearDockSite
- AFXDOCKINGMANAGER/CDockingManager::IsPrintPreviewValid
- AFXDOCKINGMANAGER/CDockingManager::LoadState
- AFXDOCKINGMANAGER/CDockingManager::LockUpdate
- AFXDOCKINGMANAGER/CDockingManager::OnActivateFrame
- AFXDOCKINGMANAGER/CDockingManager::OnClosePopupMenu
- AFXDOCKINGMANAGER/CDockingManager::OnMoveMiniFrame
- AFXDOCKINGMANAGER/CDockingManager::OnPaneContextMenu
- AFXDOCKINGMANAGER/CDockingManager::PaneFromPoint
- AFXDOCKINGMANAGER/CDockingManager::ProcessPaneContextMenuCommand
- AFXDOCKINGMANAGER/CDockingManager::RecalcLayout
- AFXDOCKINGMANAGER/CDockingManager::ReleaseEmptyPaneContainers
- AFXDOCKINGMANAGER/CDockingManager::RemoveHiddenMDITabbedBar
- AFXDOCKINGMANAGER/CDockingManager::RemoveMiniFrame
- AFXDOCKINGMANAGER/CDockingManager::RemovePaneFromDockManager
- AFXDOCKINGMANAGER/CDockingManager::ReplacePane
- AFXDOCKINGMANAGER/CDockingManager::ResortMiniFramesForZOrder
- AFXDOCKINGMANAGER/CDockingManager::SaveState
- AFXDOCKINGMANAGER/CDockingManager::SendMessageToMiniFrames
- AFXDOCKINGMANAGER/CDockingManager::Serialize
- AFXDOCKINGMANAGER/CDockingManager::SetAutohideZOrder
- AFXDOCKINGMANAGER/CDockingManager::SetDockingMode
- AFXDOCKINGMANAGER/CDockingManager::SetDockState
- AFXDOCKINGMANAGER/CDockingManager::SetPrintPreviewMode
- AFXDOCKINGMANAGER/CDockingManager::SetSmartDockingParams
- AFXDOCKINGMANAGER/CDockingManager::ShowDelayShowMiniFrames
- AFXDOCKINGMANAGER/CDockingManager::ShowPanes
- AFXDOCKINGMANAGER/CDockingManager::StartSDocking
- AFXDOCKINGMANAGER/CDockingManager::StopSDocking
- AFXDOCKINGMANAGER/CDockingManager::m_bHideDockingBarsInContainerMode
- AFXDOCKINGMANAGER/CDockingManager::m_dockModeGlobal
- AFXDOCKINGMANAGER/CDockingManager::m_nDockSensitivity
- AFXDOCKINGMANAGER/CDockingManager::m_nTimeOutBeforeDockingBarDock
- AFXDOCKINGMANAGER/CDockingManager::m_nTimeOutBeforeToolBarDock
dev_langs:
- C++
helpviewer_keywords:
- CDockingManager class
ms.assetid: 98e69c43-55d8-4f43-b861-4fda80ec1e32
caps.latest.revision: 37
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 106046dc9dc671b5baea7c6df78b91ba37098978
ms.lasthandoff: 02/24/2017

---
# <a name="cdockingmanager-class"></a>Classe CDockingManager
Implementa la funzionalità principale che controlla il layout di ancoraggio in una finestra cornice principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDockingManager : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingManager::AddDockSite](#adddocksite)|Crea un riquadro di ancoraggio e lo aggiunge all'elenco di barre di controllo.|  
|[CDockingManager::AddHiddenMDITabbedBar](#addhiddenmditabbedbar)|Aggiunta di un handle a una barra riquadro all'elenco di nascosto MDI a schede riquadri della barra.|  
|[CDockingManager::AddMiniFrame](#addminiframe)|Aggiunge un fotogramma all'elenco dei mini frame.|  
|[CDockingManager::AddPane](#addpane)|Registra un riquadro con il gestore di ancoraggio.|  
|[CDockingManager::AdjustDockingLayout](#adjustdockinglayout)|Ricalcola e modifica il layout di tutti i riquadri in una finestra cornice.|  
|[CDockingManager::AdjustPaneFrames](#adjustpaneframes)|Determina il `WM_NCCALCSIZE` messaggio da inviare a tutti i riquadri e `CPaneFrameWnd` windows.|  
|[CDockingManager::AdjustRectToClientArea](#adjustrecttoclientarea)|Regola l'allineamento di un rettangolo.|  
|[CDockingManager::AlignAutoHidePane](#alignautohidepane)|Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che accetta l'intera larghezza o altezza dell'area client del frame circondato da ancorare siti.|  
|[CDockingManager::AutoHidePane](#autohidepane)|Crea una barra degli strumenti Nascondi automaticamente.|  
|[CDockingManager::BringBarsToTop](#bringbarstotop)|Visualizza le barre ancorate con l'allineamento specificato all'inizio.|  
|[CDockingManager::BuildPanesMenu](#buildpanesmenu)|Aggiunge nomi di barre degli strumenti e riquadri di ancoraggio a un menu.|  
|[CDockingManager::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata.|  
|[CDockingManager::Create](#create)|Crea un gestore di ancoraggio.|  
|[CDockingManager::DeterminePaneAndStatus](#determinepaneandstatus)|Determina il riquadro contenente un punto specificato e il relativo stato di ancoraggio.|  
|[CDockingManager::DisableRestoreDockState](#disablerestoredockstate)|Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.|  
|[CDockingManager::DockPane](#dockpane)|Un riquadro viene ancorato a un altro riquadro o in una finestra cornice.|  
|[CDockingManager::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[CDockingManager::EnableAutoHidePanes](#enableautohidepanes)|Consente di ancoraggio del riquadro per la cornice principale, crea un riquadro di ancoraggio e lo aggiunge all'elenco di barre di controllo.|  
|[CDockingManager::EnableDocking](#enabledocking)|Crea un riquadro di ancoraggio e consente di ancoraggio del riquadro per la cornice principale.|  
|[CDockingManager::EnableDockSiteMenu](#enabledocksitemenu)|Visualizza un pulsante aggiuntivo che consente di aprire un menu a comparsa le didascalie di tutti i riquadri ancorati.|  
|[CDockingManager::EnablePaneContextMenu](#enablepanecontextmenu)|Indica alla libreria per visualizzare un menu di contesto speciale che include un elenco di riquadri di ancoraggio e barre degli strumenti dell'applicazione quando l'utente sceglie il pulsante destro del mouse e la libreria viene elaborato il messaggio WM_CONTEXTMENU.|  
|[CDockingManager::FindDockSite](#finddocksite)|Recupera la barra riquadro che si trova nella posizione specificata e che ha l'allineamento specificato.|  
|[CDockingManager::FindDockSiteByPane](#finddocksitebypane)|Restituisce la barra di riquadro che presenta l'id del riquadro della barra di destinazione.|  
|[CDockingManager::FindPaneByID](#findpanebyid)|Trova un riquadro dell'ID del controllo specificato.|  
|[CDockingManager::FixupVirtualRects](#fixupvirtualrects)|Esegue il commit di tutte le posizioni della barra degli strumenti corrente ai rettangoli virtuale.|  
|[CDockingManager::FrameFromPoint](#framefrompoint)|Restituisce il frame che contiene il punto specificato.|  
|[CDockingManager::GetClientAreaBounds](#getclientareabounds)|Ottiene il rettangolo che contiene i limiti dell'area client.|  
|[CDockingManager::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio corrente.|  
|[CDockingManager::GetDockSiteFrameWnd](#getdocksiteframewnd)|Ottiene un puntatore per la cornice della finestra padre.|  
|[CDockingManager::GetEnabledAutoHideAlignment](#getenabledautohidealignment)|Restituisce l'allineamento dei riquadri abilitato.|  
|[CDockingManager::GetMiniFrames](#getminiframes)|Ottiene un elenco di mini.|  
|[CDockingManager::GetOuterEdgeBounds](#getouteredgebounds)|Ottiene un rettangolo che contiene i bordi esterni del frame.|  
|[CDockingManager::GetPaneList](#getpanelist)|Restituisce un elenco dei riquadri che appartengono al gestore di ancoraggio. Ciò include tutti i riquadri a virgola mobile.|  
|[CDockingManager::GetSmartDockingManager](#getsmartdockingmanager)|Recupera un puntatore al gestore di ancoraggio intelligente.|  
|[CDockingManager::GetSmartDockingManagerPermanent](#getsmartdockingmanagerpermanent)|Recupera un puntatore al gestore di ancoraggio intelligente.|  
|[CDockingManager::GetSmartDockingParams](#getsmartdockingparams)|Restituisce i parametri di ancoraggio intelligenti per la gestione di ancoraggio.|  
|[CDockingManager::GetSmartDockingTheme](#getsmartdockingtheme)|Un metodo statico che restituisce un tema utilizzato per visualizzare i marcatori di ancoraggio.|  
|[CDockingManager::HideAutoHidePanes](#hideautohidepanes)|Nasconde un riquadro che si trova in modalità Nascondi automaticamente.|  
|[CDockingManager::InsertDockSite](#insertdocksite)|Crea un riquadro di ancoraggio e lo inserisce nell'elenco delle barre di controllo.|  
|[CDockingManager::InsertPane](#insertpane)|Inserisce un riquadro di controllo nell'elenco di barre di controllo.|  
|[CDockingManager::IsDockSiteMenu](#isdocksitemenu)|Specifica se le barre del titolo di tutti i riquadri verrà visualizzato un menu a comparsa.|  
|[CDockingManager::IsInAdjustLayout](#isinadjustlayout)|Determina se i layout di tutti i riquadri vengono modificati.|  
|[CDockingManager::IsOLEContainerMode](#isolecontainermode)|Specifica se l'ancoraggio manager è in modalità di contenitore OLE.|  
|[CDockingManager::IsPointNearDockSite](#ispointneardocksite)|Determina se un punto specificato è quasi il sito di ancoraggio.|  
|[CDockingManager::IsPrintPreviewValid](#isprintpreviewvalid)|Determina se è impostata la modalità di anteprima di stampa.|  
|[CDockingManager::LoadState](#loadstate)|Carica lo stato di ancoraggio manager dal Registro di sistema.|  
|[CDockingManager::LockUpdate](#lockupdate)|Blocca la finestra specificata.|  
|[CDockingManager::OnActivateFrame](#onactivateframe)|Chiamato dal framework quando la finestra cornice viene attiva o disattivata.|  
|[CDockingManager::OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|  
|[CDockingManager::OnMoveMiniFrame](#onmoveminiframe)|Chiamato dal framework per spostare una finestra con mini-cornice.|  
|[CDockingManager::OnPaneContextMenu](#onpanecontextmenu)|Chiamato dal framework quando si compila un menu con un elenco dei riquadri.|  
|[CDockingManager::PaneFromPoint](#panefrompoint)|Restituisce il riquadro che contiene il punto specificato.|  
|[CDockingManager::ProcessPaneContextMenuCommand](#processpanecontextmenucommand)|Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.|  
|[CDockingManager::RecalcLayout](#recalclayout)|Ricalcola il layout dei controlli presenti nell'elenco dei controlli interno.|  
|[CDockingManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)|Rilascia i contenitori di riquadro vuoto.|  
|[CDockingManager::RemoveHiddenMDITabbedBar](#removehiddenmditabbedbar)|Rimuove l'oggetto nascosto barra riquadro specificato.|  
|[CDockingManager::RemoveMiniFrame](#removeminiframe)|Rimuove un intervallo specificato dall'elenco dei mini frame.|  
|[CDockingManager::RemovePaneFromDockManager](#removepanefromdockmanager)|Annulla la registrazione di un riquadro e lo rimuove dall'elenco nel gestore di ancoraggio.|  
|[CDockingManager::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|  
|[CDockingManager::ResortMiniFramesForZOrder](#resortminiframesforzorder)|Ricorre i frame nell'elenco dei mini frame.|  
|[CDockingManager::SaveState](#savestate)|Salva lo stato di ancoraggio manager nel Registro di sistema.|  
|[CDockingManager::SendMessageToMiniFrames](#sendmessagetominiframes)|Invia il messaggio specificato a tutti i fotogrammi i minidump.|  
|[CDockingManager::Serialize](#serialize)|Scrive il gestore di ancoraggio in un archivio. (Esegue l'override di [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize).)|  
|[CDockingManager::SetAutohideZOrder](#setautohidezorder)|Imposta la dimensione, la larghezza e altezza delle barre di controllo e il riquadro specificato.|  
|[CDockingManager::SetDockingMode](#setdockingmode)|Imposta la modalità di ancoraggio.|  
|[CDockingManager::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio di barre di controllo, i frame mini e le barre Nascondi automaticamente.|  
|[CDockingManager::SetPrintPreviewMode](#setprintpreviewmode)|Imposta la modalità di anteprima di stampa delle barre che vengono visualizzati nell'anteprima di stampa.|  
|[CDockingManager::SetSmartDockingParams](#setsmartdockingparams)|Imposta i parametri che definiscono il comportamento di ancoraggio intelligente.|  
|[CDockingManager::ShowDelayShowMiniFrames](#showdelayshowminiframes)|Mostra o nasconde le finestre dei frame minidump.|  
|[CDockingManager::ShowPanes](#showpanes)|Mostra o nasconde i riquadri delle barre di controllo e Nascondi automaticamente.|  
|[CDockingManager::StartSDocking](#startsdocking)|Avvia l'ancoraggio intelligente della finestra specificata in base l'allineamento del gestore di ancoraggio intelligente.|  
|[CDockingManager::StopSDocking](#stopsdocking)|Arresta smart ancoraggio.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode)|Specifica se il gestore di ancoraggio nascosti riquadri in modalità di contenitore OLE.|  
|[CDockingManager::m_dockModeGlobal](#m_dockmodeglobal)|Specifica la modalità di ancoraggio globale.|  
|[CDockingManager::m_nDockSensitivity](#m_ndocksensitivity)|Specifica la sensibilità ancoraggio.|  
|[CDockingManager::m_nTimeOutBeforeDockingBarDock](#m_ntimeoutbeforedockingbardock)|Specifica il tempo, espresso in millisecondi, prima di un riquadro ancorato è ancorato in modalità di ancoraggio immediata.|  
|[CDockingManager::m_nTimeOutBeforeToolBarDock](#m_ntimeoutbeforetoolbardock)|Specifica il tempo, espresso in millisecondi, prima che una barra degli strumenti è ancorata alla finestra cornice principale.|  
  
## <a name="remarks"></a>Note  
 La finestra cornice principale crea e inizializza automaticamente questa classe.  
  
 L'oggetto manager ancoraggio contiene un elenco di tutti i riquadri nel layout di ancoraggio, nonché un elenco di tutti [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) windows che appartengono alla finestra cornice principale.  
  
 Il `CDockingManager` implementa alcuni servizi che è possibile utilizzare per trovare un riquadro o `CPaneFrameWnd` finestra. In genere non si chiama questi servizi direttamente poiché essi vengono inclusi nell'oggetto finestra cornice principale. Per ulteriori informazioni, vedere [CPaneFrameWnd classe](../../mfc/reference/cpaneframewnd-class.md).  
  
## <a name="customization-tips"></a>Suggerimenti per la personalizzazione  
 I suggerimenti seguenti si applicano a `CDockingManager` oggetti:  
  
- [Classe CDockingManager](../../mfc/reference/cdockingmanager-class.md) supporta le modalità di ancoraggio:  
  
    - `AFX_DOCK_TYPE::DT_IMMEDIATE`  
  
    - `AFX_DOCK_TYPE::DT_STANDARD`  
  
    - `AFX_DOCK_TYPE::DT_SMART`  
  
     Queste modalità di ancoraggio sono definite da [CDockingManager::m_dockModeGlobal](#m_dockmodeglobal) e vengono impostati chiamando [CDockingManager::SetDockingMode](#setdockingmode).  
  
-   Se si desidera creare un riquadro non ridimensionabile, non a virgola mobile, chiamare il [CDockingManager::AddPane](#addpane) metodo. Questo metodo registra il riquadro con la gestione di ancoraggio, che è responsabile per il layout del riquadro.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CDockingManager` (classe) per configurare un `CDockingManager` oggetto. Nell'esempio viene illustrato come visualizzare un pulsante aggiuntivo che consente di aprire un menu a comparsa le didascalie di tutti i riquadri ancorati e come impostare la modalità di ancoraggio dell'oggetto. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#24;](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingManager](../../mfc/reference/cdockingmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxDockingManager.h  
  
##  <a name="adddocksite"></a>CDockingManager::AddDockSite  
 Crea un riquadro di ancoraggio e lo aggiunge all'elenco di barre di controllo.  
  
```  
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,  
    CDockSite** ppDockBar = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `info`  
 Un riferimento a una struttura che contiene ancora l'allineamento di riquadro.  
  
 [out] `ppDockBar`  
 Un puntatore a un puntatore al nuovo riquadro ancorato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro dock è stato creato correttamente. `FALSE` in caso contrario.  
  
##  <a name="addhiddenmditabbedbar"></a>CDockingManager::AddHiddenMDITabbedBar  
 Aggiunta di un handle a una barra riquadro all'elenco di nascosto MDI a schede riquadri della barra.  
  
```  
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a una barra riquadro  
  
##  <a name="addpane"></a>CDockingManager::AddPane  
 Registra un riquadro con il gestore di ancoraggio.  
  
```  
BOOL AddPane(
    CBasePane* pWnd,  
    BOOL bTail = TRUE,  
    BOOL bAutoHide = FALSE,  
    BOOL bInsertForOuterEdge = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `pWnd`  
 Specifica il riquadro per aggiungere al gestore di ancoraggio.  
  
 [in] `bTail`  
 `TRUE`Per aggiungere il riquadro alla fine dell'elenco dei riquadri per la gestione di ancoraggio; in caso contrario, `FALSE`.  
  
 [in] `bAutoHide`  
 Solo per uso interno. Utilizzare sempre il valore predefinito `FALSE`.  
  
 [in] `bInsertForOuterEdge`  
 Solo per uso interno. Utilizzare sempre il valore predefinito `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato registrato correttamente con il gestore di ancoraggio; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per registrare i riquadri non ridimensionabile, non a virgola mobile con il gestore di ancoraggio. Se non si registrano i riquadri, non saranno visualizzate correttamente quando il gestore di ancoraggio è disposto.  
  
##  <a name="adjustdockinglayout"></a>CDockingManager::AdjustDockingLayout  
 Ricalcola e modifica il layout di tutti i riquadri in una finestra cornice.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hdwp`  
 Specifica la struttura di posizione finestra posticipata. Per ulteriori informazioni, vedere [tipi di dati Windows](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
### <a name="remarks"></a>Note  
  
##  <a name="addminiframe"></a>CDockingManager::AddMiniFrame  
 Aggiunge un fotogramma all'elenco dei mini frame.  
  
```  
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Un puntatore a un frame.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il frame non è presente nell'elenco dei frame mini ed è stato aggiunto correttamente. `FALSE` in caso contrario.  
  
##  <a name="adjustpaneframes"></a>CDockingManager::AdjustPaneFrames  
 Determina il `WM_NCCALCSIZE` messaggio da inviare a tutti i riquadri e `CPaneFrameWnd` windows.  
  
```  
virtual void AdjustPaneFrames();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="adjustrecttoclientarea"></a>CDockingManager::AdjustRectToClientArea  
 Regola l'allineamento di un rettangolo.  
  
```  
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,  
    DWORD dwAlignment);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rectResult`  
 Un riferimento a un `CRect` oggetto  
  
 [in] `dwAlignment`  
 L'allineamento del `CRect` oggetto  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'allineamento del `CRect` oggetto è stato modificato; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Il `dwAlignment` parametro può avere uno dei valori seguenti:  
  
-   CBRS_ALIGN_TOP  
  
-   CBRS_ALIGN_BOTTOM  
  
-   CBRS_ALIGN_LEFT  
  
-   CBRS_ALIGN_RIGHT  
  
##  <a name="alignautohidepane"></a>CDockingManager::AlignAutoHidePane  
 Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che accetta l'intera larghezza o altezza dell'area client del frame circondato da ancorare siti.  
  
```  
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,  
    BOOL bIsVisible = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDefaultSlider`  
 Il riquadro ancorato di dispositivo di scorrimento.  
  
 [in] `bIsVisible`  
 `TRUE`Se il riquadro ancorato di tipo è visibile; `FALSE` in caso contrario.  
  
##  <a name="autohidepane"></a>CDockingManager::AutoHidePane  
 Crea una barra degli strumenti Nascondi automaticamente.  
  
```  
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,  
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a barra riquadro.  
  
 [in] `pCurrAutoHideToolBar`  
 Un puntatore a una barra degli strumenti Nascondi automaticamente.  
  
### <a name="return-value"></a>Valore restituito  
 `NULL`Se l'automobile Nascondi barra degli strumenti non è stati creati; in caso contrario un puntatore per la nuova barra degli strumenti.  
  
##  <a name="bringbarstotop"></a>CDockingManager::BringBarsToTop  
 Visualizza le barre ancorate con l'allineamento specificato all'inizio.  
  
```  
void BringBarsToTop(
    DWORD dwAlignment = 0,  
    BOOL bExcludeDockedBars = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlignment`  
 L'allineamento delle barre di ancoraggio inserite all'inizio del piano.  
  
 [in] `bExcludeDockedBars`  
 `TRUE`Per escludere le barre ancorate venga in primo piano; in caso contrario `FALSE`.  
  
##  <a name="buildpanesmenu"></a>CDockingManager::BuildPanesMenu  
 Aggiunge nomi di barre degli strumenti e riquadri di ancoraggio a un menu.  
  
```  
void BuildPanesMenu(
    CMenu& menu,  
    BOOL bToolbarsOnly);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `menu`  
 Un menu per aggiungere i nomi delle barre degli strumenti e riquadri di ancoraggio.  
  
 [in] `bToolbarsOnly`  
 `TRUE`aggiungere solo i nomi della barra degli strumenti al menu. `FALSE` in caso contrario.  
  
##  <a name="calcexpecteddockedrect"></a>CDockingManager::CalcExpectedDockedRect  
 Calcola il rettangolo previsto di una finestra ancorata.  
  
```  
void CalcExpectedDockedRect(
    CWnd* pWnd,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore alla finestra di ancoraggio.  
  
 [in] `ptMouse`  
 Posizione del mouse.  
  
 [out] `rectResult`  
 Rettangolo calcolato.  
  
 [in] `bDrawTab`  
 `TRUE`per disegnare una scheda. in caso contrario `FALSE`.  
  
 [out] `ppTargetBar`  
 Un puntatore a un puntatore al riquadro di destinazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo calcola il rettangolo occupata una finestra se l'utente ha trascinato la finestra per il punto specificato da `ptMouse` e ancorata sono.  
  
##  <a name="create"></a>CDockingManager::Create  
 Crea un gestore di ancoraggio.  
  
```  
BOOL Create(CFrameWnd* pParentWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pParentWnd`  
 Puntatore al frame padre del gestore di ancoraggio. Questo valore non deve essere `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`sempre.  
  
##  <a name="determinepaneandstatus"></a>CDockingManager::DeterminePaneAndStatus  
 Determina il riquadro contenente un punto specificato e il relativo stato di ancoraggio.  
  
```  
virtual AFX_CS_STATUS DeterminePaneAndStatus(
    CPoint pt,  
    int nSensitivity,  
    DWORD dwEnabledAlignment,  
    CBasePane** ppTargetBar,  
    const CBasePane* pBarToIgnore,  
    const CBasePane* pBarToDock);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Posizione del riquadro da controllare.  
  
 [in] `nSensitivity`  
 Il valore per aumentare il rettangolo della finestra di ciascun riquadro selezionato. Un riquadro soddisfa i criteri di ricerca, se il punto specificato si trova in questa area maggiore.  
  
 [in] `dwEnabledAlignment`  
 L'allineamento del riquadro ancorato.  
  
 [out] `ppTargetBar`  
 Un puntatore a un puntatore al riquadro di destinazione.  
  
 [in] `pBarToIgnore`  
 Il riquadro che ignora il metodo.  
  
 [in] `pBarToDock`  
 Il riquadro che è ancorato.  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato di ancoraggio.  
  
### <a name="remarks"></a>Note  
 Lo stato di ancoraggio può essere uno dei valori seguenti:  
  
|Valore AFX_CS_STATUS|Significato|  
|---------------------------|-------------|  
|CS_NOTHING|Il puntatore non è presente su un sito di ancoraggio. Di conseguenza, mantenere il riquadro mobile.|  
|CS_DOCK_IMMEDIATELY|Il puntatore è posizionato il sito di ancoraggio in modalità immediata (stile DT_IMMEDIATE è abilitato), pertanto il riquadro deve essere ancorato immediatamente.|  
|CS_DELAY_DOCK|Il puntatore è su un sito di ancoraggio che è un altro riquadro ancorato di tipo o un bordo della cornice principale.|  
|CS_DELAY_DOCK_TO_TAB|Il puntatore è su un sito di ancoraggio che causa il riquadro per essere inserito in una finestra a schede. Ciò si verifica quando il puntatore del mouse su una didascalia di un altro riquadro ancorato o su un'area della scheda di un riquadro a schede.|  
  
##  <a name="disablerestoredockstate"></a>CDockingManager::DisableRestoreDockState  
 Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.  
  
```  
void DisableRestoreDockState(BOOL bDisable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDisable`  
 `TRUE`Per disabilitare il caricamento del layout di ancoraggio dal Registro di sistema. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo quando è necessario conservare il layout corrente dell'ancoraggio riquadri e le barre degli strumenti quando si carica lo stato dell'applicazione.  
  
##  <a name="dockpane"></a>CDockingManager::DockPane  
 Un riquadro viene ancorato a un altro riquadro o in una finestra cornice.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a una barra per ancorare al riquadro.  
  
 [in] `nDockBarID`  
 L'id della barra di ancoraggio.  
  
 [in] `lpRect`  
 Il rettangolo di destinazione.  
  
##  <a name="dockpaneleftof"></a>CDockingManager::DockPaneLeftOf  
 Ancora un riquadro a sinistra di un altro riquadro.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBarToDock,  
    CPane* pTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarToDock`  
 Un puntatore al riquadro ancorato a sinistra del `pTargetBar`.  
  
 [in] `pTargetBar`  
 Puntatore al riquadro di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è ancorato. in caso contrario, `FALSE`.  
  
##  <a name="enableautohidepanes"></a>CDockingManager::EnableAutoHidePanes  
 Consente di ancoraggio del riquadro per la cornice principale, crea un riquadro di ancoraggio e lo aggiunge all'elenco di barre di controllo.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwStyle`  
 L'allineamento di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro dock è stato creato correttamente. `FALSE` in caso contrario.  
  
##  <a name="enabledocking"></a>CDockingManager::EnableDocking  
 Crea un riquadro di ancoraggio e consente di ancoraggio del riquadro per la cornice principale.  
  
```  
BOOL EnableDocking(DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwStyle`  
 L'allineamento di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro dock è stato creato correttamente. `FALSE` in caso contrario.  
  
##  <a name="enabledocksitemenu"></a>CDockingManager::EnableDockSiteMenu  
 Visualizza un pulsante aggiuntivo che consente di aprire un menu a comparsa le didascalie di tutti i riquadri ancorati.  
  
```  
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`Per abilitare il menu di sito di ancoraggio; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il menu di sito di ancoraggio consente di visualizzare le seguenti opzioni per la modifica dello stato di ancoraggio del riquadro:  
  
- `Floating`-Mobile un riquadro  
  
- `Docking`-Viene ancorato un riquadro nella cornice principale in corrispondenza della posizione in cui il riquadro dell'ultimo ancoraggio  
  
- `AutoHide`-Attiva il riquadro di modalità Nascondi automaticamente  
  
- `Hide`-Consente di nascondere un riquadro  
  
 Per impostazione predefinita, non viene visualizzato questo menu.  
  
##  <a name="enablepanecontextmenu"></a>CDockingManager::EnablePaneContextMenu  
 Indica alla libreria per visualizzare un menu di contesto speciale che include un elenco di riquadri di ancoraggio e barre degli strumenti dell'applicazione quando l'utente sceglie il pulsante destro del mouse e la libreria viene elaborato il messaggio WM_CONTEXTMENU.  
  
```  
void EnablePaneContextMenu(
    BOOL bEnable,  
    UINT uiCustomizeCmd,  
    const CString& strCustomizeText,  
    BOOL bToolbarsOnly = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Se `TRUE`, la libreria consente di attivare il supporto per il menu di contesto automatica; se `FALSE` la libreria consente di disattivare il supporto per menu di scelta rapida automatica.  
  
 [in] `uiCustomizeCmd`  
 Un id di comando per il **Personalizza** voce di menu.  
  
 [in] `strCustomizeText`  
 Il testo di **Personalizza** elemento.  
  
 [in] `bToolbarsOnly`  
 Se `TRUE`, il menu viene visualizzato solo un elenco delle barre degli strumenti di applicazione; se `FALSE`, la libreria aggiunge riquadri ancorati applicazione a questo elenco.  
  
##  <a name="finddocksite"></a>CDockingManager::FindDockSite  
 Recupera la barra riquadro che si trova nella posizione specificata e che ha l'allineamento specificato.  
  
```  
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,  
    BOOL bOuter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwAlignment`  
 L'allineamento della barra del riquadro.  
  
 [in] `bOuter`  
 Se `TRUE`, recuperare la barra nella posizione principale nell'elenco di barre di controllo. In caso contrario, recuperare la barra nella posizione della parte finale nell'elenco di barre di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Riquadro ancorato di tipo che ha l'allineamento specificato; `NULL` in caso contrario.  
  
##  <a name="findpanebyid"></a>CDockingManager::FindPaneByID  
 Trova un riquadro dell'ID del controllo specificato.  
  
```  
virtual CBasePane* FindPaneByID(
    UINT uBarID,  
    BOOL bSearchMiniFrames = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uBarID`  
 Specifica l'ID di controllo del riquadro da trovare.  
  
 [in] `bSearchMiniFrames`  
 `TRUE`Per includere tutti i riquadri a virgola mobile nella ricerca. `FALSE`Per includere solo i riquadri ancorati.  
  
### <a name="return-value"></a>Valore restituito  
 Il [CBasePane](../../mfc/reference/cbasepane-class.md) oggetto contenente l'ID del controllo specificato, o `NULL` se il riquadro specificato non viene trovato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="finddocksitebypane"></a>CDockingManager::FindDockSiteByPane  
 Restituisce la barra di riquadro che presenta l'id del riquadro della barra di destinazione.  
  
```  
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTargetBar`  
 Puntatore al riquadro della barra di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 La barra riquadro con l'id del riquadro della barra di destinazione; `NULL` se non esiste tale barra riquadro oggetto.  
  
##  <a name="fixupvirtualrects"></a>CDockingManager::FixupVirtualRects  
 Esegue il commit di tutte le posizioni della barra degli strumenti corrente ai rettangoli virtuale.  
  
```  
virtual void FixupVirtualRects();
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente inizia a trascinare una barra degli strumenti, l'applicazione memorizza nella posizione originale di *rettangolo virtuale*. Quando l'utente sposta il relativo sito di ancoraggio di una barra degli strumenti, barra degli strumenti può spostare altre barre degli strumenti. Le posizioni originale altre barre degli strumenti vengono archiviate in rettangoli virtuali corrispondenti.  
  
##  <a name="framefrompoint"></a>CDockingManager::FrameFromPoint  
 Restituisce il frame che contiene il punto specificato.  
  
```  
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,  
    CPaneFrameWnd* pFrameToExclude,  
    BOOL bFloatMultiOnly) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Specifica il punto in coordinate dello schermo, per verificare.  
  
 [in] `pFrameToExclude`  
 Un puntatore a un frame da escludere.  
  
 [in] `bFloatMultiOnly`  
 `TRUE`Per escludere i frame che non sono istanze di `CMultiPaneFrameWnd`; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 Il frame che contiene il punto specificato; `NULL` in caso contrario.  
  
##  <a name="getclientareabounds"></a>CDockingManager::GetClientAreaBounds  
 Ottiene il rettangolo che contiene i limiti dell'area client.  
  
```  
CRect GetClientAreaBounds() const;

void GetClientAreaBounds(CRect& rcClient);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rcClient`  
 Un riferimento al rettangolo contenente i limiti dell'area client.  
  
### <a name="return-value"></a>Valore restituito  
 Il rettangolo che contiene i limiti dell'area client.  
  
##  <a name="getdockingmode"></a>CDockingManager::GetDockingMode  
 Restituisce la modalità di ancoraggio corrente.  
  
```  
static AFX_DOCK_TYPE GetDockingMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di enumeratore che rappresenta la modalità di ancoraggio corrente. Può essere uno dei valori seguenti:  
  
- `DT_STANDARD`  
  
- `DT_IMMEDIATE`  
  
- `DT_SMART`  
  
### <a name="remarks"></a>Note  
 Per impostare la modalità di ancoraggio, chiamare [CDockingManager::SetDockingMode](#setdockingmode).  
  
##  <a name="getdocksiteframewnd"></a>CDockingManager::GetDockSiteFrameWnd  
 Ottiene un puntatore per la cornice della finestra padre.  
  
```  
CFrameWnd* GetDockSiteFrameWnd() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per la cornice della finestra padre.  
  
##  <a name="getenabledautohidealignment"></a>CDockingManager::GetEnabledAutoHideAlignment  
 Restituisce l'allineamento dei riquadri abilitato.  
  
```  
DWORD GetEnabledAutoHideAlignment() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione bit per bit di `CBRS_ALIGN_` flag o 0 se non sono abilitati i riquadri Nascondi automaticamente. Per ulteriori informazioni, vedere [CFrameWnd:: EnableDocking](../../mfc/reference/cframewnd-class.md#enabledocking).  
  
### <a name="remarks"></a>Note  
 Il metodo restituisce l'allineamento abilitato per le barre di controllo Nascondi automaticamente. Per abilitare le barre Nascondi automaticamente, chiamare [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes).  
  
##  <a name="getminiframes"></a>CDockingManager::GetMiniFrames  
 Ottiene un elenco di mini.  
  
```  
const CObList& GetMiniFrames() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un elenco di mini contenenti le barre di controllo che appartengono al gestore di ancoraggio.  
  
##  <a name="getouteredgebounds"></a>CDockingManager::GetOuterEdgeBounds  
 Ottiene un rettangolo che contiene i bordi esterni del frame.  
  
```  
CRect GetOuterEdgeBounds() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un rettangolo che contiene i bordi esterni del frame.  
  
##  <a name="getpanelist"></a>CDockingManager::GetPaneList  
 Restituisce un elenco dei riquadri che appartengono al gestore di ancoraggio. Ciò include tutti i riquadri a virgola mobile.  
  
```  
void GetPaneList(
    CObList& lstBars,  
    BOOL bIncludeAutohide = FALSE,  
    CRuntimeClass* pRTCFilter = NULL,  
    BOOL bIncludeTabs = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `lstBars`  
 Contiene tutti i riquadri di gestione di ancoraggio corrente.  
  
 [in] `bIncludeAutohide`  
 `TRUE`Per includere i riquadri in modalità Nascondi automaticamente; in caso contrario, `FALSE`.  
  
 [in] `pRTCFilter`  
 Se non `NULL`, l'elenco restituito contiene riquadri solo della classe di runtime specificato.  
  
 [in] `bIncludeTabs`  
 `TRUE`Per includere schede. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se sono presenti riquadri a schede nel gestore di ancoraggio, il metodo restituisce i puntatori a [CBaseTabbedPane classe](../../mfc/reference/cbasetabbedpane-class.md) oggetti ed è necessario enumerare le schede in modo esplicito.  
  
 Utilizzare `pRTCFilter` per ottenere una classe particolare di riquadri. Ad esempio, è possibile ottenere solo le barre degli strumenti impostando questo valore in modo appropriato.  
  
##  <a name="getsmartdockingmanager"></a>CDockingManager::GetSmartDockingManager  
 Recupera un puntatore al gestore di ancoraggio intelligente.  
  
```  
CSmartDockingManager* GetSmartDockingManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [manager ancoraggio intelligente](http://msdn.microsoft.com/en-us/f537a1a6-fb9e-41d7-952f-0f25d5ee7534).  
  
##  <a name="getsmartdockingmanagerpermanent"></a>CDockingManager::GetSmartDockingManagerPermanent  
 Recupera un puntatore al gestore di ancoraggio intelligente.  
  
```  
CSmartDockingManager* GetSmartDockingManagerPermanent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al gestore di ancoraggio intelligente.  
  
##  <a name="getsmartdockingparams"></a>CDockingManager::GetSmartDockingParams  
 Restituisce i parametri di ancoraggio intelligenti per la gestione di ancoraggio.  
  
```  
static CSmartDockingInfo& GetSmartDockingParams();
```  
  
### <a name="return-value"></a>Valore restituito  
 La classe che contiene i parametri di ancoraggio intelligenti per la gestione di ancoraggio corrente. Per ulteriori informazioni, vedere [CSmartDockingInfo classe](../../mfc/reference/csmartdockinginfo-class.md).  
  
### <a name="remarks"></a>Note  
  
##  <a name="hideautohidepanes"></a>CDockingManager::HideAutoHidePanes  
 Nasconde un riquadro che si trova in modalità Nascondi automaticamente.  
  
```  
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,  
    BOOL bImmediately = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarToExclude`  
 Un puntatore a una barra per escludere da nascondere.  
  
 [in] `bImmediately`  
 `TRUE`Per nascondere il riquadro immediatamente. `FALSE` per nascondere il riquadro con l'effetto Nascondi automaticamente.  
  
##  <a name="insertdocksite"></a>CDockingManager::InsertDockSite  
 Crea un riquadro di ancoraggio e lo inserisce nell'elenco delle barre di controllo.  
  
```  
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,  
    DWORD dwAlignToInsertAfter,  
    CDockSite** ppDockBar = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `info`  
 Una struttura che contiene le informazioni di allineamento nel riquadro di ancoraggio.  
  
 [in] `dwAlignToInsertAfter`  
 Allineamento del Pannello di ancoraggio.  
  
 [out] `ppDockBar`  
 Un puntatore a un puntatore a un riquadro di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro dock è stato creato correttamente. `FALSE` in caso contrario.  
  
##  <a name="insertpane"></a>CDockingManager::InsertPane  
 Inserisce un riquadro di controllo nell'elenco di barre di controllo.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Un puntatore a un pannello di controllo.  
  
 [in] `pTarget`  
 Un puntatore a un riquadro di destinazione.  
  
 [in] `bAfter`  
 `TRUE`Per inserire il riquadro dopo la posizione del riquadro di destinazione. `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro di controllo viene aggiunta correttamente all'elenco di barre di controllo. `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce false se il riquadro di controllo è già nell'elenco delle barre di controllo o se il riquadro di destinazione non esiste nell'elenco delle barre di controllo.  
  
##  <a name="isdocksitemenu"></a>CDockingManager::IsDockSiteMenu  
 Specifica se le barre del titolo di tutti i riquadri verrà visualizzato un menu a comparsa.  
  
```  
static BOOL IsDockSiteMenu();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene visualizzato un menu di sito dock sulle didascalie di tutti i riquadri ancorati; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 È possibile abilitare il menu di sito di ancoraggio chiamando [CDockingManager::EnableDockSiteMenu](#enabledocksitemenu).  
  
##  <a name="isinadjustlayout"></a>CDockingManager::IsInAdjustLayout  
 Determina se i layout di tutti i riquadri vengono modificati.  
  
```  
BOOL IsInAdjustLayout() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il layout di tutti i riquadri vengono modificati; `FALSE` in caso contrario.  
  
##  <a name="isolecontainermode"></a>CDockingManager::IsOLEContainerMode  
 Specifica se l'ancoraggio manager è in modalità di contenitore OLE.  
  
```  
BOOL IsOLEContainerMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il gestore di ancoraggio è in modalità di contenitore OLE. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 In modalità di contenitore OLE, sono nascosti tutti i riquadri di ancoraggio e barre degli strumenti dell'applicazione. I riquadri sono nascoste in questa modalità se sono state impostate [CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode) a `TRUE`.  
  
##  <a name="ispointneardocksite"></a>CDockingManager::IsPointNearDockSite  
 Determina se un punto specificato è quasi il sito di ancoraggio.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Il punto specificato.  
  
 [out] `dwBarAlignment`  
 Specifica il bordo è il punto vicino. I valori consentiti sono `CBRS_ALIGN_LEFT`, `CBRS_ALIGN_RIGHT`, `CBRS_ALIGN_TOP` e `CBRS_ALIGN_BOTTOM`.  
  
 [out] `bOuterEdge`  
 `TRUE`Se il punto è quasi il bordo esterno del sito di ancoraggio; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il punto è quasi il sito di ancoraggio; in caso contrario `FALSE`.  
  
##  <a name="isprintpreviewvalid"></a>CDockingManager::IsPrintPreviewValid  
 Determina se è impostata la modalità di anteprima di stampa.  
  
```  
BOOL IsPrintPreviewValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è impostata la modalità di anteprima di stampa; `FALSE` in caso contrario.  
  
##  <a name="loadstate"></a>CDockingManager::LoadState  
 Carica lo stato di ancoraggio manager dal Registro di sistema.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Nome del profilo.  
  
 [in] `uiID`  
 L'id del gestore di ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato di gestione di ancoraggio è stato caricato correttamente. in caso contrario `FALSE`.  
  
##  <a name="lockupdate"></a>CDockingManager::LockUpdate  
 Blocca la finestra specificata.  
  
```  
void LockUpdate(BOOL bLock);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bLock`  
 `TRUE`Se la finestra è bloccata; `FALSE` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Quando una finestra è bloccata, non può essere spostata e non può essere ridisegnato.  
  
##  <a name="m_bhidedockingbarsincontainermode"></a>CDockingManager::m_bHideDockingBarsInContainerMode  
 Specifica se il gestore di ancoraggio nascosti riquadri in modalità di contenitore OLE.  
  
```  
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore su `FALSE` se si desidera mantenere tutti i riquadri ancorati sulla cornice principale visibile quando l'applicazione è in modalità di contenitore OLE. Per impostazione predefinita, questo valore è `TRUE`.  
  
##  <a name="m_dockmodeglobal"></a>CDockingManager::m_dockModeGlobal  
 Specifica la modalità di ancoraggio globale.  
  
```  
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, ogni riquadro ancorato Usa questa modalità di ancoraggio. Per ulteriori informazioni sui valori che è possibile impostare questo campo, vedere [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).  
  
##  <a name="m_ndocksensitivity"></a>CDockingManager::m_nDockSensitivity  
 Specifica la sensibilità ancoraggio.  
  
```  
AFX_IMPORT_DATA static int m_nDockSensitivity;  
```  
  
### <a name="remarks"></a>Note  
 La riservatezza alloggiamento definisce la distanza a virgola mobile riquadro può arrivare a un riquadro ancorato, sito di ancoraggio o un altro riquadro prima che il framework modifichi il proprio stato su ancorato.  
  
##  <a name="m_ntimeoutbeforedockingbardock"></a>CDockingManager::m_nTimeOutBeforeDockingBarDock  
 Specifica il tempo, espresso in millisecondi, prima di un riquadro ancorato è ancorato in modalità di ancoraggio immediata.  
  
```  
static UINT m_nTimeOutBeforeDockingBarDock;  
```  
  
### <a name="remarks"></a>Note  
 Prima di un riquadro ancorato, il framework attende il periodo di tempo specificato. Ciò impedisce che il riquadro ancorato in un percorso accidentalmente mentre l'utente sta ancora trascinando.  
  
##  <a name="m_ntimeoutbeforetoolbardock"></a>CDockingManager::m_nTimeOutBeforeToolBarDock  
 Specifica il tempo, espresso in millisecondi, prima che una barra degli strumenti è ancorata alla finestra cornice principale.  
  
```  
static UINT m_nTimeOutBeforeToolBarDock;  
```  
  
### <a name="remarks"></a>Note  
 Prima di una barra degli strumenti è ancorata, il framework attende il periodo di tempo specificato. Ciò impedisce di accidentalmente ancorato in un percorso mentre l'utente sta ancora trascinando la barra degli strumenti.  
  
##  <a name="onactivateframe"></a>CDockingManager::OnActivateFrame  
 Chiamato dal framework quando la finestra cornice viene attiva o disattivata.  
  
```  
virtual void OnActivateFrame(BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActivate`  
 Se `TRUE`, la finestra cornice viene resa attiva; in caso `FALSE`, la finestra cornice viene disattivata.  
  
##  <a name="onclosepopupmenu"></a>CDockingManager::OnClosePopupMenu  
 Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.  
  
```  
void OnClosePopupMenu();
```  
  
### <a name="remarks"></a>Note  
 Il framework invia un messaggio WM_DESTROY quando sta per chiudere la finestra principale corrente. Eseguire l'override di questo metodo per gestire le notifiche da `CMFCPopupMenu` oggetti appartenenti alla finestra cornice quando un `CMFCPopupMenu` oggetto processi un `WM_DESTROY` messaggio.  
  
##  <a name="onmoveminiframe"></a>CDockingManager::OnMoveMiniFrame  
 Chiamato dal framework per spostare una finestra con mini-cornice.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
 Un puntatore a una finestra con mini-cornice.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo; in caso contrario `FALSE`.  
  
##  <a name="onpanecontextmenu"></a>CDockingManager::OnPaneContextMenu  
 Chiamato dal framework quando si compila un menu con un elenco dei riquadri.  
  
```  
void OnPaneContextMenu(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Specifica il percorso del menu.  
  
##  <a name="panefrompoint"></a>CDockingManager::PaneFromPoint  
 Restituisce il riquadro che contiene il punto specificato.  
  
```  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    bool bExactBar = false,  
    CRuntimeClass* pRTCBarType = NULL,  
    BOOL bCheckVisibility = FALSE,  
    const CBasePane* pBarToIgnore = NULL) const;  
  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    DWORD& dwAlignment,  
    CRuntimeClass* pRTCBarType = NULL,  
    const CBasePane* pBarToIgnore = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Specifica il punto in coordinate dello schermo, per verificare.  
  
 [in] `nSensitivity`  
 Il valore di ingrandimento il rettangolo della finestra di ciascun riquadro selezionato. Un riquadro soddisfa i criteri di ricerca, se il punto specificato si trova in questa area ingrandita.  
  
 [in] `bExactBar`  
 `TRUE`per ignorare il `nSensitivity` parametro; in caso contrario, `FALSE`.  
  
 [in] `pRTCBarType`  
 Se non `NULL`, il metodo cerca solo i riquadri del tipo specificato.  
  
 [in] `bCheckVisibility`  
 `TRUE`Per controllare solo i riquadri visibili; in caso contrario, `FALSE`.  
  
 [out] `dwAlignment`  
 Se viene trovato un riquadro nel punto specificato, questo parametro contiene il lato del riquadro che è stato più vicino al punto specificato. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] `pBarToIgnore`  
 Se non `NULL`, il metodo ignora riquadri specificati dal parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Il [CBasePane](../../mfc/reference/cbasepane-class.md)-oggetto che contiene il punto specificato, derivato o `NULL` se è stato trovato alcun riquadro.  
  
### <a name="remarks"></a>Note  
 Quando la funzione restituisce e un riquadro è stato trovato, `dwAlignment` contiene l'allineamento del punto specificato. Se ad esempio, il punto più vicino alla parte superiore del riquadro, `dwAlignment` è impostato su `CBRS_ALIGN_TOP`.  
  
##  <a name="processpanecontextmenucommand"></a>CDockingManager::ProcessPaneContextMenuCommand  
 Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.  
  
```  
BOOL ProcessPaneContextMenuCommand(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 L'id di una barra di controllo nel menu.  
  
 [in] `nCode`  
 Il codice di notifica comando.  
  
 [in] `pExtra`  
 Viene eseguito il cast a un puntatore a un puntatore a void che `CCmdUI` se `nCode` è mediante.  
  
 [in] `pHandlerInfo`  
 Un puntatore a una struttura di informazioni. Questo parametro non viene usato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se `pEXtra` non è NULL e `nCode` è uguale a mediante, o se è presente una barra di controllo con l'oggetto specificato `nID`.  
  
##  <a name="recalclayout"></a>CDockingManager::RecalcLayout  
 Ricalcola il layout dei controlli presenti nell'elenco dei controlli interno.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bNotify`  
 Questo parametro non viene usato.  
  
##  <a name="releaseemptypanecontainers"></a>CDockingManager::ReleaseEmptyPaneContainers  
 Rilascia i contenitori di riquadro vuoto.  
  
```  
void ReleaseEmptyPaneContainers();
```  
  
##  <a name="removehiddenmditabbedbar"></a>CDockingManager::RemoveHiddenMDITabbedBar  
 Rimuove l'oggetto nascosto barra riquadro specificato.  
  
```  
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a una barra riquadro da rimuovere.  
  
##  <a name="removeminiframe"></a>CDockingManager::RemoveMiniFrame  
 Rimuove un intervallo specificato dall'elenco dei mini frame.  
  
```  
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Un puntatore a un frame da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene rimosso il frame specificato. `FALSE` in caso contrario.  
  
##  <a name="removepanefromdockmanager"></a>CDockingManager::RemovePaneFromDockManager  
 Annulla la registrazione di un riquadro e lo rimuove dall'elenco nel gestore di ancoraggio.  
  
```  
void RemovePaneFromDockManager(
    CBasePane* pWnd,  
    BOOL bDestroy,  
    BOOL bAdjustLayout,  
    BOOL bAutoHide = FALSE,  
    CBasePane* pBarReplacement = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Un puntatore a un riquadro da rimuovere.  
  
 [in] `bDestroy`  
 Se `TRUE`, nel riquadro rimosso viene eliminato.  
  
 [in] `bAdjustLayout`  
 Se `TRUE`, modificare il layout di ancoraggio immediatamente.  
  
 [in] `bAutoHide`  
 Se `TRUE`, il riquadro viene rimosso dall'elenco delle barre Nascondi automaticamente. Se `FALSE`, il riquadro viene rimosso dall'elenco dei riquadri regolari.  
  
 [in] `pBarReplacement`  
 Un puntatore a un riquadro che sostituisce il riquadro rimosso.  
  
##  <a name="replacepane"></a>CDockingManager::ReplacePane  
 Sostituisce un riquadro con un altro.  
  
```  
BOOL ReplacePane(
    CDockablePane* pOriginalBar,  
    CDockablePane* pNewBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pOriginalBar`  
 Puntatore al riquadro originale.  
  
 [in] `pNewBar`  
 Puntatore al riquadro che sostituisce il riquadro originale.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro viene sostituito; `FALSE` in caso contrario.  
  
##  <a name="resortminiframesforzorder"></a>CDockingManager::ResortMiniFramesForZOrder  
 Ricorre i frame nell'elenco dei mini frame.  
  
```  
void ResortMiniFramesForZOrder();
```  
  
##  <a name="savestate"></a>CDockingManager::SaveState  
 Salva lo stato di ancoraggio manager nel Registro di sistema.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Un percorso di una chiave del Registro di sistema.  
  
 [in] `uiID`  
 L'ID del manager ancoraggio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato è stato salvato correttamente. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Salvataggio dello stato di ancoraggio manager nel Registro di sistema comporta il salvataggio di stati delle barre di controllo, gli stati delle barre di Nascondi automaticamente e gli stati dei frame mini presenti nel gestore di ancoraggio.  
  
##  <a name="sendmessagetominiframes"></a>CDockingManager::SendMessageToMiniFrames  
 Invia il messaggio specificato a tutti i fotogrammi i minidump.  
  
```  
BOOL SendMessageToMiniFrames(
    UINT uMessage,  
    WPARAM wParam = 0,  
    LPARAM lParam = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uMessage`  
 Il messaggio da inviare.  
  
 [in] `wParam`  
 Informazioni dipendente da altri messaggi.  
  
 [in] `lParam`  
 Informazioni dipendente da altri messaggi.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`sempre.  
  
##  <a name="serialize"></a>CDockingManager::Serialize  
 Scrive il gestore di ancoraggio in un archivio.  
  
```  
void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
 Un riferimento a un oggetto archivio.  
  
### <a name="remarks"></a>Note  
 La scrittura di gestione di ancoraggio in un archivio comporta determinazione del numero di ancoraggio di barre di controllo e i dispositivi di scorrimento e la scrittura le barre di controllo, i frame mini, le barre Nascondi automaticamente e le barre MDI a schede nell'archivio.  
  
##  <a name="setautohidezorder"></a>CDockingManager::SetAutohideZOrder  
 Imposta la dimensione, la larghezza e altezza delle barre di controllo e il riquadro specificato.  
  
```  
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pAHDockingBar`  
 Un puntatore a un riquadro ancorato.  
  
##  <a name="setdockingmode"></a>CDockingManager::SetDockingMode  
 Imposta la modalità di ancoraggio.  
  
```  
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,  
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```  
  
### <a name="parameters"></a>Parametri  
 `dockMode`  
 Specifica la nuova modalità di ancoraggio. Per altre informazioni, vedere la sezione Osservazioni.  
  
 `theme`  
 Specifica il tema da utilizzare per i marcatori di ancoraggio. Può essere uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo statico per impostare la modalità di ancoraggio.  
  
 `dockMode`può essere uno dei valori seguenti:  
  
- `DT_STANDARD`-Modalità di ancoraggio implementato in Visual Studio .NET 2003 standard. Riquadri vengono trascinati senza un contesto di trascinamento.  
  
- `DT_IMMEDIATE`-Modalità di ancoraggio immediata come implementato in Microsoft Visio. Riquadri vengono trascinati con un contesto di trascinamento, ma non i marcatori.  
  
- `DT_SMART`-Smart modalità di ancoraggio implementato in Visual Studio 2005. Riquadri vengono trascinati con un contesto di trascinamento e vengono visualizzati gli indicatori smart che mostra in cui il riquadro può essere ancorato.  
  
##  <a name="setdockstate"></a>CDockingManager::SetDockState  
 Imposta lo stato di ancoraggio di barre di controllo, i frame mini e le barre Nascondi automaticamente.  
  
```  
virtual void SetDockState();
```  
  
##  <a name="setprintpreviewmode"></a>CDockingManager::SetPrintPreviewMode  
 Imposta la modalità di anteprima di stampa delle barre che vengono visualizzati nell'anteprima di stampa.  
  
```  
void SetPrintPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bPreview`  
 `TRUE`Se è impostata la modalità anteprima di stampa; `FALSE` in caso contrario.  
  
 [in] `pState`  
 Un puntatore a uno stato di anteprima. Questo parametro non viene usato.  
  
##  <a name="setsmartdockingparams"></a>CDockingManager::SetSmartDockingParams  
 Imposta i parametri che definiscono il comportamento di ancoraggio intelligente.  
  
```  
static void SetSmartDockingParams(CSmartDockingInfo& params);
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `params`  
 Definisce i parametri per ancoraggio intelligente.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo se si desidera personalizzare l'aspetto, il colore o forma degli indicatori di ancoraggio intelligente.  
  
 Per utilizzare l'aspetto predefinito per i marcatori di ancoraggio, passare un'istanza non inizializzata di [CSmartDockingInfo classe](../../mfc/reference/csmartdockinginfo-class.md) a `params`.  
  
##  <a name="showdelayshowminiframes"></a>CDockingManager::ShowDelayShowMiniFrames  
 Mostra o nasconde le finestre dei frame minidump.  
  
```  
void ShowDelayShowMiniFrames(BOOL bshow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 `TRUE`Per attivare la finestra del frame indicato; `FALSE to` nascondere la finestra del frame.  
  
##  <a name="showpanes"></a>CDockingManager::ShowPanes  
 Mostra o nasconde i riquadri delle barre di controllo e Nascondi automaticamente.  
  
```  
virtual BOOL ShowPanes(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 `TRUE`Per mostrare i riquadri; `FALSE to` nascondere i riquadri.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE`.  
  
##  <a name="startsdocking"></a>CDockingManager::StartSDocking  
 Avvia l'ancoraggio intelligente della finestra specificata in base l'allineamento del gestore di ancoraggio intelligente.  
  
```  
void StartSDocking(CWnd* pDockingWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockingWnd`  
 Un puntatore a un ancoraggio della finestra.  
  
##  <a name="stopsdocking"></a>CDockingManager::StopSDocking  
 Arresta smart ancoraggio.  
  
```  
void StopSDocking();
```  
  
##  <a name="getsmartdockingtheme"></a>CDockingManager::GetSmartDockingTheme  
 Un metodo statico che restituisce un tema utilizzato per visualizzare i marcatori di ancoraggio.  
  
```  
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)   
 [Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)

