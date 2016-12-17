---
title: "Classe CCustomInterpolator | Microsoft Docs"
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
  - "afxanimationcontroller/CCustomInterpolator"
  - "CCustomInterpolator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCustomInterpolator (classe)"
ms.assetid: 28d85595-989a-40a3-b003-e0e38437a94d
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CCustomInterpolator
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un interpolatore di base.  
  
## Sintassi  
  
```  
class CCustomInterpolator;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::CCustomInterpolator](../Topic/CCustomInterpolator::CCustomInterpolator.md)|Di overload.  Costruisce un oggetto interpolatore personalizzato e inizializza la durata e la velocità ai valori specificati.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::GetDependencies](../Topic/CCustomInterpolator::GetDependencies.md)|Ottiene le dipendenze dell'interpolatore.|  
|[CCustomInterpolator::GetDuration](../Topic/CCustomInterpolator::GetDuration.md)|Ottiene la durata dell'interpolatore.|  
|[CCustomInterpolator::GetFinalValue](../Topic/CCustomInterpolator::GetFinalValue.md)|Ottiene il valore finale al quale punta l'interpolatore.|  
|[CCustomInterpolator::Init](../Topic/CCustomInterpolator::Init.md)|Inizializza durata e valore finale.|  
|[CCustomInterpolator::InterpolateValue](../Topic/CCustomInterpolator::InterpolateValue.md)|Crea un'interpolazione del valore a un offset specificato.|  
|[CCustomInterpolator::InterpolateVelocity](../Topic/CCustomInterpolator::InterpolateVelocity.md)|Crea un'interpolazione della velocità a un offset specificato.|  
|[CCustomInterpolator::SetDuration](../Topic/CCustomInterpolator::SetDuration.md)|Imposta la durata dell'interpolatore.|  
|[CCustomInterpolator::SetInitialValueAndVelocity](../Topic/CCustomInterpolator::SetInitialValueAndVelocity.md)|Imposta il valore iniziale dell'interpolatore e la velocità.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomInterpolator::m\_currentValue](../Topic/CCustomInterpolator::m_currentValue.md)|il valore interpolato.|  
|[CCustomInterpolator::m\_currentVelocity](../Topic/CCustomInterpolator::m_currentVelocity.md)|La velocità interpolata.|  
|[CCustomInterpolator::m\_duration](../Topic/CCustomInterpolator::m_duration.md)|Durata della transizione.|  
|[CCustomInterpolator::m\_finalValue](../Topic/CCustomInterpolator::m_finalValue.md)|Il valore finale di una variabile alla fine della transizione.|  
|[CCustomInterpolator::m\_initialValue](../Topic/CCustomInterpolator::m_initialValue.md)|Il valore della variabile all'inizio della transizione.|  
|[CCustomInterpolator::m\_initialVelocity](../Topic/CCustomInterpolator::m_initialVelocity.md)|La velocità della variabile all'inizio della transizione.|  
  
## Note  
 Derivare una classe da CCustomInterpolator ed eseguire l'override di tutti i metodi necessari per implementare un algoritmo di interpolazione personalizzato.  Un puntatore a questa classe deve essere passato come parametro a CCustomTransition.  
  
## Gerarchia di ereditarietà  
 [CCustomInterpolator](../../mfc/reference/ccustominterpolator-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)