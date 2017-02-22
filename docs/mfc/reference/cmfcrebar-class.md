---
title: "CMFCReBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCReBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCReBar class"
ms.assetid: 02a60e29-6224-49c1-9e74-e0a7d9f8d023
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 29
---
# CMFCReBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un oggetto `CMFCReBar` è una barra di controllo che fornisce il layout, la persistenza e le informazioni sullo stato del controllo.  
  
## Sintassi  
  
```  
class CMFCReBar : public CPane  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCReBar::AddBar](../Topic/CMFCReBar::AddBar.md)|Aggiunge una banda a un rebar.|  
|[CMFCReBar::CalcFixedLayout](../Topic/CMFCReBar::CalcFixedLayout.md)|\(Override [CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md)\).|  
|[CMFCReBar::CanFloat](../Topic/CMFCReBar::CanFloat.md)|\(Override [CBasePane::CanFloat](../Topic/CBasePane::CanFloat.md)\).|  
|[CMFCReBar::Create](../Topic/CMFCReBar::Create.md)|Crea il controllo Rebar e lo aggiunge all'oggetto `CMFCReBar`.|  
|[CMFCReBar::EnableDocking](../Topic/CMFCReBar::EnableDocking.md)|\(Override [CBasePane::EnableDocking](../Topic/CBasePane::EnableDocking.md)\).|  
|[CMFCReBar::GetReBarBandInfoSize](../Topic/CMFCReBar::GetReBarBandInfoSize.md)||  
|[CMFCReBar::GetReBarCtrl](../Topic/CMFCReBar::GetReBarCtrl.md)|Fornisce l'accesso diretto a controlli comuni sottostante [CReBarCtrl](../../mfc/reference/crebarctrl-class.md).|  
|[CMFCReBar::OnShowControlBarMenu](../Topic/CMFCReBar::OnShowControlBarMenu.md)|\(Override [CPane::OnShowControlBarMenu](../Topic/CPane::OnShowControlBarMenu.md)\).|  
|[CMFCReBar::OnToolHitTest](../Topic/CMFCReBar::OnToolHitTest.md)|\(Override [CWnd::OnToolHitTest](../Topic/CWnd::OnToolHitTest.md)\).|  
|[CMFCReBar::OnUpdateCmdUI](../Topic/CMFCReBar::OnUpdateCmdUI.md)|\(Override [CBasePane::OnUpdateCmdUI](http://msdn.microsoft.com/it-it/e139f06a-9793-4ee2-bc3d-517389368c77)\).|  
|[CMFCReBar::SetPaneAlignment](../Topic/CMFCReBar::SetPaneAlignment.md)|\(Override [CBasePane::SetPaneAlignment](../Topic/CBasePane::SetPaneAlignment.md)\).|  
  
## Note  
 Un oggetto `CMFCReBar` può contenere diverse finestre figlio.  Ciò include caselle di modifica, barre degli strumenti e caselle di riepilogo.  È possibile ridimensionare il rebar a livello di codice, oppure l'utente può ridimensionare manualmente il rebar trascinando la barra gripper.  È inoltre possibile impostare lo sfondo di un oggetto del rebar in una bitmap di propria scelta.  
  
 Un oggetto del rebar si comporta in modo analogo a un oggetto della barra degli strumenti.  Un controllo Rebar può contenere uno o più bande e ogni banda può contenere una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCReBar`.  L'esempio mostra come creare un controllo Rebar e aggiungere una banda su.  Le funzioni di bande come barra degli strumenti interna.  Questo frammento di codice fa parte [Esempio del rebar](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/CPP/cmfcrebar-class_1.h)]  
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/CPP/cmfcrebar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CMFCReBar](../../mfc/reference/cmfcrebar-class.md)  
  
## Requisiti  
 **intestazione:** afxRebar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CReBarCtrl Class](../../mfc/reference/crebarctrl-class.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)