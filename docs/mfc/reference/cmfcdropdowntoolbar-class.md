---
title: "CMFCDropDownToolBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDropDownToolBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDropDownToolBar class"
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 39
---
# CMFCDropDownToolBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una barra degli strumenti visualizzato quando l'utente preme e utilizza un pulsante della barra degli strumenti di primo livello.  
  
## Sintassi  
  
```  
class CMFCDropDownToolBar : public CMFCToolBar  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolBar::AllowShowOnPaneMenu](../Topic/CMFCDropDownToolBar::AllowShowOnPaneMenu.md)|\(Override `CPane::AllowShowOnPaneMenu`\).|  
|[CMFCDropDownToolBar::LoadBitmap](../Topic/CMFCDropDownToolBar::LoadBitmap.md)|\(Override [CMFCToolBar::LoadBitmap](../Topic/CMFCToolBar::LoadBitmap.md)\).|  
|[CMFCDropDownToolBar::LoadToolBar](../Topic/CMFCDropDownToolBar::LoadToolBar.md)|\(Override [CMFCToolBar::LoadToolBar](../Topic/CMFCToolBar::LoadToolBar.md)\).|  
|[CMFCDropDownToolBar::OnLButtonUp](../Topic/CMFCDropDownToolBar::OnLButtonUp.md)||  
|[CMFCDropDownToolBar::OnMouseMove](../Topic/CMFCDropDownToolBar::OnMouseMove.md)||  
|[CMFCDropDownToolBar::OnSendCommand](../Topic/CMFCDropDownToolBar::OnSendCommand.md)|\(Override `CMFCToolBar::OnSendCommand`\).|  
|[CMFCDropDownToolBar::OnUpdateCmdUI](../Topic/CMFCDropDownToolBar::OnUpdateCmdUI.md)|\(Override [CMFCToolBar::OnUpdateCmdUI](http://msdn.microsoft.com/it-it/571a38ab-2a56-4968-9796-273516126f80)\).|  
  
### Note  
 Un oggetto `CMFCDropDownToolBar` combina l'aspetto di una barra degli strumenti con il comportamento di un menu di scelta rapida.  Quando un utente preme e contiene un pulsante della barra degli strumenti a discesa \(vedere [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)\), una barra degli strumenti a discesa viene visualizzata e l'utente può selezionare un pulsante della barra degli strumenti a discesa scorrere su e rilasciando il pulsante del mouse.  Dopo la selezione di un pulsante nella barra degli strumenti a discesa, il pulsante viene visualizzato come il pulsante corrente nella barra degli strumenti di primo livello.  
  
 Una barra degli strumenti a discesa non può essere personalizzata o ancorata e non presenta uno stato di sradicamento.  
  
 Nella figura seguente viene illustrato un oggetto `CMFCDropDownToolBar` :  
  
 ![Esempio di CMFCDropDownToolbar](../../mfc/reference/media/cmfcdropdown.png "CMFCDropDown")  
  
 Creare un oggetto `CMFCDropDownToolBar` la stessa modalità con cui si crea una barra degli strumenti comuni \(vedere [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)\).  
  
 Per inserire la barra degli strumenti a discesa nella barra degli strumenti padre:  
  
 1.  Riservare un ID di risorsa fittizio al pulsante nella risorsa padre della barra degli strumenti.  
  
 2.  Creare un oggetto `CMFCDropDownToolBarButton` contenente la barra degli strumenti a discesa \(per ulteriori informazioni, vedere [CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../Topic/CMFCDropDownToolbarButton::CMFCDropDownToolbarButton.md)\).  
  
 3.  Sostituire il pulsante fittizio con l'oggetto `CMFCDropDownToolBarButton` utilizzando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  
  
 Per ulteriori informazioni sui pulsanti della barra degli strumenti, vedere [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  Per un esempio di una barra degli strumenti a discesa, vedere il progetto di esempio VisualStudioDemo.  
  
## Esempio  
 Il seguente esempio viene illustrato come utilizzare il metodo `Create` nella classe `CMFCDropDownToolBar`.  Questo frammento di codice fa parte [Esempio demo di Visual Studio](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#29](../../mfc/codesnippet/CPP/cmfcdropdowntoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_VisualStudioDemo#30](../../mfc/codesnippet/CPP/cmfcdropdowntoolbar-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)  
  
## Requisiti  
 **intestazione:** afxdropdowntoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBar::Create](../Topic/CMFCToolBar::Create.md)   
 [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)   
 [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)