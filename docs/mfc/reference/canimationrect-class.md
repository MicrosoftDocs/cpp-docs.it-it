---
title: "Classe CAnimationRect | Microsoft Docs"
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
  - "CAnimationRect"
  - "afxanimationcontroller/CAnimationRect"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationRect (classe)"
ms.assetid: 0294156d-241e-4a57-92b2-31234fe557d6
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CAnimationRect
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di un rettangolo i cui lati possono essere animati.  
  
## Sintassi  
  
```  
class CAnimationRect : public CAnimationBaseObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::CAnimationRect](../Topic/CAnimationRect::CAnimationRect.md)|Di overload.  Costruisce un oggetto rect di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::AddTransition](../Topic/CAnimationRect::AddTransition.md)|Aggiunge transizioni per la coordinata sinistra, superiore, destra e inferiore.|  
|[CAnimationRect::GetBottom](../Topic/CAnimationRect::GetBottom.md)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.|  
|[CAnimationRect::GetDefaultValue](../Topic/CAnimationRect::GetDefaultValue.md)|Restituisce i valori predefiniti per i limiti del rettangolo.|  
|[CAnimationRect::GetLeft](../Topic/CAnimationRect::GetLeft.md)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.|  
|[CAnimationRect::GetRight](../Topic/CAnimationRect::GetRight.md)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.|  
|[CAnimationRect::GetTop](../Topic/CAnimationRect::GetTop.md)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.|  
|[CAnimationRect::GetValue](../Topic/CAnimationRect::GetValue.md)|Restituisce il valore corrente.|  
|[CAnimationRect::SetDefaultValue](../Topic/CAnimationRect::SetDefaultValue.md)|Imposta il valore predefinito.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::GetAnimationVariableList](../Topic/CAnimationRect::GetAnimationVariableList.md)|Inserisce le variabili di animazione incapsulate in un elenco.  \(Esegue l'override di [CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::operator RECT](../Topic/CAnimationRect::operator%20RECT.md)|Converte un CAnimationRect in un RECT.|  
|[CAnimationRect::operator\=](../Topic/CAnimationRect::operator=.md)|Assegna rect a CAnimationRect.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::m\_bFixedSize](../Topic/CAnimationRect::m_bFixedSize.md)|Specifica se il rettangolo ha dimensioni fisse.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationRect::m\_bottomValue](../Topic/CAnimationRect::m_bottomValue.md)|La variabile dell'animazione incapsulata che rappresenta il limite inferiore del rettangolo di animazione.|  
|[CAnimationRect::m\_leftValue](../Topic/CAnimationRect::m_leftValue.md)|La variabile dell'animazione incapsulata che rappresenta il limite sinistro del rettangolo di animazione.|  
|[CAnimationRect::m\_rightValue](../Topic/CAnimationRect::m_rightValue.md)|La variabile dell'animazione incapsulata che rappresenta il limite destro del rettangolo di animazione.|  
|[CAnimationRect::m\_szInitial](../Topic/CAnimationRect::m_szInitial.md)|Specifica la dimensione iniziale del rettangolo di animazione.|  
|[CAnimationRect::m\_topValue](../Topic/CAnimationRect::m_topValue.md)|La variabile dell'animazione incapsulata che rappresenta il limite superiore del rettangolo di animazione.|  
  
## Note  
 La classe CAnimationRect incapsula quattro oggetti CAnimationVariable e può rappresentare nelle applicazioni un rettangolo.  Per utilizzare questa classe in un'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller dell'animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate destra, sinistra, superiore e inferiore.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationRect](../../mfc/reference/canimationrect-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)