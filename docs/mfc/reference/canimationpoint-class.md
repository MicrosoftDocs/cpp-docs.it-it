---
title: "Classe CAnimationPoint | Microsoft Docs"
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
  - "CAnimationPoint"
  - "afxanimationcontroller/CAnimationPoint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationPoint (classe)"
ms.assetid: 5dc4d46f-e695-4681-b15c-544b78b3e317
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationPoint
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di un punto le cui coordinate possono essere animate.  
  
## Sintassi  
  
```  
class CAnimationPoint : public CAnimationBaseObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::CAnimationPoint](../Topic/CAnimationPoint::CAnimationPoint.md)|Di overload.  Costruisce un oggetto CAnimationPoint.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::AddTransition](../Topic/CAnimationPoint::AddTransition.md)|Aggiunge transizioni per le coordinate X e Y.|  
|[CAnimationPoint::GetDefaultValue](../Topic/CAnimationPoint::GetDefaultValue.md)|Restituisce i valori predefiniti per le coordinate X e Y.|  
|[CAnimationPoint::GetValue](../Topic/CAnimationPoint::GetValue.md)|Restituisce il valore corrente.|  
|[CAnimationPoint::GetX](../Topic/CAnimationPoint::GetX.md)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|  
|[CAnimationPoint::GetY](../Topic/CAnimationPoint::GetY.md)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|  
|[CAnimationPoint::SetDefaultValue](../Topic/CAnimationPoint::SetDefaultValue.md)|Imposta il valore predefinito.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::GetAnimationVariableList](../Topic/CAnimationPoint::GetAnimationVariableList.md)|Inserisce le variabili di animazione incapsulate in un elenco.  \(Esegue l'override di [CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::operator CPoint](../Topic/CAnimationPoint::operator%20CPoint.md)|Converte un CAnimationPoint in un CPoint.|  
|[CAnimationPoint::operator\=](../Topic/CAnimationPoint::operator=.md)|Assegna ptSrc a CAnimationPoint.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationPoint::m\_xValue](../Topic/CAnimationPoint::m_xValue.md)|La variabile dell'animazione incapsulata che rappresenta la coordinata X del punto di animazione.|  
|[CAnimationPoint::m\_yValue](../Topic/CAnimationPoint::m_yValue.md)|La variabile dell'animazione incapsulata che rappresenta la coordinata Y del punto di animazione.|  
  
## Note  
 La classe CAnimationPoint incapsula due oggetti CAnimationVariable e può rappresentare nelle applicazioni un punto.  Ad esempio, è possibile utilizzare questa classe per animare la posizione di un qualsiasi oggetto sullo schermo \(come una stringa di testo, un cerchio, un punto e così via\).  Per utilizzare questa classe in un'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller dell'animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate X e\/o Y.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationPoint](../../mfc/reference/canimationpoint-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)