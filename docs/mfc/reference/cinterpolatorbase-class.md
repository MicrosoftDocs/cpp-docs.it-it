---
title: "Classe CInterpolatorBase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CInterpolatorBase"
  - "CInterpolatorBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInterpolatorBase (classe)"
ms.assetid: bbc3dce7-8398-47f9-b97e-e4fd2d737232
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe CInterpolatorBase
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un callback, chiamato dall'API di animazione quando deve essere calcolato un nuovo valore di una variabile di animazione.  
  
## Sintassi  
  
```  
class CInterpolatorBase : public CUIAnimationInterpolatorBase<CInterpolatorBase>;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInterpolatorBase::CInterpolatorBase](../Topic/CInterpolatorBase::CInterpolatorBase.md)|Crea l'oggetto `CInterpolatorBase`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInterpolatorBase::CreateInstance](../Topic/CInterpolatorBase::CreateInstance.md)|Crea un'istanza `CInterpolatorBase` e archivia un puntatore a un interpolatore personalizzato, che gestisce gli eventi.|  
|[CInterpolatorBase::GetDependencies](../Topic/CInterpolatorBase::GetDependencies.md)|Ottiene le dipendenze dell'interpolatore.  \(Override `CUIAnimationInterpolatorBase::GetDependencies`\).|  
|[CInterpolatorBase::GetDuration](../Topic/CInterpolatorBase::GetDuration.md)|Ottiene la durata dell'interpolatore.  \(Override `CUIAnimationInterpolatorBase::GetDuration`\).|  
|[CInterpolatorBase::GetFinalValue](../Topic/CInterpolatorBase::GetFinalValue.md)|Ottiene il valore finale al quale punta l'interpolatore.  \(Override `CUIAnimationInterpolatorBase::GetFinalValue`\).|  
|[CInterpolatorBase::InterpolateValue](../Topic/CInterpolatorBase::InterpolateValue.md)|Crea un'interpolazione il valore a un offset specificato \(override `CUIAnimationInterpolatorBase::InterpolateValue`\).|  
|[CInterpolatorBase::InterpolateVelocity](../Topic/CInterpolatorBase::InterpolateVelocity.md)|Crea un'interpolazione la velocità a un offset specificato \(override `CUIAnimationInterpolatorBase::InterpolateVelocity`\).|  
|[CInterpolatorBase::SetCustomInterpolator](../Topic/CInterpolatorBase::SetCustomInterpolator.md)|Archivia un puntatore ad un interpolatore personalizzato che gestirà eventi.|  
|[CInterpolatorBase::SetDuration](../Topic/CInterpolatorBase::SetDuration.md)|Imposta la durata di un interpolatore \(override `CUIAnimationInterpolatorBase::SetDuration`\).|  
|[CInterpolatorBase::SetInitialValueAndVelocity](../Topic/CInterpolatorBase::SetInitialValueAndVelocity.md)|Imposta il valore iniziale dell'interpolatore e la velocità.  \(Override `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`\).|  
  
## Note  
 Questo gestore viene creato e passato a `IUIAnimationTransitionFactory::CreateTransition` quando un oggetto `CCustomTransition` viene creato come parte del processo di inizializzazione di animazione \(avviato da `CAnimationController::AnimateGroup`\).  In genere non è necessario utilizzare direttamente la classe, appena si indica tutti gli eventi a `CCustomInterpolator`classe derivata da, in cui il puntatore passato al costruttore `CCustomTransition`.  
  
## Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationInterpolatorBase`  
  
 `CInterpolatorBase`  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)