---
title: "Classe CMDIChildWndEx | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIChildWndEx"
  - "GetThisClass"
  - "CMDIChildWndEx::PreTranslateMessage"
  - "CMDIChildWndEx::ActivateFrame"
  - "CMDIChildWndEx.GetThisClass"
  - "CMDIChildWndEx::AddDockSite"
  - "CMDIChildWndEx.CreateObject"
  - "CMDIChildWndEx::CreateObject"
  - "CMDIChildWndEx.ActivateFrame"
  - "CMDIChildWndEx::GetThisClass"
  - "CMDIChildWndEx.PreTranslateMessage"
  - "PreTranslateMessage"
  - "ActivateFrame"
  - "CreateObject"
  - "CMDIChildWndEx.AddDockSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDIChildWndEx (classe)"
  - "ActivateFrame (metodo)"
  - "PreTranslateMessage (metodo)"
  - "GetThisClass (metodo)"
  - "CreateObject (metodo)"
ms.assetid: d39fec06-0bd6-4271-917d-35aae3b24d8e
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 37
---
# Classe CMDIChildWndEx
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe di `CMDIChildWndEx` fornisce la funzionalità di una finestra figlio di \(MDI\) l'interfaccia a documenti multipli di Windows.  Estende la funzionalità di [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md).  Il framework richiede questa classe quando un'applicazione MDI utilizza determinate classi MFC.  
  
## Sintassi  
  
