---
title: "Classe CAnimationStoryboardEventHandler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationStoryboardEventHandler"
  - "CAnimationStoryboardEventHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationStoryboardEventHandler (classe)"
ms.assetid: 10a7e86b-c02d-4124-9a2e-61ecf8ac62fc
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe CAnimationStoryboardEventHandler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un callback, chiamato dall'API di animazione quando viene modificato lo stato di uno storyboard o viene aggiornato uno storyboard.  
  
## Sintassi  
  
```  
class CAnimationStoryboardEventHandler : public CUIAnimationStoryboardEventHandlerBase<CAnimationStoryboardEventHandler>;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler](../Topic/CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler.md)|Costruisce un oggetto `CAnimationStoryboardEventHandler`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CreateInstance](../Topic/CAnimationStoryboardEventHandler::CreateInstance.md)|Crea un'istanza di callback `CAnimationStoryboardEventHandler`.|  
|[CAnimationStoryboardEventHandler::OnStoryboardStatusChanged](../Topic/CAnimationStoryboardEventHandler::OnStoryboardStatusChanged.md)|Gestisce gli eventi `OnStoryboardStatusChanged`, che si verificano quando lo stato di uno storyboard viene modificato \(override `CUIAnimationStoryboardEventHandlerBase::OnStoryboardStatusChanged`\).|  
|[CAnimationStoryboardEventHandler::OnStoryboardUpdated](../Topic/CAnimationStoryboardEventHandler::OnStoryboardUpdated.md)|Gestisce gli eventi `OnStoryboardUpdated`, che si verificano quando viene aggiornato uno storyboard \(override `CUIAnimationStoryboardEventHandlerBase::OnStoryboardUpdated`\).|  
|[CAnimationStoryboardEventHandler::SetAnimationController](../Topic/CAnimationStoryboardEventHandler::SetAnimationController.md)|Archivia un puntatore a un controller dell'animazione per indirizzare eventi.|  
  
## Note  
 Questo gestore eventi viene creato e passato a `IUIAnimationStoryboard::SetStoryboardEventHandler` il metodo, quando si chiama `CAnimationController::EnableStoryboardEventHandler`.  
  
## Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationStoryboardEventHandlerBase`  
  
 `CAnimationStoryboardEventHandler`  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)