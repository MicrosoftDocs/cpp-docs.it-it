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
ms.openlocfilehash: 339e5d5e464aacb51d1c4ab8fe3c2957a3afbd4e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375576"
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
|[CDockingManager::AddDockSite](#adddocksite)|Crea un riquadro di ancoraggio e lo aggiunge all'elenco delle barre di controllo.|
|[CDockingManager::AddHiddenMDITabbedBar](#addhiddenmditabbedbar)|Aggiunge un handle a un riquadro barra all'elenco dei riquadri a barre a schede MDI nascosti.|
|[CDockingManager::AddMiniFrame](#addminiframe)|Aggiunge una cornice all'elenco dei mini frame.|
|[CDockingManager::AddPane](#addpane)|Registra un riquadro con il gestore di ancoraggio.|
|[CDockingManager::AdjustDockingLayout](#adjustdockinglayout)|Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.|
|[CDockingManager::AdjustPaneFrames](#adjustpaneframes)|Determina l'invio del messaggio di `CPaneFrameWnd` WM_NCCALCSIZE a tutti i riquadri e le finestre.|
|[CDockingManager::AdjustRectToClientArea](#adjustrecttoclientarea)|Regola l'allineamento di un rettangolo.|
|[CDockingManager::AlignAutoHidePane](#alignautohidepane)|Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che occupi l'intera larghezza o altezza dell'area client del frame circondato da siti di ancoraggio.|
|[CDockingManager::AutoHidePane](#autohidepane)|Crea una barra degli strumenti Nascondi automaticamente.|
|[CDockingManager::BringBarsToTop](#bringbarstotop)|Porta le barre ancorate con l'allineamento specificato in alto.|
|[CDockingManager::BuildPanesMenu](#buildpanesmenu)|Aggiunge i nomi dei riquadri e delle barre degli strumenti di ancoraggio a un menu.|
|[CDockingManager::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata.|
|[CDockingManager::CreareCDockingManager::Create](#create)|Crea un gestore di ancoraggio.|
|[CDockingManager::DeterminePaneAndStatus](#determinepaneandstatus)|Determina il riquadro che contiene un determinato punto e il relativo stato di ancoraggio.|
|[CDockingManager::DisableRestoreDockState](#disablerestoredockstate)|Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.|
|[CDockingManager::DockPane](#dockpane)|Ancora un riquadro a un altro riquadro o a una finestra cornice.|
|[CDockingManager::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|
|[CDockingManager::EnableAutoHidePanes](#enableautohidepanes)|Abilita l'ancoraggio del riquadro al frame principale, crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.|
|[CDockingManager::EnableDocking](#enabledocking)|Crea un riquadro ancorato e consente l'ancoraggio del riquadro al frame principale.|
|[CDockingManager::EnableDockSiteMenu](#enabledocksitemenu)|Visualizza un pulsante aggiuntivo che consente di aprire un menu a comparsa sulle didascalie di tutti i riquadri ancorati.|
|[CDockingManager::EnablePaneContextMenu](#enablepanecontextmenu)|Indica alla libreria di visualizzare un menu di scelta rapida speciale con un elenco di barre degli strumenti dell'applicazione e riquadri ancorati quando l'utente fa clic con il pulsante destro del mouse e la libreria sta elaborando il messaggio WM_CONTEXTMENU.|
|[CDockingManager::FindDockSite](#finddocksite)|Recupera il riquadro della barra che si trova nella posizione specificata e che ha l'allineamento specificato.|
|[CDockingManager::FindDockSiteByPane](#finddocksitebypane)|Restituisce il riquadro della barra con l'ID del riquadro della barra di destinazione.|
|[CDockingManager::FindPaneByID](#findpanebyid)|Trova un riquadro in base all'ID di controllo specificato.|
|[CDockingManager::FixupVirtualRects](#fixupvirtualrects)|Esegue il commit di tutte le posizioni correnti della barra degli strumenti in rettangoli virtuali.|
|[CDockingManager::FrameFromPointCDockingManager::FrameFromPoint](#framefrompoint)|Restituisce il frame che contiene il punto specificato.|
|[CDockingManager::GetClientAreaBoundsCDockingManager::GetClientAreaBounds](#getclientareabounds)|Ottiene il rettangolo che contiene i limiti dell'area client.|
|[CDockingManager::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio corrente.|
|[CDockingManager::GetDockSiteFrameWnd](#getdocksiteframewnd)|Ottiene un puntatore alla cornice della finestra padre.|
|[CDockingManager::GetEnabledAutoHideAlignment](#getenabledautohidealignment)|Restituisce l'allineamento abilitato dei riquadri.|
|[CDockingManager::GetMiniFramesCDockingManager::GetMiniFrames](#getminiframes)|Ottiene un elenco di miniframe.|
|[CDockingManager::GetOuterEdgeBoundsCDockingManager::GetOuterEdgeBounds](#getouteredgebounds)|Ottiene un rettangolo che contiene i bordi esterni della cornice.|
|[CDockingManager::GetPaneList](#getpanelist)|Restituisce un elenco di riquadri appartenenti al gestore di ancoraggio. Sono inclusi tutti i riquadri mobili.|
|[CDockingManager::GetSmartDockingManager](#getsmartdockingmanager)|Recupera un puntatore al gestore di ancoraggio intelligente.|
|[CDockingManager::GetSmartDockingManagerPermanent](#getsmartdockingmanagerpermanent)|Recupera un puntatore al gestore di ancoraggio intelligente.|
|[CDockingManager::GetSmartDockingParams](#getsmartdockingparams)|Restituisce i parametri di ancoraggio intelligente per il gestore di ancoraggio.|
|[CDockingManager::GetSmartDockingTheme](#getsmartdockingtheme)|Metodo statico che restituisce un tema utilizzato per visualizzare gli indicatori di ancoraggio intelligente.|
|[CDockingManager::HideAutoHidePanes](#hideautohidepanes)|Nasconde un riquadro in modalità Nascondi automaticamente.|
|[CDockingManager::InsertDockSite](#insertdocksite)|Crea un riquadro ancorato e lo inserisce nell'elenco delle barre di controllo.|
|[CDockingManager::InsertPane](#insertpane)|Inserisce un riquadro di controllo nell'elenco delle barre di controllo.|
|[CDockingManager::IsDockSiteMenu](#isdocksitemenu)|Specifica se visualizzare un menu a comparsa nelle didascalie di tutti i riquadri.|
|[CDockingManager::IsInAdjustLayout](#isinadjustlayout)|Determina se i layout di tutti i riquadri vengono regolati.|
|[CDockingManager::IsOLEContainerMode](#isolecontainermode)|Specifica se il gestore di ancoraggio è in modalità contenitore OLE.|
|[CDockingManager::IsPointNearDockSite](#ispointneardocksite)|Determina se un punto specificato si trova vicino al sito di ancoraggio.|
|[CDockingManager::IsPrintPreviewValid](#isprintpreviewvalid)|Determina se è impostata la modalità di anteprima di stampa.|
|[CDockingManager::LoadState](#loadstate)|Carica lo stato del gestore di ancoraggio dal Registro di sistema.|
|[CDockingManager::LockUpdate](#lockupdate)|Blocca la finestra specificata.|
|[CDockingManager::OnActivateFrame](#onactivateframe)|Chiamato dal framework quando la finestra cornice viene resa attiva o disattivata.|
|[CDockingManager::OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|
|[CDockingManager::OnMoveMiniFrame](#onmoveminiframe)|Chiamato dal framework per spostare una finestra cornice mini.|
|[CDockingManager::OnPaneContextMenu](#onpanecontextmenu)|Chiamato dal framework quando compila un menu che dispone di un elenco di riquadri.|
|[CDockingManager::PaneFromPoint](#panefrompoint)|Restituisce il riquadro che contiene il punto specificato.|
|[CDockingManager::ProcessPaneContextMenuCommand](#processpanecontextmenucommand)|Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.|
|[CDockingManager::RecalcLayout](#recalclayout)|Ricalcola il layout interno dei controlli presenti nell'elenco dei controlli.|
|[CDockingManager::ReleaseEmptyPaneContainers](#releaseemptypanecontainers)|Rilascia i contenitori del riquadro vuoto.|
|[CDockingManager::RemoveHiddenMDITabbedBar](#removehiddenmditabbedbar)|Rimuove il riquadro della barra nascosta specificato.|
|[CDockingManager::RemoveMiniFrame](#removeminiframe)|Rimuove un fotogramma specificato dall'elenco di mini frame.|
|[CDockingManager::RemovePaneFromDockManager](#removepanefromdockmanager)|Annulla la registrazione di un riquadro e lo rimuove dall'elenco nel gestore di ancoraggio.|
|[CDockingManager::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|
|[CDockingManager::ResortMiniFramesPerOrdine](#resortminiframesforzorder)|Ricorre i telai nell'elenco dei mini telai.|
|[CDockingManager::SaveState](#savestate)|Salva lo stato del gestore di ancoraggio nel Registro di sistema.|
|[CDockingManager::SendMessageToMiniFrames](#sendmessagetominiframes)|Invia il messaggio specificato a tutti i mini frame.|
|[CDockingManager::Serialize](#serialize)|Scrive il gestore di ancoraggio in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CDockingManager::SetAutohide -Order](#setautohidezorder)|Imposta le dimensioni, la larghezza e l'altezza delle barre di controllo e del riquadro specificato.|
|[CDockingManager::SetDockingMode](#setdockingmode)|Imposta la modalità di ancoraggio.|
|[CDockingManager::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio delle barre di controllo, dei mini frame e delle barre di nascondi automaticamente.|
|[CDockingManager::SetPrintPreviewMode](#setprintpreviewmode)|Imposta la modalità di anteprima di stampa delle barre visualizzate nell'anteprima di stampa.|
|[CDockingManager::SetSmartDockingParams](#setsmartdockingparams)|Imposta i parametri che definiscono il comportamento dell'ancoraggio intelligente.|
|[CDockingManager::ShowDelayShowMiniFrames](#showdelayshowminiframes)|Mostra o nasconde le finestre dei mini fotogrammi.|
|[CDockingManager::ShowPanes](#showpanes)|Mostra o nasconde i riquadri delle barre di controllo e Nascondi automaticamente.|
|[CDockingManager::StartSDocking](#startsdocking)|Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.|
|[CDockingManager::StopSDocking](#stopsdocking)|Interrompe l'aggancio intelligente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode)|Specifica se il gestore di ancoraggio nasconde i riquadri in modalità contenitore OLE.|
|[CDockingManager::m_dockModeGlobal](#m_dockmodeglobal)|Specifica la modalità di ancoraggio globale.|
|[CDockingManager::m_nDockSensitivity](#m_ndocksensitivity)|Specifica la sensibilità di ancoraggio.|
|[CDockingManager::m_nTimeOutBeforeDockingBarDock](#m_ntimeoutbeforedockingbardock)|Specifica il tempo, in millisecondi, che deve essere ancorato a un riquadro di ancoraggio in modalità di ancoraggio immediato.|
|[CDockingManager::m_nTimeOutBeforeToolBarDock](#m_ntimeoutbeforetoolbardock)|Specifica il tempo, in millisecondi, prima che una barra degli strumenti venga ancorata alla finestra cornice principale.|

## <a name="remarks"></a>Osservazioni

La finestra cornice principale crea e inizializza automaticamente questa classe.

L'oggetto gestore di ancoraggio contiene un elenco di tutti i riquadri presenti nel layout di ancoraggio e anche un elenco di tutte le finestre [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) che appartengono alla finestra cornice principale.

La `CDockingManager` classe implementa alcuni servizi che è possibile `CPaneFrameWnd` usare per trovare un riquadro o una finestra. In genere questi servizi non vengono chiamano direttamente perché ne viene eseguito il wrapping nell'oggetto finestra cornice principale. Per ulteriori informazioni, vedere [Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).

## <a name="customization-tips"></a>Suggerimenti per la personalizzazione

I seguenti suggerimenti `CDockingManager` si applicano agli oggetti:

- [La classe CDockingManager](../../mfc/reference/cdockingmanager-class.md) supporta queste modalità di ancoraggio:CDockingManager Class supports these docking modes:

  - `AFX_DOCK_TYPE::DT_IMMEDIATE`

  - `AFX_DOCK_TYPE::DT_STANDARD`

  - `AFX_DOCK_TYPE::DT_SMART`

  Queste modalità di ancoraggio sono definite da [CDockingManager::m_dockModeGlobal](#m_dockmodeglobal) e vengono impostate chiamando [CDockingManager::SetDockingMode](#setdockingmode).

- Se si desidera creare un riquadro non mobile e non ridimensionabile, chiamare il [CDockingManager::AddPane](#addpane) metodo. Questo metodo registra il riquadro con il gestore di ancoraggio, che è responsabile del layout del riquadro.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come `CDockingManager` utilizzare vari `CDockingManager` metodi nella classe per configurare un oggetto. Nell'esempio viene illustrato come visualizzare un pulsante aggiuntivo che apre un menu a comparsa nelle didascalie di tutti i riquadri ancorati e come impostare la modalità di ancoraggio dell'oggetto. Questo frammento di codice fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDockingManager](../../mfc/reference/cdockingmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockingManager.h

## <a name="cdockingmanageradddocksite"></a><a name="adddocksite"></a>CDockingManager::AddDockSite

Crea un riquadro di ancoraggio e lo aggiunge all'elenco delle barre di controllo.

```
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*Informazioni*<br/>
[in] Riferimento a una struttura di informazioni che contiene l'allineamento del riquadro di ancoraggio.

*barra di controllo ppDockBar*<br/>
[fuori] Puntatore a un puntatore al nuovo riquadro di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro ancorato è stato creato correttamente. FALSE in caso contrario.

## <a name="cdockingmanageraddhiddenmditabbedbar"></a><a name="addhiddenmditabbedbar"></a>CDockingManager::AddHiddenMDITabbedBar

Aggiunge un handle a un riquadro barra all'elenco dei riquadri a barre a schede MDI nascosti.

```
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore a un riquadro della barra

## <a name="cdockingmanageraddpane"></a><a name="addpane"></a>CDockingManager::AddPane

Registra un riquadro con il gestore di ancoraggio.

```
BOOL AddPane(
    CBasePane* pWnd,
    BOOL bTail = TRUE,
    BOOL bAutoHide = FALSE,
    BOOL bInsertForOuterEdge = FALSE);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in, out] Specifica il riquadro da aggiungere al gestore di ancoraggio.

*bCoda*<br/>
[in] TRUE per aggiungere il riquadro alla fine dell'elenco di riquadri per il gestore di ancoraggio; in caso contrario, FALSE.

*bNascondi Auto*<br/>
[in] Solo per uso interno. Utilizzare sempre il valore predefinito FALSE.

*bInsertForOuterEdge (informazioni in stati intratto)*<br/>
[in] Solo per uso interno. Utilizzare sempre il valore predefinito FALSE.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è stato registrato correttamente con il gestore di ancoraggio. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per registrare i riquadri non mobili e non ridimensionabili con il gestore di ancoraggio. Se non si registrano i riquadri, questi non verranno visualizzati correttamente quando il gestore di ancoraggio è disposto.

## <a name="cdockingmanageradjustdockinglayout"></a><a name="adjustdockinglayout"></a>CDockingManager::AdjustDockingLayout

Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.

```
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```

### <a name="parameters"></a>Parametri

*hdwp*<br/>
[in] Specifica la struttura della posizione della finestra posticipata. Per altre informazioni, vedere [Tipi di dati Windows](/windows/win32/WinProg/windows-data-types).

### <a name="remarks"></a>Osservazioni

## <a name="cdockingmanageraddminiframe"></a><a name="addminiframe"></a>CDockingManager::AddMiniFrame

Aggiunge una cornice all'elenco dei mini frame.

```
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Puntatore a una cornice.

### <a name="return-value"></a>Valore restituito

TRUESe il frame non è presente nell'elenco dei mini frame ed è stato aggiunto correttamente. FALSE in caso contrario.

## <a name="cdockingmanageradjustpaneframes"></a><a name="adjustpaneframes"></a>CDockingManager::AdjustPaneFrames

Determina l'invio del messaggio di `CPaneFrameWnd` WM_NCCALCSIZE a tutti i riquadri e le finestre.

```
virtual void AdjustPaneFrames();
```

### <a name="remarks"></a>Osservazioni

## <a name="cdockingmanageradjustrecttoclientarea"></a><a name="adjustrecttoclientarea"></a>CDockingManager::AdjustRectToClientArea

Regola l'allineamento di un rettangolo.

```
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*rectRisulta*<br/>
[in] Un riferimento `CRect` a un oggetto

*dwAllineamento*<br/>
[in] L'allineamento `CRect` dell'oggetto

### <a name="return-value"></a>Valore restituito

TRUESe l'allineamento dell'oggetto `CRect` è stato modificato. FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Il parametro *dwAlignment* può avere uno dei seguenti valori:

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

## <a name="cdockingmanageralignautohidepane"></a><a name="alignautohidepane"></a>CDockingManager::AlignAutoHidePane

Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo che occupi l'intera larghezza o altezza dell'area client del frame circondato da siti di ancoraggio.

```
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,
    BOOL bIsVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pDefaultSlider (dispositivo di impostazione inlingua com*<br/>
[in] Riquadro del dispositivo di scorrimento ancorato.

*bIsVisibile*<br/>
[in] TRUESe il riquadro ancorato è visibile. FALSE in caso contrario.

## <a name="cdockingmanagerautohidepane"></a><a name="autohidepane"></a>CDockingManager::AutoHidePane

Crea una barra degli strumenti Nascondi automaticamente.

```
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore al riquadro della barra.

*pCurrAutoHideToolBar*<br/>
[in] Puntatore a una barra degli strumenti Nascondi automaticamente.

### <a name="return-value"></a>Valore restituito

NULL se la barra degli strumenti Nascondi automaticamente non è stata creata; in caso contrario, un puntatore alla nuova barra degli strumenti.

## <a name="cdockingmanagerbringbarstotop"></a><a name="bringbarstotop"></a>CDockingManager::BringBarsToTop

Porta le barre ancorate con l'allineamento specificato in alto.

```
void BringBarsToTop(
    DWORD dwAlignment = 0,
    BOOL bExcludeDockedBars = TRUE);
```

### <a name="parameters"></a>Parametri

*dwAllineamento*<br/>
[in] L'allineamento delle barre di ancoraggio che vengono portate nella parte superiore delle altre finestre.

*bExcludeBar in stato di ebisazione*<br/>
[in] TRUE per escludere le barre ancorate dall'essere in primo piano; in caso contrario, FALSE.

## <a name="cdockingmanagerbuildpanesmenu"></a><a name="buildpanesmenu"></a>CDockingManager::BuildPanesMenu

Aggiunge i nomi dei riquadri e delle barre degli strumenti di ancoraggio a un menu.

```
void BuildPanesMenu(
    CMenu& menu,
    BOOL bToolbarsOnly);
```

### <a name="parameters"></a>Parametri

*Menu*<br/>
[in] Un menu a cui aggiungere i nomi dei riquadri e delle barre degli strumenti di ancoraggio.

*bToolbarsOnly (ToolbarsOnly)*<br/>
[in] TRUE per aggiungere solo i nomi delle barre degli strumenti al menu; FALSE in caso contrario.

## <a name="cdockingmanagercalcexpecteddockedrect"></a><a name="calcexpecteddockedrect"></a>CDockingManager::CalcExpectedDockedRect

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

*pWnd (in questo stato di windows*<br/>
[in] Puntatore alla finestra da ancorare.

*PtMouse*<br/>
[in] Posizione del mouse.

*rectRisulta*<br/>
[fuori] Rettangolo calcolato.

*bDrawTab*<br/>
[in] TRUE per disegnare una scheda; in caso contrario, FALSE.

*ppTargetBar (bar di applicazione)*<br/>
[fuori] Puntatore a un puntatore al riquadro di destinazione.

### <a name="remarks"></a>Osservazioni

Questo metodo calcola il rettangolo che una finestra occuperebbe se un utente trascinasse la finestra nel punto specificato da *ptMouse* e la ancorasse lì.

## <a name="cdockingmanagercreate"></a><a name="create"></a>CDockingManager::CreareCDockingManager::Create

Crea un gestore di ancoraggio.

```
BOOL Create(CFrameWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore al frame padre del gestore di ancoraggio. Questo valore non deve essere NULL.

### <a name="return-value"></a>Valore restituito

VERO sempre.

## <a name="cdockingmanagerdeterminepaneandstatus"></a><a name="determinepaneandstatus"></a>CDockingManager::DeterminePaneAndStatus

Determina il riquadro che contiene un determinato punto e il relativo stato di ancoraggio.

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
[in] Posizione del riquadro da controllare.

*nSensibilità*<br/>
[in] Valore per aumentare il rettangolo della finestra di ogni riquadro selezionato. Un riquadro soddisfa i criteri di ricerca se il punto specificato si trova in questa area aumentata.

*dwEnabledAlignment (Allineamento dwEnabled)*<br/>
[in] Allineamento del riquadro di ancoraggio.

*ppTargetBar (bar di applicazione)*<br/>
[fuori] Puntatore a un puntatore al riquadro di destinazione.

*pBarToIgnore*<br/>
[in] Riquadro ignorato dal metodo.

*pBarToDock (informazioni in stato di folto)*<br/>
[in] Riquadro ancorato.

### <a name="return-value"></a>Valore restituito

Stato di ancoraggio.

### <a name="remarks"></a>Osservazioni

Lo stato di ancoraggio può essere uno dei seguenti valori:

|AFX_CS_STATUS valore|Significato|
|---------------------------|-------------|
|CS_NOTHING|Il puntatore non si trova su un sito di ancoraggio. Pertanto, mantenere il riquadro mobile.|
|CS_DOCK_IMMEDIATELY|Il puntatore si trova sul sito di ancoraggio in modalità immediata (DT_IMMEDIATE stile è abilitato), pertanto il riquadro deve essere ancorato immediatamente.|
|CS_DELAY_DOCK|Il puntatore si trova su un sito di ancoraggio che è un altro riquadro ancorato o è un bordo del frame principale.|
|CS_DELAY_DOCK_TO_TAB|Il puntatore è posizionato su un sito di ancoraggio che fa sì che il riquadro sia ancorato in una finestra a schede. Ciò si verifica quando il mouse si trova sopra una didascalia di un altro riquadro ancorato o su un'area di tabulazione di un riquadro a schede.|

## <a name="cdockingmanagerdisablerestoredockstate"></a><a name="disablerestoredockstate"></a>CDockingManager::DisableRestoreDockState

Abilita o disabilita il caricamento del layout di ancoraggio dal Registro di sistema.

```
void DisableRestoreDockState(BOOL bDisable = TRUE);
```

### <a name="parameters"></a>Parametri

*Bdisattivare*<br/>
[in] TRUE per disabilitare il caricamento del layout di ancoraggio dal Registro di sistema; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo quando è necessario mantenere il layout corrente dei riquadri e delle barre degli strumenti ancorati durante il caricamento dello stato dell'applicazione.

## <a name="cdockingmanagerdockpane"></a><a name="dockpane"></a>CDockingManager::DockPane

Ancora un riquadro a un altro riquadro o a una finestra cornice.

```
void DockPane(
    CBasePane* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore a un riquadro della barra a cui ancorare.

*nDockBarID*<br/>
[in] ID della barra da ancorare.

*Lprect*<br/>
[in] Rettangolo di destinazione.

## <a name="cdockingmanagerdockpaneleftof"></a><a name="dockpaneleftof"></a>CDockingManager::DockPaneLeftOf

Ancora un riquadro a sinistra di un altro riquadro.

```
BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pBarToDock (informazioni in stato di folto)*<br/>
[in] Puntatore al riquadro da ancorare a sinistra di *pTargetBar*.

*pTargetBar (bar di riferimento)*<br/>
[in] Puntatore al riquadro di destinazione.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro è stato ancorato correttamente. in caso contrario, FALSE.

## <a name="cdockingmanagerenableautohidepanes"></a><a name="enableautohidepanes"></a>CDockingManager::EnableAutoHidePanes

Abilita l'ancoraggio del riquadro al frame principale, crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.

```
BOOL EnableAutoHidePanes(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
[in] Allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro ancorato è stato creato correttamente. FALSE in caso contrario.

## <a name="cdockingmanagerenabledocking"></a><a name="enabledocking"></a>CDockingManager::EnableDocking

Crea un riquadro ancorato e consente l'ancoraggio del riquadro al frame principale.

```
BOOL EnableDocking(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
[in] Allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro ancorato è stato creato correttamente. FALSE in caso contrario.

## <a name="cdockingmanagerenabledocksitemenu"></a><a name="enabledocksitemenu"></a>CDockingManager::EnableDockSiteMenu

Visualizza un pulsante aggiuntivo che consente di aprire un menu a comparsa sulle didascalie di tutti i riquadri ancorati.

```
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] TRUE per abilitare il menu del sito di ancoraggio; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Nel menu del sito di ancoraggio vengono visualizzate le seguenti opzioni per modificare lo stato di ancoraggio del riquadro:

- `Floating`- Galleggia un riquadro

- `Docking`- Ancora un riquadro nel frame principale nella posizione in cui il riquadro è stato ancorato l'ultima volta

- `AutoHide`- Passa alla modalità Nascondi automaticamente

- `Hide`- Nasconde un riquadro

Per impostazione predefinita, questo menu non viene visualizzato.

## <a name="cdockingmanagerenablepanecontextmenu"></a><a name="enablepanecontextmenu"></a>CDockingManager::EnablePaneContextMenu

Indica alla libreria di visualizzare un menu di scelta rapida speciale con un elenco di barre degli strumenti dell'applicazione e riquadri ancorati quando l'utente fa clic con il pulsante destro del mouse e la libreria sta elaborando il messaggio WM_CONTEXTMENU.

```
void EnablePaneContextMenu(
    BOOL bEnable,
    UINT uiCustomizeCmd,
    const CString& strCustomizeText,
    BOOL bToolbarsOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
[in] Se TRUE, la libreria attiva il supporto per il menu di scelta rapida automatico; se FALSE la libreria disattiva il supporto per il menu di scelta rapida automatico.

*uiCustomizeCmd (informazioni in base alla proprietà*<br/>
[in] Un ID di comando per la voce **Personalizza** nel menu.

*strCustomizeText*<br/>
[in] Testo dell'elemento **Personalizza.**

*bToolbarsOnly (ToolbarsOnly)*<br/>
[in] Se TRUE, il menu visualizza solo un elenco di barre degli strumenti dell'applicazione; Se FALSE, la libreria aggiunge i riquadri di ancoraggio dell'applicazione a questo elenco.

## <a name="cdockingmanagerfinddocksite"></a><a name="finddocksite"></a>CDockingManager::FindDockSite

Recupera il riquadro della barra che si trova nella posizione specificata e che ha l'allineamento specificato.

```
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,
    BOOL bOuter);
```

### <a name="parameters"></a>Parametri

*dwAllineamento*<br/>
[in] L'allineamento del riquadro della barra.

*bEsterno*<br/>
[in] Se TRUE, recuperare la barra nella posizione head nell'elenco delle barre di controllo. In caso contrario, recuperare la barra nella posizione della coda nell'elenco delle barre di controllo.

### <a name="return-value"></a>Valore restituito

Il riquadro ancorato con l'allineamento specificato; NULL in caso contrario.

## <a name="cdockingmanagerfindpanebyid"></a><a name="findpanebyid"></a>CDockingManager::FindPaneByID

Trova un riquadro in base all'ID di controllo specificato.

```
virtual CBasePane* FindPaneByID(
    UINT uBarID,
    BOOL bSearchMiniFrames = FALSE);
```

### <a name="parameters"></a>Parametri

*uBarID (IDbarraina)*<br/>
[in] Specifica l'ID di controllo del riquadro da trovare.

*bSearchMiniFrames*<br/>
[in] TRUE per includere tutti i riquadri mobili nella ricerca. FALSE per includere solo i riquadri ancorati.

### <a name="return-value"></a>Valore restituito

Il [CBasePane](../../mfc/reference/cbasepane-class.md) oggetto con l'ID di controllo specificato o NULL se non è possibile trovare il riquadro specificato.

### <a name="remarks"></a>Osservazioni

## <a name="cdockingmanagerfinddocksitebypane"></a><a name="finddocksitebypane"></a>CDockingManager::FindDockSiteByPane

Restituisce il riquadro della barra con l'ID del riquadro della barra di destinazione.

```
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pTargetBar (bar di riferimento)*<br/>
[in] Puntatore al riquadro della barra di destinazione.

### <a name="return-value"></a>Valore restituito

Riquadro della barra con l'ID del riquadro della barra di destinazione. NULL se tale riquadro della barra non esiste.

## <a name="cdockingmanagerfixupvirtualrects"></a><a name="fixupvirtualrects"></a>CDockingManager::FixupVirtualRects

Esegue il commit di tutte le posizioni correnti della barra degli strumenti in rettangoli virtuali.

```
virtual void FixupVirtualRects();
```

### <a name="remarks"></a>Osservazioni

Quando l'utente inizia a trascinare una barra degli strumenti, l'applicazione memorizza la posizione originale nel *rettangolo virtuale.* Quando l'utente sposta una barra degli strumenti nel sito di ancoraggio, la barra degli strumenti può spostare altre barre degli strumenti. Le posizioni originali delle altre barre degli strumenti vengono archiviate nei rettangoli virtuali corrispondenti.

## <a name="cdockingmanagerframefrompoint"></a><a name="framefrompoint"></a>CDockingManager::FrameFromPointCDockingManager::FrameFromPoint

Restituisce il frame che contiene il punto specificato.

```
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,
    CPaneFrameWnd* pFrameToExclude,
    BOOL bFloatMultiOnly) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
[in] Specifica il punto, in coordinate dello schermo, da controllare.

*pFrameToExclude*<br/>
[in] Puntatore a una cornice da escludere.

*bFloatMultiOnly (opzione FloatMultiOnly)*<br/>
[in] TRUE per escludere i frame `CMultiPaneFrameWnd`che non sono istanze di ; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

Il frame che contiene il punto specificato; NULL in caso contrario.

## <a name="cdockingmanagergetclientareabounds"></a><a name="getclientareabounds"></a>CDockingManager::GetClientAreaBoundsCDockingManager::GetClientAreaBounds

Ottiene il rettangolo che contiene i limiti dell'area client.

```
CRect GetClientAreaBounds() const;

void GetClientAreaBounds(CRect& rcClient);
```

### <a name="parameters"></a>Parametri

*rcClient*<br/>
[fuori] Riferimento al rettangolo che contiene i limiti dell'area client.

### <a name="return-value"></a>Valore restituito

Rettangolo che contiene i limiti dell'area client.

## <a name="cdockingmanagergetdockingmode"></a><a name="getdockingmode"></a>CDockingManager::GetDockingMode

Restituisce la modalità di ancoraggio corrente.

```
static AFX_DOCK_TYPE GetDockingMode();
```

### <a name="return-value"></a>Valore restituito

Valore dell'enumeratore che rappresenta la modalità di ancoraggio corrente. Può essere uno dei valori seguenti:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

### <a name="remarks"></a>Osservazioni

Per impostare la modalità di ancoraggio, chiamare [CDockingManager::SetDockingMode](#setdockingmode).

## <a name="cdockingmanagergetdocksiteframewnd"></a><a name="getdocksiteframewnd"></a>CDockingManager::GetDockSiteFrameWnd

Ottiene un puntatore alla cornice della finestra padre.

```
CFrameWnd* GetDockSiteFrameWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla cornice della finestra padre.

## <a name="cdockingmanagergetenabledautohidealignment"></a><a name="getenabledautohidealignment"></a>CDockingManager::GetEnabledAutoHideAlignment

Restituisce l'allineamento abilitato dei riquadri.

```
DWORD GetEnabledAutoHideAlignment() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di flag di CBRS_ALIGN_ oppure 0 se i riquadri Nascondi automaticamente non sono abilitati. Per ulteriori informazioni, vedere [CFrameWnd::EnableDocking](../../mfc/reference/cframewnd-class.md#enabledocking).

### <a name="remarks"></a>Osservazioni

Il metodo restituisce l'allineamento abilitato per le barre di controllo di Nascondi automaticamente. Per abilitare le barre di nascondere automaticamente, chiamare [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes).

## <a name="cdockingmanagergetminiframes"></a><a name="getminiframes"></a>CDockingManager::GetMiniFramesCDockingManager::GetMiniFrames

Ottiene un elenco di miniframe.

```
const CObList& GetMiniFrames() const;
```

### <a name="return-value"></a>Valore restituito

Elenco di miniframe che contengono le barre di controllo che appartengono al gestore di ancoraggio.

## <a name="cdockingmanagergetouteredgebounds"></a><a name="getouteredgebounds"></a>CDockingManager::GetOuterEdgeBoundsCDockingManager::GetOuterEdgeBounds

Ottiene un rettangolo che contiene i bordi esterni della cornice.

```
CRect GetOuterEdgeBounds() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che contiene i bordi esterni della cornice.

## <a name="cdockingmanagergetpanelist"></a><a name="getpanelist"></a>CDockingManager::GetPaneList

Restituisce un elenco di riquadri appartenenti al gestore di ancoraggio. Sono inclusi tutti i riquadri mobili.

```
void GetPaneList(
    CObList& lstBars,
    BOOL bIncludeAutohide = FALSE,
    CRuntimeClass* pRTCFilter = NULL,
    BOOL bIncludeTabs = FALSE);
```

### <a name="parameters"></a>Parametri

*lstBar*<br/>
[in, out] Contiene tutti i riquadri del gestore di ancoraggio corrente.

*bIncludiAutohide*<br/>
[in] TRUE per includere i riquadri in modalità Nascondi automaticamente. in caso contrario, FALSE.

*filtro pRTC*<br/>
[in] Se non NULL, l'elenco restituito contiene solo riquadri della classe di runtime specificata.

*bSchedeDiincluso*<br/>
[in] TRUE per includere le schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se sono presenti riquadri a schede nel gestore di ancoraggio, il metodo restituisce puntatori a [CBaseTabbedRiquadr classe](../../mfc/reference/cbasetabbedpane-class.md) oggetti ed è necessario enumerare le schede in modo esplicito.

Utilizzare *pRTCFilter* per ottenere una particolare classe di riquadri. Ad esempio, è possibile ottenere solo le barre degli strumenti impostando questo valore in modo appropriato.

## <a name="cdockingmanagergetsmartdockingmanager"></a><a name="getsmartdockingmanager"></a>CDockingManager::GetSmartDockingManager

Recupera un puntatore al gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManager();
```

### <a name="return-value"></a>Valore restituito

Un puntatore al gestore di ancoraggio intelligente.

## <a name="cdockingmanagergetsmartdockingmanagerpermanent"></a><a name="getsmartdockingmanagerpermanent"></a>CDockingManager::GetSmartDockingManagerPermanent

Recupera un puntatore al gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManagerPermanent() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore al gestore di ancoraggio intelligente.

## <a name="cdockingmanagergetsmartdockingparams"></a><a name="getsmartdockingparams"></a>CDockingManager::GetSmartDockingParams

Restituisce i parametri di ancoraggio intelligente per il gestore di ancoraggio.

```
static CSmartDockingInfo& GetSmartDockingParams();
```

### <a name="return-value"></a>Valore restituito

Classe che contiene i parametri di ancoraggio intelligente per il gestore di ancoraggio corrente. Per ulteriori informazioni, vedere [Classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md).

### <a name="remarks"></a>Osservazioni

## <a name="cdockingmanagerhideautohidepanes"></a><a name="hideautohidepanes"></a>CDockingManager::HideAutoHidePanes

Nasconde un riquadro in modalità Nascondi automaticamente.

```
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,
    BOOL bImmediately = FALSE);
```

### <a name="parameters"></a>Parametri

*pBarToExclude*<br/>
[in] Un puntatore a una barra da escludere dal nascondiglio.

*bImmediatamente*<br/>
[in] TRUE per nascondere immediatamente il riquadro; FALSE per nascondere il riquadro con l'effetto Nascondi automaticamente.

## <a name="cdockingmanagerinsertdocksite"></a><a name="insertdocksite"></a>CDockingManager::InsertDockSite

Crea un riquadro ancorato e lo inserisce nell'elenco delle barre di controllo.

```
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,
    DWORD dwAlignToInsertAfter,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*Informazioni*<br/>
[in] Struttura che contiene le informazioni di allineamento relative al riquadro di ancoraggio.

*DwAlignToInsertAfter*<br/>
[in] Allineamento del riquadro di ancoraggio.

*barra di controllo ppDockBar*<br/>
[fuori] Puntatore a un puntatore a un riquadro ancorato.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro ancorato è stato creato correttamente. FALSE in caso contrario.

## <a name="cdockingmanagerinsertpane"></a><a name="insertpane"></a>CDockingManager::InsertPane

Inserisce un riquadro di controllo nell'elenco delle barre di controllo.

```
BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter = TRUE);
```

### <a name="parameters"></a>Parametri

*pControlBar (barra di controllo)*<br/>
[in] Puntatore a un riquadro di controllo.

*pTarget (Destinazione)*<br/>
[in] Puntatore a un riquadro di destinazione.

*bDopo*<br/>
[in] TRUE per inserire il riquadro dopo la posizione del riquadro di destinazione; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro di controllo viene aggiunto correttamente all'elenco di barre di controllo; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce false se il riquadro di controllo è già presente nell'elenco delle barre di controllo o se il riquadro di destinazione non esiste nell'elenco delle barre di controllo.

## <a name="cdockingmanagerisdocksitemenu"></a><a name="isdocksitemenu"></a>CDockingManager::IsDockSiteMenu

Specifica se visualizzare un menu a comparsa nelle didascalie di tutti i riquadri.

```
static BOOL IsDockSiteMenu();
```

### <a name="return-value"></a>Valore restituito

TRUESe un menu del sito di ancoraggio viene visualizzato nelle didascalie di tutti i riquadri ancorati; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

È possibile attivare il menu del sito di ancoraggio chiamando [CDockingManager::EnableDockSiteMenu](#enabledocksitemenu).

## <a name="cdockingmanagerisinadjustlayout"></a><a name="isinadjustlayout"></a>CDockingManager::IsInAdjustLayout

Determina se i layout di tutti i riquadri vengono regolati.

```
BOOL IsInAdjustLayout() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe i layout di tutti i riquadri vengono regolati. FALSE in caso contrario.

## <a name="cdockingmanagerisolecontainermode"></a><a name="isolecontainermode"></a>CDockingManager::IsOLEContainerMode

Specifica se il gestore di ancoraggio è in modalità contenitore OLE.

```
BOOL IsOLEContainerMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il gestore di ancoraggio è in modalità contenitore OLE. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In modalità contenitore OLE, tutti i riquadri di ancoraggio e le barre degli strumenti dell'applicazione sono nascosti. I riquadri sono nascosti anche in questa modalità se è stato impostato [CDockingManager::m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode) su TRUE.

## <a name="cdockingmanagerispointneardocksite"></a><a name="ispointneardocksite"></a>CDockingManager::IsPointNearDockSite

Determina se un punto specificato si trova vicino al sito di ancoraggio.

```
BOOL IsPointNearDockSite(
    CPoint point,
    DWORD& dwBarAlignment,
    BOOL& bOuterEdge) const;
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Punto specificato.

*dwBarAlignment (Allineamento dwBarAlignment)*<br/>
[fuori] Specifica il bordo a cui si trova il punto. I valori possibili sono CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP e CBRS_ALIGN_BOTTOM.

*bEdge*<br/>
[fuori] TRUESe il punto è vicino al bordo esterno del sito di ancoraggio; FALSE in caso contrario.

### <a name="return-value"></a>Valore restituito

TRUESe il punto è vicino al sito di ancoraggio; in caso contrario, FALSE.

## <a name="cdockingmanagerisprintpreviewvalid"></a><a name="isprintpreviewvalid"></a>CDockingManager::IsPrintPreviewValid

Determina se è impostata la modalità di anteprima di stampa.

```
BOOL IsPrintPreviewValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe è impostata la modalità di anteprima di stampa. FALSE in caso contrario.

## <a name="cdockingmanagerloadstate"></a><a name="loadstate"></a>CDockingManager::LoadState

Carica lo stato del gestore di ancoraggio dal Registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Nome del profilo.

*uiID*<br/>
[in] ID del gestore di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUESe lo stato del gestore di ancoraggio è stato caricato correttamente. in caso contrario, FALSE.

## <a name="cdockingmanagerlockupdate"></a><a name="lockupdate"></a>CDockingManager::LockUpdate

Blocca la finestra specificata.

```
void LockUpdate(BOOL bLock);
```

### <a name="parameters"></a>Parametri

*Blocco*<br/>
[in] TRUESe la finestra è bloccata. FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Quando una finestra è bloccata, non può essere spostata e non può essere ridisegnata.

## <a name="cdockingmanagerm_bhidedockingbarsincontainermode"></a><a name="m_bhidedockingbarsincontainermode"></a>CDockingManager::m_bHideDockingBarsInContainerMode

Specifica se il gestore di ancoraggio nasconde i riquadri in modalità contenitore OLE.

```
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;
```

### <a name="remarks"></a>Osservazioni

Impostare questo valore su FALSE se si desidera mantenere visibili tutti i riquadri ancorati al frame principale quando l'applicazione è in modalità contenitore OLE. Per impostazione predefinita, questo valore è TRUE.

## <a name="cdockingmanagerm_dockmodeglobal"></a><a name="m_dockmodeglobal"></a>CDockingManager::m_dockModeGlobal

Specifica la modalità di ancoraggio globale.

```
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, ogni riquadro ancorato utilizza questa modalità di ancoraggio. Per ulteriori informazioni sui valori su cui è possibile impostare questo campo, vedere [CBasePane::GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).

## <a name="cdockingmanagerm_ndocksensitivity"></a><a name="m_ndocksensitivity"></a>CDockingManager::m_nDockSensitivity

Specifica la sensibilità di ancoraggio.

```
AFX_IMPORT_DATA static int m_nDockSensitivity;
```

### <a name="remarks"></a>Osservazioni

La sensibilità di ancoraggio definisce quanto vicino un riquadro mobile può avvicinarsi a un riquadro ancorato, un sito ancorato o un altro riquadro prima che il framework ne cambi lo stato in ancorato.

## <a name="cdockingmanagerm_ntimeoutbeforedockingbardock"></a><a name="m_ntimeoutbeforedockingbardock"></a>CDockingManager::m_nTimeOutBeforeDockingBarDock

Specifica il tempo, in millisecondi, che deve essere ancorato a un riquadro di ancoraggio in modalità di ancoraggio immediato.

```
static UINT m_nTimeOutBeforeDockingBarDock;
```

### <a name="remarks"></a>Osservazioni

Prima ancorato a un riquadro, il framework attende il periodo di tempo specificato. In questo modo si evita che il riquadro venga accidentalmente ancorato a una posizione mentre l'utente lo sta ancora trascinando.

## <a name="cdockingmanagerm_ntimeoutbeforetoolbardock"></a><a name="m_ntimeoutbeforetoolbardock"></a>CDockingManager::m_nTimeOutBeforeToolBarDock

Specifica il tempo, in millisecondi, prima che una barra degli strumenti venga ancorata alla finestra cornice principale.

```
static UINT m_nTimeOutBeforeToolBarDock;
```

### <a name="remarks"></a>Osservazioni

Prima ancorata a una barra degli strumenti, il framework attende il periodo di tempo specificato. Ciò impedisce che la barra degli strumenti venga accidentalmente ancorata a una posizione mentre l'utente continua a trascinarla.

## <a name="cdockingmanageronactivateframe"></a><a name="onactivateframe"></a>CDockingManager::OnActivateFrame

Chiamato dal framework quando la finestra cornice viene resa attiva o disattivata.

```
virtual void OnActivateFrame(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
[in] Se TRUE, la finestra cornice viene resa attiva; se FALSE, la finestra cornice viene disattivata.

## <a name="cdockingmanageronclosepopupmenu"></a><a name="onclosepopupmenu"></a>CDockingManager::OnClosePopupMenu

Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.

```
void OnClosePopupMenu();
```

### <a name="remarks"></a>Osservazioni

Il framework invia un messaggio di WM_DESTROY quando sta per chiudere la finestra principale corrente. Eseguire l'override di `CMFCPopupMenu` questo metodo per gestire `CMFCPopupMenu` le notifiche da oggetti che appartengono alla finestra cornice quando un oggetto elabora un messaggio di WM_DESTROY.

## <a name="cdockingmanageronmoveminiframe"></a><a name="onmoveminiframe"></a>CDockingManager::OnMoveMiniFrame

Chiamato dal framework per spostare una finestra cornice mini.

```
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
[in] Puntatore a una finestra cornice mini.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cdockingmanageronpanecontextmenu"></a><a name="onpanecontextmenu"></a>CDockingManager::OnPaneContextMenu

Chiamato dal framework quando compila un menu che dispone di un elenco di riquadri.

```
void OnPaneContextMenu(CPoint point);
```

### <a name="parameters"></a>Parametri

*Punto*<br/>
[in] Specifica la posizione del menu.

## <a name="cdockingmanagerpanefrompoint"></a><a name="panefrompoint"></a>CDockingManager::PaneFromPoint

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

*Punto*<br/>
[in] Specifica il punto, in coordinate dello schermo, da controllare.

*nSensibilità*<br/>
[in] Valore per gonfiare il rettangolo della finestra di ogni riquadro selezionato. Un riquadro soddisfa i criteri di ricerca se il punto specificato si trova in questa area gonfiata.

*bExactBar (informazioni in base alla proprietà del*<br/>
[in] TRUE per ignorare il *nSensitivity* parametro; in caso contrario, FALSE.

*pRTCBarType (gruppo di dati)*<br/>
[in] Se non NULL, il metodo cerca solo i riquadri del tipo specificato.

*bCheckVisibility (Controllo)*<br/>
[in] TRUE per controllare solo i riquadri visibili; in caso contrario, FALSE.

*dwAllineamento*<br/>
[fuori] Se viene trovato un riquadro nel punto specificato, questo parametro contiene il lato del riquadro più vicino al punto specificato. Per altre informazioni, vedere la sezione Osservazioni.

*pBarToIgnore*<br/>
[in] Se non NULL, il metodo ignora i riquadri specificati da questo parametro.

### <a name="return-value"></a>Valore restituito

Il [CBasePane](../../mfc/reference/cbasepane-class.md)-oggetto derivato che contiene il punto specificato, o NULL se non è stato trovato alcun riquadro.

### <a name="remarks"></a>Osservazioni

Quando la funzione viene restituita ed è stato trovato un riquadro, *dwAlignment* contiene l'allineamento del punto specificato. Ad esempio, se il punto è più vicino alla parte superiore del riquadro, *dwAlignment* è impostato su CBRS_ALIGN_TOP.

## <a name="cdockingmanagerprocesspanecontextmenucommand"></a><a name="processpanecontextmenucommand"></a>CDockingManager::ProcessPaneContextMenuCommand

Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.

```
BOOL ProcessPaneContextMenuCommand(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
[in] ID di una barra di controllo nel menu.

*Ncode*<br/>
[in] Codice di notifica del comando.

*pExtra*<br/>
[in] Puntatore a void di cui viene `CCmdUI` emesso il cast a un puntatore a se *nCode* è CN_UPDATE_COMMAND_UI.

*pHandlerInfo (informazioni in stato in questo stato in*<br/>
[in] Puntatore a una struttura di informazioni. Questo parametro non viene usato.

### <a name="return-value"></a>Valore restituito

TRUEse *pEXtra* non è NULL e *nCode* è uguale CN_UPDATE_COMMAND_UI o se è presente una barra di controllo con il *nID*specificato.

## <a name="cdockingmanagerrecalclayout"></a><a name="recalclayout"></a>CDockingManager::RecalcLayout

Ricalcola il layout interno dei controlli presenti nell'elenco dei controlli.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*bNotifica*<br/>
[in] Questo parametro non viene utilizzato.

## <a name="cdockingmanagerreleaseemptypanecontainers"></a><a name="releaseemptypanecontainers"></a>CDockingManager::ReleaseEmptyPaneContainers

Rilascia i contenitori del riquadro vuoto.

```
void ReleaseEmptyPaneContainers();
```

## <a name="cdockingmanagerremovehiddenmditabbedbar"></a><a name="removehiddenmditabbedbar"></a>CDockingManager::RemoveHiddenMDITabbedBar

Rimuove il riquadro della barra nascosta specificato.

```
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore a un riquadro della barra da rimuovere.

## <a name="cdockingmanagerremoveminiframe"></a><a name="removeminiframe"></a>CDockingManager::RemoveMiniFrame

Rimuove un fotogramma specificato dall'elenco di mini frame.

```
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
[in] Puntatore a una cornice da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUESe il frame specificato viene rimosso. FALSE in caso contrario.

## <a name="cdockingmanagerremovepanefromdockmanager"></a><a name="removepanefromdockmanager"></a>CDockingManager::RemovePaneFromDockManager

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

*pWnd (in questo stato di windows*<br/>
[in] Puntatore a un riquadro da rimuovere.

*bDistruggi*<br/>
[in] Se TRUE, il riquadro rimosso viene eliminato.

*bAdattare il layout*<br/>
[in] Se TRUE, regolare immediatamente il layout di ancoraggio.

*bNascondi Auto*<br/>
[in] Se TRUE, il riquadro viene rimosso dall'elenco delle barre di nascondere automaticamente. Se FALSE, il riquadro viene rimosso dall'elenco dei riquadri normali.

*pBarSostituzione*<br/>
[in] Puntatore a un riquadro che sostituisce il riquadro rimosso.

## <a name="cdockingmanagerreplacepane"></a><a name="replacepane"></a>CDockingManager::ReplacePane

Sostituisce un riquadro con un altro.

```
BOOL ReplacePane(
    CDockablePane* pOriginalBar,
    CDockablePane* pNewBar);
```

### <a name="parameters"></a>Parametri

*pOriginalBar (barra originale)*<br/>
[in] Puntatore al riquadro originale.

*pNewBar (informazioni in stato inquestoendo*<br/>
[in] Puntatore al riquadro che sostituisce il riquadro originale.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro viene sostituito correttamente. FALSE in caso contrario.

## <a name="cdockingmanagerresortminiframesforzorder"></a><a name="resortminiframesforzorder"></a>CDockingManager::ResortMiniFramesPerOrdine

Ricorre i telai nell'elenco dei mini telai.

```
void ResortMiniFramesForZOrder();
```

## <a name="cdockingmanagersavestate"></a><a name="savestate"></a>CDockingManager::SaveState

Salva lo stato del gestore di ancoraggio nel Registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszNomeprofilo (informazioni in base al profilo)*<br/>
[in] Percorso di una chiave del Registro di sistema.

*uiID*<br/>
[in] ID del gestore di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUESe lo stato è stato salvato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il salvataggio dello stato del gestore di ancoraggio nel Registro di sistema comporta il salvataggio degli stati delle barre di controllo, degli stati delle barre di nascondere automaticamente e degli stati dei mini frame presenti nel gestore di ancoraggio.

## <a name="cdockingmanagersendmessagetominiframes"></a><a name="sendmessagetominiframes"></a>CDockingManager::SendMessageToMiniFrames

Invia il messaggio specificato a tutti i mini frame.

```
BOOL SendMessageToMiniFrames(
    UINT uMessage,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### <a name="parameters"></a>Parametri

*uMessaggio*<br/>
[in] Messaggio da inviare.

*wParam*<br/>
[in] Informazioni aggiuntive dipendenti dal messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive dipendenti dal messaggio.

### <a name="return-value"></a>Valore restituito

VERO sempre.

## <a name="cdockingmanagerserialize"></a><a name="serialize"></a>CDockingManager::Serialize

Scrive il gestore di ancoraggio in un archivio.

```
void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
[in] Riferimento a un oggetto archivio.

### <a name="remarks"></a>Osservazioni

La scrittura del gestore di ancoraggio in un archivio comporta la determinazione del numero di barre di controllo e dispositivi di scorrimento ancorati e la scrittura delle barre di controllo, dei mini frame, delle barre di nascondino automatico e delle barre a schede MDI nell'archivio.

## <a name="cdockingmanagersetautohidezorder"></a><a name="setautohidezorder"></a>CDockingManager::SetAutohide -Order

Imposta le dimensioni, la larghezza e l'altezza delle barre di controllo e del riquadro specificato.

```
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```

### <a name="parameters"></a>Parametri

*PAHDockingBar*<br/>
[in] Puntatore a un riquadro ancorabile.

## <a name="cdockingmanagersetdockingmode"></a><a name="setdockingmode"></a>CDockingManager::SetDockingMode

Imposta la modalità di ancoraggio.

```
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```

### <a name="parameters"></a>Parametri

*DockMode (modalità dock)*<br/>
Specifica la nuova modalità di ancoraggio. Per altre informazioni, vedere la sezione Osservazioni.

*Tema*<br/>
Specifica il tema da utilizzare per gli indicatori di ancoraggio intelligenti. Può essere uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005 AFX_SDT_VS2008.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo statico per impostare la modalità di ancoraggio.

*dockMode* può essere uno dei seguenti valori:

- DT_STANDARD - Modalità di ancoraggio standard implementata in Visual Studio .NET 2003. I riquadri vengono trascinati senza un contesto di trascinamento.

- DT_IMMEDIATE - Modalità di ancoraggio immediato implementata in Microsoft Visio. I riquadri vengono trascinati con un contesto di trascinamento, ma non vengono visualizzati indicatori.

- DT_SMART - Modalità di ancoraggio intelligente implementata in Visual Studio 2005. I riquadri vengono trascinati con un contesto di trascinamento e vengono visualizzati indicatori intelligenti che mostrano dove il riquadro può essere ancorato.

## <a name="cdockingmanagersetdockstate"></a><a name="setdockstate"></a>CDockingManager::SetDockState

Imposta lo stato di ancoraggio delle barre di controllo, dei mini frame e delle barre di nascondi automaticamente.

```
virtual void SetDockState();
```

## <a name="cdockingmanagersetprintpreviewmode"></a><a name="setprintpreviewmode"></a>CDockingManager::SetPrintPreviewMode

Imposta la modalità di anteprima di stampa delle barre visualizzate nell'anteprima di stampa.

```
void SetPrintPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### <a name="parameters"></a>Parametri

*bAnteprima*<br/>
[in] TRUESe è impostata la modalità di anteprima di stampa. FALSE in caso contrario.

*pState (informazioni in stato in stato*<br/>
[in] Puntatore a uno stato di anteprima. Questo parametro non viene usato.

## <a name="cdockingmanagersetsmartdockingparams"></a><a name="setsmartdockingparams"></a>CDockingManager::SetSmartDockingParams

Imposta i parametri che definiscono il comportamento dell'ancoraggio intelligente.

```
static void SetSmartDockingParams(CSmartDockingInfo& params);
```

### <a name="parameters"></a>Parametri

*params*<br/>
[in, out] Definisce i parametri per l'ancoraggio intelligente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo se si desidera personalizzare l'aspetto, il colore o la forma degli indicatori di ancoraggio intelligente.

Per utilizzare l'aspetto predefinito per gli indicatori di ancoraggio intelligente, passare un'istanza non inizializzata della [classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) a *params*.

## <a name="cdockingmanagershowdelayshowminiframes"></a><a name="showdelayshowminiframes"></a>CDockingManager::ShowDelayShowMiniFrames

Mostra o nasconde le finestre dei mini fotogrammi.

```
void ShowDelayShowMiniFrames(BOOL bshow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per rendere attiva la finestra del frame mostrato; FALSE per nascondere la finestra del frame.

## <a name="cdockingmanagershowpanes"></a><a name="showpanes"></a>CDockingManager::ShowPanes

Mostra o nasconde i riquadri delle barre di controllo e Nascondi automaticamente.

```
virtual BOOL ShowPanes(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
[in] TRUE per visualizzare i riquadri. FALSE per nascondere i riquadri.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

## <a name="cdockingmanagerstartsdocking"></a><a name="startsdocking"></a>CDockingManager::StartSDocking

Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.

```
void StartSDocking(CWnd* pDockingWnd);
```

### <a name="parameters"></a>Parametri

*pDockingWnd (DockingWnd)*<br/>
[in] Puntatore a una finestra da ancorare.

## <a name="cdockingmanagerstopsdocking"></a><a name="stopsdocking"></a>CDockingManager::StopSDocking

Interrompe l'aggancio intelligente.

```
void StopSDocking();
```

## <a name="cdockingmanagergetsmartdockingtheme"></a><a name="getsmartdockingtheme"></a>CDockingManager::GetSmartDockingTheme

Metodo statico che restituisce un tema utilizzato per visualizzare gli indicatori di ancoraggio intelligente.

```
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```

### <a name="return-value"></a>Valore restituito

Restituisce uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)<br/>
[CDockablePane Class](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)
