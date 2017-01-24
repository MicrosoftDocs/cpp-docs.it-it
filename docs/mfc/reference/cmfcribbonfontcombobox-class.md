---
title: "CMFCRibbonFontComboBox Class | Microsoft Docs"
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
  - "CMFCRibbonFontComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonFontComboBox class"
ms.assetid: 33b4db50-df4f-45fa-8f05-2e6e73c31435
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonFontComboBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una casella combinata che contiene un elenco dei tipi di carattere.  Posizionare la casella combinata in un pannello della barra multifunzione.  
  
## Sintassi  
  
```  
class CMFCRibbonFontComboBox : public CMFCRibbonComboBox  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonFontComboBox::~CMFCRibbonFontComboBox`|Distruttore.|  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::CMFCRibbonFontComboBox](../Topic/CMFCRibbonFontComboBox::CMFCRibbonFontComboBox.md)|Costruisce e inizializza un oggetto `CMFCRibbonFontComboBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::BuildFonts](../Topic/CMFCRibbonFontComboBox::BuildFonts.md)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati.|  
|`CMFCRibbonFontComboBox::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonFontComboBox::GetCharSet](../Topic/CMFCRibbonFontComboBox::GetCharSet.md)|Restituisce il set di caratteri specificato.|  
|[CMFCRibbonFontComboBox::GetFontDesc](../Topic/CMFCRibbonFontComboBox::GetFontDesc.md)||  
|[CMFCRibbonFontComboBox::GetFontType](../Topic/CMFCRibbonFontComboBox::GetFontType.md)|Restituisce i tipi di carattere da visualizzare nella casella combinata.  Le opzioni valide sono DEVICE\_FONTTYPE, RASTER\_FONTTYPE e TRUETYPE\_FONTTYPE oppure qualsiasi altra combinazione bit per bit.|  
|[CMFCRibbonFontComboBox::GetPitchAndFamily](../Topic/CMFCRibbonFontComboBox::GetPitchAndFamily.md)|Restituisce il passo e la famiglia di caratteri della barra multifunzione che vengono visualizzate nella casella combinata.|  
|`CMFCRibbonFontComboBox::GetThisClass`|Usato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|  
|[CMFCRibbonFontComboBox::RebuildFonts](../Topic/CMFCRibbonFontComboBox::RebuildFonts.md)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati in precedenza.|  
|[CMFCRibbonFontComboBox::SetFont](../Topic/CMFCRibbonFontComboBox::SetFont.md)|Seleziona il tipo di carattere specificato nella casella combinata.|  
  
## Note  
 Dopo aver creato un oggetto `CMFCRibbonFontComboBox`, aggiungerlo a un pannello della barra multifunzione chiamando [CMFCRibbonPanel::Add](../Topic/CMFCRibbonPanel::Add.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
 [CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md)  
  
## Requisiti  
 **Intestazione:** afxRibbonComboBox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonComboBox Class](../../mfc/reference/cmfcribboncombobox-class.md)