---
title: "CMFCRibbonLabel Class | Microsoft Docs"
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
  - "CMFCRibbonLabel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonLabel class"
ms.assetid: 0346c891-83bf-4f20-b8a1-c84cf2aadced
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonLabel Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un'etichetta di testo non selezionabile per una barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonLabel : public CMFCRibbonButton  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonLabel::CMFCRibbonLabel](../Topic/CMFCRibbonLabel::CMFCRibbonLabel.md)|Costrutti e inizializza un oggetto `CMFCRibbonLabel` con la stringa di testo specificata.|  
|`CMFCRibbonLabel::~CMFCRibbonLabel`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonLabel::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCRibbonLabel::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCRibbonLabel::SetACCData](../Topic/CMFCRibbonLabel::SetACCData.md)|Determina i dati di accessibilità per l'elemento corrente dell'etichetta della barra multifunzione.  \(Override [CMFCRibbonButton::SetACCData](../Topic/CMFCRibbonButton::SetACCData.md)\).|  
  
### Note  
 Dopo avere creato un'etichetta della barra multifunzione, aggiungerla a un pannello chiamando [CMFCRibbonPanel::Add](../Topic/CMFCRibbonPanel::Add.md).  
  
 Non è possibile aggiungere un'etichetta della barra multifunzione alla barra di accesso rapido.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonLabel](../../mfc/reference/cmfcribbonlabel-class.md)  
  
## Requisiti  
 **intestazione:** afxRibbonLabel.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)