---
title: "CMFCFontComboBox Class | Microsoft Docs"
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
  - "CMFCFontComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCFontComboBox class"
  - "CMFCFontComboBox::CompareItem method"
  - "CMFCFontComboBox::DrawItem method"
  - "CMFCFontComboBox::MeasureItem method"
  - "CMFCFontComboBox::PreTranslateMessage method"
ms.assetid: 9a53fb0c-7b45-486d-8187-2a4c723d9fbb
caps.latest.revision: 29
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCFontComboBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCFontComboBox` crea un controllo casella combinata contenente un elenco dei caratteri.  
  
## Sintassi  
  
```  
class CMFCFontComboBox : public CComboBox  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontComboBox::CMFCFontComboBox](../Topic/CMFCFontComboBox::CMFCFontComboBox.md)|Costruisce un oggetto `CMFCFontComboBox`.|  
|`CMFCFontComboBox::~CMFCFontComboBox`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCFontComboBox::CompareItem`|Chiamato dal framework per determinare la posizione relativa di nuovo elemento della casella di riepilogo ordinata del controllo casella combinata corrente di carattere.  \(Override [CComboBox::CompareItem](../Topic/CComboBox::CompareItem.md)\).|  
|`CMFCFontComboBox::DrawItem`|Chiamato dal framework per estrarre un elemento specificato nel controllo casella combinata corrente di carattere.  \(Override [CComboBox::DrawItem](../Topic/CComboBox::DrawItem.md)\).|  
|[CMFCFontComboBox::GetSelFont](../Topic/CMFCFontComboBox::GetSelFont.md)|Recupera le informazioni sul tipo di carattere attualmente selezionata.|  
|`CMFCFontComboBox::MeasureItem`|Chiamato dal framework per notificare Windows delle dimensioni della casella di riepilogo nel controllo casella combinata corrente di carattere.  \(Override [CComboBox::MeasureItem](../Topic/CComboBox::MeasureItem.md)\).|  
|`CMFCFontComboBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md)\).|  
|[CMFCFontComboBox::SelectFont](../Topic/CMFCFontComboBox::SelectFont.md)|Selezionare il tipo di carattere corrispondente ai criteri specificati dalla casella combinata di carattere.|  
|[CMFCFontComboBox::Setup](../Topic/CMFCFontComboBox::Setup.md)|Inizializza l'elenco di elementi della casella combinata di carattere.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontComboBox::m\_bDrawUsingFont](../Topic/CMFCFontComboBox::m_bDrawUsingFont.md)|Indica al framework del tipo di carattere da utilizzare per disegnare l'elemento etichetta nella casella combinata corrente di carattere.|  
  
## Note  
 Per utilizzare un oggetto `CMFCFontComboBox` in una finestra di dialogo, aggiungere una variabile `CMFCFontComboBox` alla classe della finestra di dialogo.  Quindi il metodo `OnInitDialog` la classe della finestra di dialogo, chiamare il metodo [CMFCFontComboBox::Setup](../Topic/CMFCFontComboBox::Setup.md) per inizializzare l'elenco di elementi nel controllo casella combinata.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CComboBox](../../mfc/reference/ccombobox-class.md)  
  
 [CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)  
  
## Requisiti  
 **intestazione:** afxfontcombobox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarFontComboBox Class](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md)