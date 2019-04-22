---
title: Classe CDockingManager
ms.date: 11/04/2016
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
helpviewer_keywords:
- CDockingManager [MFC], AddDockSite
- CDockingManager [MFC], AddHiddenMDITabbedBar
- CDockingManager [MFC], AddMiniFrame
- CDockingManager [MFC], AddPane
- CDockingManager [MFC], AdjustDockingLayout
- CDockingManager [MFC], AdjustPaneFrames
- CDockingManager [MFC], AdjustRectToClientArea
- CDockingManager [MFC], AlignAutoHidePane
- CDockingManager [MFC], AutoHidePane
- CDockingManager [MFC], BringBarsToTop
- CDockingManager [MFC], BuildPanesMenu
- CDockingManager [MFC], CalcExpectedDockedRect
- CDockingManager [MFC], Create
- CDockingManager [MFC], DeterminePaneAndStatus
- CDockingManager [MFC], DisableRestoreDockState
- CDockingManager [MFC], DockPane
- CDockingManager [MFC], DockPaneLeftOf
- CDockingManager [MFC], EnableAutoHidePanes
- CDockingManager [MFC], EnableDocking
- CDockingManager [MFC], EnableDockSiteMenu
- CDockingManager [MFC], EnablePaneContextMenu
- CDockingManager [MFC], FindDockSite
- CDockingManager [MFC], FindDockSiteByPane
- CDockingManager [MFC], FindPaneByID
- CDockingManager [MFC], FixupVirtualRects
- CDockingManager [MFC], FrameFromPoint
- CDockingManager [MFC], GetClientAreaBounds
- CDockingManager [MFC], GetDockingMode
- CDockingManager [MFC], GetDockSiteFrameWnd
- CDockingManager [MFC], GetEnabledAutoHideAlignment
- CDockingManager [MFC], GetMiniFrames
- CDockingManager [MFC], GetOuterEdgeBounds
- CDockingManager [MFC], GetPaneList
- CDockingManager [MFC], GetSmartDockingManager
- CDockingManager [MFC], GetSmartDockingManagerPermanent
- CDockingManager [MFC], GetSmartDockingParams
- CDockingManager [MFC], GetSmartDockingTheme
- CDockingManager [MFC], HideAutoHidePanes
- CDockingManager [MFC], InsertDockSite
- CDockingManager [MFC], InsertPane
- CDockingManager [MFC], IsDockSiteMenu
- CDockingManager [MFC], IsInAdjustLayout
- CDockingManager [MFC], IsOLEContainerMode
- CDockingManager [MFC], IsPointNearDockSite
- CDockingManager [MFC], IsPrintPreviewValid
- CDockingManager [MFC], LoadState
- CDockingManager [MFC], LockUpdate
- CDockingManager [MFC], OnActivateFrame
- CDockingManager [MFC], OnClosePopupMenu
- CDockingManager [MFC], OnMoveMiniFrame
- CDockingManager [MFC], OnPaneContextMenu
- CDockingManager [MFC], PaneFromPoint
- CDockingManager [MFC], ProcessPaneContextMenuCommand
- CDockingManager [MFC], RecalcLayout
- CDockingManager [MFC], ReleaseEmptyPaneContainers
- CDockingManager [MFC], RemoveHiddenMDITabbedBar
- CDockingManager [MFC], RemoveMiniFrame
- CDockingManager [MFC], RemovePaneFromDockManager
- CDockingManager [MFC], ReplacePane
- CDockingManager [MFC], ResortMiniFramesForZOrder
- CDockingManager [MFC], SaveState
- CDockingManager [MFC], SendMessageToMiniFrames
- CDockingManager [MFC], Serialize
- CDockingManager [MFC], SetAutohideZOrder
- CDockingManager [MFC], SetDockingMode
- CDockingManager [MFC], SetDockState
- CDockingManager [MFC], SetPrintPreviewMode
- CDockingManager [MFC], SetSmartDockingParams
- CDockingManager [MFC], ShowDelayShowMiniFrames
- CDockingManager [MFC], ShowPanes
- CDockingManager [MFC], StartSDocking
- CDockingManager [MFC], StopSDocking
- CDockingManager [MFC], m_bHideDockingBarsInContainerMode
- CDockingManager [MFC], m_dockModeGlobal
- CDockingManager [MFC], m_nDockSensitivity
- CDockingManager [MFC], m_nTimeOutBeforeDockingBarDock
- CDockingManager [MFC], m_nTimeOutBeforeToolBarDock
ms.assetid: 98e69c43-55d8-4f43-b861-4fda80ec1e32
ms.openlocfilehash: 6d3bbafa15ada97f53710f0faf6a18ea8e892f6c
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58771318"
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
|[CDockingManager::AddDockSite](#adddocksite)|Crea un pannello dock e lo aggiunge all'elenco di barre di controllo.|
|[CDockingManager::AddHiddenMDITabbedBar](#addhiddenmditabbedbar)|Aggiunge un handle a una barra di riquadro per l'elenco di nascosto MDI a schede riquadri della barra.|
|[CDockingManager::AddMiniFrame](#addminiframe)|Aggiunge un frame all'elenco di frame di formattazione rapida.|
|[CDockingManager::AddPane](#addpane)|Registra un riquadro con il gestore di ancoraggio.|
|[CDockingManager::AdjustDockingLayout](#adjustdockinglayout)|Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.|
|[CDockingManager::AdjustPaneFrames](#adjustpaneframes)|Fa sì che il messaggio WM_NCCALCSIZE da inviare a tutti i riquadri e `CPaneFrameWnd` windows.|
|[CDockingManager::AdjustRectToClientArea](#adjustrecttoclientarea)|Regola l'allineamento di un rettangolo.|
|[CDockingManager::AlignAutoHidePane](#alignautohidepane)|Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che accetta l'intera larghezza o altezza dell'area client del frame racchiuso da ancorare i siti.|
|[CDockingManager::AutoHidePane](#autohidepane)|Crea una barra degli strumenti Nascondi automaticamente.|
|[CDockingManager::BringBarsToTop](#bringbarstotop)|Introduce le barre ancorate che hanno l'allineamento specificato nella parte superiore.|
|[CDockingManager::BuildPanesMenu](#buildpanesmenu)|Aggiunge i nomi di barre degli strumenti e riquadri di ancoraggio a un menu.|
|[CDockingManager::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata.|
|[CDockingManager::Create](#create)|Crea un gestore di ancoraggio.|
|[CDockingManager::DeterminePaneAndStatus](#determinepaneandstatus)|Determina il riquadro che contiene un punto specificato e il relativo stato di ancoraggio.|
|[CDockingManager::DisableRestoreDockState](#disablerestoredockstate)|Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.|
|[CDockingManager::DockPane](#dockpane)|Ancora un riquadro a un altro riquadro o a una finestra cornice.|
|[CDockingManager::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|
|[CDockingManager::EnableAutoHidePanes](#enableautohidepanes)|Consente di ancoraggio del riquadro per la cornice principale, crea un pannello dock e lo aggiunge all'elenco di barre di controllo.|
|[CDockingManager::EnableDocking](#enabledocking)|Crea un pannello dock e abilita l'ancoraggio del riquadro per la cornice principale.|
|[CDockingManager::EnableDockSiteMenu](#enabledocksitemenu)|Consente di visualizzare un pulsante aggiuntivo che si apre un menu a comparsa nelle didascalie di tutti i riquadri di ancoraggio.|
|[CDockingManager::EnablePaneContextMenu](#enablepanecontextmenu)|Indica alla libreria per visualizzare un menu di scelta rapida speciale che contiene un elenco dei riquadri di ancoraggio e barre degli strumenti dell'applicazione quando l'utente sceglie il pulsante destro del mouse e la raccolta sta elaborando il messaggio WM_CONTEXTMENU.|
|[CDockingManager::FindDockSite](#finddocksite)|Recupera la barra di riquadro che si trova nella posizione specificata e con l'allineamento specificato.|
|[CDockingManager::FindDockSiteByPane](#finddocksitebypane)|Restituisce la barra di riquadro con l'id del riquadro barra di destinazione.|
|[CDockingManager::FindPaneByID](#findpanebyid)|Trova un riquadro per l'ID del controllo specificato.|
|[CDockingManager::FixupVirtualRects](#fixupvirtualrects)|Esegue il commit di tutte le posizioni della barra degli strumenti correnti ai rettangoli virtuale.|
|[CDockingManager::FrameFromPoint](#framefrompoint)|Restituisce la cornice che contiene il punto specificato.|
|[CDockingManager::GetClientAreaBounds](#getclientareabounds)|Ottiene il rettangolo che contiene i limiti dell'area client.|
|[CDockingManager::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio corrente.|
|[CDockingManager::GetDockSiteFrameWnd](#getdocksiteframewnd)|Ottiene un puntatore alla cornice della finestra padre.|
|[CDockingManager::GetEnabledAutoHideAlignment](#getenabledautohidealignment)|Restituisce l'allineamento dei riquadri abilitata.|
|[CDockingManager::GetMiniFrames](#getminiframes)|Ottiene un elenco di mini.|
|[CDockingManager::GetOuterEdgeBounds](#getouteredgebounds)|Ottiene un rettangolo contenente bordi esterni del frame.|
|[CDockingManager::GetPaneList](#getpanelist)|Restituisce un elenco di riquadri che appartengono al gestore di ancoraggio. Sono inclusi tutti i riquadri mobili.|
|[CDockingManager::GetSmartDockingManager](#getsmartdockingmanager)|Recupera un puntatore per il gestore di ancoraggio intelligente.|
|[CDockingManager::GetSmartDockingManagerPermanent](#getsmartdockingmanagerpermanent)|Recupera un puntatore per il gestore di ancoraggio intelligente.|
|[CDockingManager::GetSmartDockingParams](#getsmartdockingparams)|Restituisce i parametri di ancoraggio intelligenti per il gestore di ancoraggio.|
|[CDockingManager::GetSmartDockingTheme](#getsmartdockingtheme)|Un metodo statico che restituisce un tema usato per visualizzare i marcatori di ancoraggio.|
|[CDockingManager::HideAutoHidePanes](#hideautohidepanes)|Consente di nascondere un riquadro in modalità Nascondi automaticamente.|
|[CDockingManager::InsertDockSite](#insertdocksite)|Crea un pannello dock e lo inserisce nell'elenco di barre di controllo.|
|[CDockingManager::InsertPane](#insertpane)|Inserisce un riquadro di controllo nell'elenco di barre di controllo.|
|[CDockingManager::IsDockSiteMenu](#isdocksitemenu)|Specifica se viene visualizzato un menu a comparsa nelle didascalie di tutti i riquadri.|
|[CDockingManager::IsInAdjustLayout](#isinadjustlayout)|Determina se i layout di tutti i riquadri vengono modificati.|
|[CDockingManager::IsOLEContainerMode](#isolecontainermode)|Specifica se il gestore di ancoraggio è in modalità contenitore OLE.|
|[CDockingManager::IsPointNearDockSite](#ispointneardocksite)|Determina se un punto specificato si trova vicino al sito di ancoraggio.|
|[CDockingManager::IsPrintPreviewValid](#isprintpreviewvalid)|Determina se è impostata la modalità di anteprima di stampa.|
|[CDockingManager::LoadState](#loadstate)|Carica lo stato del gestore di ancoraggio dal Registro di sistema.|
|[CDockingManager::LockUpdate](#lockupdate)|Blocca la finestra specificata.|
|[CDockingManager::OnActivateFrame](#onactivateframe)|Chiamato dal framework quando la finestra cornice viene reso attiva o è disattivata.|
|[CDockingManager::OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|
|[CDockingManager::OnMoveMiniFrame](#onmoveminiframe)|Chiamato dal framework per spostare una finestra con mini-cornice.|
|[CDockingManager::OnPaneContextMenu](#onpanecontextmenu)|Chiamato dal framework durante la generazione di un menu che contiene un elenco dei riquadri.|
|[CDockingManager::PaneFromPoint](#panefrompoint)|Restituisce il riquadro che contiene il punto specificato.|
|[CDockingManager::ProcessPaneContextMenuCommand](#processpanecontextmenucommand)|Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcola il layout di un riquadro visualizzato.|
|[CDockingManager::RecalcLayout](#recalclayout)|Ricalcola il layout interno dei controlli presenti nell'elenco dei controlli.|
|[CDockingManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)|Rilascia i contenitori di riquadro vuoto.|
|[CDockingManager::RemoveHiddenMDITabbedBar](#removehiddenmditabbedbar)|Rimuove l'oggetto nascosto barra riquadro specificato.|
|[CDockingManager::RemoveMiniFrame](#removeminiframe)|Rimuove un intervallo specificato dall'elenco di frame di formattazione rapida.|
|[CDockingManager::RemovePaneFromDockManager](#removepanefromdockmanager)|Annulla la registrazione di un riquadro e lo rimuove dall'elenco nel gestore di ancoraggio.|
|[CDockingManager::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|
|[CDockingManager::ResortMiniFramesForZOrder](#resortminiframesforzorder)|Ricorre invece i frame nell'elenco di frame di formattazione rapida.|
|[CDockingManager::SaveState](#savestate)|Salva lo stato del gestore di ancoraggio del Registro di sistema.|
|[CDockingManager::SendMessageToMiniFrames](#sendmessagetominiframes)|Invia il messaggio specificato a tutti i frame di formattazione rapida.|
|[CDockingManager::Serialize](#serialize)|Scrive il gestore di ancoraggio di un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CDockingManager::SetAutohideZOrder](#setautohidezorder)|Imposta le dimensioni, larghezza e altezza delle barre di controllo e il riquadro specificato.|
|[CDockingManager::SetDockingMode](#setdockingmode)|Imposta la modalità di ancoraggio.|
|[CDockingManager::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio di barre di controllo, i frame mini e le barre di Nascondi automaticamente.|
|[CDockingManager::SetPrintPreviewMode](#setprintpreviewmode)|Imposta la modalità di anteprima di stampa di barre visualizzate nell'anteprima di stampa.|
|[CDockingManager::SetSmartDockingParams](#setsmartdockingparams)|Imposta i parametri che definiscono il comportamento di ancoraggio intelligente.|
|[CDockingManager::ShowDelayShowMiniFrames](#showdelayshowminiframes)|Mostra o nasconde le finestre dei frame mini.|
|[CDockingManager::ShowPanes](#showpanes)|Mostra o nasconde i riquadri delle barre di controllo e che si nascondono automaticamente.|
|[CDockingManager::StartSDocking](#startsdocking)|Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.|
|[CDockingManager::StopSDocking](#stopsdocking)|Arresta smart di ancoraggio.|

### <a name="data-members"></a>Membri di dati

|Nome|Descrizione|
|----------|-----------------|
|[CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode)|Specifica se il gestore di ancoraggio consente di nascondere i riquadri in modalità contenitore OLE.|
|[CDockingManager::m_dockModeGlobal](#m_dockmodeglobal)|Specifica la modalità di ancoraggio globale.|
|[CDockingManager::m_nDockSensitivity](#m_ndocksensitivity)|Specifica la sensibilità ancoraggio.|
|[CDockingManager::m_nTimeOutBeforeDockingBarDock](#m_ntimeoutbeforedockingbardock)|Specifica il tempo, espresso in millisecondi, prima che un riquadro ancorato è ancorato in modalità di ancoraggio immediata.|
|[CDockingManager::m_nTimeOutBeforeToolBarDock](#m_ntimeoutbeforetoolbardock)|Specifica il tempo, espresso in millisecondi, prima di una barra degli strumenti è ancorata alla finestra cornice principale.|

## <a name="remarks"></a>Note

La finestra cornice principale crea e inizializza automaticamente questa classe.

L'oggetto manager ancoraggio contiene un elenco di tutti i riquadri in layout di ancoraggio, nonché un elenco di tutti i [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) windows che appartengono alla finestra cornice principale.

Il `CDockingManager` classe implementa alcuni servizi che è possibile usare per trovare un riquadro o un `CPaneFrameWnd` finestra. In genere non chiamare questi servizi direttamente in quanto tali tipi vengono incapsulati nell'oggetto finestra cornice principale. Per altre informazioni, vedere [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).

## <a name="customization-tips"></a>Suggerimenti per la personalizzazione

I suggerimenti seguenti si applicano a `CDockingManager` oggetti:

- [Classe CDockingManager](../../mfc/reference/cdockingmanager-class.md) supporta queste modalità di ancoraggio:

  - `AFX_DOCK_TYPE::DT_IMMEDIATE`

  - `AFX_DOCK_TYPE::DT_STANDARD`

  - `AFX_DOCK_TYPE::DT_SMART`

  Queste modalità di ancoraggio sono definite da [CDockingManager::m_dockModeGlobal](#m_dockmodeglobal) e vengono impostati chiamando [CDockingManager::SetDockingMode](#setdockingmode).

- Se si desidera creare un riquadro fissa, non ridimensionabile, chiamare il [CDockingManager::AddPane](#addpane) (metodo). Questo metodo registra il riquadro con il gestore di ancoraggio, che è responsabile per il layout del riquadro.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CDockingManager` classe per configurare un `CDockingManager` oggetto. Nell'esempio viene illustrato come visualizzare un pulsante aggiuntivo che si apre un menu a comparsa nelle didascalie di tutti i riquadri ancorati e come impostare la modalità di ancoraggio dell'oggetto. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDockingManager](../../mfc/reference/cdockingmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockingManager.h

##  <a name="adddocksite"></a>  CDockingManager::AddDockSite

Crea un pannello dock e lo aggiunge all'elenco di barre di controllo.

```
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*info*<br/>
[in] Un riferimento a una struttura di informazioni che contiene ancora l'allineamento di riquadro.

*ppDockBar*<br/>
[out] Un puntatore a un puntatore al nuovo riquadro ancorato.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro dock è stato creato correttamente. FALSE in caso contrario.

##  <a name="addhiddenmditabbedbar"></a>  CDockingManager::AddHiddenMDITabbedBar

Aggiunge un handle a una barra di riquadro per l'elenco di nascosto MDI a schede riquadri della barra.

```
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Un puntatore a una barra riquadro

##  <a name="addpane"></a>  CDockingManager::AddPane

Registra un riquadro con il gestore di ancoraggio.

```
BOOL AddPane(
    CBasePane* pWnd,
    BOOL bTail = TRUE,
    BOOL bAutoHide = FALSE,
    BOOL bInsertForOuterEdge = FALSE);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in, out] Specifica il riquadro per aggiungere il gestore di ancoraggio.

*bTail*<br/>
[in] TRUE per aggiungere il riquadro alla fine dell'elenco di riquadri per il gestore di ancoraggio; in caso contrario, FALSE.

*bAutoHide*<br/>
[in] Solo per uso interno. Usare sempre il valore predefinito FALSE.

*bInsertForOuterEdge*<br/>
[in] Solo per uso interno. Usare sempre il valore predefinito FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato registrato correttamente con il gestore di ancoraggio; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questo metodo per registrare i riquadri non mobile, non ridimensionabile con il gestore di ancoraggio. Se non si registrano i riquadri, non verranno visualizzate correttamente quando il gestore di ancoraggio è disposto.

##  <a name="adjustdockinglayout"></a>  CDockingManager::AdjustDockingLayout

Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.

```
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```

### <a name="parameters"></a>Parametri

*hdwp*<br/>
[in] Specifica la struttura della posizione finestra posticipata. Per altre informazioni, vedere [Tipi di dati Windows](/windows/desktop/WinProg/windows-data-types).

### <a name="remarks"></a>Note

##  <a name="addminiframe"></a>  CDockingManager::AddMiniFrame

Aggiunge un frame all'elenco di frame di formattazione rapida.

```
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Un puntatore a un frame.

### <a name="return-value"></a>Valore restituito

TRUE se il frame non è nell'elenco di frame mini ed è stato aggiunto correttamente; FALSE in caso contrario.

##  <a name="adjustpaneframes"></a>  CDockingManager::AdjustPaneFrames

Fa sì che il messaggio WM_NCCALCSIZE da inviare a tutti i riquadri e `CPaneFrameWnd` windows.

```
virtual void AdjustPaneFrames();
```

### <a name="remarks"></a>Note

##  <a name="adjustrecttoclientarea"></a>  CDockingManager::AdjustRectToClientArea

Regola l'allineamento di un rettangolo.

```
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*rectResult*<br/>
[in] Un riferimento a un `CRect` oggetto

*dwAlignment*<br/>
[in] L'allineamento del `CRect` oggetto

### <a name="return-value"></a>Valore restituito

TRUE se l'allineamento del `CRect` oggetto è stato modificato; FALSE in caso contrario.

### <a name="remarks"></a>Note

Il *dwAlignment* parametro può avere uno dei valori seguenti:

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

##  <a name="alignautohidepane"></a>  CDockingManager::AlignAutoHidePane

Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che accetta l'intera larghezza o altezza dell'area client del frame racchiuso da ancorare i siti.

```
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,
    BOOL bIsVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pDefaultSlider*<br/>
[in] Il riquadro ancorato di dispositivo di scorrimento.

*bIsVisible*<br/>
[in] TRUE se il riquadro ancorato è visibile; FALSE in caso contrario.

##  <a name="autohidepane"></a>  CDockingManager::AutoHidePane

Crea una barra degli strumenti Nascondi automaticamente.

```
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Un puntatore a barra di riquadro.

*pCurrAutoHideToolBar*<br/>
[in] Puntatore a una barra degli strumenti Nascondi automaticamente.

### <a name="return-value"></a>Valore restituito

NULL se la barra degli strumenti Nascondi automaticamente non è stato creato. in caso contrario un puntatore per la nuova barra degli strumenti.

##  <a name="bringbarstotop"></a>  CDockingManager::BringBarsToTop

Introduce le barre ancorate che hanno l'allineamento specificato nella parte superiore.

```
void BringBarsToTop(
    DWORD dwAlignment = 0,
    BOOL bExcludeDockedBars = TRUE);
```

### <a name="parameters"></a>Parametri

*dwAlignment*<br/>
[in] L'allineamento delle barre di ancoraggio che vengono offerti in cima ad altre finestre.

*bExcludeDockedBars*<br/>
[in] TRUE per escludere le barre ancorate venga in primo piano. in caso contrario, FALSE.

##  <a name="buildpanesmenu"></a>  CDockingManager::BuildPanesMenu

Aggiunge i nomi di barre degli strumenti e riquadri di ancoraggio a un menu.

```
void BuildPanesMenu(
    CMenu& menu,
    BOOL bToolbarsOnly);
```

### <a name="parameters"></a>Parametri

*menu*<br/>
[in] Menu per aggiungere i nomi dei riquadri e delle barre degli strumenti di ancoraggio.

*bToolbarsOnly*<br/>
[in] TRUE per aggiungere nomi solo sulla barra degli strumenti al menu; FALSE in caso contrario.

##  <a name="calcexpecteddockedrect"></a>  CDockingManager::CalcExpectedDockedRect

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

*pWnd*<br/>
[in] Puntatore alla finestra di ancoraggio.

*ptMouse*<br/>
[in] Posizione del mouse.

*rectResult*<br/>
[out] Rettangolo calcolato.

*bDrawTab*<br/>
[in] True per disegnare una tabulazione; in caso contrario, FALSE.

*ppTargetBar*<br/>
[out] Un puntatore a un puntatore al riquadro di destinazione.

### <a name="remarks"></a>Note

Questo metodo calcola il rettangolo che una finestra occuperebbe se un utente di trascinata la finestra per il punto specificato da *ptMouse* e ancorata sono.

##  <a name="create"></a>  CDockingManager::Create

Crea un gestore di ancoraggio.

```
BOOL Create(CFrameWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
[in] Puntatore al frame padre il gestore di ancoraggio. Questo valore non deve essere NULL.

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

##  <a name="determinepaneandstatus"></a>  CDockingManager::DeterminePaneAndStatus

Determina il riquadro che contiene un punto specificato e il relativo stato di ancoraggio.

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

*pt*<br/>
[in] La posizione del riquadro da controllare.

*nSensitivity*<br/>
[in] Il valore per aumentare il rettangolo della finestra di ogni riquadro selezionato. Se il punto specificato si trova in questa area maggiore, un riquadro soddisfa i criteri di ricerca.

*dwEnabledAlignment*<br/>
[in] L'allineamento del riquadro ancorato.

*ppTargetBar*<br/>
[out] Un puntatore a un puntatore al riquadro di destinazione.

*pBarToIgnore*<br/>
[in] Il riquadro in cui il metodo ignora.

*pBarToDock*<br/>
[in] Il riquadro ancorato.

### <a name="return-value"></a>Valore restituito

Lo stato di ancoraggio.

### <a name="remarks"></a>Note

Lo stato di ancoraggio può essere uno dei valori seguenti:

|Valore AFX_CS_STATUS|Significato|
|---------------------------|-------------|
|CS_NOTHING|Il puntatore non è presente in un sito di ancoraggio. Pertanto, mantenere il riquadro mobile.|
|CS_DOCK_IMMEDIATELY|Il puntatore è posizionato il sito di ancoraggio in modalità immediata (stile DT_IMMEDIATE è abilitato), in modo che il riquadro deve essere ancorato immediatamente.|
|CS_DELAY_DOCK|Il puntatore è posizionato un sito di ancoraggio è un bordo del frame principale o un altro riquadro ancorato.|
|CS_DELAY_DOCK_TO_TAB|Il puntatore è posizionato un sito di ancoraggio che fa sì che il riquadro per essere ancorata in una finestra a schede. Ciò si verifica quando il mouse si trova su una didascalia del riquadro ancorato di un'altra o su un'area della scheda di un riquadro a schede.|

##  <a name="disablerestoredockstate"></a>  CDockingManager::DisableRestoreDockState

Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.

```
void DisableRestoreDockState(BOOL bDisable = TRUE);
```

### <a name="parameters"></a>Parametri

*bDisable*<br/>
[in] True per disabilitare il caricamento del layout di ancoraggio dal Registro di sistema. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questo metodo quando è necessario conservare il layout corrente dell'ancoraggio riquadri e le barre degli strumenti quando si carica lo stato dell'applicazione.

##  <a name="dockpane"></a>  CDockingManager::DockPane

Ancora un riquadro a un altro riquadro o a una finestra cornice.

```
void DockPane(
    CBasePane* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Un puntatore a una barra per ancorare al riquadro.

*nDockBarID*<br/>
[in] L'id della barra di ancoraggio.

*lpRect*<br/>
[in] Il rettangolo di destinazione.

##  <a name="dockpaneleftof"></a>  CDockingManager::DockPaneLeftOf

Ancora un riquadro a sinistra di un altro riquadro.

```
BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pBarToDock*<br/>
[in] Un puntatore al riquadro ancorato a sinistra del *pTargetBar*.

*pTargetBar*<br/>
[in] Puntatore al riquadro di destinazione.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato ancorato correttamente. in caso contrario, FALSE.

##  <a name="enableautohidepanes"></a>  CDockingManager::EnableAutoHidePanes

Consente di ancoraggio del riquadro per la cornice principale, crea un pannello dock e lo aggiunge all'elenco di barre di controllo.

```
BOOL EnableAutoHidePanes(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
[in] L'allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro dock è stato creato correttamente. FALSE in caso contrario.

##  <a name="enabledocking"></a>  CDockingManager::EnableDocking

Crea un pannello dock e abilita l'ancoraggio del riquadro per la cornice principale.

```
BOOL EnableDocking(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
[in] L'allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro dock è stato creato correttamente. FALSE in caso contrario.

##  <a name="enabledocksitemenu"></a>  CDockingManager::EnableDockSiteMenu

Consente di visualizzare un pulsante aggiuntivo che si apre un menu a comparsa nelle didascalie di tutti i riquadri di ancoraggio.

```
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il menu del sito di ancoraggio; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Il menu del sito di ancoraggio vengono visualizzate le opzioni seguenti per modificare lo stato di ancoraggio del riquadro:

- `Floating` -Separa un riquadro

- `Docking` -Ancora un riquadro nella cornice principale in corrispondenza della posizione in cui il riquadro è stato ultima ancorato

- `AutoHide` -Attiva il riquadro di modalità Nascondi automaticamente

- `Hide` -Consente di nascondere un riquadro

Per impostazione predefinita, non viene visualizzato questo menu.

##  <a name="enablepanecontextmenu"></a>  CDockingManager::EnablePaneContextMenu

Indica alla libreria per visualizzare un menu di scelta rapida speciale che contiene un elenco dei riquadri di ancoraggio e barre degli strumenti dell'applicazione quando l'utente sceglie il pulsante destro del mouse e la raccolta sta elaborando il messaggio WM_CONTEXTMENU.

```
void EnablePaneContextMenu(
    BOOL bEnable,
    UINT uiCustomizeCmd,
    const CString& strCustomizeText,
    BOOL bToolbarsOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Se TRUE, la libreria consente di attivare il supporto per menu di scelta rapida automatica Se FALSE la libreria consente di disattivare il supporto per menu di scelta rapida automatica.

*uiCustomizeCmd*<br/>
[in] Un id di comando per il **Personalizza** voce del menu.

*strCustomizeText*<br/>
[in] Il testo del **Personalizza** elemento.

*bToolbarsOnly*<br/>
[in] Se TRUE, il menu Visualizza solo un elenco delle barre degli strumenti dell'applicazione; Se FALSE, la libreria consente di aggiungere riquadri ancorati applicazione a questo elenco.

##  <a name="finddocksite"></a>  CDockingManager::FindDockSite

Recupera la barra di riquadro che si trova nella posizione specificata e con l'allineamento specificato.

```
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,
    BOOL bOuter);
```

### <a name="parameters"></a>Parametri

*dwAlignment*<br/>
[in] L'allineamento della barra del riquadro.

*bOuter*<br/>
[in] Se TRUE, recuperare la barra in head posizione nell'elenco di barre di controllo. In caso contrario, recuperare la barra nella posizione della parte finale nell'elenco di barre di controllo.

### <a name="return-value"></a>Valore restituito

Il riquadro ancorato che ha l'allineamento specificato; In caso contrario NULL.

##  <a name="findpanebyid"></a>  CDockingManager::FindPaneByID

Trova un riquadro per l'ID del controllo specificato.

```
virtual CBasePane* FindPaneByID(
    UINT uBarID,
    BOOL bSearchMiniFrames = FALSE);
```

### <a name="parameters"></a>Parametri

*uBarID*<br/>
[in] Specifica l'ID di controllo del riquadro da trovare.

*bSearchMiniFrames*<br/>
[in] TRUE per includere mobili tutti i riquadri nella ricerca. FALSE per includere solo i riquadri ancorati.

### <a name="return-value"></a>Valore restituito

Il [CBasePane](../../mfc/reference/cbasepane-class.md) oggetto che ha il controllo specificato ID oppure NULL se non è stato trovato nel riquadro specificato.

### <a name="remarks"></a>Note

##  <a name="finddocksitebypane"></a>  CDockingManager::FindDockSiteByPane

Restituisce la barra di riquadro con l'id del riquadro barra di destinazione.

```
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pTargetBar*<br/>
[in] Puntatore al riquadro della barra di destinazione.

### <a name="return-value"></a>Valore restituito

La barra di riquadro con l'id del riquadro barra di destinazione; NULL se questo non barra riquadro non esiste.

##  <a name="fixupvirtualrects"></a>  CDockingManager::FixupVirtualRects

Esegue il commit di tutte le posizioni della barra degli strumenti correnti ai rettangoli virtuale.

```
virtual void FixupVirtualRects();
```

### <a name="remarks"></a>Note

Quando l'utente inizia a trascinare una barra degli strumenti, l'applicazione memorizza posizione originale all'interno di *rettangolo virtuale*. Quando l'utente sposta una barra degli strumenti tra il sito di ancoraggio, la barra degli strumenti può spostare altre barre degli strumenti. Le posizioni originali altre barre degli strumenti vengono archiviate in rettangoli virtuali corrispondenti.

##  <a name="framefrompoint"></a>  CDockingManager::FrameFromPoint

Restituisce la cornice che contiene il punto specificato.

```
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,
    CPaneFrameWnd* pFrameToExclude,
    BOOL bFloatMultiOnly) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
[in] Specifica il punto, nelle coordinate dello schermo, da controllare.

*pFrameToExclude*<br/>
[in] Un puntatore a un frame da escludere.

*bFloatMultiOnly*<br/>
[in] True per escludere fotogrammi che non sono istanze di `CMultiPaneFrameWnd`; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

Il frame che contiene il punto specificato; In caso contrario NULL.

##  <a name="getclientareabounds"></a>  CDockingManager::GetClientAreaBounds

Ottiene il rettangolo che contiene i limiti dell'area client.

```
CRect GetClientAreaBounds() const;

void GetClientAreaBounds(CRect& rcClient);
```

### <a name="parameters"></a>Parametri

*rcClient*<br/>
[out] Un riferimento al rettangolo contenente i limiti dell'area client.

### <a name="return-value"></a>Valore restituito

Il rettangolo che contiene i limiti dell'area client.

##  <a name="getdockingmode"></a>  CDockingManager::GetDockingMode

Restituisce la modalità di ancoraggio corrente.

```
static AFX_DOCK_TYPE GetDockingMode();
```

### <a name="return-value"></a>Valore restituito

Un valore di enumeratore che rappresenta la modalità di ancoraggio corrente. Può essere uno dei valori seguenti:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

### <a name="remarks"></a>Note

Per impostare la modalità di ancoraggio, chiamare [CDockingManager::SetDockingMode](#setdockingmode).

##  <a name="getdocksiteframewnd"></a>  CDockingManager::GetDockSiteFrameWnd

Ottiene un puntatore alla cornice della finestra padre.

```
CFrameWnd* GetDockSiteFrameWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla cornice della finestra padre.

##  <a name="getenabledautohidealignment"></a>  CDockingManager::GetEnabledAutoHideAlignment

Restituisce l'allineamento dei riquadri abilitata.

```
DWORD GetEnabledAutoHideAlignment() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di flag CBRS_ALIGN_ oppure 0 se non sono abilitati i riquadri che si nascondono automaticamente. Per altre informazioni, vedere [CFrameWnd:: EnableDocking](../../mfc/reference/cframewnd-class.md#enabledocking).

### <a name="remarks"></a>Note

Il metodo restituisce l'allineamento abilitata per le barre di controllo Nascondi automaticamente. Per abilitare Nascondi automaticamente le barre, chiamare [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes).

##  <a name="getminiframes"></a>  CDockingManager::GetMiniFrames

Ottiene un elenco di mini.

```
const CObList& GetMiniFrames() const;
```

### <a name="return-value"></a>Valore restituito

Elenco di mini che contengono le barre di controllo che appartengono al gestore di ancoraggio.

##  <a name="getouteredgebounds"></a>  CDockingManager::GetOuterEdgeBounds

Ottiene un rettangolo contenente bordi esterni del frame.

```
CRect GetOuterEdgeBounds() const;
```

### <a name="return-value"></a>Valore restituito

Un rettangolo contenente bordi esterni del frame.

##  <a name="getpanelist"></a>  CDockingManager::GetPaneList

Restituisce un elenco di riquadri che appartengono al gestore di ancoraggio. Sono inclusi tutti i riquadri mobili.

```
void GetPaneList(
    CObList& lstBars,
    BOOL bIncludeAutohide = FALSE,
    CRuntimeClass* pRTCFilter = NULL,
    BOOL bIncludeTabs = FALSE);
```

### <a name="parameters"></a>Parametri

*lstBars*<br/>
[in, out] Contiene tutti i riquadri del gestore di ancoraggio corrente.

*bIncludeAutohide*<br/>
[in] TRUE per includere i riquadri che sono in modalità Nascondi automaticamente. in caso contrario, FALSE.

*pRTCFilter*<br/>
[in] Se non è NULL, l'elenco restituito contiene i riquadri solo della classe di runtime specificato.

*bIncludeTabs*<br/>
[in] TRUE per includere le schede; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se sono presenti eventuali riquadri a schede nel gestore di ancoraggio, il metodo restituisce i puntatori ai [classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md) oggetti ed è necessario enumerare le schede in modo esplicito.

Uso *pRTCFilter* per ottenere una classe particolare di riquadri. Ad esempio, è possibile ottenere solo le barre degli strumenti, impostare questo valore in modo appropriato.

##  <a name="getsmartdockingmanager"></a>  CDockingManager::GetSmartDockingManager

Recupera un puntatore per il gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManager();
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il gestore di ancoraggio intelligente.

##  <a name="getsmartdockingmanagerpermanent"></a>  CDockingManager::GetSmartDockingManagerPermanent

Recupera un puntatore per il gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManagerPermanent() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore per il gestore di ancoraggio intelligente.

##  <a name="getsmartdockingparams"></a>  CDockingManager::GetSmartDockingParams

Restituisce i parametri di ancoraggio intelligenti per il gestore di ancoraggio.

```
static CSmartDockingInfo& GetSmartDockingParams();
```

### <a name="return-value"></a>Valore restituito

La classe che contiene i parametri di ancoraggio intelligenti per il gestore di ancoraggio corrente. Per altre informazioni, vedere [classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md).

### <a name="remarks"></a>Note

##  <a name="hideautohidepanes"></a>  CDockingManager::HideAutoHidePanes

Consente di nascondere un riquadro in modalità Nascondi automaticamente.

```
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,
    BOOL bImmediately = FALSE);
```

### <a name="parameters"></a>Parametri

*pBarToExclude*<br/>
[in] Un puntatore a una barra da escludere da nascondere.

*bImmediately*<br/>
[in] TRUE per nascondere il riquadro immediatamente. FALSE per nascondere il riquadro con l'effetto che si nascondono automaticamente.

##  <a name="insertdocksite"></a>  CDockingManager::InsertDockSite

Crea un pannello dock e lo inserisce nell'elenco di barre di controllo.

```
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,
    DWORD dwAlignToInsertAfter,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*info*<br/>
[in] Una struttura che contiene le informazioni di allineamento del riquadro dock.

*dwAlignToInsertAfter*<br/>
[in] Allineamento del riquadro dock.

*ppDockBar*<br/>
[out] Un puntatore a un puntatore a un pannello dock.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro dock è stato creato correttamente. FALSE in caso contrario.

##  <a name="insertpane"></a>  CDockingManager::InsertPane

Inserisce un riquadro di controllo nell'elenco di barre di controllo.

```
BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter = TRUE);
```

### <a name="parameters"></a>Parametri

*pControlBar*<br/>
[in] Un puntatore a un riquadro di controllo.

*pTarget*<br/>
[in] Un puntatore a un riquadro di destinazione.

*bAfter*<br/>
[in] TRUE per inserire il riquadro dopo la posizione del riquadro di destinazione; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro di controllo viene aggiunto correttamente all'elenco di barre di controllo. FALSE in caso contrario.

### <a name="remarks"></a>Note

Questo metodo restituisce false se il riquadro di controllo è già nell'elenco delle barre di controllo o se il riquadro di destinazione non esiste nell'elenco delle barre di controllo.

##  <a name="isdocksitemenu"></a>  CDockingManager::IsDockSiteMenu

Specifica se viene visualizzato un menu a comparsa nelle didascalie di tutti i riquadri.

```
static BOOL IsDockSiteMenu();
```

### <a name="return-value"></a>Valore restituito

TRUE se viene visualizzato un menu di sito di ancoraggio sulle didascalie di tutti i riquadri ancorati; in caso contrario, FALSE.

### <a name="remarks"></a>Note

È possibile abilitare il menu del sito di ancoraggio chiamando [CDockingManager::EnableDockSiteMenu](#enabledocksitemenu).

##  <a name="isinadjustlayout"></a>  CDockingManager::IsInAdjustLayout

Determina se i layout di tutti i riquadri vengono modificati.

```
BOOL IsInAdjustLayout() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se i layout di tutti i riquadri vengono modificati; FALSE in caso contrario.

##  <a name="isolecontainermode"></a>  CDockingManager::IsOLEContainerMode

Specifica se il gestore di ancoraggio è in modalità contenitore OLE.

```
BOOL IsOLEContainerMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il gestore di ancoraggio è in modalità di contenitore OLE. in caso contrario, FALSE.

### <a name="remarks"></a>Note

In modalità di contenitore OLE, tutti i riquadri ancorati e barre degli strumenti dell'applicazione sono nascosti. I riquadri sono nascoste anche in questa modalità se sono stati impostati [CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode) su TRUE.

##  <a name="ispointneardocksite"></a>  CDockingManager::IsPointNearDockSite

Determina se un punto specificato si trova vicino al sito di ancoraggio.

```
BOOL IsPointNearDockSite(
    CPoint point,
    DWORD& dwBarAlignment,
    BOOL& bOuterEdge) const;
```

### <a name="parameters"></a>Parametri

*point*<br/>
[in] Il punto specificato.

*dwBarAlignment*<br/>
[out] Specifica il bordo punto si avvicina. I valori possibili sono CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP e CBRS_ALIGN_BOTTOM.

*bOuterEdge*<br/>
[out] TRUE se il punto è quasi il bordo esterno del sito di ancoraggio; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUE se il punto è quasi del sito di ancoraggio. in caso contrario, FALSE.

##  <a name="isprintpreviewvalid"></a>  CDockingManager::IsPrintPreviewValid

Determina se è impostata la modalità di anteprima di stampa.

```
BOOL IsPrintPreviewValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è impostata la modalità di anteprima di stampa; FALSE in caso contrario.

##  <a name="loadstate"></a>  CDockingManager::LoadState

Carica lo stato del gestore di ancoraggio dal Registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Nome del profilo.

*uiID*<br/>
[in] L'id del gestore di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se lo stato di gestione di ancoraggio è stato caricato correttamente. in caso contrario, FALSE.

##  <a name="lockupdate"></a>  CDockingManager::LockUpdate

Blocca la finestra specificata.

```
void LockUpdate(BOOL bLock);
```

### <a name="parameters"></a>Parametri

*bLock*<br/>
[in] TRUE se la finestra è bloccata; FALSE in caso contrario.

### <a name="remarks"></a>Note

Quando una finestra è bloccata, non può essere spostato e non può essere ridisegnata.

##  <a name="m_bhidedockingbarsincontainermode"></a>  CDockingManager::m_bHideDockingBarsInContainerMode

Specifica se il gestore di ancoraggio consente di nascondere i riquadri in modalità contenitore OLE.

```
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;
```

### <a name="remarks"></a>Note

Impostare questo valore su FALSE se si desidera mantenere tutti i riquadri ancorati al frame principale visibile quando l'applicazione è in modalità contenitore OLE. Per impostazione predefinita, questo valore è TRUE.

##  <a name="m_dockmodeglobal"></a>  CDockingManager::m_dockModeGlobal

Specifica la modalità di ancoraggio globale.

```
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;
```

### <a name="remarks"></a>Note

Per impostazione predefinita, ogni riquadro ancorato Usa questa modalità di ancoraggio. Per altre informazioni sui valori che questo campo può essere impostato su, vedere [cbasepane:: Getdockingmode](../../mfc/reference/cbasepane-class.md#getdockingmode).

##  <a name="m_ndocksensitivity"></a>  CDockingManager::m_nDockSensitivity

Specifica la sensibilità ancoraggio.

```
AFX_IMPORT_DATA static int m_nDockSensitivity;
```

### <a name="remarks"></a>Note

L'ancoraggio sensibilità definisce quanto si avvicina mobile riquadro può arrivare a un riquadro ancorato, sito di ancoraggio o un altro riquadro prima che il framework viene modificato lo stato ancorato.

##  <a name="m_ntimeoutbeforedockingbardock"></a>  CDockingManager::m_nTimeOutBeforeDockingBarDock

Specifica il tempo, espresso in millisecondi, prima che un riquadro ancorato è ancorato in modalità di ancoraggio immediata.

```
static UINT m_nTimeOutBeforeDockingBarDock;
```

### <a name="remarks"></a>Note

Prima di un riquadro ancorato, il framework attende il periodo di tempo specificato. Ciò impedisce che il riquadro accidentalmente mentre viene ancorata in una posizione mentre l'utente è ancora trascinandolo.

##  <a name="m_ntimeoutbeforetoolbardock"></a>  CDockingManager::m_nTimeOutBeforeToolBarDock

Specifica il tempo, espresso in millisecondi, prima di una barra degli strumenti è ancorata alla finestra cornice principale.

```
static UINT m_nTimeOutBeforeToolBarDock;
```

### <a name="remarks"></a>Note

Prima di una barra degli strumenti è ancorata, il framework attende il periodo di tempo specificato. Ciò impedisce che accidentalmente mentre viene ancorata in una posizione mentre l'utente sta ancora trascinando la barra degli strumenti.

##  <a name="onactivateframe"></a>  CDockingManager::OnActivateFrame

Chiamato dal framework quando la finestra cornice viene reso attiva o è disattivata.

```
virtual void OnActivateFrame(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
[in] Se TRUE, la finestra cornice viene reso attiva; Se FALSE, viene disattivata la finestra cornice.

##  <a name="onclosepopupmenu"></a>  CDockingManager::OnClosePopupMenu

Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.

```
void OnClosePopupMenu();
```

### <a name="remarks"></a>Note

Il framework invia un messaggio WM_DESTROY quando sta per chiudere la finestra principale corrente. Eseguire l'override di questo metodo per gestire le notifiche dal `CMFCPopupMenu` gli oggetti che appartengono alla finestra cornice quando un `CMFCPopupMenu` oggetto elabora un messaggio WM_DESTROY.

##  <a name="onmoveminiframe"></a>  CDockingManager::OnMoveMiniFrame

Chiamato dal framework per spostare una finestra con mini-cornice.

```
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
[in] Un puntatore a una finestra con mini-cornice.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="onpanecontextmenu"></a>  CDockingManager::OnPaneContextMenu

Chiamato dal framework durante la generazione di un menu che contiene un elenco dei riquadri.

```
void OnPaneContextMenu(CPoint point);
```

### <a name="parameters"></a>Parametri

*point*<br/>
[in] Specifica la posizione del menu.

##  <a name="panefrompoint"></a>  CDockingManager::PaneFromPoint

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

*point*<br/>
[in] Specifica il punto, nelle coordinate dello schermo, da controllare.

*nSensitivity*<br/>
[in] Il valore di ingrandimento il rettangolo della finestra di ogni riquadro selezionato. Un riquadro soddisfa i criteri di ricerca se il punto specificato si trova in questa area ingrandita.

*bExactBar*<br/>
[in] TRUE per ignorare la *nSensitivity* parametro; in caso contrario, FALSE.

*pRTCBarType*<br/>
[in] Se non è NULL, il metodo cerca solo i riquadri del tipo specificato.

*bCheckVisibility*<br/>
[in] TRUE per controllare se solo i riquadri visibili; in caso contrario, FALSE.

*dwAlignment*<br/>
[out] Se viene trovato un riquadro in un momento specificato, questo parametro contiene il lato del riquadro che è stato più vicino al punto specificato. Per altre informazioni, vedere la sezione Osservazioni.

*pBarToIgnore*<br/>
[in] Se non è NULL, il metodo ignora riquadri specificati da questo parametro.

### <a name="return-value"></a>Valore restituito

Il [CBasePane](../../mfc/reference/cbasepane-class.md)-oggetto derivato che contiene il punto specificato o NULL se è stato trovato alcun riquadro.

### <a name="remarks"></a>Note

Quando la funzione restituisce e un riquadro è stato trovato *dwAlignment* contiene l'allineamento del punto specificato. Ad esempio, se il punto di stato più vicino alla parte superiore del riquadro *dwAlignment* è impostato su CBRS_ALIGN_TOP.

##  <a name="processpanecontextmenucommand"></a>  CDockingManager::ProcessPaneContextMenuCommand

Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcola il layout di un riquadro visualizzato.

```
BOOL ProcessPaneContextMenuCommand(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] L'id di una barra di controllo nel menu di scelta.

*nCode*<br/>
[in] Il codice di notifica comando.

*pExtra*<br/>
[in] Un puntatore a void che viene eseguito il cast a un puntatore a `CCmdUI` se *nCode* è mediante.

*pHandlerInfo*<br/>
[in] Puntatore a una struttura di informazioni. Questo parametro non viene usato.

### <a name="return-value"></a>Valore restituito

TRUE se *pEXtra* non è NULL e *nCode* è uguale a mediante, o se è presente una barra di controllo con la proprietà specificata *nID*.

##  <a name="recalclayout"></a>  CDockingManager::RecalcLayout

Ricalcola il layout interno dei controlli presenti nell'elenco dei controlli.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*bNotify*<br/>
[in] Questo parametro non viene utilizzato.

##  <a name="releaseemptypanecontainers"></a>  CDockingManager::ReleaseEmptyPaneContainers

Rilascia i contenitori di riquadro vuoto.

```
void ReleaseEmptyPaneContainers();
```

##  <a name="removehiddenmditabbedbar"></a>  CDockingManager::RemoveHiddenMDITabbedBar

Rimuove l'oggetto nascosto barra riquadro specificato.

```
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Un puntatore a una barra di riquadro da rimuovere.

##  <a name="removeminiframe"></a>  CDockingManager::RemoveMiniFrame

Rimuove un intervallo specificato dall'elenco di frame di formattazione rapida.

```
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
[in] Un puntatore a un frame da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se l'intervallo specificato viene rimosso. FALSE in caso contrario.

##  <a name="removepanefromdockmanager"></a>  CDockingManager::RemovePaneFromDockManager

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

*pWnd*<br/>
[in] Un puntatore a un riquadro da rimuovere.

*bDestroy*<br/>
[in] Se TRUE, il riquadro rimosso viene eliminato definitivamente.

*bAdjustLayout*<br/>
[in] Se TRUE, modificare il layout di ancoraggio immediatamente.

*bAutoHide*<br/>
[in] Se TRUE, il riquadro viene rimosso dall'elenco delle barre che si nascondono automaticamente. Se FALSE, il riquadro viene rimosso dall'elenco dei riquadri regolari.

*pBarReplacement*<br/>
[in] Puntatore a un riquadro che sostituisce il riquadro rimosso.

##  <a name="replacepane"></a>  CDockingManager::ReplacePane

Sostituisce un riquadro con un altro.

```
BOOL ReplacePane(
    CDockablePane* pOriginalBar,
    CDockablePane* pNewBar);
```

### <a name="parameters"></a>Parametri

*pOriginalBar*<br/>
[in] Puntatore al riquadro originale.

*pNewBar*<br/>
[in] Puntatore al riquadro che sostituisce il riquadro originale.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro viene sostituito; FALSE in caso contrario.

##  <a name="resortminiframesforzorder"></a>  CDockingManager::ResortMiniFramesForZOrder

Ricorre invece i frame nell'elenco di frame di formattazione rapida.

```
void ResortMiniFramesForZOrder();
```

##  <a name="savestate"></a>  CDockingManager::SaveState

Salva lo stato del gestore di ancoraggio del Registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
[in] Un percorso di una chiave del Registro di sistema.

*uiID*<br/>
[in] L'ID del manager ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se lo stato è stato salvato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Salvataggio dello stato del gestore di ancoraggio nel Registro di sistema comporta il salvataggio gli stati delle barre di controllo, gli stati delle barre che si nascondono automaticamente e gli stati dei frame mini presenti nel gestore di ancoraggio.

##  <a name="sendmessagetominiframes"></a>  CDockingManager::SendMessageToMiniFrames

Invia il messaggio specificato a tutti i frame di formattazione rapida.

```
BOOL SendMessageToMiniFrames(
    UINT uMessage,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### <a name="parameters"></a>Parametri

*uMessage*<br/>
[in] Il messaggio da inviare.

*wParam*<br/>
[in] Informazioni aggiuntive dipendenti sul messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive dipendenti sul messaggio.

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

##  <a name="serialize"></a>  CDockingManager::Serialize

Scrive il gestore di ancoraggio di un archivio.

```
void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
[in] Un riferimento a un oggetto di archiviazione.

### <a name="remarks"></a>Note

Per scrivere il gestore di ancoraggio in un archivio, è necessario determinare il numero di barre di controllo e i dispositivi di scorrimento di ancoraggio e scrivere le barre di controllo, i minidump frame, le barre di Nascondi automaticamente e le barre MDI a schede dell'archivio.

##  <a name="setautohidezorder"></a>  CDockingManager::SetAutohideZOrder

Imposta le dimensioni, larghezza e altezza delle barre di controllo e il riquadro specificato.

```
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```

### <a name="parameters"></a>Parametri

*pAHDockingBar*<br/>
[in] Un puntatore a un riquadro ancorato.

##  <a name="setdockingmode"></a>  CDockingManager::SetDockingMode

Imposta la modalità di ancoraggio.

```
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```

### <a name="parameters"></a>Parametri

*dockMode*<br/>
Specifica la nuova modalità di ancoraggio. Per altre informazioni, vedere la sezione Osservazioni.

*theme*<br/>
Specifica il tema che verrà usato per marcatori di ancoraggio. Può essere uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### <a name="remarks"></a>Note

Chiamare questo metodo statico per impostare la modalità di ancoraggio.

*dockMode* può essere uno dei valori seguenti:

- DT_STANDARD - modalità Standard di ancoraggio con l'implementazione in Visual Studio .NET 2003. I riquadri vengono trascinati senza un contesto di trascinamento.

- DT_IMMEDIATE - modalità di ancoraggio immediata con l'implementazione in Microsoft Visio. I riquadri vengono trascinati con un contesto di trascinamento, ma non gli indicatori vengono visualizzati.

- DT_SMART - modalità di ancoraggio intelligente con l'implementazione in Visual Studio 2005. I riquadri vengono trascinati con un contesto di trascinamento e vengono visualizzati marcatori che illustrano in cui il riquadro può essere ancorato.

##  <a name="setdockstate"></a>  CDockingManager::SetDockState

Imposta lo stato di ancoraggio di barre di controllo, i frame mini e le barre di Nascondi automaticamente.

```
virtual void SetDockState();
```

##  <a name="setprintpreviewmode"></a>  CDockingManager::SetPrintPreviewMode

Imposta la modalità di anteprima di stampa di barre visualizzate nell'anteprima di stampa.

```
void SetPrintPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### <a name="parameters"></a>Parametri

*bPreview*<br/>
[in] TRUE se è impostata la modalità di anteprima di stampa; FALSE in caso contrario.

*pState*<br/>
[in] Puntatore a uno stato di anteprima. Questo parametro non viene usato.

##  <a name="setsmartdockingparams"></a>  CDockingManager::SetSmartDockingParams

Imposta i parametri che definiscono il comportamento di ancoraggio intelligente.

```
static void SetSmartDockingParams(CSmartDockingInfo& params);
```

### <a name="parameters"></a>Parametri

*params*<br/>
[in, out] Definisce i parametri per ancoraggio intelligente.

### <a name="remarks"></a>Note

Chiamare questo metodo se si desidera personalizzare l'aspetto, colore o forma dei marcatori di ancoraggio.

Per usare l'aspetto predefinito per marcatori di ancoraggio, passare un'istanza non inizializzata [classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) al *params*.

##  <a name="showdelayshowminiframes"></a>  CDockingManager::ShowDelayShowMiniFrames

Mostra o nasconde le finestre dei frame mini.

```
void ShowDelayShowMiniFrames(BOOL bshow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per attivare la finestra del frame illustrato; FALSE per nascondere la finestra del frame.

##  <a name="showpanes"></a>  CDockingManager::ShowPanes

Mostra o nasconde i riquadri delle barre di controllo e che si nascondono automaticamente.

```
virtual BOOL ShowPanes(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per mostrare i riquadri; FALSE per nascondere i riquadri.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

##  <a name="startsdocking"></a>  CDockingManager::StartSDocking

Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.

```
void StartSDocking(CWnd* pDockingWnd);
```

### <a name="parameters"></a>Parametri

*pDockingWnd*<br/>
[in] Un puntatore a una finestra di ancoraggio.

##  <a name="stopsdocking"></a>  CDockingManager::StopSDocking

Arresta smart di ancoraggio.

```
void StopSDocking();
```

##  <a name="getsmartdockingtheme"></a>  CDockingManager::GetSmartDockingTheme

Un metodo statico che restituisce un tema usato per visualizzare i marcatori di ancoraggio.

```
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```

### <a name="return-value"></a>Valore restituito

Restituisce uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### <a name="remarks"></a>Note

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)
