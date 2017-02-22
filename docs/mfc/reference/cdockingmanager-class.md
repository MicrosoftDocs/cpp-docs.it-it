---
title: "CDockingManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockingManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockingManager class"
ms.assetid: 98e69c43-55d8-4f43-b861-4fda80ec1e32
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 39
---
# CDockingManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità principale che controlla che ancorano il layout in una finestra cornice principale.  
  
## Sintassi  
  
```  
class CDockingManager : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingManager::AddDockSite](../Topic/CDockingManager::AddDockSite.md)|Crea un riquadro di ancoraggio e lo aggiunge all'elenco delle barre di controllo.|  
|[CDockingManager::AddHiddenMDITabbedBar](../Topic/CDockingManager::AddHiddenMDITabbedBar.md)|Aggiunge un handle di un riquadro della barra all'elenco dei riquadri nascosti della barra MDI a schede.|  
|[CDockingManager::AddMiniFrame](../Topic/CDockingManager::AddMiniFrame.md)|Aggiunge un frame all'elenco di mini frame.|  
|[CDockingManager::AddPane](../Topic/CDockingManager::AddPane.md)|Registra un riquadro con l'amministratore di ancoraggio.|  
|[CDockingManager::AdjustDockingLayout](../Topic/CDockingManager::AdjustDockingLayout.md)|Ricalcola e modificare il layout dei riquadri in una finestra cornice.|  
|[CDockingManager::AdjustPaneFrames](../Topic/CDockingManager::AdjustPaneFrames.md)|Nel messaggio `WM_NCCALCSIZE` venga inviato ai riquadri e finestre `CPaneFrameWnd`.|  
|[CDockingManager::AdjustRectToClientArea](../Topic/CDockingManager::AdjustRectToClientArea.md)|Regola l'allineamento di un rettangolo.|  
|[CDockingManager::AlignAutoHidePane](../Topic/CDockingManager::AlignAutoHidePane.md)|Ridimensiona un riquadro ancorato in modalità nascondi automaticamente in modo che accetta la larghezza intera o l'altezza dell'area client del frame racchiusa da siti di ancoraggio.|  
|[CDockingManager::AutoHidePane](../Topic/CDockingManager::AutoHidePane.md)|Crea una barra degli strumenti di nascondi automaticamente.|  
|[CDockingManager::BringBarsToTop](../Topic/CDockingManager::BringBarsToTop.md)|Porta barre ancorate con l'allineamento specificato all'inizio.|  
|[CDockingManager::BuildPanesMenu](../Topic/CDockingManager::BuildPanesMenu.md)|Aggiunge i nomi dei riquadri ancorati le barre degli strumenti a un menu.|  
|[CDockingManager::CalcExpectedDockedRect](../Topic/CDockingManager::CalcExpectedDockedRect.md)|Calcola il rettangolo previsto di una finestra ancorata.|  
|[CDockingManager::Create](../Topic/CDockingManager::Create.md)|Crea un amministratore di ancoraggio.|  
|[CDockingManager::DeterminePaneAndStatus](../Topic/CDockingManager::DeterminePaneAndStatus.md)|Determina il riquadro contenente un punto specificato e lo stato di ancoraggio.|  
|[CDockingManager::DisableRestoreDockState](../Topic/CDockingManager::DisableRestoreDockState.md)|Abilita o disabilita il caricamento di layout di ancoraggio dal Registro di sistema.|  
|[CDockingManager::DockPane](../Topic/CDockingManager::DockPane.md)|Un riquadro a un altro riquadro o una finestra cornice.|  
|[CDockingManager::DockPaneLeftOf](../Topic/CDockingManager::DockPaneLeftOf.md)|Nuovamente il riquadro a sinistra di un altro riquadro.|  
|[CDockingManager::EnableAutoHidePanes](../Topic/CDockingManager::EnableAutoHidePanes.md)|Consente l'ancoraggio del riquadro della cornice principale, crea un riquadro di ancoraggio e lo aggiunge all'elenco delle barre di controllo.|  
|[CDockingManager::EnableDocking](../Topic/CDockingManager::EnableDocking.md)|Crea un riquadro di ancoraggio e consente l'ancoraggio del riquadro della cornice principale.|  
|[CDockingManager::EnableDockSiteMenu](../Topic/CDockingManager::EnableDockSiteMenu.md)|Visualizzare un pulsante aggiuntivo che apre un menu di scelta rapida sulle didascalie dei riquadri ancorati.|  
|[CDockingManager::EnablePaneContextMenu](../Topic/CDockingManager::EnablePaneContextMenu.md)|Indica la raccolta di visualizzare un menu di scelta rapida speciale di un elenco delle barre degli strumenti e dei riquadri ancorati di applicazione quando l'utente sceglie il pulsante destro del mouse sulla raccolta viene elaborato il messaggio di WM\_CONTEXTMENU.|  
|[CDockingManager::FindDockSite](../Topic/CDockingManager::FindDockSite.md)|Recupera il riquadro della barra che si trova nella posizione specificata e con l'allineamento specificato.|  
|[CDockingManager::FindDockSiteByPane](../Topic/CDockingManager::FindDockSiteByPane.md)|Restituisce il riquadro della barra con l'id del riquadro della barra.|  
|[CDockingManager::FindPaneByID](../Topic/CDockingManager::FindPaneByID.md)|Cerca un riquadro dall'ID del controllo|  
|[CDockingManager::FixupVirtualRects](../Topic/CDockingManager::FixupVirtualRects.md)|Esegue il commit di tutte le attuali posizioni delle barre degli strumenti ai rettangoli virtuali.|  
|[CDockingManager::FrameFromPoint](../Topic/CDockingManager::FrameFromPoint.md)|Restituisce il frame contenente il punto specificato.|  
|[CDockingManager::GetClientAreaBounds](../Topic/CDockingManager::GetClientAreaBounds.md)|Ottiene il rettangolo contenente i limiti dell'area client.|  
|[CDockingManager::GetDockingMode](../Topic/CDockingManager::GetDockingMode.md)|Restituisce la modalità corrente di ancoraggio.|  
|[CDockingManager::GetDockSiteFrameWnd](../Topic/CDockingManager::GetDockSiteFrameWnd.md)|Ottiene un puntatore a frame della finestra padre.|  
|[CDockingManager::GetEnabledAutoHideAlignment](../Topic/CDockingManager::GetEnabledAutoHideAlignment.md)|Restituisce il valore di allineamento con i riquadri.|  
|[CDockingManager::GetMiniFrames](../Topic/CDockingManager::GetMiniFrames.md)|Ottiene un elenco di miniframes.|  
|[CDockingManager::GetOuterEdgeBounds](../Topic/CDockingManager::GetOuterEdgeBounds.md)|Ottiene un rettangolo contenente i bordi esterni del frame.|  
|[CDockingManager::GetPaneList](../Topic/CDockingManager::GetPaneList.md)|Restituisce un elenco dei riquadri che appartengono all'amministratore di ancoraggio.  Include tutti i riquadri mobili.|  
|[CDockingManager::GetSmartDockingManager](../Topic/CDockingManager::GetSmartDockingManager.md)|Recupera un puntatore all'amministratore intelligente di ancoraggio.|  
|[CDockingManager::GetSmartDockingManagerPermanent](../Topic/CDockingManager::GetSmartDockingManagerPermanent.md)|Recupera un puntatore all'amministratore intelligente di ancoraggio.|  
|[CDockingManager::GetSmartDockingParams](../Topic/CDockingManager::GetSmartDockingParams.md)|Restituisce i parametri intelligenti di ancoraggio per l'amministratore di ancoraggio.|  
|[CDockingManager::GetSmartDockingTheme](../Topic/CDockingManager::GetSmartDockingTheme.md)|Un metodo statico che restituisce un tema utilizzato per visualizzare marcatori intelligenti di ancoraggio.|  
|[CDockingManager::HideAutoHidePanes](../Topic/CDockingManager::HideAutoHidePanes.md)|Nasconde il riquadro in modalità di nascondi automaticamente.|  
|[CDockingManager::InsertDockSite](../Topic/CDockingManager::InsertDockSite.md)|Crea un riquadro di ancoraggio e lo inserisce nell'elenco delle barre di controllo.|  
|[CDockingManager::InsertPane](../Topic/CDockingManager::InsertPane.md)|Inserisce un riquadro controllo nell'elenco delle barre di controllo.|  
|[CDockingManager::IsDockSiteMenu](../Topic/CDockingManager::IsDockSiteMenu.md)|Specifica se un menu di scelta rapida visualizza le didascalie dei riquadri.|  
|[CDockingManager::IsInAdjustLayout](../Topic/CDockingManager::IsInAdjustLayout.md)|Determina se i layout dei riquadri vengono modificati.|  
|[CDockingManager::IsOLEContainerMode](../Topic/CDockingManager::IsOLEContainerMode.md)|Specifica se l'amministratore di ancoraggio è in modalità del contenitore OLE.|  
|[CDockingManager::IsPointNearDockSite](../Topic/CDockingManager::IsPointNearDockSite.md)|Determina se un punto specificato è vicino al sito di ancoraggio.|  
|[CDockingManager::IsPrintPreviewValid](../Topic/CDockingManager::IsPrintPreviewValid.md)|Determina se la modalità anteprima di stampa è impostata su.|  
|[CDockingManager::LoadState](../Topic/CDockingManager::LoadState.md)|Carica lo stato dell'amministratore di ancoraggio dal Registro di sistema.|  
|[CDockingManager::LockUpdate](../Topic/CDockingManager::LockUpdate.md)|Blocca la finestra specificata.|  
|[CDockingManager::OnActivateFrame](../Topic/CDockingManager::OnActivateFrame.md)|Chiamato dal framework quando la finestra cornice viene impostata su attivo o è disattivata.|  
|[CDockingManager::OnClosePopupMenu](../Topic/CDockingManager::OnClosePopupMenu.md)|Chiamato dal framework quando un menu di scelta rapida attivo elabora un messaggio di WM\_DESTROY.|  
|[CDockingManager::OnMoveMiniFrame](../Topic/CDockingManager::OnMoveMiniFrame.md)|Chiamato dal framework per spostare una finestra cornice piccola.|  
|[CDockingManager::OnPaneContextMenu](../Topic/CDockingManager::OnPaneContextMenu.md)|Chiamato dal framework quando si compila un menu con un elenco dei riquadri.|  
|[CDockingManager::PaneFromPoint](../Topic/CDockingManager::PaneFromPoint.md)|Restituisce il riquadro contenente il punto specificato.|  
|[CDockingManager::ProcessPaneContextMenuCommand](../Topic/CDockingManager::ProcessPaneContextMenuCommand.md)|Chiamato dal framework per selezionare o deselezionare una casella di controllo per il comando specificato e per ricalcolare il layout di riquadro indicato.|  
|[CDockingManager::RecalcLayout](../Topic/CDockingManager::RecalcLayout.md)|Ricalcola il layout interno dei controlli presenti nell'elenco dei controlli.|  
|[CDockingManager::ReleaseEmptyPaneContainers](../Topic/CDockingManager::ReleaseEmptyPaneContainers.md)|Rilascia i contenitori vuoti il riquadro.|  
|[CDockingManager::RemoveHiddenMDITabbedBar](../Topic/CDockingManager::RemoveHiddenMDITabbedBar.md)|Rimuove il riquadro nascosto specificato della barra.|  
|[CDockingManager::RemoveMiniFrame](../Topic/CDockingManager::RemoveMiniFrame.md)|Consente di rimuovere un frame specificato dall'elenco di mini frame.|  
|[CDockingManager::RemovePaneFromDockManager](../Topic/CDockingManager::RemovePaneFromDockManager.md)|Annulla la registrazione di un riquadro e lo rimuove dall'amministratore di ancoraggio.|  
|[CDockingManager::ReplacePane](../Topic/CDockingManager::ReplacePane.md)|Sostituisce un riquadro con un altro.|  
|[CDockingManager::ResortMiniFramesForZOrder](../Topic/CDockingManager::ResortMiniFramesForZOrder.md)|Ricorre i frame nell'elenco di mini frame.|  
|[CDockingManager::SaveState](../Topic/CDockingManager::SaveState.md)|Salvare lo stato dell'amministratore di ancoraggio al Registro di sistema.|  
|[CDockingManager::SendMessageToMiniFrames](../Topic/CDockingManager::SendMessageToMiniFrames.md)|Invia il messaggio specificato a tutti i mini frame.|  
|[CDockingManager::Serialize](../Topic/CDockingManager::Serialize.md)|Scrive l'amministratore di ancoraggio a un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CDockingManager::SetAutohideZOrder](../Topic/CDockingManager::SetAutohideZOrder.md)|Imposta la dimensione, la larghezza e l'altezza delle barre di controllo e riquadro specificato.|  
|[CDockingManager::SetDockingMode](../Topic/CDockingManager::SetDockingMode.md)|Imposta la modalità di ancoraggio.|  
|[CDockingManager::SetDockState](../Topic/CDockingManager::SetDockState.md)|Imposta lo stato di ancoraggio delle barre di controllo, in mini frame e le barre di nascondi automaticamente.|  
|[CDockingManager::SetPrintPreviewMode](../Topic/CDockingManager::SetPrintPreviewMode.md)|Imposta la modalità anteprima di stampa delle barre di visualizzare in anteprima di stampa.|  
|[CDockingManager::SetSmartDockingParams](../Topic/CDockingManager::SetSmartDockingParams.md)|Imposta i parametri che definiscono il comportamento di ancoraggio intelligente.|  
|[CDockingManager::ShowDelayShowMiniFrames](../Topic/CDockingManager::ShowDelayShowMiniFrames.md)|Mostra o nasconde le finestre di mini frame.|  
|[CDockingManager::ShowPanes](../Topic/CDockingManager::ShowPanes.md)|Consente di visualizzare o nascondere i riquadri delle barre di nascondi automaticamente e del controllo.|  
|[CDockingManager::StartSDocking](../Topic/CDockingManager::StartSDocking.md)|Avvia l'ancoraggio smart della finestra specificata come l'allineamento di amministratore intelligente di ancoraggio.|  
|[CDockingManager::StopSDocking](../Topic/CDockingManager::StopSDocking.md)|Interrompe l'ancoraggio intelligente.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingManager::m\_bHideDockingBarsInContainerMode](../Topic/CDockingManager::m_bHideDockingBarsInContainerMode.md)|Specifica se l'amministratore di ancoraggio nascondere i riquadri in modalità contenitore OLE.|  
|[CDockingManager::m\_dockModeGlobal](../Topic/CDockingManager::m_dockModeGlobal.md)|Specifica la modalità globale di ancoraggio.|  
|[CDockingManager::m\_nDockSensitivity](../Topic/CDockingManager::m_nDockSensitivity.md)|Specifica la sensibilità di ancoraggio.|  
|[CDockingManager::m\_nTimeOutBeforeDockingBarDock](../Topic/CDockingManager::m_nTimeOutBeforeDockingBarDock.md)|Specifica il tempo, in millisecondi, prima che un riquadro ancorato sia ancorato in modalità immediata di ancoraggio.|  
|[CDockingManager::m\_nTimeOutBeforeToolBarDock](../Topic/CDockingManager::m_nTimeOutBeforeToolBarDock.md)|Specifica il tempo, in millisecondi, prima di una barra degli strumenti è ancorata alla finestra cornice principale.|  
  
## Note  
 La finestra cornice principale crea e inizializza la classe automaticamente.  
  
 L'oggetto di gestione di ancoraggio utilizza un elenco di tutti i riquadri di layout di ancoraggio e un elenco di tutte le finestre [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) appartenenti alla finestra cornice principale.  
  
 La classe `CDockingManager` implementa alcuni servizi che è possibile utilizzare per individuare un riquadro o una finestra `CPaneFrameWnd`.  In genere non chiama direttamente questi servizi in quanto viene eseguito il wrapping nell'oggetto finestra cornice principale.  Per ulteriori informazioni, vedere [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).  
  
## Suggerimenti di personalizzazione  
 I seguenti suggerimenti relativi a `CDockingManager` oggetti:  
  
-   [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) supporta queste modalità di ancoraggio:  
  
    -   `AFX_DOCK_TYPE::DT_IMMEDIATE`  
  
    -   `AFX_DOCK_TYPE::DT_STANDARD`  
  
    -   `AFX_DOCK_TYPE::DT_SMART`  
  
     Queste modalità di ancoraggio sono definite da [CDockingManager::m\_dockModeGlobal](../Topic/CDockingManager::m_dockModeGlobal.md) e sono impostate chiamando [CDockingManager::SetDockingMode](../Topic/CDockingManager::SetDockingMode.md).  
  
-   Se si desidera creare un riquadro non mobile e non può essere ridimensionato, chiamare il metodo [CDockingManager::AddPane](../Topic/CDockingManager::AddPane.md).  Questo metodo registra il riquadro con l'amministratore di ancoraggio, responsabile del layout di riquadro.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CDockingManager` per configurare un oggetto `CDockingManager`.  L'esempio mostra come visualizzare un pulsante aggiuntivo che apre un menu di scelta rapida sulle didascalie dei riquadri ancorati e come impostare la modalità di ancoraggio dell'oggetto.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#24](../../mfc/codesnippet/CPP/cdockingmanager-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingManager](../../mfc/reference/cdockingmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxDockingManager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)