---
title: "CPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPane class"
ms.assetid: 5c651a64-3c79-4d94-9676-45f6402a6bc5
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CPane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CPane` è un miglioramento [CControlBar Class](../../mfc/reference/ccontrolbar-class.md).  Se si aggiorna un progetto MFC esistente, sostituire tutte le occorrenze `CControlBar` con `CPane`.  
  
## Sintassi  
  
```  
class CPane : public CBasePane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CPane::~CPane`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::AdjustSizeImmediate](../Topic/CPane::AdjustSizeImmediate.md)|Immediatamente ricalcola il layout di riquadro.|  
|[CPane::AllocElements](../Topic/CPane::AllocElements.md)|Alloca l'archiviazione per utilizzo interno.|  
|[CPane::AllowShowOnPaneMenu](../Topic/CPane::AllowShowOnPaneMenu.md)|Specifica se il riquadro è presente nell'elenco il generato dei riquadri per l'applicazione.|  
|[CPane::CalcAvailableSize](../Topic/CPane::CalcAvailableSize.md)|Calcola la differenza delle dimensioni tra un rettangolo specificato e il rettangolo corrente della finestra.|  
|[CPane::CalcInsideRect](../Topic/CPane::CalcInsideRect.md)|Calcola il rettangolo interno di un riquadro, mentre i bordi e le pinze di controllo.|  
|[CPane::CalcRecentDockedRect](../Topic/CPane::CalcRecentDockedRect.md)|Calcola il rettangolo recentemente ancorato.|  
|[CPane::CalcSize](../Topic/CPane::CalcSize.md)|Calcola le dimensioni del riquadro.|  
|[CPane::CanBeDocked](../Topic/CPane::CanBeDocked.md)|Determina se il riquadro può essere ancorato al riquadro di base specificato.|  
|[CPane::CanBeTabbedDocument](../Topic/CPane::CanBeTabbedDocument.md)|Determina se il riquadro può essere convertito in un documento a schede.|  
|[CPane::ConvertToTabbedDocument](../Topic/CPane::ConvertToTabbedDocument.md)|Converte un riquadro ancorabile a un documento a schede.|  
|[CPane::CopyState](../Topic/CPane::CopyState.md)|Copiare lo stato di un riquadro.  \(Override [CBasePane::CopyState](../Topic/CBasePane::CopyState.md)\).|  
|[CPane::Create](../Topic/CPane::Create.md)|Crea una barra di controllo e allegarlo all'oggetto `CPane`.|  
|[CPane::CreateDefaultMiniframe](../Topic/CPane::CreateDefaultMiniframe.md)|Crea una finestra cornice piccola per un riquadro mobile.|  
|[CPane::CreateEx](../Topic/CPane::CreateEx.md)|Crea una barra di controllo e allegarlo all'oggetto `CPane`.|  
|`CPane::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CPane::DockByMouse](../Topic/CPane::DockByMouse.md)|Un riquadro utilizzando il metodo di ancoraggio del mouse.|  
|[CPane::DockPane](../Topic/CPane::DockPane.md)|Nuovamente il riquadro mobile a un riquadro di base.|  
|[CPane::DockPaneStandard](../Topic/CPane::DockPaneStandard.md)|Un riquadro utilizzando l'ancoraggio della struttura \(standard\).|  
|[CPane::DockToFrameWindow](../Topic/CPane::DockToFrameWindow.md)|Un riquadro ancorabile a un frame.  \(Override `CBasePane::DockToFrameWindow`\).|  
|[CPane::DoesAllowSiblingBars](../Topic/CPane::DoesAllowSiblingBars.md)|Indica se è possibile ancorare un altro riquadro nella stessa riga in cui il riquadro corrente è ancorato.|  
|[CPane::FloatPane](../Topic/CPane::FloatPane.md)|Fa float il riquadro.|  
|[CPane::GetAvailableExpandSize](../Topic/CPane::GetAvailableExpandSize.md)|Restituisce la quantità, in pixel, del riquadro può ampliarsi.|  
|[CPane::GetAvailableStretchSize](../Topic/CPane::GetAvailableStretchSize.md)|Restituisce la quantità, in pixel, del riquadro può ridurre.|  
|[CPane::GetBorders](../Topic/CPane::GetBorders.md)|Restituisce la larghezza dei bordi del riquadro.|  
|[CPane::GetClientHotSpot](../Topic/CPane::GetClientHotSpot.md)|Restituisce *area sensibile* per il riquadro.|  
|[CPane::GetDockSiteRow](../Topic/CPane::GetDockSiteRow.md)|Restituisce la riga di ancoraggio in cui il riquadro è ancorato.|  
|[CPane::GetExclusiveRowMode](../Topic/CPane::GetExclusiveRowMode.md)|Determina se il riquadro è in modalità esclusiva della riga.|  
|[CPane::GetHotSpot](../Topic/CPane::GetHotSpot.md)|Restituisce area sensibile archiviata in un oggetto sottostante `CMFCDragFrameImpl`.|  
|[CPane::GetMinSize](../Topic/CPane::GetMinSize.md)|Recupera il minimo dimensione consentita per il riquadro.|  
|[CPane::GetPaneName](../Topic/CPane::GetPaneName.md)|Recupera il titolo del riquadro.|  
|`CPane::GetResizeStep`|Per uso interno.|  
|`CPane::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CPane::GetVirtualRect](../Topic/CPane::GetVirtualRect.md)|Recupera *il rettangolo virtuale* riquadro.|  
|[CPane::IsChangeState](../Topic/CPane::IsChangeState.md)|Mentre il riquadro sta spostando, questo metodo analizza la posizione del riquadro rispetto agli altri riquadri, ancora righe e finestre cornice piccola e restituisce il valore appropriato `AFX_CS_STATUS`.|  
|[CPane::IsDragMode](../Topic/CPane::IsDragMode.md)|Specifica se il riquadro sta trascinando.|  
|[CPane::IsInFloatingMultiPaneFrameWnd](../Topic/CPane::IsInFloatingMultiPaneFrameWnd.md)|Specifica se il riquadro è in una finestra cornice a più riquadri.  \(Override `CBasePane::IsInFloatingMultiPaneFrameWnd`\).|  
|[CPane::IsLeftOf](../Topic/CPane::IsLeftOf.md)|Determina se il riquadro viene lasciato \(o in\) del rettangolo specificato.|  
|[CPane::IsResizable](../Topic/CPane::IsResizable.md)|Determina se il riquadro può essere ridimensionato.  \(Override [CBasePane::IsResizable](../Topic/CBasePane::IsResizable.md)\).|  
|[CPane::IsTabbed](../Topic/CPane::IsTabbed.md)|Determina se il riquadro è stato immesso nel controllo Struttura a schede di una finestra a schede.  \(Override [CBasePane::IsTabbed](../Topic/CBasePane::IsTabbed.md)\).|  
|[CPane::LoadState](../Topic/CPane::LoadState.md)|Carica lo stato del riquadro dal Registro di sistema.  \(Override [CBasePane::LoadState](../Topic/CBasePane::LoadState.md)\).|  
|[CPane::MoveByAlignment](../Topic/CPane::MoveByAlignment.md)|Consente di spostare il riquadro e il rettangolo virtuale dalla quantità specificata.|  
|[CPane::MovePane](../Topic/CPane::MovePane.md)|Consente di spostare il riquadro al rettangolo specificato.|  
|[CPane::OnAfterChangeParent](../Topic/CPane::OnAfterChangeParent.md)|Chiamato dal framework quando il padre di un riquadro di modifica.|  
|[CPane::OnBeforeChangeParent](../Topic/CPane::OnBeforeChangeParent.md)|Chiamato dal framework quando il padre del riquadro sta la modifica.|  
|[CPane::OnPressCloseButton](../Topic/CPane::OnPressCloseButton.md)|Chiamato dal framework quando l'utente sceglie il pulsante nella barra del titolo del riquadro.|  
|`CPane::OnProcessDblClk`|Per uso interno.|  
|[CPane::OnShowControlBarMenu](../Topic/CPane::OnShowControlBarMenu.md)|Chiamato dal framework quando un menu speciali il riquadro sta per visualizzare.|  
|[CPane::OnShowControlBarMenu](../Topic/CPane::OnShowControlBarMenu.md)|Chiamato dal framework quando un menu speciali il riquadro sta per visualizzare.|  
|`CPane::PrepareToDock`|Per uso interno.|  
|[CPane::RecalcLayout](../Topic/CPane::RecalcLayout.md)|Ricalcola le informazioni sul layout per il riquadro.  \(Override [CBasePane::RecalcLayout](../Topic/CBasePane::RecalcLayout.md)\).|  
|[CPane::SaveState](../Topic/CPane::SaveState.md)|Salvare lo stato del riquadro al Registro di sistema.  \(Override [CBasePane::SaveState](../Topic/CBasePane::SaveState.md)\).|  
|[CPane::SetActiveInGroup](../Topic/CPane::SetActiveInGroup.md)|Contrassegna un riquadro come attiva.|  
|[CPane::SetBorders](../Topic/CPane::SetBorders.md)|Imposta i valori del bordo del riquadro.|  
|[CPane::SetClientHotSpot](../Topic/CPane::SetClientHotSpot.md)|Imposta l'area sensibile per il riquadro.|  
|[CPane::SetDockState](../Topic/CPane::SetDockState.md)|Ripristinare che ancorano informazioni sullo stato del riquadro.|  
|[CPane::SetExclusiveRowMode](../Topic/CPane::SetExclusiveRowMode.md)|Abilita o disabilita la modalità esclusiva della riga.|  
|[CPane::SetMiniFrameRTC](../Topic/CPane::SetMiniFrameRTC.md)|Imposta le informazioni sulla classe di runtime per la finestra cornice piccola predefinita.|  
|[CPane::SetMinSize](../Topic/CPane::SetMinSize.md)|Imposta il minimo dimensione consentita per il riquadro.|  
|[CPane::SetVirtualRect](../Topic/CPane::SetVirtualRect.md)|Imposta *il rettangolo virtuale* riquadro.|  
|[CPane::StretchPaneDeferWndPos](../Topic/CPane::StretchPaneDeferWndPos.md)|Appropriata verticalmente il riquadro oppure orizzontalmente basato su stile di ancoraggio.|  
|[CPane::ToggleAutoHide](../Topic/CPane::ToggleAutoHide.md)|Modalità nascondi automaticamente di consente di passare.|  
|[CPane::UndockPane](../Topic/CPane::UndockPane.md)|Rimuove il riquadro dal sito di ancoraggio, dal dispositivo di scorrimento predefinito, o dalla finestra cornice piccola in cui è attualmente ancorato.  \(Override [CBasePane::UndockPane](../Topic/CBasePane::UndockPane.md)\).|  
|[CPane::UpdateVirtualRect](../Topic/CPane::UpdateVirtualRect.md)|Aggiorna il rettangolo virtuale.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::OnAfterDock](../Topic/CPane::OnAfterDock.md)|Chiamato dal framework quando un riquadro è stato agganciato.|  
|[CPane::OnAfterFloat](../Topic/CPane::OnAfterFloat.md)|Chiamato dal framework quando un riquadro è stato effettuato mobile.|  
|[CPane::OnBeforeDock](../Topic/CPane::OnBeforeDock.md)|Chiamato dal framework quando il riquadro sta per essere ancorato.|  
|[CPane::OnBeforeFloat](../Topic/CPane::OnBeforeFloat.md)|Chiamato dal framework quando un riquadro sta per essere eseguita mobile.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPane::m\_bHandleMinSize](../Topic/CPane::m_bHandleMinSize.md)|Consente la gestione coerente della dimensione minima dei riquadri.|  
|[CPane::m\_recentDockInfo](../Topic/CPane::m_recentDockInfo.md)|Contiene le informazioni recenti di ancoraggio.|  
  
## Note  
 In genere, gli oggetti `CPane` non vengono create direttamente.  Se è necessario un riquadro con funzionalità di ancoraggio, derivare l'oggetto da [CDockablePane](../../mfc/reference/cdockablepane-class.md).  Se è necessaria una funzionalità della barra degli strumenti, derivare l'oggetto da [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).  
  
 Quando si deriva una classe da `CPane`, può essere ancorato in [CDockSite](../../mfc/reference/cdocksite-class.md) e può essere eseguita e in [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
## Requisiti  
 **intestazione:** afxPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)