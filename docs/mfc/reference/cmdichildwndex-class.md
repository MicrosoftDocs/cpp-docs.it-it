---
title: Classe CMDIChildWndEx | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMDIChildWndEx
- AFXMDICHILDWNDEX/CMDIChildWndEx
- AFXMDICHILDWNDEX/CMDIChildWndEx::ActivateTopLevelFrame
- AFXMDICHILDWNDEX/CMDIChildWndEx::AddPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::AddTabbedPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::AdjustDockingLayout
- AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnMDITabs
- AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnTaskBarTabs
- AFXMDICHILDWNDEX/CMDIChildWndEx::CanShowOnWindowsList
- AFXMDICHILDWNDEX/CMDIChildWndEx::DockPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::DockPaneLeftOf
- AFXMDICHILDWNDEX/CMDIChildWndEx::EnableAutoHidePanes
- AFXMDICHILDWNDEX/CMDIChildWndEx::EnableDocking
- AFXMDICHILDWNDEX/CMDIChildWndEx::EnableTaskbarThumbnailClipRect
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetDockingManager
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetDocumentName
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetFrameIcon
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetFrameText
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetRelatedTabGroup
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetTabbedPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetTabProxyWnd
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetTaskbarPreviewWnd
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetTaskbarThumbnailClipRect
- AFXMDICHILDWNDEX/CMDIChildWndEx::GetToolbarButtonToolTipText
- AFXMDICHILDWNDEX/CMDIChildWndEx::InsertPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::InvalidateIconicBitmaps
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsPointNearDockSite
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsReadOnly
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsRegisteredWithTaskbarTabs
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsTabbedPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsTaskbarTabsSupportEnabled
- AFXMDICHILDWNDEX/CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled
- AFXMDICHILDWNDEX/CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnGetIconicLivePreviewBitmap
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnGetIconicThumbnail
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnMoveMiniFrame
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnSetPreviewMode
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailActivate
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnTaskbarTabThumbnailStretch
- AFXMDICHILDWNDEX/CMDIChildWndEx::OnUpdateFrameTitle
- AFXMDICHILDWNDEX/CMDIChildWndEx::PaneFromPoint
- AFXMDICHILDWNDEX/CMDIChildWndEx::RecalcLayout
- AFXMDICHILDWNDEX/CMDIChildWndEx::RegisterTaskbarTab
- AFXMDICHILDWNDEX/CMDIChildWndEx::RemovePaneFromDockManager
- AFXMDICHILDWNDEX/CMDIChildWndEx::SetRelatedTabGroup
- AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabActive
- AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabOrder
- AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarTabProperties
- AFXMDICHILDWNDEX/CMDIChildWndEx::SetTaskbarThumbnailClipRect
- AFXMDICHILDWNDEX/CMDIChildWndEx::ShowPane
- AFXMDICHILDWNDEX/CMDIChildWndEx::UnregisterTaskbarTab
- AFXMDICHILDWNDEX/CMDIChildWndEx::UpdateTaskbarTabIcon
dev_langs: C++
helpviewer_keywords:
- CMDIChildWndEx [MFC], ActivateTopLevelFrame
- CMDIChildWndEx [MFC], AddPane
- CMDIChildWndEx [MFC], AddTabbedPane
- CMDIChildWndEx [MFC], AdjustDockingLayout
- CMDIChildWndEx [MFC], CanShowOnMDITabs
- CMDIChildWndEx [MFC], CanShowOnTaskBarTabs
- CMDIChildWndEx [MFC], CanShowOnWindowsList
- CMDIChildWndEx [MFC], DockPane
- CMDIChildWndEx [MFC], DockPaneLeftOf
- CMDIChildWndEx [MFC], EnableAutoHidePanes
- CMDIChildWndEx [MFC], EnableDocking
- CMDIChildWndEx [MFC], EnableTaskbarThumbnailClipRect
- CMDIChildWndEx [MFC], GetDockingManager
- CMDIChildWndEx [MFC], GetDocumentName
- CMDIChildWndEx [MFC], GetFrameIcon
- CMDIChildWndEx [MFC], GetFrameText
- CMDIChildWndEx [MFC], GetPane
- CMDIChildWndEx [MFC], GetRelatedTabGroup
- CMDIChildWndEx [MFC], GetTabbedPane
- CMDIChildWndEx [MFC], GetTabProxyWnd
- CMDIChildWndEx [MFC], GetTaskbarPreviewWnd
- CMDIChildWndEx [MFC], GetTaskbarThumbnailClipRect
- CMDIChildWndEx [MFC], GetToolbarButtonToolTipText
- CMDIChildWndEx [MFC], InsertPane
- CMDIChildWndEx [MFC], InvalidateIconicBitmaps
- CMDIChildWndEx [MFC], IsPointNearDockSite
- CMDIChildWndEx [MFC], IsReadOnly
- CMDIChildWndEx [MFC], IsRegisteredWithTaskbarTabs
- CMDIChildWndEx [MFC], IsTabbedPane
- CMDIChildWndEx [MFC], IsTaskbarTabsSupportEnabled
- CMDIChildWndEx [MFC], IsTaskbarThumbnailClipRectEnabled
- CMDIChildWndEx [MFC], m_dwDefaultTaskbarTabPropertyFlags
- CMDIChildWndEx [MFC], OnGetIconicLivePreviewBitmap
- CMDIChildWndEx [MFC], OnGetIconicThumbnail
- CMDIChildWndEx [MFC], OnMoveMiniFrame
- CMDIChildWndEx [MFC], OnPressTaskbarThmbnailCloseButton
- CMDIChildWndEx [MFC], OnSetPreviewMode
- CMDIChildWndEx [MFC], OnTaskbarTabThumbnailActivate
- CMDIChildWndEx [MFC], OnTaskbarTabThumbnailMouseActivate
- CMDIChildWndEx [MFC], OnTaskbarTabThumbnailStretch
- CMDIChildWndEx [MFC], OnUpdateFrameTitle
- CMDIChildWndEx [MFC], PaneFromPoint
- CMDIChildWndEx [MFC], RecalcLayout
- CMDIChildWndEx [MFC], RegisterTaskbarTab
- CMDIChildWndEx [MFC], RemovePaneFromDockManager
- CMDIChildWndEx [MFC], SetRelatedTabGroup
- CMDIChildWndEx [MFC], SetTaskbarTabActive
- CMDIChildWndEx [MFC], SetTaskbarTabOrder
- CMDIChildWndEx [MFC], SetTaskbarTabProperties
- CMDIChildWndEx [MFC], SetTaskbarThumbnailClipRect
- CMDIChildWndEx [MFC], ShowPane
- CMDIChildWndEx [MFC], UnregisterTaskbarTab
- CMDIChildWndEx [MFC], UpdateTaskbarTabIcon
ms.assetid: d39fec06-0bd6-4271-917d-35aae3b24d8e
caps.latest.revision: "35"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 21b302c14d2b4aa17b2818e489a1400230332521
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmdichildwndex-class"></a>CMDIChildWndEx (classe)
La `CMDIChildWndEx` classe fornisce la funzionalità di Windows come finestra figlio MDI (interfaccia) a documenti multipli. Estende la funzionalità di [CMDIChildWnd (classe)](../../mfc/reference/cmdichildwnd-class.md). Il framework richiede questa classe quando un'applicazione MDI utilizza determinate classi MFC.  
 
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  

  
## <a name="syntax"></a>Sintassi  
  
