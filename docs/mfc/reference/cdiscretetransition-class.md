---
title: "Classe CDiscreteTransition | Microsoft Docs"
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
  - "CDiscreteTransition"
  - "afxanimationcontroller/CDiscreteTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDiscreteTransition (classe)"
ms.assetid: b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDiscreteTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una transizione discreta.  
  
## Sintassi  
  
```  
class CDiscreteTransition : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::CDiscreteTransition](../Topic/CDiscreteTransition::CDiscreteTransition.md)|Costruisce un oggetto di transizione discreto e ne inizializza i parametri.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::Create](../Topic/CDiscreteTransition::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDiscreteTransition::m\_dblFinalValue](../Topic/CDiscreteTransition::m_dblFinalValue.md)|Il valore della variabile di animazione alla fine della transizione.|  
|[CDiscreteTransition::m\_delay](../Topic/CDiscreteTransition::m_delay.md)|Tempo di ritardo del passaggio istantaneo al valore finale.|  
|[CDiscreteTransition::m\_hold](../Topic/CDiscreteTransition::m_hold.md)|Tempo durante il quale conservare la variabile al valore finale.|  
  
## Note  
 Durante una transizione discreta, la variabile di animazione rimane impostata sul valore iniziale per un ritardo specificato, quindi passa istantaneamente a un valore finale specificato e rimane impostata su tale valore per un determinato tempo di attesa.  Poiché vengono cancellate tutte le transizioni automaticamente, si consiglia di assegnarle utilizzando l'operatore new.  L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino ad allora è NULL.  La modifica delle variabili del membro dopo la creazione di questo oggetto COM non ha effetto.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CDiscreteTransition](../../mfc/reference/cdiscretetransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)