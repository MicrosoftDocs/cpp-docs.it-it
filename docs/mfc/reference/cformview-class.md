---
title: "CFormView Class | Microsoft Docs"
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
  - "CFormView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFormView class"
  - "form views"
  - "visualizzazioni, containing controls"
ms.assetid: a99ec313-36f0-4f28-9d2b-de11de14ac19
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFormView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe di base utilizzata per le visualizzazioni di form.  
  
## Sintassi  
  
```  
class CFormView : public CScrollView  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFormView::CFormView](../Topic/CFormView::CFormView.md)|Costruisce un oggetto `CFormView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFormView::IsInitDlgCompleted](../Topic/CFormView::IsInitDlgCompleted.md)|Usato per la sincronizzazione durante l'inizializzazione.|  
  
## Note  
 Una visualizzazione form è essenzialmente una visualizzazione contenente controlli.  Il layout di questi controlli si basa su una risorsa modello di finestra di dialogo.  Usare `CFormView` se si desidera che l'applicazione includa form.  Queste visualizzazioni supportano lo scorrimento, se necessario, grazie alla funzionalità [CScrollView](../../mfc/reference/cscrollview-class.md).  
  
 In caso di [creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md), è possibile basare la relativa classe di visualizzazione su `CFormView`, in modo da renderla un'applicazione basata su form.  
  
 È inoltre possibile inserire nuovi [argomenti form](../../mfc/form-views-mfc.md) nelle applicazioni basate sulla visualizzazione documento.  Anche se l'applicazione inizialmente non supporta i form, Visual C\+\+ aggiungerà questo supporto quando si inserisce un nuovo form.  
  
 La Creazione guidata applicazione MFC e il comando Aggiungi classe rappresentano i metodi preferiti per la creazione di applicazioni basate su form.  Se è necessario creare un'applicazione basata su form senza usare questi metodi, vedere [Creazione di un'applicazione basata su form](../../mfc/reference/creating-a-forms-based-mfc-application.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 `CFormView`  
  
## Requisiti  
 **Intestazione:** afxext.h  
  
## Vedere anche  
 [Esempio MFC SNAPVW](../../top/visual-cpp-samples.md)   
 [Esempio MFC Sample](../../top/visual-cpp-samples.md)   
 [CScrollView Class](../../mfc/reference/cscrollview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [CScrollView Class](../../mfc/reference/cscrollview-class.md)   
 [CView::OnUpdate](../Topic/CView::OnUpdate.md)   
 [CView::OnInitialUpdate](../Topic/CView::OnInitialUpdate.md)   
 [CView::OnPrint](../Topic/CView::OnPrint.md)   
 [CWnd::UpdateData](../Topic/CWnd::UpdateData.md)   
 [CScrollView::ResizeParentToFit](../Topic/CScrollView::ResizeParentToFit.md)