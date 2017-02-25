---
title: "IView Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IView class"
  - "views [MFC]"
  - "visualizzazioni, classi"
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# IView Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa diversi metodi che utilizzi [CWinFormsView](../../mfc/reference/cwinformsview-class.md) inviare notifiche di visualizzazione a un controllo gestito.  
  
## Sintassi  
  
```  
interface class IView  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IView::OnActivateView](../Topic/IView::OnActivateView.md)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|  
|[IView::OnInitialUpdate](../Topic/IView::OnInitialUpdate.md)|Chiamato dal framework dopo la prima visualizzazione è associata al documento, ma prima della visualizzazione vengono visualizzati inizialmente.|  
|[IView::OnUpdate](../Topic/IView::OnUpdate.md)|Chiamato da MFC dopo che il documento della visualizzazione è stato modificato; questa funzione consente alla visualizzazione aggiornare la visualizzazione per riflettere le modifiche.|  
  
## Note  
 `IView` implementa diversi metodi che utilizzi `CWinFormsView` inoltrare le notifiche di visualizzazione comune a un controllo gestito ospitato.  Questi sono [OnInitialUpdate](../Topic/IView::OnInitialUpdate.md), [OnUpdate](../Topic/IView::OnUpdate.md) e [OnActivateView](../Topic/IView::OnActivateView.md).  
  
 `IView` è simile a [CView](../../mfc/reference/cview-class.md), ma viene utilizzato solo con le visualizzazioni gestite e controlli.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## Requisiti  
 Intestazione: afxwinforms.h \(definito nell'assembly atlmfc \\ spostamento di liberare \\ mfcmifc80.dll\)  
  
## Vedere anche  
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)