---
title: "Classe CLinearTransitionFromSpeed | Microsoft Docs"
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
  - "afxanimationcontroller/CLinearTransitionFromSpeed"
  - "CLinearTransitionFromSpeed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLinearTransitionFromSpeed (classe)"
ms.assetid: 8f159a1c-8893-4017-951e-09e5758aba7d
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CLinearTransitionFromSpeed
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una transizione a velocità lineare.  
  
## Sintassi  
  
```  
class CLinearTransitionFromSpeed : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::CLinearTransitionFromSpeed](../Topic/CLinearTransitionFromSpeed::CLinearTransitionFromSpeed.md)|Costruisce un oggetto di transizione a velocità lineare e lo inizializza con velocità e valore finale.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::Create](../Topic/CLinearTransitionFromSpeed::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::m\_dblFinalValue](../Topic/CLinearTransitionFromSpeed::m_dblFinalValue.md)|Il valore della variabile di animazione alla fine della transizione.|  
|[CLinearTransitionFromSpeed::m\_dblSpeed](../Topic/CLinearTransitionFromSpeed::m_dblSpeed.md)|Il valore assoluto della velocità della variabile.|  
  
## Note  
 Durante una transizione a velocità lineare, il valore della variabile di animazione cambia a una frequenza specificata.  La durata della transizione è determinata dalla differenza tra il valore iniziale e il valore finale specificato.  Poiché vengono cancellate tutte le transizioni automaticamente, si consiglia di assegnarle utilizzando l'operatore new.  L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino ad allora è NULL.  La modifica delle variabili del membro dopo la creazione di questo oggetto COM non ha effetto.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CLinearTransitionFromSpeed](../../mfc/reference/clineartransitionfromspeed-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)