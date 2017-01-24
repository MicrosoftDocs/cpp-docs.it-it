---
title: "Classe CSmoothStopTransition | Microsoft Docs"
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
  - "CSmoothStopTransition"
  - "afxanimationcontroller/CSmoothStopTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSmoothStopTransition (classe)"
ms.assetid: e1a4b476-6f96-43dd-90db-870a64406b85
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CSmoothStopTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una transizione a interruzione graduale.  
  
## Sintassi  
  
```  
class CSmoothStopTransition : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::CSmoothStopTransition](../Topic/CSmoothStopTransition::CSmoothStopTransition.md)|Costruisce una transizione con arresto graduale e ne inizializza la durata massima e il valore finale.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::Create](../Topic/CSmoothStopTransition::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSmoothStopTransition::m\_dblFinalValue](../Topic/CSmoothStopTransition::m_dblFinalValue.md)|Il valore della variabile di animazione alla fine della transizione.|  
|[CSmoothStopTransition::m\_maximumDuration](../Topic/CSmoothStopTransition::m_maximumDuration.md)|Durata massima della transizione.|  
  
## Note  
 Una transizione a interruzione uniforme rallenta mentre si avvicina a un valore finale specificato e lo raggiunge con una velocità pari a zero.  La durata della transizione è determinata dalla velocità iniziale, dalla differenza tra i valori iniziali e finali e dalla durata massima specificata.  Se non è presente alcuna soluzione composta da un solo arco parabolico, questo metodo crea una transizione cubica.  Poiché vengono cancellate tutte le transizioni automaticamente, si consiglia di assegnarle utilizzando l'operatore new.  L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino ad allora è NULL.  La modifica delle variabili del membro dopo la creazione di questo oggetto COM non ha effetto.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CSmoothStopTransition](../../mfc/reference/csmoothstoptransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)