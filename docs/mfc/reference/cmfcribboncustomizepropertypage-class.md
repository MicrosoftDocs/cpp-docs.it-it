---
title: "CMFCRibbonCustomizePropertyPage Class | Microsoft Docs"
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
  - "CMFCRibbonCustomizePropertyPage::CreateObject"
  - "CMFCRibbonCustomizePropertyPage"
  - "CMFCRibbonCustomizePropertyPage::~CMFCRibbonCustomizePropertyPage"
  - "CMFCRibbonCustomizePropertyPage.GetThisClass"
  - "CMFCRibbonCustomizePropertyPage.CreateObject"
  - "~CMFCRibbonCustomizePropertyPage"
  - "CreateObject"
  - "CMFCRibbonCustomizePropertyPage.~CMFCRibbonCustomizePropertyPage"
  - "CMFCRibbonCustomizePropertyPage::GetThisClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~CMFCRibbonCustomizePropertyPage destructor"
  - "CMFCRibbonCustomizePropertyPage class"
  - "CMFCRibbonCustomizePropertyPage class, distruttore"
  - "CreateObject method"
  - "GetThisClass method"
ms.assetid: ea32a99a-dfbe-401e-8975-aa191552532f
caps.latest.revision: 26
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonCustomizePropertyPage Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una pagina personalizzata per la finestra di dialogo **Personalizza** nelle applicazioni basate sulla barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonCustomizePropertyPage: public CMFCPropertyPage  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage](../Topic/CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage.md)|Costruisce un oggetto `CMFCRibbonCustomizePropertyPage`.|  
|`CMFCRibbonCustomizePropertyPage::~CMFCRibbonCustomizePropertyPage`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonCustomizePropertyPage::AddCustomCategory](../Topic/CMFCRibbonCustomizePropertyPage::AddCustomCategory.md)|Aggiunge una categoria personalizzata alla casella combinata **Comandi**.|  
|`CMFCRibbonCustomizePropertyPage::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCRibbonCustomizePropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCRibbonCustomizePropertyPage::OnOK](../Topic/CMFCRibbonCustomizePropertyPage::OnOK.md)|Chiamato dal sistema quando un utente fa clic **OK** nella finestra di dialogo **Personalizza**.|  
  
## Note  
 Se si desidera aggiungere controlli personalizzati alla finestra di dialogo **Personalizza**, è necessario gestire il messaggio di AFX\_WM\_ON\_RIBBON\_CUSTOMIZE.  Nel gestore messaggi, creare un'istanza di un oggetto `CMFCRibbonCustomizePropertyPage` nello stack.  Creare un elenco dei controlli personalizzati e quindi chiamare `AddCustomCategory` per aggiungere la nuova pagina nella finestra di dialogo **Personalizza**.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCRibbonCustomizePropertyPage` e aggiungere una categoria personalizzata.  
  
 [!code-cpp[NVC_MFC_RibbonApp#22](../../mfc/reference/codesnippet/CPP/cmfcribboncustomizepropertypage-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)  
  
 [CMFCRibbonCustomizePropertyPage](../../mfc/reference/cmfcribboncustomizepropertypage-class.md)  
  
## Requisiti  
 **intestazione:** afxribboncustomizedialog.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)