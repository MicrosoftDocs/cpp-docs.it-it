---
title: "CTabbedPane Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTabbedPane"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTabbedPane class"
ms.assetid: f4dc5215-b789-4f2d-8c62-477aceda3578
caps.latest.revision: 27
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTabbedPane Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di un riquadro con schede staccabili.  
  
## Sintassi  
  
```  
class CTabbedPane : public CBaseTabbedPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CTabbedPane::CTabbedPane`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabbedPane::DetachPane](../Topic/CTabbedPane::DetachPane.md)|\(Esegue l'override di [CBaseTabbedPane::DetachPane](../Topic/CBaseTabbedPane::DetachPane.md).\)|  
|[CTabbedPane::EnableTabAutoColor](../Topic/CTabbedPane::EnableTabAutoColor.md)|Abilita o disabilita la colorazione automatica delle schede.|  
|[CTabbedPane::FloatTab](../Topic/CTabbedPane::FloatTab.md)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.  \(Esegue l'override di [CBaseTabbedPane::FloatTab](../Topic/CBaseTabbedPane::FloatTab.md).\)|  
|[CTabbedPane::GetTabArea](../Topic/CTabbedPane::GetTabArea.md)|Restituisce le dimensioni e la posizione dell'area della scheda nella finestra a schede.|  
|[CTabbedPane::GetTabWnd](../Topic/CTabbedPane::GetTabWnd.md)||  
|[CTabbedPane::HasAutoHideMode](../Topic/CTabbedPane::HasAutoHideMode.md)|Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente.  \(Esegue l'override di [CBaseTabbedPane::HasAutoHideMode](../Topic/CBaseTabbedPane::HasAutoHideMode.md).\)|  
|[CTabbedPane::IsTabLocationBottom](../Topic/CTabbedPane::IsTabLocationBottom.md)|Determina se le schede si trovano nella parte inferiore della finestra.|  
|[CTabbedPane::ResetTabs](../Topic/CTabbedPane::ResetTabs.md)|Reimposta lo stato predefinito di tutti i riquadri a schede.|  
|[CTabbedPane::SetTabAutoColors](../Topic/CTabbedPane::SetTabAutoColors.md)|Imposta un elenco di colori personalizzati può essere usato quando è abilitata la funzionalità Colore automatico.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTabbedPane::m\_bTabsAlwaysTop](../Topic/CTabbedPane::m_bTabsAlwaysTop.md)|Posizione predefinita delle schede nell'applicazione.|  
|[CTabbedPane::m\_pTabWndRTC](../Topic/CTabbedPane::m_pTabWndRTC.md)|Informazioni sulla classe di runtime per un oggetto personalizzato derivato da `CMFCTabCtrl`.|  
  
## Note  
 Il framework crea automaticamente un'istanza di questa classe quando un utente collega un riquadro a un altro posizionando il puntatore del mouse sul titolo del secondo riquadro.  Tutti i riquadri a schede create dal framework dispongono di un ID \-1.  
  
 Per specificare schede normali anziché schede con lo stile di Outlook, passare lo stile `AFX_CBRS_REGULAR_TABS` al metodo [CDockablePane::CreateEx](../Topic/CDockablePane::CreateEx.md).  
  
 Se si crea un riquadro a schede con schede rimovibili, il riquadro può eliminato automaticamente dal framework. Non è pertanto consigliabile archiviare il puntatore.  Per passare un puntatore al riquadro a schede, chiamare il metodo `CBasePane::GetParentTabbedPane`.  
  
## Esempio  
 In questo esempio viene creato un oggetto `CTabbedPane`.  Viene quindi usato [CBaseTabbedPane::AddTab](../Topic/CBaseTabbedPane::AddTab.md) per collegare le schede aggiuntive.  
  
```  
CTabbedPane* pTabbededBar = new CTabbedPane (TRUE);  
if (!pTabbededBar->Create (_T(""), this, CRect (0, 0, 200, 200),  
                           TRUE,   
                           (UINT) -1,  
                           WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS |  
                           WS_CLIPCHILDREN | CBRS_LEFT |    
                           CBRS_FLOAT_MULTI))  
{  
    TRACE0("Failed to create Solution Explorer bar\n");  
    return FALSE;      // fail to create  
}  
  
pTabbededBar->AddTab (&m_wndClassView);  
pTabbededBar->AddTab (&m_wndResourceView);  
pTabbededBar->AddTab (&m_wndFileView);  
pTabbededBar->EnableDocking(CBRS_ALIGN_ANY);  
DockPane(pTabbededBar);  
```  
  
## Esempio  
 Un altro modo per creare un oggetto barra di controllo a schede prevede l'uso di [CDockablePane::AttachToTabWnd](../Topic/CDockablePane::AttachToTabWnd.md).  Il metodo `AttachToTabWnd` crea dinamicamente un oggetto riquadro a schede usando le informazioni sulle classi di runtime impostate da [CDockablePane::SetTabbedPaneRTC](../Topic/CDockablePane::SetTabbedPaneRTC.md).  
  
 In questo esempio viene creato dinamicamente un riquadro a schede, vengono collegate due schede e la seconda scheda viene impostata come non rimovibile.  
  
```  
DockPane(&m_wndClassView);  
CTabbedPane* pTabbedBar = NULL;  
m_wndResourceView.AttachToTabWnd (&m_wndClassView, DM_SHOW, TRUE,  
                                  (CDockablePane**) &pTabbedBar);  
m_wndFileView.AttachToTabWnd (pTabbedBar, DM_SHOW, TRUE,  
                              (CDockablePane**) &pTabbedBar);  
pTabbedBar->GetUnderlyingWindow ()->EnableTabDetach (1, FALSE);  
```  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)  
  
 [CTabbedPane](../../mfc/reference/ctabbedpane-class.md)  
  
## Requisiti  
 **Intestazione:** afxTabbedPane.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)