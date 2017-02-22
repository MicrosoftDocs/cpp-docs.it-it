---
title: "CMDITabInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDITabInfo"
  - "CMDITabInfo.CMDITabInfo"
  - "CMDITabInfo::CMDITabInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDITabInfo class"
  - "CMDITabInfo class, costruttore"
ms.assetid: 988ae1b7-4f7f-4239-b88f-7e28b3291c5e
caps.latest.revision: 37
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 39
---
# CMDITabInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMDITabInfo` viene utilizzata per passare i parametri al metodo [CMDIFrameWndEx::EnableMDITabbedGroups](../Topic/CMDIFrameWndEx::EnableMDITabbedGroups.md).  Membri del gruppo di questa classe per controllare il comportamento dei gruppi MDI a schede.  
  
## Sintassi  
  
```  
class CMDITabInfo   
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMDITabInfo::CMDITabInfo`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDITabInfo::Serialize](../Topic/CMDITabInfo::Serialize.md)|Lettura o scrittura questo oggetto da o in un archivio.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDITabInfo::m\_bActiveTabCloseButton;](../Topic/CMDITabInfo::m_bActiveTabCloseButton;.md)|Specifica se un pulsante **Chiudi** visualizzato nell'etichetta della scheda attiva.|  
|[CMDITabInfo::m\_bAutoColor](../Topic/CMDITabInfo::m_bAutoColor.md)|Specifica se a schede MDI.|  
|[CMDITabInfo::m\_bDocumentMenu](../Topic/CMDITabInfo::m_bDocumentMenu.md)|Specifica se il gruppo della scheda per visualizzare un menu di scelta rapida che viene visualizzato un elenco di documenti o i pulsanti di scorrimento aperti le visualizzazioni.|  
|[CMDITabInfo::m\_bEnableTabSwap](../Topic/CMDITabInfo::m_bEnableTabSwap.md)|Specifica se l'utente può cambiare posizioni delle schede trascinando.|  
|[CMDITabInfo::m\_bFlatFrame](../Topic/CMDITabInfo::m_bFlatFrame.md)|Specifica se le schede dispongono di un frame piano.|  
|[CMDITabInfo::m\_bTabCloseButton](../Topic/CMDITabInfo::m_bTabCloseButton.md)|Specifica se ogni etichetta della scheda verrà visualizzato un pulsante **Chiudi**.|  
|[CMDITabInfo::m\_bTabCustomTooltips](../Topic/CMDITabInfo::m_bTabCustomTooltips.md)|Specifica se le descrizioni comandi personalizzate abilitate.|  
|[CMDITabInfo::m\_bTabIcons](../Topic/CMDITabInfo::m_bTabIcons.md)|Specifica se visualizzare le icone nelle schede MDI.|  
|[CMDITabInfo::m\_nTabBorderSize](../Topic/CMDITabInfo::m_nTabBorderSize.md)|Specifica la dimensione del bordo di ogni finestra della scheda.|  
|[CMDITabInfo::m\_style](../Topic/CMDITabInfo::m_style.md)|Specifica lo stile delle etichette della scheda.|  
|[CMDITabInfo::m\_tabLocation](../Topic/CMDITabInfo::m_tabLocation.md)|Specifica se le etichette delle schede risiedono nella parte superiore o inferiore della pagina.|  
  
## Note  
 Questa classe specifica i parametri dei gruppi di schede MDI del framework crea.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come impostare i valori delle variabili membro nella classe `CMDITabInfo`.  
  
 [!code-cpp[NVC_MFC_MDITab#1](../../mfc/reference/codesnippet/CPP/cmditabinfo-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CMDITabInfo](../../mfc/reference/cmditabinfo-class.md)  
  
## Requisiti  
 **intestazione:** afxmdiclientareawnd.h  
  
## Vedere anche  
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)   
 [Gruppi a schede MDI](../../mfc/mdi-tabbed-groups.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)