---
title: "CMFCRibbonUndoButton Class | Microsoft Docs"
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
  - "CMFCRibbonUndoButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonUndoButton class"
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
caps.latest.revision: 35
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonUndoButton Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonUndoButton` implementa un pulsante dell'elenco a discesa che contiene i controlli utente più recenti.  Gli utenti possono selezionare uno o più controlli più recenti dall'elenco a discesa ripeti o annullarli.  
  
## Sintassi  
  
```  
class CMFCRibbonUndoButton : public CMFCRibbonGallery  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](../Topic/CMFCRibbonUndoButton::CMFCRibbonUndoButton.md)|Crea un nuovo oggetto `CMFCRibbonUndoButton` utilizzando l'id di comando specificata, l'etichetta di testo e le immagini dall'elenco immagini dell'oggetto padre.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::AddUndoAction](../Topic/CMFCRibbonUndoButton::AddUndoAction.md)|Aggiunge una nuova azione all'elenco di azioni.|  
|[CMFCRibbonUndoButton::CleanUpUndoList](../Topic/CMFCRibbonUndoButton::CleanUpUndoList.md)|Cancella l'elenco delle azioni, ovvero l'elenco a discesa.|  
|[CMFCRibbonUndoButton::GetActionNumber](../Topic/CMFCRibbonUndoButton::GetActionNumber.md)|Determina il numero di elementi che un utente ha selezionato dall'elenco a discesa.|  
|[CMFCRibbonUndoButton::HasMenu](../Topic/CMFCRibbonUndoButton::HasMenu.md)|Indica se l'oggetto contiene un menu.|  
  
## Note  
 La classe `CMFCRibbonUndoButton` utilizza uno stack per rappresentare l'elenco a discesa.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto con la classe `CMFCRibbonUndoButton` e aggiunge una nuova azione all'elenco di azioni.  Questo frammento di codice fa parte [Esempio della barra multifunzione gadget](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets#2](../../mfc/reference/codesnippet/CPP/cmfcribbonundobutton-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonUndoButton](../../mfc/reference/cmfcribbonundobutton-class.md)  
  
## Requisiti  
 **intestazione:** afxribbonundobutton.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)