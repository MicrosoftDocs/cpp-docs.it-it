---
title: "CMFCFontInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCFontInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCFontInfo class"
  - "CMFCFontInfo::CMFCFontInfo constructor"
ms.assetid: f88329b2-d74e-4921-9441-a3bb6536a049
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CMFCFontInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCFontInfo` descrive il nome e altri attributi di un tipo di carattere.  
  
## Sintassi  
  
```  
class CMFCFontInfo : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCFontInfo`|Costruisce un oggetto `CMFCFontInfo`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontInfo::GetFullName](../Topic/CMFCFontInfo::GetFullName.md)|Recupera i nomi concatenati di un tipo di carattere e il relativo set di caratteri \(script\).|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontInfo::m\_nCharSet](../Topic/CMFCFontInfo::m_nCharSet.md)|Un valore che specifica il set di caratteri \(script\) associato al tipo.|  
|[CMFCFontInfo::m\_nPitchAndFamily](../Topic/CMFCFontInfo::m_nPitchAndFamily.md)|Un valore che specifica il passo e la famiglia di carattere.|  
|[CMFCFontInfo::m\_nType](../Topic/CMFCFontInfo::m_nType.md)|Un valore che specifica il tipo di carattere.|  
|[CMFCFontInfo::m\_strName](../Topic/CMFCFontInfo::m_strName.md)|Il nome del tipo; ad esempio, **Arial**.|  
|[CMFCFontInfo::m\_strScript](../Topic/CMFCFontInfo::m_strScript.md)|Il nome di un set di caratteri \(script\) associato al tipo.|  
  
## Note  
 È possibile collegare un oggetto `CMFCFontInfo` a un elemento della classe [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md).  Chiamare il metodo [CMFCToolBarFontComboBox::GetFontDesc](../Topic/CMFCToolBarFontComboBox::GetFontDesc.md) per recuperare un puntatore a un oggetto `CMFCFontInfo`.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i diversi membri della classe `CMFCFontInfo`.  Nell'esempio viene illustrato come ottenere l'oggetto `CMFCFontInfo` da `CMFCRibbonFontComboBox`e come accedere alle variabili locali.  Questo esempio fa parte [Esempio 2007 demo di MS Office](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#6](../../mfc/reference/codesnippet/CPP/cmfcfontinfo-class_1.cpp)]  
  
## Requisiti  
 **intestazione:** afxtoolbarfontcombobox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [CMFCToolBarFontSizeComboBox Class](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)