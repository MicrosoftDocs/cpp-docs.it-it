---
title: "CMFCToolBarFontComboBox Class | Microsoft Docs"
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
  - "CMFCToolBarFontComboBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarFontComboBox class"
ms.assetid: 25f8e08c-aadd-4cb5-9581-a99d49d444b1
caps.latest.revision: 29
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCToolBarFontComboBox Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare un tipo di carattere da un elenco di tipi di carattere di sistema.  
  
## Sintassi  
  
```  
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::CMFCToolBarFontComboBox](../Topic/CMFCToolBarFontComboBox::CMFCToolBarFontComboBox.md)|Costruisce un oggetto `CMFCToolBarFontComboBox`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::GetFontDesc](../Topic/CMFCToolBarFontComboBox::GetFontDesc.md)|Restituisce un puntatore a un oggetto `CMFCFontInfo` per un indice specificato nella casella combinata.|  
|[CMFCToolBarFontComboBox::SetFont](../Topic/CMFCToolBarFontComboBox::SetFont.md)|Selezionare un tipo di carattere nella casella combinata di carattere in base al nome del tipo di carattere, o il prefisso e il set di caratteri di carattere.|  
  
### Membri di dati  
 [CMFCToolBarFontComboBox::m\_nFontHeight](../Topic/CMFCToolBarFontComboBox::m_nFontHeight.md)  
 L'altezza dei caratteri nella casella combinata di carattere.  
  
## Note  
 Per aggiungere un pulsante della casella combinata di carattere in una barra degli strumenti, seguire questi passaggi:  
  
1.  Riservare un ID di risorsa fittizio al pulsante nella risorsa padre della barra degli strumenti.  
  
2.  Costruire un oggetto `CMFCToolBarFontComboBox`.  
  
3.  Nel gestore di messaggi che elabora il messaggio `AFX_WM_RESETTOOLBAR`, sostituire il pulsante originale con un nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md).  
  
4.  Sincronizza il tipo di carattere selezionato nella casella combinata con il tipo di carattere del documento tramite il metodo [CMFCToolBarFontComboBox::SetFont](../Topic/CMFCToolBarFontComboBox::SetFont.md).  
  
 Per sincronizzare il tipo di documento con il tipo di carattere selezionato nella casella combinata, utilizzare il metodo [CMFCToolBarFontComboBox::GetFontDesc](../Topic/CMFCToolBarFontComboBox::GetFontDesc.md) per recuperare gli attributi del tipo di carattere selezionato e utilizzare gli attributi per creare un oggetto [CFont Class](../../mfc/reference/cfont-class.md).  
  
 Il pulsante della casella combinata di carattere chiama la funzione Win32 [EnumFontFamiliesEx](http://msdn.microsoft.com/library/windows/desktop/dd162620) per determinare i tipi di carattere dello schermo e della stampante disponibili nel sistema.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbarfontcombobox.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBarComboBoxButton Class](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [CMFCFontInfo Class](../../mfc/reference/cmfcfontinfo-class.md)   
 [CMFCToolBar::ReplaceButton](../Topic/CMFCToolBar::ReplaceButton.md)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)