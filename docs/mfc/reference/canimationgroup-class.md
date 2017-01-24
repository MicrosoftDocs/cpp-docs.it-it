---
title: "Classe CAnimationGroup | Microsoft Docs"
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
  - "afxanimationcontroller/CAnimationGroup"
  - "CAnimationGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationGroup (classe)"
ms.assetid: 8bc18ceb-33a2-41d0-9731-71811adacab7
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationGroup
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un gruppo di animazioni che combina uno storyboard dell'animazione, oggetti di animazione e transizioni per definire un'animazione.  
  
## Sintassi  
  
```  
class CAnimationGroup;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::CAnimationGroup](../Topic/CAnimationGroup::CAnimationGroup.md)|Costruisce un gruppo di animazione.|  
|[CAnimationGroup::~CAnimationGroup](../Topic/CAnimationGroup::~CAnimationGroup.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un gruppo di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::Animate](../Topic/CAnimationGroup::Animate.md)|Aggiunge un'animazione a un gruppo.|  
|[CAnimationGroup::ApplyTransitions](../Topic/CAnimationGroup::ApplyTransitions.md)|Applica le transizioni agli oggetti di animazione.|  
|[CAnimationGroup::FindAnimationObject](../Topic/CAnimationGroup::FindAnimationObject.md)|Trova un oggetto di animazione che contiene la variabile di animazione specificata.|  
|[CAnimationGroup::GetGroupID](../Topic/CAnimationGroup::GetGroupID.md)|Restituisce GroupID.|  
|[CAnimationGroup::RemoveKeyframes](../Topic/CAnimationGroup::RemoveKeyframes.md)|Rimuove ed elimina facoltativamente tutti i fotogrammi chiave che appartengono a un gruppo di animazione.|  
|[CAnimationGroup::RemoveTransitions](../Topic/CAnimationGroup::RemoveTransitions.md)|Rimuove le transizioni dagli oggetti di animazione che appartengono a un gruppo di animazione.|  
|[CAnimationGroup::Schedule](../Topic/CAnimationGroup::Schedule.md)|Pianifica un'animazione all'ora specificata.|  
|[CAnimationGroup::SetAutodestroyTransitions](../Topic/CAnimationGroup::SetAutodestroyTransitions.md)|Indirizza tutti gli oggetti di animazione che appartengono a transizioni di eliminazione automatica del gruppo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::AddKeyframes](../Topic/CAnimationGroup::AddKeyframes.md)|Supporto che aggiunge fotogrammi chiave a uno storyboard.|  
|[CAnimationGroup::AddTransitions](../Topic/CAnimationGroup::AddTransitions.md)|Supporto che aggiunge transizioni a uno storyboard.|  
|[CAnimationGroup::CreateTransitions](../Topic/CAnimationGroup::CreateTransitions.md)|Supporto che crea oggetti di transizione COM.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::m\_bAutoclearTransitions](../Topic/CAnimationGroup::m_bAutoclearTransitions.md)|Specifica come cancellare transizioni da oggetti dell'animazione che appartengono al gruppo.  Se questo membro è impostato su TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione.  In caso contrario, è necessario rimuovere manualmente le transizioni.|  
|[CAnimationGroup::m\_bAutodestroyAnimationObjects](../Topic/CAnimationGroup::m_bAutodestroyAnimationObjects.md)|Specifica come eliminare oggetti dell'animazione.  Se questo parametro è impostato su TRUE, gli oggetti di animazione verranno eliminati automaticamente quando viene eliminato il gruppo.  In caso contrario, gli oggetti di animazione devono essere eliminati manualmente.  Il valore predefinito è FALSE.  Impostare questo valore su TRUE se tutti gli oggetti di animazione appartenenti al gruppo vengono allocati dinamicamente con l'operatore new.|  
|[CAnimationGroup::m\_bAutodestroyKeyframes](../Topic/CAnimationGroup::m_bAutodestroyKeyframes.md)|Specifica come eliminare fotogrammi chiave.  Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi e distrutti; in caso contrario vengono rimossi solo dall'elenco.  Il valore predefinito è TRUE.|  
|[CAnimationGroup::m\_lstAnimationObjects](../Topic/CAnimationGroup::m_lstAnimationObjects.md)|Contiene un elenco di oggetti di animazione.|  
|[CAnimationGroup::m\_lstKeyFrames](../Topic/CAnimationGroup::m_lstKeyFrames.md)|Contiene un elenco di fotogrammi chiave.|  
|[CAnimationGroup::m\_pStoryboard](../Topic/CAnimationGroup::m_pStoryboard.md)|Punta allo storyboard di animazione.  Questo puntatore è valido solo dopo la chiamata su Animate.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::m\_nGroupID](../Topic/CAnimationGroup::m_nGroupID.md)|Identificatore univoco di un gruppo di animazione.|  
|[CAnimationGroup::m\_pParentController](../Topic/CAnimationGroup::m_pParentController.md)|Puntatore a un controller di animazione a cui appartiene questo gruppo.|  
  
## Note  
 I gruppi di animazione vengono creati automaticamente dal controller di animazione \(CAnimationController\) quando si aggiungono oggetti di animazione utilizzando CAnimationController::AddAnimationObject.  Un gruppo di animazione viene identificato dal GroupID, che viene di solito considerato come un parametro per manipolare i gruppi di animazione.  GroupID viene preso dal primo oggetto dell'animazione aggiunto a un nuovo gruppo di animazioni.  Uno storyboard di animazione incapsulato viene creato dopo avere chiamato CAnimationController::AnimateGroup ed è accessibile tramite il membro pubblico m\_pStoryboard.  
  
## Gerarchia di ereditarietà  
 [CAnimationGroup](../../mfc/reference/canimationgroup-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)