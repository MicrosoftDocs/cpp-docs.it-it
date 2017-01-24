---
title: "Classe CAnimationTimerEventHandler | Microsoft Docs"
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
  - "afxanimationcontroller/CAnimationTimerEventHandler"
  - "CAnimationTimerEventHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationTimerEventHandler (classe)"
ms.assetid: 188dea3b-4b5e-4f6b-8df9-09d993a21619
caps.latest.revision: 18
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationTimerEventHandler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un callback, chiamato dall'API di animazione quando si verificano eventi di temporizzazione.  
  
## Sintassi  
  
```  
class CAnimationTimerEventHandler : public CUIAnimationTimerEventHandlerBase<CAnimationTimerEventHandler>;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationTimerEventHandler::CreateInstance](../Topic/CAnimationTimerEventHandler::CreateInstance.md)|Crea un'istanza di callback `CAnimationTimerEventHandler`.|  
|[CAnimationTimerEventHandler::OnPostUpdate](../Topic/CAnimationTimerEventHandler::OnPostUpdate.md)|Gestisce gli eventi che si verificano al termine dell'aggiornamento di un'animazione.  \(Override `CUIAnimationTimerEventHandlerBase::OnPostUpdate`\).|  
|[CAnimationTimerEventHandler::OnPreUpdate](../Topic/CAnimationTimerEventHandler::OnPreUpdate.md)|Gestisce gli eventi che si verificano prima dell'inizio dell'aggiornamento di un'animazione.  \(Override `CUIAnimationTimerEventHandlerBase::OnPreUpdate`\).|  
|[CAnimationTimerEventHandler::OnRenderingTooSlow](../Topic/CAnimationTimerEventHandler::OnRenderingTooSlow.md)|Gestisce gli eventi che si verificano quando la frequenza di rendering dei fotogrammi per un'animazione scende sotto la frequenza dei fotogrammi minima appropriata.  \(Override `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`\).|  
|[CAnimationTimerEventHandler::SetAnimationController](../Topic/CAnimationTimerEventHandler::SetAnimationController.md)|Archivia un puntatore a un controller dell'animazione per indirizzare eventi.|  
  
## Note  
 Questo gestore dell'evento viene creato e viene passato a IUIAnimationTimer::SetTimerEventHandler quando si chiama CAnimationController::EnableAnimationTimerEventHandler.  
  
## Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationTimerEventHandlerBase`  
  
 `CAnimationTimerEventHandler`  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)