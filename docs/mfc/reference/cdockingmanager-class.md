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
ms.openlocfilehash: 8709b3a4eb3f57a3d2700ad7aaed16df994245c5
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79420470"
---
# <a name="cdockingmanager-class"></a>Classe CDockingManager

Implementa la funzionalità principale che controlla il layout di ancoraggio in una finestra cornice principale.

## <a name="syntax"></a>Sintassi

```
class CDockingManager : public CObject
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDockingManager:: AddDockSite](#adddocksite)|Crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.|
|[CDockingManager:: AddHiddenMDITabbedBar](#addhiddenmditabbedbar)|Aggiunge un handle a un riquadro a barre all'elenco dei riquadri della barra a schede MDI nascosti.|
|[CDockingManager:: AddMiniFrame](#addminiframe)|Aggiunge un frame all'elenco di mini frame.|
|[CDockingManager:: AddPane](#addpane)|Registra un riquadro con il gestore di ancoraggio.|
|[CDockingManager:: AdjustDockingLayout](#adjustdockinglayout)|Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.|
|[CDockingManager:: AdjustPaneFrames](#adjustpaneframes)|Fa in modo che il messaggio di WM_NCCALCSIZE venga inviato a tutti i riquadri e a `CPaneFrameWnd` Windows.|
|[CDockingManager:: AdjustRectToClientArea](#adjustrecttoclientarea)|Regola l'allineamento di un rettangolo.|
|[CDockingManager:: AlignAutoHidePane](#alignautohidepane)|Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo da occupare la larghezza o l'altezza completa dell'area client del frame racchiusa tra i siti di ancoraggio.|
|[CDockingManager:: AutoHidePane](#autohidepane)|Crea una barra degli strumenti Nascondi automaticamente.|
|[CDockingManager:: BringBarsToTop](#bringbarstotop)|Porta le barre ancorate con l'allineamento specificato nella parte superiore.|
|[CDockingManager:: BuildPanesMenu](#buildpanesmenu)|Aggiunge i nomi dei riquadri di ancoraggio e delle barre degli strumenti a un menu.|
|[CDockingManager:: CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata.|
|[CDockingManager:: create](#create)|Crea un gestore di ancoraggio.|
|[CDockingManager::D eterminePaneAndStatus](#determinepaneandstatus)|Determina il riquadro contenente un punto specificato e il relativo stato di ancoraggio.|
|[CDockingManager::D isableRestoreDockState](#disablerestoredockstate)|Abilita o Disabilita il caricamento del layout di ancoraggio dal registro di sistema.|
|[CDockingManager::D ockPane](#dockpane)|Ancora un riquadro a un altro riquadro o a una finestra cornice.|
|[CDockingManager::D ockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|
|[CDockingManager:: EnableAutoHidePanes](#enableautohidepanes)|Consente l'ancoraggio del riquadro al frame principale, crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.|
|[CDockingManager:: EnableDocking](#enabledocking)|Crea un riquadro ancorato e Abilita l'ancoraggio del riquadro al frame principale.|
|[CDockingManager:: EnableDockSiteMenu](#enabledocksitemenu)|Visualizza un pulsante aggiuntivo che consente di aprire un menu di scelta rapida nelle didascalie di tutti i riquadri ancorati.|
|[CDockingManager:: EnablePaneContextMenu](#enablepanecontextmenu)|Indica alla libreria di visualizzare un menu di scelta rapida speciale che include un elenco di barre degli strumenti dell'applicazione e riquadri di ancoraggio quando l'utente fa clic con il pulsante destro del mouse e la libreria sta elaborando il messaggio di WM_CONTEXTMENU.|
|[CDockingManager:: FindDockSite](#finddocksite)|Recupera il riquadro a barre in corrispondenza della posizione specificata e con l'allineamento specificato.|
|[CDockingManager:: FindDockSiteByPane](#finddocksitebypane)|Restituisce il riquadro a barre con l'ID del riquadro della barra di destinazione.|
|[CDockingManager:: FindPaneByID](#findpanebyid)|Trova un riquadro in base all'ID di controllo specificato.|
|[CDockingManager:: FixupVirtualRects](#fixupvirtualrects)|Inserisce tutte le posizioni della barra degli strumenti correnti in rettangoli virtuali.|
|[CDockingManager:: FrameFromPoint](#framefrompoint)|Restituisce il frame che contiene il punto specificato.|
|[CDockingManager:: GetClientAreaBounds](#getclientareabounds)|Ottiene il rettangolo che contiene i limiti dell'area client.|
|[CDockingManager:: GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio corrente.|
|[CDockingManager:: GetDockSiteFrameWnd](#getdocksiteframewnd)|Ottiene un puntatore al frame della finestra padre.|
|[CDockingManager:: GetEnabledAutoHideAlignment](#getenabledautohidealignment)|Restituisce l'allineamento abilitato dei riquadri.|
|[CDockingManager:: GetMiniFrames](#getminiframes)|Ottiene un elenco di miniframes.|
|[CDockingManager:: GetOuterEdgeBounds](#getouteredgebounds)|Ottiene un rettangolo che contiene i bordi esterni del frame.|
|[CDockingManager:: getpanell](#getpanelist)|Restituisce un elenco di riquadri che appartengono al gestore di ancoraggio. Sono inclusi tutti i riquadri a virgola mobile.|
|[CDockingManager:: GetSmartDockingManager](#getsmartdockingmanager)|Recupera un puntatore al gestore di ancoraggio intelligente.|
|[CDockingManager:: GetSmartDockingManagerPermanent](#getsmartdockingmanagerpermanent)|Recupera un puntatore al gestore di ancoraggio intelligente.|
|[CDockingManager:: GetSmartDockingParams](#getsmartdockingparams)|Restituisce i parametri di ancoraggio intelligente per il gestore di ancoraggio.|
|[CDockingManager:: GetSmartDockingTheme](#getsmartdockingtheme)|Metodo statico che restituisce un tema usato per visualizzare i marcatori di ancoraggio intelligente.|
|[CDockingManager:: HideAutoHidePanes](#hideautohidepanes)|Nasconde un riquadro in modalità Nascondi automaticamente.|
|[CDockingManager:: InsertDockSite](#insertdocksite)|Crea un riquadro ancorato e lo inserisce nell'elenco di barre di controllo.|
|[CDockingManager:: InsertPane](#insertpane)|Inserisce un riquadro di controllo nell'elenco delle barre di controllo.|
|[CDockingManager:: IsDockSiteMenu](#isdocksitemenu)|Specifica se un menu a comparsa viene visualizzato nelle didascalie di tutti i riquadri.|
|[CDockingManager:: IsInAdjustLayout](#isinadjustlayout)|Determina se i layout di tutti i riquadri vengono modificati.|
|[CDockingManager:: IsOLEContainerMode](#isolecontainermode)|Specifica se il gestore di ancoraggio è in modalità contenitore OLE.|
|[CDockingManager:: IsPointNearDockSite](#ispointneardocksite)|Determina se un punto specificato si trova vicino al sito di ancoraggio.|
|[CDockingManager:: IsPrintPreviewValid](#isprintpreviewvalid)|Determina se è impostata la modalità di anteprima di stampa.|
|[CDockingManager:: LoadState](#loadstate)|Carica lo stato del gestore di ancoraggio dal registro di sistema.|
|[CDockingManager:: LockUpdate](#lockupdate)|Blocca la finestra specificata.|
|[CDockingManager:: OnActivateFrame](#onactivateframe)|Chiamata eseguita dal framework quando la finestra cornice viene attivata o disattivata.|
|[CDockingManager:: OnClosePopupMenu](#onclosepopupmenu)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.|
|[CDockingManager:: OnMoveMiniFrame](#onmoveminiframe)|Chiamata eseguita dal Framework per spostare una finestra con mini-cornice.|
|[CDockingManager:: OnPaneContextMenu](#onpanecontextmenu)|Chiamata eseguita dal Framework durante la compilazione di un menu che include un elenco di riquadri.|
|[CDockingManager::P aneFromPoint](#panefrompoint)|Restituisce il riquadro che contiene il punto specificato.|
|[CDockingManager::P rocessPaneContextMenuCommand](#processpanecontextmenucommand)|Chiamata eseguita dal Framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.|
|[CDockingManager:: RecalcLayout](#recalclayout)|Ricalcola il layout interno dei controlli presenti nell'elenco di controlli.|
|[CDockingManager:: ReleaseEmptyPaneContainers](#releaseemptypanecontainers)|Rilascia i contenitori dei riquadri vuoti.|
|[CDockingManager:: RemoveHiddenMDITabbedBar](#removehiddenmditabbedbar)|Rimuove il riquadro della barra nascosta specificato.|
|[CDockingManager:: RemoveMiniFrame](#removeminiframe)|Rimuove un frame specificato dall'elenco di mini frame.|
|[CDockingManager:: RemovePaneFromDockManager](#removepanefromdockmanager)|Annulla la registrazione di un riquadro e lo rimuove dall'elenco nel gestore di ancoraggio.|
|[CDockingManager:: ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|
|[CDockingManager:: ResortMiniFramesForZOrder](#resortminiframesforzorder)|Ricorre i frame nell'elenco di mini frame.|
|[CDockingManager:: SaveState](#savestate)|Salva lo stato del gestore di ancoraggio nel registro di sistema.|
|[CDockingManager:: SendMessageToMiniFrames](#sendmessagetominiframes)|Invia il messaggio specificato a tutti i mini frame.|
|[CDockingManager:: Serialize](#serialize)|Scrive l'oggetto docking Manager in un archivio. Esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize).|
|[CDockingManager:: SetAutohideZOrder](#setautohidezorder)|Imposta le dimensioni, la larghezza e l'altezza delle barre di controllo e del riquadro specificato.|
|[CDockingManager:: SetDockingMode](#setdockingmode)|Imposta la modalità di ancoraggio.|
|[CDockingManager:: SetDockState](#setdockstate)|Imposta lo stato di ancoraggio delle barre di controllo, dei mini frame e delle barre di Nascondi automaticamente.|
|[CDockingManager:: SetPrintPreviewMode](#setprintpreviewmode)|Imposta la modalità di anteprima di stampa delle barre visualizzate nell'anteprima di stampa.|
|[CDockingManager:: SetSmartDockingParams](#setsmartdockingparams)|Imposta i parametri che definiscono il comportamento dell'ancoraggio intelligente.|
|[CDockingManager:: ShowDelayShowMiniFrames](#showdelayshowminiframes)|Consente di visualizzare o nascondere le finestre dei mini frame.|
|[CDockingManager:: ShowPanes](#showpanes)|Consente di visualizzare o nascondere i riquadri delle barre di controllo e Nascondi automaticamente.|
|[CDockingManager:: StartSDocking](#startsdocking)|Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.|
|[CDockingManager:: StopSDocking](#stopsdocking)|Arresta l'aggancio intelligente.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CDockingManager:: m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode)|Specifica se il gestore di ancoraggio nasconde i riquadri in modalità contenitore OLE.|
|[CDockingManager:: m_dockModeGlobal](#m_dockmodeglobal)|Specifica la modalità di ancoraggio globale.|
|[CDockingManager:: m_nDockSensitivity](#m_ndocksensitivity)|Specifica la riservatezza di ancoraggio.|
|[CDockingManager:: m_nTimeOutBeforeDockingBarDock](#m_ntimeoutbeforedockingbardock)|Specifica il tempo, in millisecondi, prima che un riquadro ancorato venga ancorato in modalità di ancoraggio immediato.|
|[CDockingManager:: m_nTimeOutBeforeToolBarDock](#m_ntimeoutbeforetoolbardock)|Specifica l'intervallo di tempo, in millisecondi, prima dell'ancoraggio di una barra degli strumenti alla finestra cornice principale.|

## <a name="remarks"></a>Osservazioni

La finestra cornice principale crea e inizializza automaticamente questa classe.

L'oggetto docking Manager include un elenco di tutti i riquadri presenti nel layout di ancoraggio, oltre a un elenco di tutte le finestre [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) che appartengono alla finestra cornice principale.

La classe `CDockingManager` implementa alcuni servizi che è possibile usare per trovare un riquadro o una finestra di `CPaneFrameWnd`. In genere questi servizi non vengono chiamati direttamente perché sono racchiusi nell'oggetto finestra cornice principale. Per ulteriori informazioni, vedere la [classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).

## <a name="customization-tips"></a>Suggerimenti per la personalizzazione

I suggerimenti seguenti si applicano agli oggetti `CDockingManager`:

- La [classe CDockingManager](../../mfc/reference/cdockingmanager-class.md) supporta le modalità di ancoraggio seguenti:

  - `AFX_DOCK_TYPE::DT_IMMEDIATE`

  - `AFX_DOCK_TYPE::DT_STANDARD`

  - `AFX_DOCK_TYPE::DT_SMART`

  Queste modalità di ancoraggio sono definite da [CDockingManager:: m_dockModeGlobal](#m_dockmodeglobal) e vengono impostate tramite la chiamata a [CDockingManager:: SetDockingMode](#setdockingmode).

- Se si vuole creare un riquadro non mobile e non ridimensionabile, chiamare il metodo [CDockingManager:: AddPane](#addpane) . Questo metodo registra il riquadro con il gestore di ancoraggio, responsabile del layout del riquadro.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CDockingManager` per configurare un oggetto `CDockingManager`. Nell'esempio viene illustrato come visualizzare un pulsante aggiuntivo che apre un menu a comparsa nelle didascalie di tutti i riquadri ancorati e come impostare la modalità di ancoraggio dell'oggetto. Questo frammento di codice fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/cpp/cdockingmanager-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CDockingManager](../../mfc/reference/cdockingmanager-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDockingManager. h

##  <a name="adddocksite"></a>CDockingManager:: AddDockSite

Crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.

```
BOOL AddDockSite(
    const AFX_DOCKSITE_INFO& info,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*info*<br/>
in Riferimento a una struttura di informazioni che contiene l'allineamento del riquadro ancorato.

*ppDockBar*<br/>
out Puntatore a un puntatore al nuovo riquadro ancorato.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro Dock è stato creato correttamente; In caso contrario, FALSE.

##  <a name="addhiddenmditabbedbar"></a>CDockingManager:: AddHiddenMDITabbedBar

Aggiunge un handle a un riquadro a barre all'elenco dei riquadri della barra a schede MDI nascosti.

```
void AddHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore a un riquadro a barre

##  <a name="addpane"></a>CDockingManager:: AddPane

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
[in, out] Specifica il riquadro da aggiungere al gestore di ancoraggio.

*bTail*<br/>
in TRUE per aggiungere il riquadro alla fine dell'elenco di riquadri per il gestore di ancoraggio. in caso contrario, FALSE.

*bAutoHide*<br/>
in Solo per uso interno. Usare sempre il valore predefinito FALSE.

*bInsertForOuterEdge*<br/>
in Solo per uso interno. Usare sempre il valore predefinito FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato registrato correttamente con il gestore di ancoraggio. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per registrare riquadri non a virgola mobile e non ridimensionabili con il gestore di ancoraggio. Se non si registrano i riquadri, questi non verranno visualizzati correttamente quando il gestore di ancoraggio è disposto.

##  <a name="adjustdockinglayout"></a>CDockingManager:: AdjustDockingLayout

Ricalcola e regola il layout di tutti i riquadri in una finestra cornice.

```
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```

### <a name="parameters"></a>Parametri

*hdwp*<br/>
in Specifica la struttura della posizione della finestra posticipata. Per altre informazioni, vedere [Tipi di dati Windows](/windows/win32/WinProg/windows-data-types).

### <a name="remarks"></a>Osservazioni

##  <a name="addminiframe"></a>CDockingManager:: AddMiniFrame

Aggiunge un frame all'elenco di mini frame.

```
virtual BOOL AddMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore a un frame.

### <a name="return-value"></a>Valore restituito

TRUE se il frame non è presente nell'elenco di mini frame ed è stato aggiunto correttamente; In caso contrario, FALSE.

##  <a name="adjustpaneframes"></a>CDockingManager:: AdjustPaneFrames

Fa in modo che il messaggio di WM_NCCALCSIZE venga inviato a tutti i riquadri e a `CPaneFrameWnd` Windows.

```
virtual void AdjustPaneFrames();
```

### <a name="remarks"></a>Osservazioni

##  <a name="adjustrecttoclientarea"></a>CDockingManager:: AdjustRectToClientArea

Regola l'allineamento di un rettangolo.

```
virtual BOOL AdjustRectToClientArea(
    CRect& rectResult,
    DWORD dwAlignment);
```

### <a name="parameters"></a>Parametri

*rectResult*<br/>
in Riferimento a un oggetto `CRect`

*dwAlignment*<br/>
in Allineamento dell'oggetto `CRect`

### <a name="return-value"></a>Valore restituito

TRUE se l'allineamento dell'oggetto `CRect` è stato regolato; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il parametro *dwAlignment* può avere uno dei valori seguenti:

- CBRS_ALIGN_TOP

- CBRS_ALIGN_BOTTOM

- CBRS_ALIGN_LEFT

- CBRS_ALIGN_RIGHT

##  <a name="alignautohidepane"></a>CDockingManager:: AlignAutoHidePane

Ridimensiona un riquadro ancorato in modalità Nascondi automaticamente in modo da occupare la larghezza o l'altezza completa dell'area client del frame racchiusa tra i siti di ancoraggio.

```
void AlignAutoHidePane(
    CPaneDivider* pDefaultSlider,
    BOOL bIsVisible = TRUE);
```

### <a name="parameters"></a>Parametri

*pDefaultSlider*<br/>
in Riquadro del dispositivo di scorrimento di ancoraggio.

*bIsVisible*<br/>
in TRUE se il riquadro di ancoraggio è visibile; In caso contrario, FALSE.

##  <a name="autohidepane"></a>CDockingManager:: AutoHidePane

Crea una barra degli strumenti Nascondi automaticamente.

```
CMFCAutoHideToolBar* AutoHidePane(
    CDockablePane* pBar,
    CMFCAutoHideToolBar* pCurrAutoHideToolBar = NULL);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore al riquadro a barre.

*pCurrAutoHideToolBar*<br/>
in Puntatore a una barra degli strumenti Nascondi automaticamente.

### <a name="return-value"></a>Valore restituito

NULL se la barra degli strumenti Nascondi automaticamente non è stata creata. in caso contrario, un puntatore alla nuova barra degli strumenti.

##  <a name="bringbarstotop"></a>CDockingManager:: BringBarsToTop

Porta le barre ancorate con l'allineamento specificato nella parte superiore.

```
void BringBarsToTop(
    DWORD dwAlignment = 0,
    BOOL bExcludeDockedBars = TRUE);
```

### <a name="parameters"></a>Parametri

*dwAlignment*<br/>
in Allineamento delle barre di ancoraggio che vengono portate nella parte superiore di altre finestre.

*bExcludeDockedBars*<br/>
in TRUE per escludere le barre ancorate dalla parte superiore; in caso contrario, FALSE.

##  <a name="buildpanesmenu"></a>CDockingManager:: BuildPanesMenu

Aggiunge i nomi dei riquadri di ancoraggio e delle barre degli strumenti a un menu.

```
void BuildPanesMenu(
    CMenu& menu,
    BOOL bToolbarsOnly);
```

### <a name="parameters"></a>Parametri

*menu*<br/>
in Menu a cui aggiungere i nomi dei riquadri ancorati e delle barre degli strumenti.

*bToolbarsOnly*<br/>
in TRUE per aggiungere solo i nomi della barra degli strumenti al menu; In caso contrario, FALSE.

##  <a name="calcexpecteddockedrect"></a>CDockingManager:: CalcExpectedDockedRect

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
in Puntatore alla finestra da ancorare.

*ptMouse*<br/>
in Posizione del mouse.

*rectResult*<br/>
out Rettangolo calcolato.

*bDrawTab*<br/>
in TRUE per creare una scheda; in caso contrario, FALSE.

*ppTargetBar*<br/>
out Puntatore a un puntatore al riquadro di destinazione.

### <a name="remarks"></a>Osservazioni

Questo metodo calcola il rettangolo che una finestra occupa se un utente ha trascinato la finestra sul punto specificato da *ptMouse* e ancorata.

##  <a name="create"></a>CDockingManager:: create

Crea un gestore di ancoraggio.

```
BOOL Create(CFrameWnd* pParentWnd);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
in Puntatore al frame padre del gestore di ancoraggio. Questo valore non può essere NULL.

### <a name="return-value"></a>Valore restituito

TRUE sempre.

##  <a name="determinepaneandstatus"></a>CDockingManager::D eterminePaneAndStatus

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

*pt*<br/>
in Posizione del riquadro da verificare.

*nSensitivity*<br/>
in Valore per aumentare il rettangolo della finestra di ogni riquadro selezionato. Un riquadro soddisfa i criteri di ricerca se il punto specificato si trova in questa area aumentata.

*dwEnabledAlignment*<br/>
in Allineamento del riquadro di ancoraggio.

*ppTargetBar*<br/>
out Puntatore a un puntatore al riquadro di destinazione.

*pBarToIgnore*<br/>
in Riquadro ignorato dal metodo.

*pBarToDock*<br/>
in Riquadro ancorato.

### <a name="return-value"></a>Valore restituito

Stato di ancoraggio.

### <a name="remarks"></a>Osservazioni

Lo stato di ancoraggio può essere uno dei valori seguenti:

|Valore AFX_CS_STATUS|Significato|
|---------------------------|-------------|
|CS_NOTHING|Il puntatore non si trova su un sito di ancoraggio. Pertanto, è consigliabile lasciare il riquadro a virgola mobile.|
|CS_DOCK_IMMEDIATELY|Il puntatore è posizionato sul sito dock in modalità immediata (DT_IMMEDIATE stile è abilitato), quindi il riquadro deve essere ancorato immediatamente.|
|CS_DELAY_DOCK|Il puntatore si trova su un sito di ancoraggio che è un altro riquadro di ancoraggio o è un bordo del frame principale.|
|CS_DELAY_DOCK_TO_TAB|Il puntatore si trova su un sito di ancoraggio che determina l'ancoraggio del riquadro in una finestra a schede. Questo errore si verifica quando il mouse si trova su una didascalia di un altro riquadro ancorato o su un'area di tabulazione di un riquadro a schede.|

##  <a name="disablerestoredockstate"></a>CDockingManager::D isableRestoreDockState

Abilita o Disabilita il caricamento del layout di ancoraggio dal registro di sistema.

```
void DisableRestoreDockState(BOOL bDisable = TRUE);
```

### <a name="parameters"></a>Parametri

*bDisattivare*<br/>
in TRUE per disabilitare il caricamento del layout di ancoraggio dal registro di sistema; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo quando è necessario mantenere il layout corrente dei riquadri di ancoraggio e delle barre degli strumenti quando viene caricato lo stato dell'applicazione.

##  <a name="dockpane"></a>CDockingManager::D ockPane

Ancora un riquadro a un altro riquadro o a una finestra cornice.

```
void DockPane(
    CBasePane* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore a un riquadro a barre da ancorare a.

*nDockBarID*<br/>
in ID della barra da ancorare.

*lpRect*<br/>
in Rettangolo di destinazione.

##  <a name="dockpaneleftof"></a>CDockingManager::D ockPaneLeftOf

Ancora un riquadro a sinistra di un altro riquadro.

```
BOOL DockPaneLeftOf(
    CPane* pBarToDock,
    CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pBarToDock*<br/>
in Puntatore al riquadro da ancorare a sinistra di *pTargetBar*.

*pTargetBar*<br/>
in Puntatore al riquadro di destinazione.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è stato ancorato correttamente; in caso contrario, FALSE.

##  <a name="enableautohidepanes"></a>CDockingManager:: EnableAutoHidePanes

Consente l'ancoraggio del riquadro al frame principale, crea un riquadro ancorato e lo aggiunge all'elenco delle barre di controllo.

```
BOOL EnableAutoHidePanes(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
in Allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro Dock è stato creato correttamente; In caso contrario, FALSE.

##  <a name="enabledocking"></a>CDockingManager:: EnableDocking

Crea un riquadro ancorato e Abilita l'ancoraggio del riquadro al frame principale.

```
BOOL EnableDocking(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
in Allineamento di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro Dock è stato creato correttamente; In caso contrario, FALSE.

##  <a name="enabledocksitemenu"></a>CDockingManager:: EnableDockSiteMenu

Visualizza un pulsante aggiuntivo che consente di aprire un menu di scelta rapida nelle didascalie di tutti i riquadri ancorati.

```
static void EnableDockSiteMenu(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE per abilitare il menu del sito dock; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il menu del sito Dock Visualizza le opzioni seguenti per modificare lo stato di ancoraggio del riquadro:

- `Floating`-fluttua un riquadro

- `Docking`-ancora un riquadro nel frame principale nella posizione in cui è stato inserito l'ultimo riquadro

- `AutoHide`-passa alla modalità Nascondi automaticamente del riquadro

- `Hide`: nasconde un riquadro

Per impostazione predefinita, questo menu non viene visualizzato.

##  <a name="enablepanecontextmenu"></a>CDockingManager:: EnablePaneContextMenu

Indica alla libreria di visualizzare un menu di scelta rapida speciale che include un elenco di barre degli strumenti dell'applicazione e riquadri di ancoraggio quando l'utente fa clic con il pulsante destro del mouse e la libreria sta elaborando il messaggio di WM_CONTEXTMENU.

```
void EnablePaneContextMenu(
    BOOL bEnable,
    UINT uiCustomizeCmd,
    const CString& strCustomizeText,
    BOOL bToolbarsOnly = FALSE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in Se TRUE, la libreria attiva il supporto per il menu di scelta rapida automatico; Se FALSE, la libreria disattiva il supporto per il menu di scelta rapida automatico.

*uiCustomizeCmd*<br/>
in ID di comando per l'elemento di **personalizzazione** nel menu.

*strCustomizeText*<br/>
in Testo dell'elemento di **personalizzazione** .

*bToolbarsOnly*<br/>
in Se TRUE, nel menu viene visualizzato solo un elenco di barre degli strumenti dell'applicazione; Se FALSE, la libreria aggiunge i riquadri di ancoraggio dell'applicazione a questo elenco.

##  <a name="finddocksite"></a>CDockingManager:: FindDockSite

Recupera il riquadro a barre in corrispondenza della posizione specificata e con l'allineamento specificato.

```
virtual CDockSite* FindDockSite(
    DWORD dwAlignment,
    BOOL bOuter);
```

### <a name="parameters"></a>Parametri

*dwAlignment*<br/>
in Allineamento del riquadro a barre.

*bOuter*<br/>
in Se TRUE, recuperare la barra nella posizione Head nell'elenco delle barre di controllo. In caso contrario, recuperare la barra nella posizione finale nell'elenco delle barre di controllo.

### <a name="return-value"></a>Valore restituito

Riquadro ancorato con l'allineamento specificato. In caso contrario, NULL.

##  <a name="findpanebyid"></a>CDockingManager:: FindPaneByID

Trova un riquadro in base all'ID di controllo specificato.

```
virtual CBasePane* FindPaneByID(
    UINT uBarID,
    BOOL bSearchMiniFrames = FALSE);
```

### <a name="parameters"></a>Parametri

*uBarID*<br/>
in Specifica l'ID di controllo del riquadro da trovare.

*bSearchMiniFrames*<br/>
in TRUE per includere tutti i riquadri a virgola mobile nella ricerca. FALSE per includere solo i riquadri ancorati.

### <a name="return-value"></a>Valore restituito

Oggetto [CBasePane](../../mfc/reference/cbasepane-class.md) con l'ID di controllo specificato oppure null se non è possibile trovare il riquadro specificato.

### <a name="remarks"></a>Osservazioni

##  <a name="finddocksitebypane"></a>CDockingManager:: FindDockSiteByPane

Restituisce il riquadro a barre con l'ID del riquadro della barra di destinazione.

```
virtual CDockSite* FindDockSiteByPane(CPane* pTargetBar);
```

### <a name="parameters"></a>Parametri

*pTargetBar*<br/>
in Puntatore al riquadro della barra di destinazione.

### <a name="return-value"></a>Valore restituito

Riquadro della barra con l'ID del riquadro della barra di destinazione. NULL se non esiste alcun riquadro Barra di questo tipo.

##  <a name="fixupvirtualrects"></a>CDockingManager:: FixupVirtualRects

Inserisce tutte le posizioni della barra degli strumenti correnti in rettangoli virtuali.

```
virtual void FixupVirtualRects();
```

### <a name="remarks"></a>Osservazioni

Quando l'utente inizia a trascinare una barra degli strumenti, l'applicazione memorizza la posizione originale nel *rettangolo virtuale*. Quando l'utente sposta una barra degli strumenti in un sito di ancoraggio, la barra degli strumenti può spostare altre barre degli strumenti. Le posizioni originali delle altre barre degli strumenti sono archiviate nei rettangoli virtuali corrispondenti.

##  <a name="framefrompoint"></a>CDockingManager:: FrameFromPoint

Restituisce il frame che contiene il punto specificato.

```
virtual CPaneFrameWnd* FrameFromPoint(
    CPoint pt,
    CPaneFrameWnd* pFrameToExclude,
    BOOL bFloatMultiOnly) const;
```

### <a name="parameters"></a>Parametri

*pt*<br/>
in Specifica il punto, in coordinate dello schermo, da verificare.

*pFrameToExclude*<br/>
in Puntatore a un frame da escludere.

*bFloatMultiOnly*<br/>
in TRUE per escludere i frame che non sono istanze di `CMultiPaneFrameWnd`; In caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

Frame che contiene il punto specificato; In caso contrario, NULL.

##  <a name="getclientareabounds"></a>CDockingManager:: GetClientAreaBounds

Ottiene il rettangolo che contiene i limiti dell'area client.

```
CRect GetClientAreaBounds() const;

void GetClientAreaBounds(CRect& rcClient);
```

### <a name="parameters"></a>Parametri

*rcClient*<br/>
out Riferimento al rettangolo che contiene i limiti dell'area client.

### <a name="return-value"></a>Valore restituito

Rettangolo che contiene i limiti dell'area client.

##  <a name="getdockingmode"></a>CDockingManager:: GetDockingMode

Restituisce la modalità di ancoraggio corrente.

```
static AFX_DOCK_TYPE GetDockingMode();
```

### <a name="return-value"></a>Valore restituito

Valore di enumeratore che rappresenta la modalità di ancoraggio corrente. Può essere uno dei valori seguenti:

- DT_STANDARD

- DT_IMMEDIATE

- DT_SMART

### <a name="remarks"></a>Osservazioni

Per impostare la modalità di ancoraggio, chiamare [CDockingManager:: SetDockingMode](#setdockingmode).

##  <a name="getdocksiteframewnd"></a>CDockingManager:: GetDockSiteFrameWnd

Ottiene un puntatore al frame della finestra padre.

```
CFrameWnd* GetDockSiteFrameWnd() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al frame della finestra padre.

##  <a name="getenabledautohidealignment"></a>CDockingManager:: GetEnabledAutoHideAlignment

Restituisce l'allineamento abilitato dei riquadri.

```
DWORD GetEnabledAutoHideAlignment() const;
```

### <a name="return-value"></a>Valore restituito

Combinazione bit per bit di flag di CBRS_ALIGN_, oppure 0 se i riquadri di Nascondi automaticamente non sono abilitati. Per ulteriori informazioni, vedere [CFrameWnd:: EnableDocking](../../mfc/reference/cframewnd-class.md#enabledocking).

### <a name="remarks"></a>Osservazioni

Il metodo restituisce l'allineamento abilitato per le barre di controllo Nascondi automaticamente. Per abilitare le barre Nascondi automaticamente, chiamare [CFrameWndEx:: EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes).

##  <a name="getminiframes"></a>CDockingManager:: GetMiniFrames

Ottiene un elenco di miniframes.

```
const CObList& GetMiniFrames() const;
```

### <a name="return-value"></a>Valore restituito

Elenco di miniframes che contengono le barre di controllo che appartengono al gestore di ancoraggio.

##  <a name="getouteredgebounds"></a>CDockingManager:: GetOuterEdgeBounds

Ottiene un rettangolo che contiene i bordi esterni del frame.

```
CRect GetOuterEdgeBounds() const;
```

### <a name="return-value"></a>Valore restituito

Rettangolo che contiene i bordi esterni del frame.

##  <a name="getpanelist"></a>CDockingManager:: getpanell

Restituisce un elenco di riquadri che appartengono al gestore di ancoraggio. Sono inclusi tutti i riquadri a virgola mobile.

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
in TRUE per includere i riquadri in modalità Nascondi automaticamente; in caso contrario, FALSE.

*pRTCFilter*<br/>
in Se non è NULL, l'elenco restituito contiene riquadri solo della classe di runtime specificata.

*bIncludeTabs*<br/>
in TRUE per includere le schede; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se sono presenti riquadri a schede nel gestore di ancoraggio, il metodo restituisce i puntatori agli oggetti della [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md) ed è necessario enumerare le schede in modo esplicito.

Utilizzare *pRTCFilter* per ottenere una particolare classe di riquadri. È ad esempio possibile ottenere solo le barre degli strumenti impostando questo valore in modo appropriato.

##  <a name="getsmartdockingmanager"></a>CDockingManager:: GetSmartDockingManager

Recupera un puntatore al gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManager();
```

### <a name="return-value"></a>Valore restituito

Puntatore al gestore di ancoraggio intelligente.

##  <a name="getsmartdockingmanagerpermanent"></a>CDockingManager:: GetSmartDockingManagerPermanent

Recupera un puntatore al gestore di ancoraggio intelligente.

```
CSmartDockingManager* GetSmartDockingManagerPermanent() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al gestore di ancoraggio intelligente.

##  <a name="getsmartdockingparams"></a>CDockingManager:: GetSmartDockingParams

Restituisce i parametri di ancoraggio intelligente per il gestore di ancoraggio.

```
static CSmartDockingInfo& GetSmartDockingParams();
```

### <a name="return-value"></a>Valore restituito

Classe che contiene i parametri di ancoraggio intelligente per il gestore di ancoraggio corrente. Per ulteriori informazioni, vedere la [classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md).

### <a name="remarks"></a>Osservazioni

##  <a name="hideautohidepanes"></a>CDockingManager:: HideAutoHidePanes

Nasconde un riquadro in modalità Nascondi automaticamente.

```
void HideAutoHidePanes(
    CDockablePane* pBarToExclude = NULL,
    BOOL bImmediately = FALSE);
```

### <a name="parameters"></a>Parametri

*pBarToExclude*<br/>
in Puntatore a una barra da escludere dal nascondiglio.

*bImmediately*<br/>
in TRUE per nascondere immediatamente il riquadro; FALSE per nascondere il riquadro con l'effetto Nascondi automaticamente.

##  <a name="insertdocksite"></a>CDockingManager:: InsertDockSite

Crea un riquadro ancorato e lo inserisce nell'elenco di barre di controllo.

```
BOOL InsertDockSite(
    const AFX_DOCKSITE_INFO& info,
    DWORD dwAlignToInsertAfter,
    CDockSite** ppDockBar = NULL);
```

### <a name="parameters"></a>Parametri

*info*<br/>
in Struttura che contiene le informazioni di allineamento sul riquadro ancorato.

*dwAlignToInsertAfter*<br/>
in Allineamento del riquadro ancorato.

*ppDockBar*<br/>
out Puntatore a un puntatore a un riquadro ancorato.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro Dock è stato creato correttamente; In caso contrario, FALSE.

##  <a name="insertpane"></a>CDockingManager:: InsertPane

Inserisce un riquadro di controllo nell'elenco delle barre di controllo.

```
BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter = TRUE);
```

### <a name="parameters"></a>Parametri

*pControlBar*<br/>
in Puntatore a un riquadro di controllo.

*pTarget*<br/>
in Puntatore a un riquadro di destinazione.

*bDopo*<br/>
in TRUE per inserire il riquadro dopo la posizione del riquadro di destinazione. In caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro di controllo è stato aggiunto correttamente all'elenco delle barre di controllo; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce false se il riquadro di controllo è già presente nell'elenco di barre di controllo o se il riquadro di destinazione non esiste nell'elenco di barre di controllo.

##  <a name="isdocksitemenu"></a>CDockingManager:: IsDockSiteMenu

Specifica se un menu a comparsa viene visualizzato nelle didascalie di tutti i riquadri.

```
static BOOL IsDockSiteMenu();
```

### <a name="return-value"></a>Valore restituito

TRUE se viene visualizzato un menu del sito di ancoraggio nelle didascalie di tutti i riquadri ancorati; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

È possibile abilitare il menu del sito dock chiamando [CDockingManager:: EnableDockSiteMenu](#enabledocksitemenu).

##  <a name="isinadjustlayout"></a>CDockingManager:: IsInAdjustLayout

Determina se i layout di tutti i riquadri vengono modificati.

```
BOOL IsInAdjustLayout() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se i layout di tutti i riquadri vengono modificati; In caso contrario, FALSE.

##  <a name="isolecontainermode"></a>CDockingManager:: IsOLEContainerMode

Specifica se il gestore di ancoraggio è in modalità contenitore OLE.

```
BOOL IsOLEContainerMode() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il gestore di ancoraggio è in modalità contenitore OLE; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

In modalità contenitore OLE tutti i riquadri ancorati e le barre degli strumenti dell'applicazione sono nascosti. I riquadri sono inoltre nascosti in questa modalità se è stato impostato [CDockingManager:: m_bHideDockingBarsInContainerMode](#m_bhidedockingbarsincontainermode) su true.

##  <a name="ispointneardocksite"></a>CDockingManager:: IsPointNearDockSite

Determina se un punto specificato si trova vicino al sito di ancoraggio.

```
BOOL IsPointNearDockSite(
    CPoint point,
    DWORD& dwBarAlignment,
    BOOL& bOuterEdge) const;
```

### <a name="parameters"></a>Parametri

*point*<br/>
in Punto specificato.

*dwBarAlignment*<br/>
out Specifica il bordo vicino al punto. I valori possibili sono CBRS_ALIGN_LEFT, CBRS_ALIGN_RIGHT, CBRS_ALIGN_TOP e CBRS_ALIGN_BOTTOM.

*bOuterEdge*<br/>
out TRUE se il punto si trova vicino al bordo esterno del sito di ancoraggio. In caso contrario, FALSE.

### <a name="return-value"></a>Valore restituito

TRUE se il punto si trova vicino al sito di ancoraggio. in caso contrario, FALSE.

##  <a name="isprintpreviewvalid"></a>CDockingManager:: IsPrintPreviewValid

Determina se è impostata la modalità di anteprima di stampa.

```
BOOL IsPrintPreviewValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è impostata la modalità di anteprima di stampa. In caso contrario, FALSE.

##  <a name="loadstate"></a>CDockingManager:: LoadState

Carica lo stato del gestore di ancoraggio dal registro di sistema.

```
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Nome del profilo.

*uiID*<br/>
in ID del gestore di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se lo stato del gestore di ancoraggio è stato caricato correttamente; in caso contrario, FALSE.

##  <a name="lockupdate"></a>CDockingManager:: LockUpdate

Blocca la finestra specificata.

```
void LockUpdate(BOOL bLock);
```

### <a name="parameters"></a>Parametri

*Blocco*<br/>
in TRUE se la finestra è bloccata; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Quando una finestra è bloccata, non può essere spostata e non può essere ridisegnato.

##  <a name="m_bhidedockingbarsincontainermode"></a>CDockingManager:: m_bHideDockingBarsInContainerMode

Specifica se il gestore di ancoraggio nasconde i riquadri in modalità contenitore OLE.

```
AFX_IMPORT_DATA static BOOL m_bHideDockingBarsInContainerMode;
```

### <a name="remarks"></a>Osservazioni

Impostare questo valore su FALSE se si desidera che tutti i riquadri ancorati al frame principale siano visibili quando l'applicazione è in modalità contenitore OLE. Per impostazione predefinita, questo valore è TRUE.

##  <a name="m_dockmodeglobal"></a>CDockingManager:: m_dockModeGlobal

Specifica la modalità di ancoraggio globale.

```
AFX_IMPORT_DATA static AFX_DOCK_TYPE m_dockModeGlobal;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, ogni riquadro ancorato utilizza questa modalità di ancoraggio. Per ulteriori informazioni sui valori su cui è possibile impostare questo campo, vedere [CBasePane:: GetDockingMode](../../mfc/reference/cbasepane-class.md#getdockingmode).

##  <a name="m_ndocksensitivity"></a>CDockingManager:: m_nDockSensitivity

Specifica la riservatezza di ancoraggio.

```
AFX_IMPORT_DATA static int m_nDockSensitivity;
```

### <a name="remarks"></a>Osservazioni

La sensibilità di ancoraggio definisce il modo in cui un riquadro a virgola mobile può avvicinarsi a un riquadro ancorato, a un sito di ancoraggio o a un altro riquadro prima che lo stato del Framework venga modificato in ancorato.

##  <a name="m_ntimeoutbeforedockingbardock"></a>CDockingManager:: m_nTimeOutBeforeDockingBarDock

Specifica il tempo, in millisecondi, prima che un riquadro ancorato venga ancorato in modalità di ancoraggio immediato.

```
static UINT m_nTimeOutBeforeDockingBarDock;
```

### <a name="remarks"></a>Osservazioni

Prima che un riquadro venga ancorato, il framework attende il periodo di tempo specificato. In questo modo si impedisce che il riquadro venga accidentalmente ancorato a una posizione mentre l'utente lo trascina.

##  <a name="m_ntimeoutbeforetoolbardock"></a>CDockingManager:: m_nTimeOutBeforeToolBarDock

Specifica l'intervallo di tempo, in millisecondi, prima dell'ancoraggio di una barra degli strumenti alla finestra cornice principale.

```
static UINT m_nTimeOutBeforeToolBarDock;
```

### <a name="remarks"></a>Osservazioni

Prima che una barra degli strumenti sia ancorata, il framework attende il periodo di tempo specificato. In questo modo si impedisce che la barra degli strumenti venga accidentalmente ancorata a una posizione mentre l'utente lo trascina.

##  <a name="onactivateframe"></a>CDockingManager:: OnActivateFrame

Chiamata eseguita dal framework quando la finestra cornice viene attivata o disattivata.

```
virtual void OnActivateFrame(BOOL bActivate);
```

### <a name="parameters"></a>Parametri

*bActivate*<br/>
in Se TRUE, la finestra cornice viene resa attiva; Se FALSE, la finestra cornice viene disattivata.

##  <a name="onclosepopupmenu"></a>CDockingManager:: OnClosePopupMenu

Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM_DESTROY.

```
void OnClosePopupMenu();
```

### <a name="remarks"></a>Osservazioni

Il framework invia un messaggio di WM_DESTROY quando sta per chiudere la finestra principale corrente. Eseguire l'override di questo metodo per gestire le notifiche da oggetti `CMFCPopupMenu` che appartengono alla finestra cornice quando un oggetto `CMFCPopupMenu` elabora un messaggio di WM_DESTROY.

##  <a name="onmoveminiframe"></a>CDockingManager:: OnMoveMiniFrame

Chiamata eseguita dal Framework per spostare una finestra con mini-cornice.

```
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```

### <a name="parameters"></a>Parametri

*pFrame*<br/>
in Puntatore a una finestra con mini-cornice.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

##  <a name="onpanecontextmenu"></a>CDockingManager:: OnPaneContextMenu

Chiamata eseguita dal Framework durante la compilazione di un menu che include un elenco di riquadri.

```
void OnPaneContextMenu(CPoint point);
```

### <a name="parameters"></a>Parametri

*point*<br/>
in Specifica il percorso del menu.

##  <a name="panefrompoint"></a>CDockingManager::P aneFromPoint

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
in Specifica il punto, in coordinate dello schermo, da verificare.

*nSensitivity*<br/>
in Valore per ingrandire il rettangolo della finestra di ogni riquadro selezionato. Un riquadro soddisfa i criteri di ricerca se il punto specificato si trova in questa area inflat.

*bExactBar*<br/>
in TRUE per ignorare il parametro *nSensitivity* . in caso contrario, FALSE.

*pRTCBarType*<br/>
in Se non è NULL, il metodo cerca solo i riquadri del tipo specificato.

*bCheckVisibility*<br/>
in TRUE per controllare solo i riquadri visibili; in caso contrario, FALSE.

*dwAlignment*<br/>
out Se viene trovato un riquadro nel punto specificato, questo parametro contiene il lato del riquadro più vicino al punto specificato. Per altre informazioni, vedere la sezione Osservazioni.

*pBarToIgnore*<br/>
in Se non è NULL, il metodo ignora i riquadri specificati da questo parametro.

### <a name="return-value"></a>Valore restituito

Oggetto derivato da [CBasePane](../../mfc/reference/cbasepane-class.md)che contiene il punto specificato o null se non è stato trovato alcun riquadro.

### <a name="remarks"></a>Osservazioni

Quando la funzione restituisce e viene trovato un riquadro, *dwAlignment* contiene l'allineamento del punto specificato. Se, ad esempio, il punto era più vicino alla parte superiore del riquadro, *dwAlignment* è impostato su CBRS_ALIGN_TOP.

##  <a name="processpanecontextmenucommand"></a>CDockingManager::P rocessPaneContextMenuCommand

Chiamata eseguita dal Framework per selezionare o deselezionare una casella di controllo per il comando specificato e ricalcolare il layout di un riquadro visualizzato.

```
BOOL ProcessPaneContextMenuCommand(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
in ID di una barra di controllo nel menu.

*nCode*<br/>
in Codice di notifica del comando.

*pExtra*<br/>
in Puntatore a void di cui viene eseguito il cast su un puntatore a `CCmdUI` se *nCode* è CN_UPDATE_COMMAND_UI.

*pHandlerInfo*<br/>
in Puntatore a una struttura di informazioni. Questo parametro non viene usato.

### <a name="return-value"></a>Valore restituito

TRUE se *pExtra* non è null e *nCode* è uguale a CN_UPDATE_COMMAND_UI oppure se è presente una barra di controllo con il *NID*specificato.

##  <a name="recalclayout"></a>CDockingManager:: RecalcLayout

Ricalcola il layout interno dei controlli presenti nell'elenco di controlli.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*bNotify*<br/>
in Questo parametro non viene utilizzato.

##  <a name="releaseemptypanecontainers"></a>CDockingManager:: ReleaseEmptyPaneContainers

Rilascia i contenitori dei riquadri vuoti.

```
void ReleaseEmptyPaneContainers();
```

##  <a name="removehiddenmditabbedbar"></a>CDockingManager:: RemoveHiddenMDITabbedBar

Rimuove il riquadro della barra nascosta specificato.

```
void RemoveHiddenMDITabbedBar(CDockablePane* pBar);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore a un riquadro a barre da rimuovere.

##  <a name="removeminiframe"></a>CDockingManager:: RemoveMiniFrame

Rimuove un frame specificato dall'elenco di mini frame.

```
virtual BOOL RemoveMiniFrame(CPaneFrameWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore a un frame da rimuovere.

### <a name="return-value"></a>Valore restituito

TRUE se il frame specificato è stato rimosso. In caso contrario, FALSE.

##  <a name="removepanefromdockmanager"></a>CDockingManager:: RemovePaneFromDockManager

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
in Puntatore a un riquadro da rimuovere.

*bdistrutto*<br/>
in Se TRUE, il riquadro rimosso viene eliminato definitivamente.

*bAdjustLayout*<br/>
in Se TRUE, modificare immediatamente il layout di ancoraggio.

*bAutoHide*<br/>
in Se TRUE, il riquadro viene rimosso dall'elenco delle barre di Nascondi automaticamente. Se FALSE, il riquadro viene rimosso dall'elenco dei riquadri normali.

*pBarReplacement*<br/>
in Puntatore a un riquadro che sostituisce il riquadro rimosso.

##  <a name="replacepane"></a>CDockingManager:: ReplacePane

Sostituisce un riquadro con un altro.

```
BOOL ReplacePane(
    CDockablePane* pOriginalBar,
    CDockablePane* pNewBar);
```

### <a name="parameters"></a>Parametri

*pOriginalBar*<br/>
in Puntatore al riquadro originale.

*pNewBar*<br/>
in Puntatore al riquadro che sostituisce il riquadro originale.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro viene sostituito correttamente; In caso contrario, FALSE.

##  <a name="resortminiframesforzorder"></a>CDockingManager:: ResortMiniFramesForZOrder

Ricorre i frame nell'elenco di mini frame.

```
void ResortMiniFramesForZOrder();
```

##  <a name="savestate"></a>CDockingManager:: SaveState

Salva lo stato del gestore di ancoraggio nel registro di sistema.

```
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,
    UINT uiID = (UINT) -1);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
in Percorso di una chiave del registro di sistema.

*uiID*<br/>
in ID del gestore di ancoraggio.

### <a name="return-value"></a>Valore restituito

TRUE se lo stato è stato salvato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Il salvataggio dello stato del gestore di ancoraggio nel registro di sistema comporta il salvataggio degli Stati delle barre di controllo, degli Stati delle barre di Nascondi automaticamente e degli Stati dei fotogrammi piccoli presenti nel gestore di ancoraggio.

##  <a name="sendmessagetominiframes"></a>CDockingManager:: SendMessageToMiniFrames

Invia il messaggio specificato a tutti i mini frame.

```
BOOL SendMessageToMiniFrames(
    UINT uMessage,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### <a name="parameters"></a>Parametri

*uMessage*<br/>
in Messaggio da inviare.

*wParam*<br/>
in Informazioni aggiuntive sul dipendente del messaggio.

*lParam*<br/>
in Informazioni aggiuntive sul dipendente del messaggio.

### <a name="return-value"></a>Valore restituito

TRUE sempre.

##  <a name="serialize"></a>CDockingManager:: Serialize

Scrive l'oggetto docking Manager in un archivio.

```
void Serialize(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*AR*<br/>
in Riferimento a un oggetto Archive.

### <a name="remarks"></a>Osservazioni

La scrittura di docking Manager in un archivio comporta la determinazione del numero di barre di controllo e di dispositivi di scorrimento di ancoraggio e la scrittura delle barre di controllo, dei mini frame, delle barre di Nascondi automaticamente e delle barre a schede MDI nell'archivio.

##  <a name="setautohidezorder"></a>CDockingManager:: SetAutohideZOrder

Imposta le dimensioni, la larghezza e l'altezza delle barre di controllo e del riquadro specificato.

```
void SetAutohideZOrder(CDockablePane* pAHDockingBar);
```

### <a name="parameters"></a>Parametri

*pAHDockingBar*<br/>
in Puntatore a un riquadro ancorabile.

##  <a name="setdockingmode"></a>CDockingManager:: SetDockingMode

Imposta la modalità di ancoraggio.

```
static void SetDockingMode(
    AFX_DOCK_TYPE dockMode,
    AFX_SMARTDOCK_THEME theme = AFX_SDT_DEFAULT);
```

### <a name="parameters"></a>Parametri

*dockMode*<br/>
Specifica la nuova modalità di ancoraggio. Per altre informazioni, vedere la sezione Osservazioni.

*tema*<br/>
Specifica il tema da usare per i marcatori di ancoraggio intelligente. Può essere uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo statico per impostare la modalità di ancoraggio.

*dockMode* può essere uno dei valori seguenti:

- Modalità di ancoraggio DT_STANDARD-standard implementata in Visual Studio .NET 2003. I riquadri vengono trascinati senza un contesto di trascinamento.

- DT_IMMEDIATE la modalità di ancoraggio immediata come implementata in Microsoft Visio. I riquadri vengono trascinati con un contesto di trascinamento, ma non viene visualizzato alcun marcatore.

- DT_SMART-modalità di ancoraggio intelligente implementata in Visual Studio 2005. I riquadri vengono trascinati con un contesto di trascinamento e vengono visualizzati indicatori intelligenti che indicano la posizione in cui è possibile ancorare il riquadro.

##  <a name="setdockstate"></a>CDockingManager:: SetDockState

Imposta lo stato di ancoraggio delle barre di controllo, dei mini frame e delle barre di Nascondi automaticamente.

```
virtual void SetDockState();
```

##  <a name="setprintpreviewmode"></a>CDockingManager:: SetPrintPreviewMode

Imposta la modalità di anteprima di stampa delle barre visualizzate nell'anteprima di stampa.

```
void SetPrintPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### <a name="parameters"></a>Parametri

*bPreview*<br/>
in TRUE se è impostata la modalità di anteprima di stampa. In caso contrario, FALSE.

*pState*<br/>
in Puntatore a uno stato di anteprima. Questo parametro non viene usato.

##  <a name="setsmartdockingparams"></a>CDockingManager:: SetSmartDockingParams

Imposta i parametri che definiscono il comportamento dell'ancoraggio intelligente.

```
static void SetSmartDockingParams(CSmartDockingInfo& params);
```

### <a name="parameters"></a>Parametri

*params*<br/>
[in, out] Definisce i parametri per l'ancoraggio intelligente.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo se si desidera personalizzare l'aspetto, il colore o la forma dei marcatori di ancoraggio intelligente.

Per usare la ricerca predefinita per i marcatori di ancoraggio intelligenti, passare un'istanza non inizializzata della [classe CSmartDockingInfo](../../mfc/reference/csmartdockinginfo-class.md) a *params*.

##  <a name="showdelayshowminiframes"></a>CDockingManager:: ShowDelayShowMiniFrames

Consente di visualizzare o nascondere le finestre dei mini frame.

```
void ShowDelayShowMiniFrames(BOOL bshow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in TRUE per rendere attiva la finestra del frame visualizzato; FALSE per nascondere la finestra del frame.

##  <a name="showpanes"></a>CDockingManager:: ShowPanes

Consente di visualizzare o nascondere i riquadri delle barre di controllo e Nascondi automaticamente.

```
virtual BOOL ShowPanes(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
in TRUE per visualizzare i riquadri; FALSE per nascondere i riquadri.

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

##  <a name="startsdocking"></a>CDockingManager:: StartSDocking

Avvia l'ancoraggio intelligente della finestra specificata in base all'allineamento del gestore di ancoraggio intelligente.

```
void StartSDocking(CWnd* pDockingWnd);
```

### <a name="parameters"></a>Parametri

*pDockingWnd*<br/>
in Puntatore a una finestra da ancorare.

##  <a name="stopsdocking"></a>CDockingManager:: StopSDocking

Arresta l'aggancio intelligente.

```
void StopSDocking();
```

##  <a name="getsmartdockingtheme"></a>CDockingManager:: GetSmartDockingTheme

Metodo statico che restituisce un tema usato per visualizzare i marcatori di ancoraggio intelligente.

```
static AFX_SMARTDOCK_THEME __stdcall GetSmartDockingTheme();
```

### <a name="return-value"></a>Valore restituito

Restituisce uno dei seguenti valori enumerati: AFX_SDT_DEFAULT, AFX_SDT_VS2005, AFX_SDT_VS2008.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)<br/>
[Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)<br/>
[Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)