```  
class CMDIChildWndEx : public CMDIChildWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWndEx::ActivateTopLevelFrame](#activatetoplevelframe)|Chiamato internamente dal framework per attivare la cornice di primo livello quando l'applicazione deve essere attivata da una scheda della barra delle applicazioni.|  
|`CMDIChildWndEx::AddDockSite`|Questo metodo non viene utilizzato o implementato.|  
|[CMDIChildWndEx::AddPane](#addpane)|Aggiunge un riquadro.|  
|[CMDIChildWndEx::AddTabbedPane](#addtabbedpane)|Aggiunge un riquadro a schede.|  
|[CMDIChildWndEx::AdjustDockingLayout](#adjustdockinglayout)|Regola il layout di ancoraggio.|  
|[CMDIChildWndEx::CanShowOnMDITabs](#canshowonmditabs)||  
|[CMDIChildWndEx::CanShowOnTaskBarTabs](#canshowontaskbartabs)|Indica al framework se il figlio MDI può essere visualizzato nelle schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::CanShowOnWindowsList](#canshowonwindowslist)|Restituisce `TRUE` se è possibile visualizzare il nome della finestra figlio MDI nel [CMFCWindowsManagerDialog classe](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) la finestra di dialogo. In caso contrario restituisce `FALSE`.|  
|`CMDIChildWndEx::CreateObject`|Chiamato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMDIChildWndEx::DockPane](#dockpane)|Ancora un riquadro.|  
|[CMDIChildWndEx::DockPaneLeftOf](#dockpaneleftof)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[CMDIChildWndEx::EnableAutoHidePanes](#enableautohidepanes)|Abilita la modalità Nascondi automaticamente per i riquadri quando essi sono ancorate lungo i lati della finestra specificata.|  
|[CMDIChildWndEx::EnableDocking](#enabledocking)|Consente di ancoraggio della finestra figlio per la cornice principale.|  
|[CMDIChildWndEx::EnableTaskbarThumbnailClipRect](#enabletaskbarthumbnailcliprect)|Abilita o disabilita la selezione automatica di una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.|  
|[CMDIChildWndEx::GetDockingManager](#getdockingmanager)||  
|[CMDIChildWndEx::GetDocumentName](#getdocumentname)|Restituisce il nome del documento che viene visualizzato nella finestra figlio MDI.|  
|[CMDIChildWndEx::GetFrameIcon](#getframeicon)|Chiamato dal framework per recuperare l'icona della finestra figlio MDI.|  
|[CMDIChildWndEx::GetFrameText](#getframetext)|Chiamato dal framework per recuperare il testo per la finestra figlio MDI.|  
|[CMDIChildWndEx::GetPane](#getpane)|Trova un riquadro dall'ID di controllo specificato.|  
|[CMDIChildWndEx::GetRelatedTabGroup](#getrelatedtabgroup)||  
|[CMDIChildWndEx::GetTabbedPane](#gettabbedpane)|Restituisce un puntatore a un riquadro ancorato incorporato che è stato convertito in un documento a schede.|  
|[CMDIChildWndEx::GetTabProxyWnd](#gettabproxywnd)|Restituisce scheda finestra proxy effettivamente registrata con le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::GetTaskbarPreviewWnd](#gettaskbarpreviewwnd)|Chiamato dal framework quando è necessario ottenere una finestra figlio (in genere una finestra con separatore o una vista) da visualizzare in anteprima della scheda della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::GetTaskbarThumbnailClipRect](#gettaskbarthumbnailcliprect)|Chiamato dal framework quando è necessario selezionare una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.|  
|`CMDIChildWndEx::GetThisClass`|Chiamato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMDIChildWndEx::GetToolbarButtonToolTipText](#gettoolbarbuttontooltiptext)|Chiamato dal framework per recuperare una descrizione comando per un pulsante della barra degli strumenti.|  
|[CMDIChildWndEx::InsertPane](#insertpane)|Registra il riquadro specificato con il gestore di ancoraggio.|  
|[CMDIChildWndEx::InvalidateIconicBitmaps](#invalidateiconicbitmaps)|Invalida una rappresentazione sotto forma di icona bitmap del figlio MDI.|  
|[CMDIChildWndEx::IsPointNearDockSite](#ispointneardocksite)|Determina se un punto specificato è vicino al sito di ancoraggio.|  
|[CMDIChildWndEx::IsReadOnly](#isreadonly)|Restituisce `TRUE` se il documento che viene visualizzato nella finestra figlio è di sola lettura. In caso contrario restituisce `FALSE`.|  
|[CMDIChildWndEx::IsRegisteredWithTaskbarTabs](#isregisteredwithtaskbartabs)|Restituisce TRUE se il figlio MDI è stato registrato correttamente con le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::IsTabbedPane](#istabbedpane)|Restituisce `TRUE` se la finestra figlio MDI contiene un riquadro ancorato. In caso contrario restituisce `FALSE`.|  
|[CMDIChildWndEx::IsTaskbarTabsSupportEnabled](#istaskbartabssupportenabled)|Indica se il figlio MDI può essere visualizzati nelle schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled](#istaskbarthumbnailcliprectenabled)|Indica se la selezione automatica di una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni è abilitata o disabilitata.|  
|[CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags](#m_dwdefaulttaskbartabpropertyflags)|Una combinazione dei flag, che viene passata dal framework per il metodo SetTaskbarTabProperties, quando una scheda (figlio MDI) viene registrata con schede sulla barra delle applicazioni di Windows 7. La combinazione predefinita è STPF_USEAPPTHUMBNAILWHENACTIVE &#124; STPF_USEAPPPEEKWHENACTIVE.|  
|[CMDIChildWndEx::OnGetIconicLivePreviewBitmap](#ongeticoniclivepreviewbitmap)|Chiamato dal framework quando è necessario ottenere una bitmap per l'anteprima in tempo reale del figlio MDI.|  
|[CMDIChildWndEx::OnGetIconicThumbnail](#ongeticonicthumbnail)|Chiamato dal framework quando è necessario ottenere una bitmap di icona anteprima del figlio MDI.|  
|[CMDIChildWndEx::OnMoveMiniFrame](#onmoveminiframe)|Chiamato dal framework per spostare una finestra con mini-cornice.|  
|[CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton](#onpresstaskbarthmbnailclosebutton)|Chiamato dal framework quando l'utente preme il pulsante chiude anteprima della scheda della barra delle applicazioni...|  
|[CMDIChildWndEx::OnSetPreviewMode](#onsetpreviewmode)|Chiamato dal framework per attivare o disattivare la modalità anteprima di stampa.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailActivate](#ontaskbartabthumbnailactivate)|Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio WM_ACTIVATE.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate](#ontaskbartabthumbnailmouseactivate)|Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio WM_MOUSEACTIVATE.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailStretch](#ontaskbartabthumbnailstretch)|Chiamato dal framework quando è necessario per l'estensione di una mappa di bit per Windows 7 della barra delle applicazioni scheda Anteprima del figlio MDI.|  
|[CMDIChildWndEx::OnUpdateFrameTitle](#onupdateframetitle)|Chiamato dal framework per aggiornare il titolo del frame. Esegue l'override`CMDIChildWnd::OnUpdateFrameTitle`.|  
|[CMDIChildWndEx::PaneFromPoint](#panefrompoint)|Restituisce il riquadro che contiene il punto specificato.|  
|`CMDIChildWndEx::PreTranslateMessage`|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|  
|[CMDIChildWndEx::RecalcLayout](#recalclayout)|Ricalcola il layout della finestra.|  
|[CMDIChildWndEx::RegisterTaskbarTab](#registertaskbartab)|Registra il figlio MDI con schede sulla barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::RemovePaneFromDockManager](#removepanefromdockmanager)|Rimuove il gestore di ancoraggio di un riquadro.|  
|[CMDIChildWndEx::SetRelatedTabGroup](#setrelatedtabgroup)||  
|[CMDIChildWndEx::SetTaskbarTabActive](#settaskbartabactive)|Attiva una scheda corrispondente sulla barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarTabOrder](#settaskbartaborder)|Inserisce il figlio MDI prima finestra specificata nelle schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarTabProperties](#settaskbartabproperties)|Imposta le proprietà per una scheda della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarThumbnailClipRect](#settaskbarthumbnailcliprect)|Chiamato internamente dal framework per impostare il rettangolo di ridimensionamento per selezionare una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.|  
|[CMDIChildWndEx::ShowPane](#showpane)||  
|[CMDIChildWndEx::UnregisterTaskbarTab](#unregistertaskbartab)|Rimuove figlio MDI a schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::UpdateTaskbarTabIcon](#updatetaskbartabicon)|Icona di scheda della barra delle applicazioni di Windows 7 per gli aggiornamenti.|  
  
## <a name="remarks"></a>Note  
 Per sfruttare le funzionalità di ancoraggio estese nelle applicazioni MDI, derivare la classe di finestra figlio MDI di un'applicazione da `CMDIChildWndEx` anziché [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente deriva una classe da `CMDIChildWndEx`. Questo frammento di codice proviene il [esempio VisualStudioDemo: applicazione MFC di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#3](../../mfc/codesnippet/cpp/cmdichildwndex-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)  
  
 [CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmdichildwndex. H  
  
##  <a name="addpane"></a>CMDIChildWndEx::AddPane  
 Aggiunge un riquadro.  
  
```  
BOOL AddPane(
    CBasePane* pControlBar,  
    BOOL bTail = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Puntatore al riquadro.  
  
 [in] `bTail`  
 `TRUE`Per aggiungere il riquadro alla fine dell'elenco dei riquadri per il gestore di ancoraggio; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro è stato registrato correttamente con il gestore di ancoraggio; in caso contrario, `FALSE`.  
  
##  <a name="addtabbedpane"></a>CMDIChildWndEx::AddTabbedPane  
 Aggiunge un riquadro a schede.  
  
```  
void AddTabbedPane(CDockablePane* pControlBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Puntatore al riquadro.  
  
##  <a name="adjustdockinglayout"></a>CMDIChildWndEx::AdjustDockingLayout  
 Regola il layout di ancoraggio.  
  
```  
virtual void AdjustDockingLayout(HDWP hdwp = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hdwp`  
 Handle per una struttura di posizione finestra posticipata.  
  
##  <a name="canshowonmditabs"></a>CMDIChildWndEx::CanShowOnMDITabs  

  
```  
virtual BOOL CanShowOnMDITabs();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canshowonwindowslist"></a>CMDIChildWndEx::CanShowOnWindowsList  
 Specifica se è possibile visualizzare il nome della finestra figlio MDI nel [CMFCWindowsManagerDialog classe](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) la finestra di dialogo.  
  
```  
virtual BOOL CanShowOnWindowsList();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è possibile visualizzare la finestra nel **Windows** la finestra di dialogo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata e restituire `FALSE` se la finestra non deve essere visualizzata nel **Windows** la finestra di dialogo. Questa funzione viene chiamata da `CMFCWindowsManagerDialog`.  
  
##  <a name="dockpane"></a>CMDIChildWndEx::DockPane  
 Ancora un riquadro.  
  
```  
void DockPane(
    CBasePane* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore al riquadro.  
  
 [in] `nDockBarID`  
 L'ID del riquadro.  
  
 [in] `lpRect`  
 Un puntatore a un rettangolo.  
  
### <a name="remarks"></a>Note  
 Il `lpRect` parametro non viene usato.  
  
##  <a name="dockpaneleftof"></a>CMDIChildWndEx::DockPaneLeftOf  
 Ancora un riquadro a sinistra di un altro riquadro.  
  
```  
BOOL DockPaneLeftOf(
    CPane* pBar,  
    CPane* pLeftOf);
```  
  
### <a name="parameters"></a>Parametri  
 `pBar`  
 Puntatore al riquadro che deve essere ancorato.  
  
 `pLeftOf`  
 Puntatore al riquadro che funge da punto di riferimento.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'operazione riesce, `FALSE` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questo metodo accetta il riquadro specificato da `pBar` e consente l'ancoraggio sul lato sinistro del riquadro specificato da `pLeftOf`.  
  
 Chiamare questo metodo quando si desidera ancorare i riquadri diversi in base a ordine predefinito.  
  
##  <a name="enableautohidepanes"></a>CMDIChildWndEx::EnableAutoHidePanes  
 Abilita la modalità Nascondi automaticamente per i riquadri quando essi sono ancorate lungo i lati della finestra specificata.  
  
```  
BOOL EnableAutoHidePanes(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
 Specifica i lati della finestra cornice principale che è abilitato. Utilizzare uno o più dei flag seguenti.  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CBRS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
##  <a name="enabledocking"></a>CMDIChildWndEx::EnableDocking  
 Consente di ancoraggio della finestra figlio per la cornice principale.  
  
```  
BOOL EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwDockStyle`  
 Specifica l'allineamento di ancoraggio da abilitare.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per consentire l'allineamento di ancoraggio per la cornice principale. È possibile passare una combinazione di flag CBRS_ALIGN_ (per ulteriori informazioni, vedere [CControlBar:: EnableDocking](../../mfc/reference/ccontrolbar-class.md#enabledocking)).  
  
##  <a name="getdockingmanager"></a>CMDIChildWndEx::GetDockingManager  

  
```  
CDockingManager* GetDockingManager();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdocumentname"></a>CMDIChildWndEx::GetDocumentName  
 Restituisce il nome del documento che viene visualizzato nella finestra figlio MDI.  
  
```  
virtual LPCTSTR GetDocumentName(CObject** pObj);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa che contiene il nome di un documento.  
  
### <a name="remarks"></a>Note  
 Un documento è ciò che consente di visualizzare la finestra figlio MDI. In genere, la finestra Visualizza dati che viene caricati dalla o salvati in un file. Pertanto, il nome del documento è il nome del file. L'implementazione predefinita di `GetDocumentName` restituisce una stringa ottenuta `CDocument::GetPathName`.  
  
 Se la finestra Visualizza un documento che non viene caricato da un file, eseguire l'override di questo metodo in una classe derivata e restituire un identificatore univoco di documento.  
  
 `GetDocumentName`viene chiamato dal framework quando salva lo stato di tutti i documenti aperti. La stringa restituita viene scritto nel Registro di sistema.  
  
 Quando il framework è stato di ripristino in un secondo momento, il nome del documento è di lettura dal Registro di sistema e passato [CMDIFrameWndEx::CreateDocumentWindow](../../mfc/reference/cmdiframewndex-class.md#createdocumentwindow). Eseguire l'override di questo metodo in un [CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)-classe derivata e creare o aprire un documento con questo nome e leggere il file con questo nome. Se il documento non è basato su un file, creare il documento in base all'identificatore di documento stesso. È necessario effettuare le azioni precedente solo se si desidera salvare e ripristinare i documenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'uso del metodo `GetDocumentName`. Questo frammento di codice proviene il [esempio VisualStudioDemo: applicazione MFC di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#17](../../mfc/codesnippet/cpp/cmdichildwndex-class_2.cpp)]  
  
##  <a name="getframeicon"></a>CMDIChildWndEx::GetFrameIcon  
 Chiamato dal framework per recuperare l'icona della finestra figlio MDI.  
  
```  
virtual HICON GetFrameIcon() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per l'icona della finestra.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per stabilire quale icona visualizzare nella scheda MDI che contiene la finestra cornice figlio MDI.  
  
 Per impostazione predefinita questo metodo restituisce l'icona della finestra. Eseguire l'override `GetFrameIcon` in un `CMDIChildWndEx`-derivata per personalizzare questo comportamento.  
  
##  <a name="getframetext"></a>CMDIChildWndEx::GetFrameText  
 Chiamato dal framework per recuperare il testo per la finestra figlio MDI.  
  
```  
virtual CString GetFrameText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che contiene il testo della finestra cornice.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per determinare il testo da visualizzare sulla scheda MDI che contiene la finestra cornice figlio MDI.  
  
 Per impostazione predefinita questo metodo restituisce il testo della finestra. Eseguire l'override `GetFrameText` in un `CMDIChildWndEx`-derivata per personalizzare questo comportamento.  
  
##  <a name="getpane"></a>CMDIChildWndEx::GetPane  
 Trova un riquadro dall'ID di controllo specificato.  
  
```  
CBasePane* GetPane(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 L'ID del controllo del riquadro da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro se trovato, in caso contrario `NULL`.  
  
##  <a name="getrelatedtabgroup"></a>CMDIChildWndEx::GetRelatedTabGroup  

  
```  
CMFCTabCtrl* GetRelatedTabGroup();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabbedpane"></a>CMDIChildWndEx::GetTabbedPane  
 Restituisce un puntatore a un riquadro ancorato che fa parte di un gruppo di MDI documenti a schede.  
  
```  
CDockablePane* GetTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un riquadro ancorato che fa parte di un gruppo di MDI documenti a schede.  
  
##  <a name="gettoolbarbuttontooltiptext"></a>CMDIChildWndEx::GetToolbarButtonToolTipText  
 Chiamato dal framework per recuperare una descrizione comando per un pulsante della barra degli strumenti.  
  
```  
virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton*, 
    CString&);
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è stata visualizzata la descrizione comando. L'implementazione predefinita restituisce `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo se si desidera visualizzare i suggerimenti dello strumento personalizzato per i pulsanti della barra degli strumenti.  
  
##  <a name="insertpane"></a>CMDIChildWndEx::InsertPane  
 Registra il riquadro specificato con il gestore di ancoraggio.  
  
```  
BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 Puntatore al riquadro da inserire.  
  
 [in] `pTarget`  
 Puntatore al riquadro adiacente.  
  
 [in] `bAfter`  
 Se `TRUE`, `pControlBar` viene inserita dopo `pTarget`. Se `FALSE`, `pControlBar` viene inserita prima `pTarget`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo, `FALSE` in caso contrario.  
  
##  <a name="ispointneardocksite"></a>CMDIChildWndEx::IsPointNearDockSite  
 Determina se un punto specificato è vicino al sito di ancoraggio.  
  
```  
BOOL IsPointNearDockSite(
    CPoint point,  
    DWORD& dwBarAlignment,  
    BOOL& bOuterEdge) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Il punto specificato.  
  
 [in] `dwBarAlignment`  
 Specifica il bordo è il punto di prossimità. I valori possibili sono `CBRS_ALIGN_LEFT`, `CBRS_ALIGN_RIGHT`, `CBRS_ALIGN_TOP`, e`CBRS_ALIGN_BOTTOM`  
  
 [in] `bOuterEdge`  
 `TRUE`Se il punto si avvicina il bordo esterno del sito di ancoraggio; `FALSE` in caso contrario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il punto si avvicina al sito di ancoraggio; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il punto è vicino al sito di ancoraggio quando si trova all'interno della sensibilità impostata nel gestore di ancoraggio. La sensibilità del valore predefinito è 15 pixel.  
  
##  <a name="isreadonly"></a>CMDIChildWndEx::IsReadOnly  
 Specifica se il documento che viene visualizzato nella finestra figlio è di sola lettura.  
  
```  
virtual BOOL IsReadOnly();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il documento è di sola lettura. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata per impedire il salvataggio di documenti di sola lettura.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato l'override di `IsReadOnly` metodo. Questo frammento di codice proviene il [esempio VisualStudioDemo: applicazione MFC di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#2](../../mfc/codesnippet/cpp/cmdichildwndex-class_3.cpp)]  
  
##  <a name="istabbedpane"></a>CMDIChildWndEx::IsTabbedPane  
 Specifica se la finestra figlio MDI contiene un riquadro ancorato.  
  
```  
BOOL IsTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra figlio MDI contiene un riquadro ancorato è stato convertito in un documento a schede. in caso contrario `FALSE`.  
  
##  <a name="onmoveminiframe"></a>CMDIChildWndEx::OnMoveMiniFrame  
 Chiamato dal framework per spostare una finestra con mini-cornice.  
  
```  
virtual BOOL OnMoveMiniFrame(CWnd* pFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFrame`  
 Un puntatore a una finestra con mini-cornice.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il metodo ha esito positivo, in caso contrario `FALSE`.  
  
##  <a name="onsetpreviewmode"></a>CMDIChildWndEx::OnSetPreviewMode  
 Chiamato dal framework per attivare o disattivare la modalità anteprima di stampa.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bPreview`  
 Se `TRUE`, passare alla modalità di anteprima di stampa. Se `FALSE`, Esci dalla modalità di anteprima di stampa.  
  
 [in] `pState`  
 Puntatore alla struttura di stato di anteprima di stampa.  
  
##  <a name="onupdateframetitle"></a>CMDIChildWndEx::OnUpdateFrameTitle  
 Chiamato dal framework per aggiornare il titolo del frame.  
  
```  
virtual void OnUpdateFrameTitle(BOOL bAddToTitle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAddToTitle`  
 Se `TRUE`, aggiungere il nome del documento per il titolo.  
  
##  <a name="panefrompoint"></a>CMDIChildWndEx::PaneFromPoint  
 Restituisce il riquadro che contiene il punto specificato.  
  
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
 Specifica il punto, nelle coordinate dello schermo, per verificare.  
  
 [in] `nSensitivity`  
 Aumentare l'area di ricerca di questo importo. Un riquadro soddisfa i criteri di ricerca se il punto specificato rientra nell'area di aumento.  
  
 [in] `bExactBar`  
 `TRUE`per ignorare la `nSensitivity` parametro; in caso contrario, `FALSE`.  
  
 [in] `pRTCBarType`  
 Se non `NULL`, il metodo esegue la ricerca solo i riquadri del tipo specificato.  
  
 [in] `dwAlignment`  
 Se un riquadro si trova nel punto specificato, questo parametro contiene il lato del riquadro che è stato più vicino al punto specificato. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CBasePane`-oggetto che contiene il punto specificato, derivato o `NULL` se è stato trovato alcun riquadro.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare se un riquadro contiene il punto specificato in base alle condizioni specificate come classe di runtime e la visibilità.  
  
 Quando la funzione restituisce e un riquadro è stato trovato, `dwAlignment` contiene l'allineamento del punto specificato. Ad esempio, se il punto di stato più vicino alla parte superiore del riquadro, `dwAlignment` è impostato su `CBRS_ALIGN_TOP`.  
  
##  <a name="recalclayout"></a>CMDIChildWndEx::RecalcLayout  
 Ricalcola il layout della finestra.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bNotify`  
 Se `TRUE`, l'elemento attivo sul posto per la finestra riceve una notifica di modifica del layout.  
  
##  <a name="removepanefromdockmanager"></a>CMDIChildWndEx::RemovePaneFromDockManager  
 Rimuove il gestore di ancoraggio di un riquadro.  
  
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
 Puntatore al riquadro da rimuovere.  
  
 [in] `bDestroy`  
 Se `TRUE`, il riquadro rimosso viene eliminato definitivamente.  
  
 [in] `bAdjustLayout`  
 Se `TRUE`, modificare il layout di ancoraggio immediatamente.  
  
 [in] `bAutoHide`  
 Se `TRUE`, il layout di ancoraggio è correlato all'elenco di barre di Nascondi automaticamente. Se `FALSE`, il layout di ancoraggio è correlato a un elenco dei riquadri regolari.  
  
 [in] `pBarReplacement`  
 Un puntatore a un riquadro che sostituisce il riquadro rimosso.  
  
##  <a name="setrelatedtabgroup"></a>CMDIChildWndEx::SetRelatedTabGroup  

  
```  
void SetRelatedTabGroup(CMFCTabCtrl* p);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `p`  
  
### <a name="remarks"></a>Note  
  
##  <a name="showpane"></a>CMDIChildWndEx::ShowPane  

  
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
  
##  <a name="updatetaskbartabicon"></a>CMDIChildWndEx::UpdateTaskbarTabIcon  
 Aggiorna l'icona di scheda della barra delle applicazioni di Windows 7.  
  
```  
virtual void UpdateTaskbarTabIcon(HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 `hIcon`  
 Un handle per un'icona per visualizzare la scheda della barra delle applicazioni di Windows 7.  
  
### <a name="remarks"></a>Note  
  
##  <a name="unregistertaskbartab"></a>CMDIChildWndEx::UnregisterTaskbarTab  
 Rimuove il figlio MDI a schede sulla barra delle applicazioni di Windows 7.  
  
```  
void UnregisterTaskbarTab(BOOL bCheckRegisteredMDIChildCount = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bCheckRegisteredMDIChildCount`  
 Specifica se questa funzione è necessario controllare il numero di finestre figlio MDI registrato con schede MDI. Se questo numero è 0, questa funzione rimuove il rettangolo di ridimensionamento dall'anteprima della barra delle applicazioni dell'applicazione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settaskbarthumbnailcliprect"></a>CMDIChildWndEx::SetTaskbarThumbnailClipRect  
 Chiamato dal framework per impostare il rettangolo di ridimensionamento per selezionare una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.  
  
```  
virtual BOOL SetTaskbarThumbnailClipRect(CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Specifica il nuovo rettangolo di ridimensionamento. Se il rettangolo è vuoto o null, viene rimosso il ritaglio.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settaskbartabproperties"></a>CMDIChildWndEx::SetTaskbarTabProperties  
 Imposta le proprietà per una scheda della barra delle applicazioni di Windows 7.  
  
```  
void SetTaskbarTabProperties(DWORD dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Combinazione di valori STPFLAG. Per ulteriori informazioni, vedere [itaskbarlist4:: Settabproperties](http://msdn.microsoft.com/library/dd562049\(vs.85\).aspx).  
  
### <a name="remarks"></a>Note  
  
##  <a name="settaskbartaborder"></a>CMDIChildWndEx::SetTaskbarTabOrder  
 Inserisce il figlio MDI prima la finestra specificata nelle schede della barra delle applicazioni di Windows 7.  
  
```  
void SetTaskbarTabOrder(CMDIChildWndEx* pWndBefore = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndBefore`  
 Puntatore alla finestra figlio MDI viene inserito il cui anteprima a sinistra. Questa finestra deve essere già stata registrata tramite `RegisterTaskbarTab`. Se questo valore è `NULL`, la nuova immagine di anteprima viene aggiunto alla fine dell'elenco.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settaskbartabactive"></a>CMDIChildWndEx::SetTaskbarTabActive  
 Attiva la scheda della barra delle applicazioni di Windows 7 corrispondente.  
  
```  
void SetTaskbarTabActive();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="registertaskbartab"></a>CMDIChildWndEx::RegisterTaskbarTab  
 Registra il figlio MDI con schede sulla barra delle applicazioni di Windows 7.  
  
```  
virtual void RegisterTaskbarTab(CMDIChildWndEx* pWndBefore = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pWndBefore`  
 Puntatore alla finestra figlio MDI viene inserito il cui anteprima a sinistra. Questa finestra deve essere già stata registrata tramite `RegisterTaskbarTab`. Se questo valore è `NULL`, la nuova immagine di anteprima viene aggiunto alla fine dell'elenco.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ontaskbartabthumbnailstretch"></a>CMDIChildWndEx::OnTaskbarTabThumbnailStretch  
 Chiamato dal framework quando è necessario per l'estensione di una bitmap per una Windows 7 della barra delle applicazioni scheda Anteprima del figlio MDI.  
  
```  
virtual BOOL OnTaskbarTabThumbnailStretch(
    HBITMAP hBmpDst,  
    const CRect& rectDst,  
    HBITMAP hBmpSrc,  
    const CRect& rectSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `hBmpDst`  
 Handle per una bitmap di destinazione.  
  
 `rectDst`  
 Specifica il rettangolo di destinazione.  
  
 `hBmpSrc`  
 Handle per una bitmap di origine.  
  
 `rectSrc`  
 Specifica il rettangolo di origine.  
  
### <a name="remarks"></a>Note  
 Requirementher o quest'ultimo lui quest'ultimo lui quest'ultimo quest'ultimo lui **:** afxmdichildwndex. h  
  
##  <a name="ontaskbartabthumbnailmouseactivate"></a>CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate  
 Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio WM_MOUSEACTIVATE.  
  
```  
virtual int OnTaskbarTabThumbnailMouseActivate(
    CWnd* pDesktopWnd,  
    UINT nHitTest,  
    UINT message);
```  
  
### <a name="parameters"></a>Parametri  
 `pDesktopWnd`  
 Specifica un puntatore alla finestra padre di livello superiore della finestra in corso l'attivazione. Il puntatore può essere temporaneo e non deve essere archiviato.  
  
 `nHitTest`  
 Specifica il codice di area di hit test. Un hit test è un test che determina la posizione del cursore.  
  
 `message`  
 Specifica il numero di messaggio del mouse.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita attiva il frame MDI figlio correlato.  
  
##  <a name="ontaskbartabthumbnailactivate"></a>CMDIChildWndEx::OnTaskbarTabThumbnailActivate  
 Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio WM_ACTIVATE.  
  
```  
virtual void OnTaskbarTabThumbnailActivate(
    UINT nState,  
    CWnd* pWndOther,  
    BOOL bMinimized);
```  
  
### <a name="parameters"></a>Parametri  
 `nState`  
 Specifica se il `CWnd` viene attivato o disattivato.  
  
 `pWndOther`  
 Puntatore al `CWnd` viene attivata o disattivata. Il puntatore può essere `NULL`, e potrebbe essere temporaneo.  
  
 `bMinimized`  
 Specifica lo stato di ridotto a icona il `CWnd` viene attivata o disattivata. Il valore `TRUE` indica la finestra ridotta a icona.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita attiva il frame MDI figlio correlato.  
  
##  <a name="onpresstaskbarthmbnailclosebutton"></a>CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton  
 Chiamato dal framework quando l'utente preme il pulsante Chiudi l'anteprima della scheda della barra delle applicazioni.  
  
```  
virtual void OnPressTaskbarThmbnailCloseButton();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="ongeticonicthumbnail"></a>CMDIChildWndEx::OnGetIconicThumbnail  
 Chiamato dal framework quando è necessario ottenere una bitmap per l'anteprima delle icone del figlio MDI.  
  
```  
virtual HBITMAP OnGetIconicThumbnail(
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 Specifica la larghezza della bitmap obbligatoria.  
  
 `nHeight`  
 Specifica l'altezza della bitmap obbligatoria.  
  
### <a name="remarks"></a>Note  
  
##  <a name="ongeticoniclivepreviewbitmap"></a>CMDIChildWndEx::OnGetIconicLivePreviewBitmap  
 Chiamato dal framework quando è necessario ottenere una bitmap per l'anteprima in tempo reale del figlio MDI.  
  
```  
virtual HBITMAP OnGetIconicLivePreviewBitmap(
    BOOL bIsMDIChildActive,  
    CPoint& ptLocation);
```  
  
### <a name="parameters"></a>Parametri  
 `bIsMDIChildActive`  
 Questo parametro è `TRUE` se la bitmap è richiesto per il figlio MDI, che è attualmente attivo e la finestra principale non è ridotta a icona. Il valore predefinito di elaborazione in questo caso, un'istantanea della finestra principale.  
  
 `ptLocation`  
 Specifica il percorso della bitmap in main (superiore) nelle coordinate client della finestra. Questo punto deve essere fornito dall'oggetto chiamato.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'elaborazione, restituisce un handle per una bitmap a 32bpp valido, in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata e restituiscono una bitmap a 32bpp valido per l'anteprima in tempo reale del figlio MDI. Questo metodo viene chiamato solo quando il figlio MDI viene visualizzato nelle schede della barra delle applicazioni di Windows 7. Se si restituisce `NULL`, MFC chiama i gestori predefiniti e ottiene le bitmap tramite `PrintClient` o `PrintWindow`.  
  
##  <a name="m_dwdefaulttaskbartabpropertyflags"></a>CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags  
 Una combinazione dei flag, che viene passata dal framework per il `SetTaskbarTabProperties` metodo, quando una scheda (figlio MDI) viene registrata con schede sulla barra delle applicazioni di Windows 7.  
  
```  
AFX_IMPORT_DATA static DWORD m_dwDefaultTaskbarTabPropertyFlags;  
```  
  
### <a name="remarks"></a>Note  
 La combinazione predefinita è STPF_USEAPPTHUMBNAILWHENACTIVE &#124; STPF_USEAPPPEEKWHENACTIVE.  
  
##  <a name="istaskbarthumbnailcliprectenabled"></a>CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled  
 Indica se la selezione automatica di una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni è abilitata o disabilitata.  
  
```  
BOOL IsTaskbarThumbnailClipRectEnabled() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se una parte dell'area client di una finestra per visualizzare la selezione automatica è abilitata; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="istaskbartabssupportenabled"></a>CMDIChildWndEx::IsTaskbarTabsSupportEnabled  
 Indica se il figlio MDI può essere visualizzati nelle schede della barra delle applicazioni di Windows 7.  
  
```  
BOOL IsTaskbarTabsSupportEnabled();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il figlio MDI può essere visualizzati nelle schede della barra delle applicazioni di Windows 7. `FALSE` se il figlio MDI non può essere visualizzati nelle schede della barra delle applicazioni di Windows 7.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isregisteredwithtaskbartabs"></a>CMDIChildWndEx::IsRegisteredWithTaskbarTabs  
 Restituisce `TRUE` se il figlio MDI è stato registrato correttamente con le schede della barra delle applicazioni di Windows 7.  
  
```  
BOOL IsRegisteredWithTaskbarTabs();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il figlio MDI viene registrato con schede sulla barra delle applicazioni di Windows 7. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="invalidateiconicbitmaps"></a>CMDIChildWndEx::InvalidateIconicBitmaps  
 Invalida una rappresentazione sotto forma di icona bitmap di un figlio MDI.  
  
```  
BOOL InvalidateIconicBitmaps();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `FALSE` se è disabilitato il supporto della barra delle applicazioni di Windows 7 o il figlio MDI non è registrato con schede sulla barra delle applicazioni di Windows 7; in caso contrario restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato quando viene modificato il contenuto live o le dimensioni di un figlio MDI.  
  
##  <a name="gettaskbarthumbnailcliprect"></a>CMDIChildWndEx::GetTaskbarThumbnailClipRect  
 Chiamato dal framework quando è necessario selezionare una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.  
  
```  
virtual CRect GetTaskbarThumbnailClipRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un rettangolo di coordinate di windows. Viene eseguito il mapping di questo rettangolo all'area client della cornice di primo livello. Il rettangolo deve essere vuoto per cancellare il rettangolo di ridimensionamento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettaskbarpreviewwnd"></a>CMDIChildWndEx::GetTaskbarPreviewWnd  
 Chiamato dal framework quando è necessario ottenere una finestra figlio (in genere una finestra con separatore o una vista) da visualizzare in un'anteprima della scheda della barra delle applicazioni di Windows 7.  
  
```  
virtual CWnd* GetTaskbarPreviewWnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire un puntatore valido a un `CWnd` oggetto, il cui anteprima dovrebbe essere visualizzata in una scheda della barra delle applicazioni di Windows 7 correlati a questo elemento figlio MDI. L'implementazione predefinita restituisce una finestra figlio dell'elemento figlio MDI con ID di controllo AFX_IDW_PANE_FIRST (in genere un `CView`-classe derivata).  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettabproxywnd"></a>CMDIChildWndEx::GetTabProxyWnd  
 Restituisce la finestra di scheda proxy registrata con schede sulla barra delle applicazioni di Windows 7.  
  
```  
CMDITabProxyWnd* GetTabProxyWnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMDITabProxyWnd` oggetto, che è registrato con schede sulla barra delle applicazioni di Windows 7.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletaskbarthumbnailcliprect"></a>CMDIChildWndEx::EnableTaskbarThumbnailClipRect  
 Abilita o disabilita la selezione automatica di una parte dell'area client di una finestra per visualizzare come immagine di anteprima di tale finestra nella barra delle applicazioni.  
  
```  
void EnableTaskbarThumbnailClipRect(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se abilitare ( `TRUE`), o disabilitare ( `FALSE`) di una parte dell'area client di una finestra per visualizzare la selezione automatica.  
  
### <a name="remarks"></a>Note  
  
##  <a name="canshowontaskbartabs"></a>CMDIChildWndEx::CanShowOnTaskBarTabs  
 Indica al framework se il figlio MDI può essere visualizzato nelle schede della barra delle applicazioni di Windows 7.  
  
```  
virtual BOOL CanShowOnTaskBarTabs();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il contenuto del figlio MDI può essere visualizzato nelle anteprime barra delle applicazioni di Windows 7.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata e restituire `FALSE` per disabilitare l'aspetto dell'elemento figlio MDI nelle schede della barra delle applicazioni di Windows 7.  
  
##  <a name="activatetoplevelframe"></a>CMDIChildWndEx::ActivateTopLevelFrame  
 Chiamato dal framework per attivare la cornice di primo livello quando l'applicazione viene attivata da una scheda della barra delle applicazioni.  
  
```  
virtual void ActivateTopLevelFrame();
```  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMDIChildWnd (classe)](../../mfc/reference/cmdichildwnd-class.md)   
 [Classe CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)
