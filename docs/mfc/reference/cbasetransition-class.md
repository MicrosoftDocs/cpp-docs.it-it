---
title: "Classe CBaseTransition | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBaseTransition"
  - "afxanimationcontroller/CBaseTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBaseTransition (classe)"
ms.assetid: dfe84007-bbc5-43b7-b5b8-fae9145573bf
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CBaseTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una transizione di base.  
  
## Sintassi  
  
```  
class CBaseTransition : public CObject;  
```  
  
## Membri  
  
### Enumerazioni pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione CBaseTransition::TRANSITION\_TYPE](../Topic/CBaseTransition::TRANSITION_TYPE%20Enumeration.md)|Definisce i tipi di transizione attualmente supportati dall'implementazione MFC dell'API di animazione Windows.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::CBaseTransition](../Topic/CBaseTransition::CBaseTransition.md)|Costruisce un oggetto di transizione di base.|  
|[CBaseTransition::~CBaseTransition](../Topic/CBaseTransition::~CBaseTransition.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto di transizione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::AddToStoryboard](../Topic/CBaseTransition::AddToStoryboard.md)|Aggiunge una transizione ad uno storyboard.|  
|[CBaseTransition::AddToStoryboardAtKeyframes](../Topic/CBaseTransition::AddToStoryboardAtKeyframes.md)|Aggiunge una transizione ad uno storyboard.|  
|[CBaseTransition::Clear](../Topic/CBaseTransition::Clear.md)|Rilascia l'oggetto COM IUIAnimationTransition incapsulato.|  
|[CBaseTransition::Create](../Topic/CBaseTransition::Create.md)|Crea una transizione COM.|  
|[CBaseTransition::GetEndKeyframe](../Topic/CBaseTransition::GetEndKeyframe.md)|Restituisce fotogramma chiave iniziale.|  
|[CBaseTransition::GetRelatedVariable](../Topic/CBaseTransition::GetRelatedVariable.md)|Restituisce un puntatore alla variabile correlata.|  
|[CBaseTransition::GetStartKeyframe](../Topic/CBaseTransition::GetStartKeyframe.md)|Restituisce fotogramma chiave iniziale.|  
|[CBaseTransition::GetTransition](../Topic/CBaseTransition::GetTransition.md)|Di overload.  Restituisce un puntatore all'oggetto di transizione COM sottostante.|  
|[CBaseTransition::GetType](../Topic/CBaseTransition::GetType.md)|Restituisce il tipo di transizione.|  
|[CBaseTransition::IsAdded](../Topic/CBaseTransition::IsAdded.md)|Indica se una transizione è stata aggiunta ad uno storyboard.|  
|[CBaseTransition::SetKeyframes](../Topic/CBaseTransition::SetKeyframes.md)|Imposta i fotogrammi chiave per una transizione.|  
|[CBaseTransition::SetRelatedVariable](../Topic/CBaseTransition::SetRelatedVariable.md)|Stabilisce una relazione tra la variabile di animazione e la transizione.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::m\_bAdded](../Topic/CBaseTransition::m_bAdded.md)|Specifica se una transizione è stata aggiunta ad uno storyboard.|  
|[CBaseTransition::m\_pEndKeyframe](../Topic/CBaseTransition::m_pEndKeyframe.md)|Archivia un puntatore al fotogramma chiave che specifica la fine della transizione.|  
|[CBaseTransition::m\_pRelatedVariable](../Topic/CBaseTransition::m_pRelatedVariable.md)|Puntatore a una variabile di animazione, a cui viene aggiunta un'animazione con la transizione archiviata in m\_transition.|  
|[CBaseTransition::m\_pStartKeyframe](../Topic/CBaseTransition::m_pStartKeyframe.md)|Archivia un puntatore al fotogramma chiave che specifica l'inizio della transizione.|  
|[CBaseTransition::m\_transition](../Topic/CBaseTransition::m_transition.md)|Archivia un puntatore a IUIAnimationTransition.  NULL se non è stato creato un oggetto di transizione COM.|  
|[CBaseTransition::m\_type](../Topic/CBaseTransition::m_type.md)|Archivia il tipo di transizione.|  
  
## Note  
 Questa classe incapsula l'interfaccia IUIAnimationTransition e serve come una classe di base per tutte le transizioni.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)