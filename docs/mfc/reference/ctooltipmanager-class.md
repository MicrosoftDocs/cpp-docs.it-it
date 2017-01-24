---
title: "CTooltipManager Class | Microsoft Docs"
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
  - "CTooltipManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTooltipManager class"
ms.assetid: c71779d7-8b6e-47ef-8500-d4552731fe86
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTooltipManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce informazioni di runtime sulle descrizioni comandi.  L'istanza della classe `CTooltipManager` viene avviata una volta per applicazione.  
  
## Sintassi  
  
```  
class CTooltipManager : public CObject  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTooltipManager::CreateToolTip](../Topic/CTooltipManager::CreateToolTip.md)|Crea un controllo ToolTip per i tipi di controllo di Windows specificati.|  
|[CTooltipManager::DeleteToolTip](../Topic/CTooltipManager::DeleteToolTip.md)|Elimina un controllo ToolTip.|  
|[CTooltipManager::SetTooltipParams](../Topic/CTooltipManager::SetTooltipParams.md)|Personalizza l'aspetto visivo del controllo ToolTip per i tipi di controllo di Windows specificati.|  
|[CTooltipManager::SetTooltipText](../Topic/CTooltipManager::SetTooltipText.md)|Imposta il testo e la descrizione per un controllo ToolTip.|  
|[CTooltipManager::UpdateTooltips](../Topic/CTooltipManager::UpdateTooltips.md)||  
  
## Note  
 Usare [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo` e `CTooltipManager` congiuntamente per implementare le descrizioni comandi personalizzate nell'applicazione.  Per un esempio di come usare queste classi di descrizione comandi, vedere l'argomento [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)  
  
## Requisiti  
 **Intestazione:** afxtooltipmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md)   
 [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md)