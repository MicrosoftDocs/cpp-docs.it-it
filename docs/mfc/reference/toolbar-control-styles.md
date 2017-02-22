---
title: "Stili dei controlli ToolBar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stili del controllo ToolBar"
ms.assetid: 0f717eb9-fa32-4263-b852-809238863feb
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Stili dei controlli ToolBar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) dispone di un set di flag di stile che determinano l'aspetto e il comportamento del pulsante.  È possibile impostare una combinazione di queste flag chiamando [CMFCToolBarButton::SetStyle](../Topic/CMFCToolBarButton::SetStyle.md).  In questo argomento vengono elencati i valori delle flag di stile e i relativi significati.  
  
## Valori delle proprietà  
 I valori seguenti determinano il tipo di pulsante che rappresenta il controllo:  
  
 TBBS\_BUTTON  
 Pulsante di comando standard \(impostazione predefinita\).  
  
 TBBS\_CHECKBOX  
 Casella di controllo.  
  
 TBBS\_CHECKGROUP  
 L'inizio di un gruppo di caselle di controllo.  
  
 TBBS\_GROUP  
 L'inizio di un gruppo di pulsanti.  
  
 TBBS\_SEPARATOR  
 Separatore.  
  
 I valori seguenti rappresentano lo stato corrente del controllo:  
  
 TBBS\_CHECKED  
 Casella di controllo selezionata.  
  
 TBBS\_DISABLED  
 Controllo disabilitato.  
  
 TBBS\_INDETERMINATE  
 Casella di controllo in uno stato indeterminato.  
  
 TBBS\_PRESSED  
 Pulsante premuto.  
  
 Il valore seguente modifica il layout del pulsante nella barra degli strumenti:  
  
 TBBS\_BREAK  
 Posiziona l'elemento in una nuova riga o in una nuova colonna senza colonne di separazione.  
  
## Note  
 Lo stile corrente viene memorizzato in [CMFCToolBarButton::m\_nStyle](../Topic/CMFCToolBarButton::m_nStyle.md).  Non si deve impostare direttamente un nuovo valore in `m_nStyle`, poiché alcune classi derivate eseguono elaborazioni aggiuntive quando si chiama `SetStyles`.  
  
 Il gestore visualizzazione determina l'aspetto dei pulsanti in ciascuno stato.  Per ulteriori informazioni, vedere [Gestione visualizzazione](../../mfc/visualization-manager.md).  
  
## Requisiti  
 **Intestazione:** afxtoolbarbutton.h  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Gestione visualizzazione](../../mfc/visualization-manager.md)