```  
class CMDIChildWndEx : public CMDIChildWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIChildWndEx::ActivateTopLevelFrame](../Topic/CMDIChildWndEx::ActivateTopLevelFrame.md)|Chiamato internamente dal framework per attivare il frame di primo livello quando l'applicazione deve essere attivata da una scheda della barra delle applicazioni.|  
|`CMDIChildWndEx::AddDockSite`|Questo metodo non viene utilizzato o non implementato.|  
|[CMDIChildWndEx::AddPane](../Topic/CMDIChildWndEx::AddPane.md)|Aggiunge un riquadro.|  
|[CMDIChildWndEx::AddTabbedPane](../Topic/CMDIChildWndEx::AddTabbedPane.md)|Aggiunge un riquadro a schede.|  
|[CMDIChildWndEx::AdjustDockingLayout](../Topic/CMDIChildWndEx::AdjustDockingLayout.md)|Regola il layout di ancoraggio.|  
|[CMDIChildWndEx::CanShowOnMDITabs](../Topic/CMDIChildWndEx::CanShowOnMDITabs.md)||  
|[CMDIChildWndEx::CanShowOnTaskBarTabs](../Topic/CMDIChildWndEx::CanShowOnTaskBarTabs.md)|Indica al framework se il figlio MDI è possibile visualizzare le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::CanShowOnWindowsList](../Topic/CMDIChildWndEx::CanShowOnWindowsList.md)|Restituisce `TRUE` se il nome della finestra figlio MDI può essere visualizzato nella finestra di dialogo di [CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md).  In caso contrario, restituisce `FALSE`.|  
|`CMDIChildWndEx::CreateObject`|Chiamato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMDIChildWndEx::DockPane](../Topic/CMDIChildWndEx::DockPane.md)|Un riquadro.|  
|[CMDIChildWndEx::DockPaneLeftOf](../Topic/CMDIChildWndEx::DockPaneLeftOf.md)|Ancoraggio il riquadro a sinistra di un altro riquadro.|  
|[CMDIChildWndEx::EnableAutoHidePanes](../Topic/CMDIChildWndEx::EnableAutoHidePanes.md)|Attiva la modalità nascondi automaticamente per i riquadri quando vengono ancorati sui lati indicati della finestra.|  
|[CMDIChildWndEx::EnableDocking](../Topic/CMDIChildWndEx::EnableDocking.md)|Consente l'ancoraggio di finestra figlio alla cornice principale.|  
|[CMDIChildWndEx::EnableTaskbarThumbnailClipRect](../Topic/CMDIChildWndEx::EnableTaskbarThumbnailClipRect.md)|Consente o disabilita la selezione automatica di una parte dell'area client di una finestra per visualizzare come anteprima di tale finestra nella barra delle applicazioni.|  
|[CMDIChildWndEx::GetDockingManager](../Topic/CMDIChildWndEx::GetDockingManager.md)||  
|[CMDIChildWndEx::GetDocumentName](../Topic/CMDIChildWndEx::GetDocumentName.md)|Restituisce il nome del documento che viene visualizzato nella finestra figlio MDI.|  
|[CMDIChildWndEx::GetFrameIcon](../Topic/CMDIChildWndEx::GetFrameIcon.md)|Chiamato dal framework per recuperare l'icona della finestra figlio MDI.|  
|[CMDIChildWndEx::GetFrameText](../Topic/CMDIChildWndEx::GetFrameText.md)|Chiamato dal framework per recuperare il testo della finestra figlio MDI.|  
|[CMDIChildWndEx::GetPane](../Topic/CMDIChildWndEx::GetPane.md)|Cerca un riquadro dall'ID del controllo|  
|[CMDIChildWndEx::GetRelatedTabGroup](../Topic/CMDIChildWndEx::GetRelatedTabGroup.md)||  
|[CMDIChildWndEx::GetTabbedPane](../Topic/CMDIChildWndEx::GetTabbedPane.md)|Restituisce un puntatore a un riquadro ancorato incorporato che è stato convertito in un documento a schede.|  
|[CMDIChildWndEx::GetTabProxyWnd](../Topic/CMDIChildWndEx::GetTabProxyWnd.md)|La scheda del proxy la finestra realmente registrata con le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::GetTaskbarPreviewWnd](../Topic/CMDIChildWndEx::GetTaskbarPreviewWnd.md)|Chiamato dal framework quando deve ottenere una finestra figlio \(in genere una visualizzazione o una finestra con separatore\) da visualizzare in anteprima la scheda della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::GetTaskbarThumbnailClipRect](../Topic/CMDIChildWndEx::GetTaskbarThumbnailClipRect.md)|Chiamato dal framework quando necessario selezionare una parte dell'area client di una finestra per visualizzare come anteprima di tale finestra nella barra delle applicazioni.|  
|`CMDIChildWndEx::GetThisClass`|Chiamato dal framework per ottenere un puntatore all'oggetto di [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMDIChildWndEx::GetToolbarButtonToolTipText](../Topic/CMDIChildWndEx::GetToolbarButtonToolTipText.md)|Chiamato dal framework per recuperare una descrizione per un pulsante della barra degli strumenti.|  
|[CMDIChildWndEx::InsertPane](../Topic/CMDIChildWndEx::InsertPane.md)|Registra il riquadro specificato con l'amministratore di ancoraggio.|  
|[CMDIChildWndEx::InvalidateIconicBitmaps](../Topic/CMDIChildWndEx::InvalidateIconicBitmaps.md)|Invalida la rappresentazione bitmap in formato di icona del figlio MDI.|  
|[CMDIChildWndEx::IsPointNearDockSite](../Topic/CMDIChildWndEx::IsPointNearDockSite.md)|Determina se un punto specificato è vicino al sito di ancoraggio.|  
|[CMDIChildWndEx::IsReadOnly](../Topic/CMDIChildWndEx::IsReadOnly.md)|Restituisce `TRUE` se il documento che viene visualizzato nella finestra figlio è di sola lettura.  In caso contrario, restituisce `FALSE`.|  
|[CMDIChildWndEx::IsRegisteredWithTaskbarTabs](../Topic/CMDIChildWndEx::IsRegisteredWithTaskbarTabs.md)|Restituisce TRUE se il figlio MDI è stato registrato correttamente con le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::IsTabbedPane](../Topic/CMDIChildWndEx::IsTabbedPane.md)|Restituisce `TRUE` se la finestra figlio MDI contiene un riquadro ancorato.  In caso contrario, restituisce `FALSE`.|  
|[CMDIChildWndEx::IsTaskbarTabsSupportEnabled](../Topic/CMDIChildWndEx::IsTaskbarTabsSupportEnabled.md)|Indica se la finestra figlio MDI può apparire sulle schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled](../Topic/CMDIChildWndEx::IsTaskbarThumbnailClipRectEnabled.md)|Indica se la selezione automatica di una parte dell'area client di una finestra di visualizzazione come anteprima di tale finestra nella barra delle applicazioni è abilitata o disabilitata.|  
|[CMDIChildWndEx::m\_dwDefaultTaskbarTabPropertyFlags](../Topic/CMDIChildWndEx::m_dwDefaultTaskbarTabPropertyFlags.md)|Una combinazione di flag, passato dal framework al metodo di SetTaskbarTabProperties, quando una scheda \(figlio MDI\) è la registrazione con le schede della barra delle applicazioni di Windows 7.  Lo schema predefinito è STPF\_USEAPPTHUMBNAILWHENACTIVE &#124; STPF\_USEAPPPEEKWHENACTIVE.|  
|[CMDIChildWndEx::OnGetIconicLivePreviewBitmap](../Topic/CMDIChildWndEx::OnGetIconicLivePreviewBitmap.md)|Chiamato dal framework quando deve ottenere una bitmap per l'anteprima dinamica del figlio MDI.|  
|[CMDIChildWndEx::OnGetIconicThumbnail](../Topic/CMDIChildWndEx::OnGetIconicThumbnail.md)|Chiamato dal framework quando deve ottenere una bitmap per l'anteprima in formato di icona del figlio MDI.|  
|[CMDIChildWndEx::OnMoveMiniFrame](../Topic/CMDIChildWndEx::OnMoveMiniFrame.md)|Chiamato dal framework per spostare una finestra cornice piccola.|  
|[CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton](../Topic/CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton.md)|Chiamato dal framework quando l'utente preme il pulsante dall'anteprima la scheda della barra delle applicazioni.|  
|[CMDIChildWndEx::OnSetPreviewMode](../Topic/CMDIChildWndEx::OnSetPreviewMode.md)|Chiamato dal framework per attivare o disattivare in modalità anteprima di stampa.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailActivate](../Topic/CMDIChildWndEx::OnTaskbarTabThumbnailActivate.md)|Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio di WM\_ACTIVATE.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate](../Topic/CMDIChildWndEx::OnTaskbarTabThumbnailMouseActivate.md)|Chiamato dal framework quando l'anteprima della scheda della barra delle applicazioni deve elaborare il messaggio di WM\_MOUSEACTIVATE.|  
|[CMDIChildWndEx::OnTaskbarTabThumbnailStretch](../Topic/CMDIChildWndEx::OnTaskbarTabThumbnailStretch.md)|Chiamato dal framework quando deve contenere una bitmap dall'visualizzata un'anteprima in miniatura la scheda della barra delle applicazioni di Windows 7 del figlio MDI.|  
|[CMDIChildWndEx::OnUpdateFrameTitle](../Topic/CMDIChildWndEx::OnUpdateFrameTitle.md)|Chiamato dal framework per aggiornare il titolo del frame.  \(Override `CMDIChildWnd::OnUpdateFrameTitle`\).|  
|[CMDIChildWndEx::PaneFromPoint](../Topic/CMDIChildWndEx::PaneFromPoint.md)|Restituisce il riquadro contenente il punto specificato.|  
|`CMDIChildWndEx::PreTranslateMessage`|Utilizzato da [CWinApp](../../mfc/reference/cwinapp-class.md) classe per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows di [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e di [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)\).|  
|[CMDIChildWndEx::RecalcLayout](../Topic/CMDIChildWndEx::RecalcLayout.md)|Ricalcola il layout.|  
|[CMDIChildWndEx::RegisterTaskbarTab](../Topic/CMDIChildWndEx::RegisterTaskbarTab.md)|Figlio MDI di log con le schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::RemovePaneFromDockManager](../Topic/CMDIChildWndEx::RemovePaneFromDockManager.md)|Rimuove un riquadro dall'amministratore di ancoraggio.|  
|[CMDIChildWndEx::SetRelatedTabGroup](../Topic/CMDIChildWndEx::SetRelatedTabGroup.md)||  
|[CMDIChildWndEx::SetTaskbarTabActive](../Topic/CMDIChildWndEx::SetTaskbarTabActive.md)|Attiva la scheda della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarTabOrder](../Topic/CMDIChildWndEx::SetTaskbarTabOrder.md)|Figlio MDI consente di inserire prima della finestra specificata sulle schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarTabProperties](../Topic/CMDIChildWndEx::SetTaskbarTabProperties.md)|Imposta le proprietà per una scheda della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::SetTaskbarThumbnailClipRect](../Topic/CMDIChildWndEx::SetTaskbarThumbnailClipRect.md)|Chiamato internamente dal framework per impostare rettangolo di ridimensionamento per selezionare una parte dell'area client di una finestra per visualizzare come anteprima di tale finestra nella barra delle applicazioni.|  
|[CMDIChildWndEx::ShowPane](../Topic/CMDIChildWndEx::ShowPane.md)||  
|[CMDIChildWndEx::UnregisterTaskbarTab](../Topic/CMDIChildWndEx::UnregisterTaskbarTab.md)|Rimuove il figlio MDI a schede della barra delle applicazioni di Windows 7.|  
|[CMDIChildWndEx::UpdateTaskbarTabIcon](../Topic/CMDIChildWndEx::UpdateTaskbarTabIcon.md)|Icona della scheda della barra delle applicazioni di Windows 7 degli aggiornamenti.|  
  
## Note  
 Per sfruttare funzionalità estese di ancoraggio nelle applicazioni MDI, derivare la classe della finestra figlio MDI dell'applicazione da `CMDIChildWndEx` anziché [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md).  
  
## Esempio  
 Nell'esempio deriva una classe da `CMDIChildWndEx`.  Nel frammento di codice proviene da [Esempio VisualStudioDemo: Applicazione MFC Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#3](../../mfc/codesnippet/CPP/cmdichildwndex-class_1.h)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)  
  
 [CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md)  
  
## Requisiti  
 **Intestazione:** afxMDIChildWndEx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)   
 [CMFCWindowsManagerDialog Class](../../mfc/reference/cmfcwindowsmanagerdialog-class.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)