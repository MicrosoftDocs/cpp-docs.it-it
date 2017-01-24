---
title: "Classe CAnimationVariable | Microsoft Docs"
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
  - "CAnimationVariable"
  - "afxanimationcontroller/CAnimationVariable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationVariable (classe)"
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationVariable
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una variabile di animazione.  
  
## Sintassi  
  
```  
class CAnimationVariable;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::CAnimationVariable](../Topic/CAnimationVariable::CAnimationVariable.md)|Costruisce un oggetto variabile di animazione.|  
|[CAnimationVariable::~CAnimationVariable](../Topic/CAnimationVariable::~CAnimationVariable.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto CAnimationVariable.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::AddTransition](../Topic/CAnimationVariable::AddTransition.md)|Aggiunge una transizione.|  
|[CAnimationVariable::ApplyTransitions](../Topic/CAnimationVariable::ApplyTransitions.md)|Aggiunge transizioni dall'elenco interno allo storyboard.|  
|[CAnimationVariable::ClearTransitions](../Topic/CAnimationVariable::ClearTransitions.md)|Cancella le transizioni.|  
|[CAnimationVariable::Create](../Topic/CAnimationVariable::Create.md)|Crea l'oggetto COM della variabile di animazione sottostante.|  
|[CAnimationVariable::CreateTransitions](../Topic/CAnimationVariable::CreateTransitions.md)|Crea tutte le transizioni da applicare a questa variabile di animazione.|  
|[CAnimationVariable::EnableIntegerValueChangedEvent](../Topic/CAnimationVariable::EnableIntegerValueChangedEvent.md)|Abilita o disabilita l'evento IntegerValueChanged.|  
|[CAnimationVariable::EnableValueChangedEvent](../Topic/CAnimationVariable::EnableValueChangedEvent.md)|Abilita o disabilita l'evento ValueChanged.|  
|[CAnimationVariable::GetDefaultValue](../Topic/CAnimationVariable::GetDefaultValue.md)|Restituisce il valore predefinito.|  
|[CAnimationVariable::GetParentAnimationObject](../Topic/CAnimationVariable::GetParentAnimationObject.md)|Restituisce l'oggetto di animazione padre.|  
|[CAnimationVariable::GetValue](../Topic/CAnimationVariable::GetValue.md)|Di overload.  Restituisce il valore corrente della variabile di animazione.|  
|[CAnimationVariable::GetVariable](../Topic/CAnimationVariable::GetVariable.md)|Restituisce un puntatore a un oggetto COM IUIAnimationVariable.|  
|[CAnimationVariable::SetDefaultValue](../Topic/CAnimationVariable::SetDefaultValue.md)|Imposta il valore predefinito e rilascia l'oggetto COM IUIAnimationVariable.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::SetParentAnimationObject](../Topic/CAnimationVariable::SetParentAnimationObject.md)|Imposta la relazione tra una variabile di animazione e un oggetto di animazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m\_bAutodestroyTransitions](../Topic/CAnimationVariable::m_bAutodestroyTransitions.md)|Specifica se devono essere eliminati oggetti di transizione correlati.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m\_dblDefaultValue](../Topic/CAnimationVariable::m_dblDefaultValue.md)|Specifica il valore predefinito propagato in IUIAnimationVariable.|  
|[CAnimationVariable::m\_lstTransitions](../Topic/CAnimationVariable::m_lstTransitions.md)|Contiene un elenco di transizioni che aggiungono un'animazione a questa variabile di animazione.|  
|[CAnimationVariable::m\_pParentObject](../Topic/CAnimationVariable::m_pParentObject.md)|Puntatore a un oggetto di animazione che incapsula questa variabile di animazione.|  
|[CAnimationVariable::m\_variable](../Topic/CAnimationVariable::m_variable.md)|Archivia un puntatore a un oggetto COM IUIAnimationVariable.  NULL se l'oggetto COM non è stato ancora creato o se la creazione ha avuto esito negativo.|  
  
## Note  
 La classe CAnimationVariable incapsula l'oggetto COM IUIAnimationVariable.  Contiene anche un elenco di transizioni da applicare alla variabile di animazione in uno storyboard.  Gli oggetti CAnimationVariable sono incorporati agli oggetti di animazione che possono rappresentare in un'applicazione un valore, un punto, una dimensione, un colore e un rettangolo animati.  
  
## Gerarchia di ereditarietà  
 [CAnimationVariable](../../mfc/reference/canimationvariable-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)