---
title: "Classe CAnimationSize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationSize"
  - "CAnimationSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationSize (classe)"
ms.assetid: ea06d1b5-502c-44a3-82ca-8bd6ba6a9364
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CAnimationSize
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di un oggetto dimensioni le cui dimensioni possono essere animate.  
  
## Sintassi  
  
```  
class CAnimationSize : public CAnimationBaseObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::CAnimationSize](../Topic/CAnimationSize::CAnimationSize.md)|Di overload.  Costruisce un oggetto dimensioni di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::AddTransition](../Topic/CAnimationSize::AddTransition.md)|Aggiunge transizioni per la larghezza e l'altezza.|  
|[CAnimationSize::GetCX](../Topic/CAnimationSize::GetCX.md)|Fornisce l'accesso a CAnimationVariable che rappresenta la larghezza.|  
|[CAnimationSize::GetCY](../Topic/CAnimationSize::GetCY.md)|Fornisce l'accesso a CAnimationVariable che rappresenta l'altezza.|  
|[CAnimationSize::GetDefaultValue](../Topic/CAnimationSize::GetDefaultValue.md)|Restituisce i valori predefiniti per la larghezza e l'altezza.|  
|[CAnimationSize::GetValue](../Topic/CAnimationSize::GetValue.md)|Restituisce il valore corrente.|  
|[CAnimationSize::SetDefaultValue](../Topic/CAnimationSize::SetDefaultValue.md)|Imposta il valore predefinito.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::GetAnimationVariableList](../Topic/CAnimationSize::GetAnimationVariableList.md)|Inserisce le variabili di animazione incapsulate in un elenco.  \(Esegue l'override di [CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::operator CSize](../Topic/CAnimationSize::operator%20CSize.md)|Converte un CAnimationSize in un CSize.|  
|[CAnimationSize::operator\=](../Topic/CAnimationSize::operator=.md)|Assegna szSrc a CAnimationSize.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationSize::m\_cxValue](../Topic/CAnimationSize::m_cxValue.md)|La variabile dell'animazione incapsulata che rappresenta l'ampiezza della dimensione di animazione.|  
|[CAnimationSize::m\_cyValue](../Topic/CAnimationSize::m_cyValue.md)|La variabile dell'animazione incapsulata che rappresenta l'altezza della dimensione di animazione.|  
  
## Note  
 La classe CAnimationSize incapsula due oggetti CAnimationVariable e può rappresentare nelle applicazioni una dimensione.  Ad esempio, è possibile utilizzare questa classe per animare la dimensione di due oggetti dimensionali qualsiasi sullo schermo \(come un rettangolo, un controllo e così via\).  Per utilizzare questa classe in un'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller dell'animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare a Width e\/o a Height.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationSize](../../mfc/reference/canimationsize-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)