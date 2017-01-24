---
title: "Classe CAnimationVariableChangeHandler | Microsoft Docs"
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
  - "afxanimationcontroller/CAnimationVariableChangeHandler"
  - "CAnimationVariableChangeHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationVariableChangeHandler (classe)"
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
caps.latest.revision: 19
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationVariableChangeHandler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.  
  
## Sintassi  
  
```  
class CAnimationVariableChangeHandler : public CUIAnimationVariableChangeHandlerBase<CAnimationVariableChangeHandler>;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CAnimationVariableChangeHandler`|Costruisce un oggetto `CAnimationVariableChangeHandler`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CreateInstance`|Crea un'istanza dell'oggetto `CAnimationVariableChangeHandler`.|  
|[CAnimationVariableChangeHandler::OnValueChanged](../Topic/CAnimationVariableChangeHandler::OnValueChanged.md)|Chiamato quando un valore della variabile di animazione è stato modificato.  \(Override `CUIAnimationVariableChangeHandlerBase::OnValueChanged`\).|  
|[CAnimationVariableChangeHandler::SetAnimationController](../Topic/CAnimationVariableChangeHandler::SetAnimationController.md)|Archivia un puntatore a un controller dell'animazione per indirizzare eventi.|  
  
## Note  
 Questo gestore eventi viene creato e passato a `IUIAnimationVariable::SetVariableChangeHandler` il metodo, quando si chiama `CAnimationVariable::EnableValueChangedEvent` o `CAnimationBaseObject::EnableValueChangedEvent` \(che abilita questo evento per tutte le variabili di animazione incapsulati in un oggetto di animazione\).  
  
## Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableChangeHandlerBase`  
  
 `CAnimationVariableChangeHandler`  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)