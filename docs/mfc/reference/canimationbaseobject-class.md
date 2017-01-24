---
title: "Classe CAnimationBaseObject | Microsoft Docs"
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
  - "afxanimationcontroller/CAnimationBaseObject"
  - "CAnimationBaseObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationBaseObject (classe)"
ms.assetid: 76b25917-940e-4eba-940f-31d270702603
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationBaseObject
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe di base per tutti gli oggetti di animazione.  
  
## Sintassi  
  
```  
class CAnimationBaseObject : public CObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject::CAnimationBaseObject](../Topic/CAnimationBaseObject::CAnimationBaseObject.md)|Di overload.  Costruisce un oggetto di animazione.|  
|[CAnimationBaseObject::~CAnimationBaseObject](../Topic/CAnimationBaseObject::~CAnimationBaseObject.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject::ApplyTransitions](../Topic/CAnimationBaseObject::ApplyTransitions.md)|Aggiunge transizioni allo storyboard con la variabile di animazione incapsulata.|  
|[CAnimationBaseObject::ClearTransitions](../Topic/CAnimationBaseObject::ClearTransitions.md)|Rimuove tutte le transizioni correlate.|  
|[CAnimationBaseObject::ContainsVariable](../Topic/CAnimationBaseObject::ContainsVariable.md)|Determina se un oggetto di animazione contiene una particolare variabile di animazione.|  
|[CAnimationBaseObject::CreateTransitions](../Topic/CAnimationBaseObject::CreateTransitions.md)|Crea le transizioni associate a un'oggetto di animazione.|  
|[CAnimationBaseObject::DetachFromController](../Topic/CAnimationBaseObject::DetachFromController.md)|Disconnette un oggetto di animazione dal controller di animazione padre.|  
|[CAnimationBaseObject::EnableIntegerValueChangedEvent](../Topic/CAnimationBaseObject::EnableIntegerValueChangedEvent.md)|Configura il gestore dell'evento Integer Value Changed.|  
|[CAnimationBaseObject::EnableValueChangedEvent](../Topic/CAnimationBaseObject::EnableValueChangedEvent.md)|Configura il gestore dell'evento Value Changed.|  
|[CAnimationBaseObject::GetAutodestroyTransitions](../Topic/CAnimationBaseObject::GetAutodestroyTransitions.md)|Indica se transizioni correlate sono eliminate automaticamente.|  
|[CAnimationBaseObject::GetGroupID](../Topic/CAnimationBaseObject::GetGroupID.md)|Restituisce l'ID del gruppo corrente.|  
|[CAnimationBaseObject::GetObjectID](../Topic/CAnimationBaseObject::GetObjectID.md)|Restituisce l'ID dell'oggetto corrente.|  
|[CAnimationBaseObject::GetUserData](../Topic/CAnimationBaseObject::GetUserData.md)|Restituisce i dati definiti dall'utente.|  
|[CAnimationBaseObject::SetAutodestroyTransitions](../Topic/CAnimationBaseObject::SetAutodestroyTransitions.md)|Imposta un flag che ordina di eliminare automaticamente le transizioni.|  
|[CAnimationBaseObject::SetID](../Topic/CAnimationBaseObject::SetID.md)|Imposta nuovi ID.|  
|[CAnimationBaseObject::SetUserData](../Topic/CAnimationBaseObject::SetUserData.md)|Imposta i dati definiti dall'utente|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md)|Raccoglie i puntatori alle variabili di animazione contenute.|  
|[CAnimationBaseObject::SetParentAnimationObjects](../Topic/CAnimationBaseObject::SetParentAnimationObjects.md)|Stabilisce una relazione tra le variabili di animazione, contenute in un oggetto di animazione, e il relativo contenitore.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject::m\_bAutodestroyTransitions](../Topic/CAnimationBaseObject::m_bAutodestroyTransitions.md)|Specifica se transizioni correlate devono essere eliminate automaticamente.|  
|[CAnimationBaseObject::m\_dwUserData](../Topic/CAnimationBaseObject::m_dwUserData.md)|Archivia il tipo di dati definito dall'utente.|  
|[CAnimationBaseObject::m\_nGroupID](../Topic/CAnimationBaseObject::m_nGroupID.md)|Specifica l'ID del gruppo dell'oggetto di animazione.|  
|[CAnimationBaseObject::m\_nObjectID](../Topic/CAnimationBaseObject::m_nObjectID.md)|Specifica l'ID dell'oggetto di animazione.|  
|[CAnimationBaseObject::m\_pParentController](../Topic/CAnimationBaseObject::m_pParentController.md)|Puntatore al controller di animazione padre.|  
  
## Note  
 Questa classe implementa metodi di base per tutti gli oggetti di animazione.  Un oggetto di animazione può rappresentare un valore, un punto, una dimensione, un rettangolo o un colore in un'applicazione, nonché qualsiasi entità personalizzata.  Gli oggetti di animazione vengono archiviati in gruppi di animazione \(vedere CAnimationGroup\).  A ogni gruppo può essere aggiunta separatamente un'animazione e tale gruppo può essere trattato analogamente allo storyboard.  Un oggetto di animazione incapsula uno o più variabili di animazione \(vedere CAnimationVariable\), a seconda della rappresentazione logica.  Ad esempio, CAnimationRect contiene quattro variabili di animazione \- una variabile per ogni lato del rettangolo.  Ogni classe dell'oggetto di animazione espone il metodo di overload AddTransition che deve essere utilizzato per applicare transizioni alle variabili di animazione incapsulate.  È possibile identificare un oggetto di animazione dall'ID dell'oggetto \(facoltativamente\) e dall'ID del gruppo.  Un ID gruppo è necessario per posizionare un oggetto di animazione per correggere il gruppo, ma se non viene specificato un ID gruppo, un oggetto viene posizionato nel gruppo predefinito con ID 0.  Se si chiama SetID con un GroupID diverso, un oggetto di animazione verrà spostato in un altro gruppo \(se necessario, viene creato un nuovo gruppo\).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)