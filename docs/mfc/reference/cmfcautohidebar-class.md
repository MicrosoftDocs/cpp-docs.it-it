---
title: "CMFCAutoHideBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAutoHideBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAutoHideToolBar class"
ms.assetid: 54c8d84f-de64-4efd-8a47-3ea0ade40a70
caps.latest.revision: 35
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 37
---
# CMFCAutoHideBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCAutoHideBar` è una classe della barra degli strumenti speciale che implementa la funzionalità Nascondi automaticamente.  
  
## Sintassi  
  
```  
class CMFCAutoHideBar : public CPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAutoHideBar::CMFCAutoHideBar](../Topic/CMFCAutoHideBar::CMFCAutoHideBar.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAutoHideBar::AddAutoHideWindow](../Topic/CMFCAutoHideBar::AddAutoHideWindow.md)||  
|[CMFCAutoHideBar::AllowShowOnPaneMenu](../Topic/CMFCAutoHideBar::AllowShowOnPaneMenu.md)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|  
|[CMFCAutoHideBar::CalcFixedLayout](../Topic/CMFCAutoHideBar::CalcFixedLayout.md)|Esegue l'override di [CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md).|  
|[CMFCAutoHideBar::Create](../Topic/CMFCAutoHideBar::Create.md)|Crea una barra di controllo e la collega all'oggetto [CPane](../../mfc/reference/cpane-class.md).  Esegue l'override di [CPane::Create](../Topic/CPane::Create.md).|  
|[CMFCAutoHideBar::GetFirstAHWindow](../Topic/CMFCAutoHideBar::GetFirstAHWindow.md)||  
|[CMFCAutoHideBar::GetVisibleCount](../Topic/CMFCAutoHideBar::GetVisibleCount.md)||  
|[CMFCAutoHideBar::OnShowControlBarMenu](../Topic/CMFCAutoHideBar::OnShowControlBarMenu.md)|Chiamata eseguita dal framework quando un menu di riquadri speciale sta per essere visualizzato.  Esegue l'override di [CPane::OnShowControlBarMenu](../Topic/CPane::OnShowControlBarMenu.md).|  
|[CMFCAutoHideBar::RemoveAutoHideWindow](../Topic/CMFCAutoHideBar::RemoveAutoHideWindow.md)||  
|[CMFCAutoHideBar::SetActiveInGroup](../Topic/CMFCAutoHideBar::SetActiveInGroup.md)|Esegue l'override di [CPane::SetActiveInGroup](../Topic/CPane::SetActiveInGroup.md).|  
|[CMFCAutoHideBar::SetRecentVisibleState](../Topic/CMFCAutoHideBar::SetRecentVisibleState.md)||  
|[CMFCAutoHideBar::ShowAutoHideWindow](../Topic/CMFCAutoHideBar::ShowAutoHideWindow.md)||  
|[CMFCAutoHideBar::StretchPane](../Topic/CMFCAutoHideBar::StretchPane.md)|Adatta un riquadro in verticale o in orizzontale.  Esegue l'override di [CBasePane::StretchPane](../Topic/CBasePane::StretchPane.md).|  
|[CMFCAutoHideBar::UnSetAutoHideMode](../Topic/CMFCAutoHideBar::UnSetAutoHideMode.md)||  
|[CMFCAutoHideBar::UpdateVisibleState](../Topic/CMFCAutoHideBar::UpdateVisibleState.md)||  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAutoHideBar::m\_nShowAHWndDelay](../Topic/CMFCAutoHideBar::m_nShowAHWndDelay.md)|All'azione ritardata tra il momento in cui l'utente posiziona il cursore del mouse su una [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md) e il momento in cui il framework mostra la finestra collegata.|  
  
## Note  
 Quando l'utente attiva un pannello dock di modalità Nascondi automaticamente, il framework crea automaticamente un oggetto `CMFCAutoHideBar`.  Crea anche gli oggetti [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) e [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) necessari.  Ogni oggetto `CAutoHideDockSite` viene associato a un singolo `CMFCAutoHideButton`.  
  
 La classe `CMFCAutoHideBar` implementa la visualizzazione di un `CAutoHideDockSite` quando il mouse di un utente passa sopra a un `CMFCAutoHideButton`.  Quando la barra degli strumenti riceve un messaggio di WM\_MOUSEMOVE, `CMFCAutoHideBar` avvia un timer.  Quando il timer completa, invia alla barra degli strumenti una notifica degli eventi di WM\_TIMER.  La barra degli strumenti gestisce questo evento controllando che il puntatore del mouse sia posizionato sullo stesso pulsante Nascondi automaticamente inserito quando il timer è stato avviato.  In tal caso, viene visualizzato l'oggetto `CAutoHideDockSite` allegato.  
  
 È possibile controllare la durata del ritardo del timer impostando `m_nShowAHWndDelay`.  Il valore predefinito è 400 ms.  
  
## Esempio  
 L'esempio seguente illustra come costruire un oggetto `CMFCAutoHideBar` e usare il relativo metodo `GetDockSiteRow`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/CPP/cmfcautohidebar-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md)  
  
## Requisiti  
 **Intestazione:** afxautohidebar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)   
 [CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)   
 [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md)