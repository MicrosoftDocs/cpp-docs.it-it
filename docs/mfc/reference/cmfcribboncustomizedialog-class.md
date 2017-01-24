---
title: "CMFCRibbonCustomizeDialog Class | Microsoft Docs"
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
  - "GetThisClass"
  - "CMFCRibbonCustomizeDialog"
  - "~CMFCRibbonCustomizeDialog"
  - "CMFCRibbonCustomizeDialog::GetThisClass"
  - "CMFCRibbonCustomizeDialog.~CMFCRibbonCustomizeDialog"
  - "CMFCRibbonCustomizeDialog.GetThisClass"
  - "CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~CMFCRibbonCustomizeDialog destructor"
  - "CMFCRibbonCustomizeDialog class"
  - "CMFCRibbonCustomizeDialog class, distruttore"
  - "GetThisClass method"
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonCustomizeDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Visualizzare la pagina **Personalizza** della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](../Topic/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog.md)|Costruisce un oggetto `CMFCRibbonCustomizeDialog`.|  
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
  
## Note  
 MFC creata un'istanza di questa classe automaticamente se non si sviluppa il messaggio di AFX\_WM\_ON\_RIBBON\_CUSTOMIZE, o se viene restituito 0 dal gestore.  
  
 Se si desidera utilizzare la classe nell'applicazione visualizzare la finestra di dialogo **Personalizza** della barra multifunzione, solo crearne un'istanza e chiamare il metodo `DoModal`.  
  
 Poiché questa classe è derivata da [CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md), è possibile aggiungere pagine personalizzate utilizzando `CMFCPropertySheet` API.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
 [CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)  
  
## Requisiti  
 **intestazione:** afxribboncustomizedialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)