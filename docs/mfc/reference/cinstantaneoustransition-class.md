---
title: "Classe CInstantaneousTransition | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CInstantaneousTransition"
  - "CInstantaneousTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInstantaneousTransition (classe)"
ms.assetid: c3d5121f-2c6b-4221-9e57-10e082a31120
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe CInstantaneousTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una transizione istantanea.  
  
## Sintassi  
  
```  
class CInstantaneousTransition : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInstantaneousTransition::CInstantaneousTransition](../Topic/CInstantaneousTransition::CInstantaneousTransition.md)|Costruisce un oggetto di transizione e ne inizializza il valore finale.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInstantaneousTransition::Create](../Topic/CInstantaneousTransition::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInstantaneousTransition::m\_dblFinalValue](../Topic/CInstantaneousTransition::m_dblFinalValue.md)|Il valore della variabile di animazione alla fine della transizione.|  
  
## Note  
 Durante una transizione istantanea, il valore della variabile di animazione passa istantaneamente dal valore corrente a un valore finale specificato.  La durata di questa transizione è sempre zero.  Poiché vengono cancellate tutte le transizioni automaticamente, si consiglia di assegnarle utilizzando l'operatore new.  L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino ad allora è NULL.  La modifica delle variabili del membro dopo la creazione di questo oggetto COM non ha effetto.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CInstantaneousTransition](../../mfc/reference/cinstantaneoustransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)