---
title: "CPaneDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPaneDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneDialog class"
  - "CPaneDialog constructor"
  - "CPaneDialog::CreateObject method"
  - "CPaneDialog::OnEraseBkgnd method"
  - "CPaneDialog::OnLButtonDblClk method"
  - "CPaneDialog::OnLButtonDown method"
  - "CPaneDialog::OnUpdateCmdUI method"
  - "CPaneDialog::OnWindowPosChanging method"
ms.assetid: 48a6bb91-4b92-40f5-8907-b3270b146cf6
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CPaneDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CPaneDialog` supporta una finestra di dialogo non modale e ancorabile.  
  
## Sintassi  
  
```  
class CPaneDialog : public CDockablePane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CPaneDialog::CPaneDialog`|Costruttore predefinito.|  
|`CPaneDialog::~CPaneDialog`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneDialog::Create](../Topic/CPaneDialog::Create.md)|Crea una finestra di dialogo ancorabile e allegarlo a un oggetto `CPaneDialog`.|  
|`CPaneDialog::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CPaneDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CPaneDialog::HandleInitDialog](../Topic/CPaneDialog::HandleInitDialog.md)|Gestisce il messaggio [WM\_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428).  \(Ridefinisce `CBasePane::HandleInitDialog`\).|  
|`CPaneDialog::OnEraseBkgnd`|Gestisce il messaggio [WM\_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055).  \(Ridefinisce [CWnd::OnEraseBkgnd](../Topic/CWnd::OnEraseBkgnd.md)\).|  
|`CPaneDialog::OnLButtonDblClk`|Gestisce il messaggio [WM\_LBUTTONDBLCLK](http://msdn.microsoft.com/library/windows/desktop/ms645606).  \(Ridefinisce [CWnd::OnLButtonDblClk](../Topic/CWnd::OnLButtonDblClk.md)\).|  
|`CPaneDialog::OnLButtonDown`|Gestisce il messaggio [WM\_LBUTTONDOWN](http://msdn.microsoft.com/library/windows/desktop/ms645607).  \(Ridefinisce [CWnd::OnLButtonDown](../Topic/CWnd::OnLButtonDown.md)\).|  
|`CPaneDialog::OnUpdateCmdUI`|Chiamato dal framework per aggiornare la finestra di dialogo.  \(Override [CDockablePane::OnUpdateCmdUI](http://msdn.microsoft.com/it-it/5dd61606-1c12-40d4-b024-f3839aa5e2e0)\).|  
|`CPaneDialog::OnWindowPosChanging`|Gestisce il messaggio [WM\_WINDOWPOSCHANGING](http://msdn.microsoft.com/library/windows/desktop/ms632653).  \(Ridefinisce [CWnd::OnWindowPosChanging](../Topic/CWnd::OnWindowPosChanging.md)\).|  
|[CPaneDialog::SetOccDialogInfo](../Topic/CPaneDialog::SetOccDialogInfo.md)|Specifica il modello per una finestra di dialogo che è un contenitore controllo OLE.|  
  
## Note  
 Costruisce un oggetto `CPaneDialog` in due passaggi.  Innanzitutto, creare l'oggetto nel codice.  In secondo luogo, chiamata [CPaneDialog::Create](../Topic/CPaneDialog::Create.md).  È necessario specificare un nome di modello di risorsa o un modello valido ID e passare un puntatore alla finestra padre.  In caso contrario, l'esito negativo di processo di creazione.  La finestra di dialogo deve specificare lo stile di WS\_VISIBLE e di WS\_CHILD.  È consigliabile specificare anche gli stili di WS\_CLIPSIBLINGS e di WS\_CLIPCHILDREN.  Per ulteriori informazioni, vedere [Stili finestra](../../mfc/reference/window-styles.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 [CPaneDialog](../../mfc/reference/cpanedialog-class.md)  
  
## Requisiti  
 **intestazione:** afxpanedialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CDockablePane Class](../../mfc/reference/cdockablepane-class.md)   
 [Stili finestra](../../mfc/reference/window-styles.md)