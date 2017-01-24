---
title: "Classe CLinearTransition | Microsoft Docs"
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
  - "CLinearTransition"
  - "afxanimationcontroller/CLinearTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLinearTransition (classe)"
ms.assetid: 7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CLinearTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula una transizione lineare.  
  
## Sintassi  
  
```  
class CLinearTransition : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransition::CLinearTransition](../Topic/CLinearTransition::CLinearTransition.md)|Costruisce un oggetto di transizione lineare e lo inizializza con durata e valore finale.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransition::Create](../Topic/CLinearTransition::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinearTransition::m\_dblFinalValue](../Topic/CLinearTransition::m_dblFinalValue.md)|Il valore della variabile di animazione alla fine della transizione.|  
|[CLinearTransition::m\_duration](../Topic/CLinearTransition::m_duration.md)|Durata della transizione.|  
  
## Note  
 Durante una transizione lineare, il valore della variabile di animazione passa in modo lineare dal valore iniziale a un valore finale specificato.  Poiché vengono cancellate tutte le transizioni automaticamente, si consiglia di assegnarle utilizzando l'operatore new.  L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino ad allora è NULL.  La modifica delle variabili del membro dopo la creazione di questo oggetto COM non ha effetto.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CLinearTransition](../../mfc/reference/clineartransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)