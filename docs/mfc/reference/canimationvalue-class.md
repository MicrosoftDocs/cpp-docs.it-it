---
title: "Classe CAnimationValue | Microsoft Docs"
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
  - "afxanimationcontroller/CAnimationValue"
  - "CAnimationValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationValue (classe)"
ms.assetid: 78c5ae19-ede5-4f20-bfbe-68b467b603c2
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationValue
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di oggetto di animazione con un valore.  
  
## Sintassi  
  
```  
class CAnimationValue : public CAnimationBaseObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::CAnimationValue](../Topic/CAnimationValue::CAnimationValue.md)|Di overload.  Costruisce un oggetto CAnimationValue.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::AddTransition](../Topic/CAnimationValue::AddTransition.md)|Aggiunge una transizione da applicare a un valore.|  
|[CAnimationValue::GetValue](../Topic/CAnimationValue::GetValue.md)|Di overload.  Recupera il valore corrente.|  
|[CAnimationValue::GetVariable](../Topic/CAnimationValue::GetVariable.md)|Fornisce l'accesso alla variabile di animazione incapsulata.|  
|[CAnimationValue::SetDefaultValue](../Topic/CAnimationValue::SetDefaultValue.md)|Imposta il valore predefinito.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::GetAnimationVariableList](../Topic/CAnimationValue::GetAnimationVariableList.md)|Inserisce la variabile di animazione incapsulata in un elenco.  \(Esegue l'override di [CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::operator DOUBLE](../Topic/CAnimationValue::operator%20DOUBLE.md)|Fornisce la conversione tra CAnimationValue e DOUBLE.|  
|[CAnimationValue::operator INT32](../Topic/CAnimationValue::operator%20INT32.md)|Fornisce la conversione tra CAnimationValue e INT32.|  
|[CAnimationValue::operator\=](../Topic/CAnimationValue::operator=.md)|Di overload.  Assegna un valore INT32 a CAnimationValue.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationValue::m\_value](../Topic/CAnimationValue::m_value.md)|La variabile dell'animazione incapsulata che rappresenta il valore di animazione.|  
  
## Note  
 La classe CAnimationValue incapsula un oggetto singolo CAnimationVariable e può rappresentare nelle applicazioni un valore animato singolo.  Ad esempio, è possibile utilizzare questa classe per la trasparenza animata \(effetto dissolvenza\), angolare \(per ruotare gli oggetti\) o per qualsiasi altro caso in cui è necessario creare un'animazione basata su un singolo valore animato.  Per utilizzare questa classe in un'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller dell'animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare al valore.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationValue](../../mfc/reference/canimationvalue-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)