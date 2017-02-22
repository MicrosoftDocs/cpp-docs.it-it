---
title: "Classe CCustomTransition | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CCustomTransition"
  - "CCustomTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCustomTransition (classe)"
ms.assetid: 5bd3f492-940f-4290-a38b-fa68eb8f8401
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CCustomTransition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una transizione personalizzata.  
  
## Sintassi  
  
```  
class CCustomTransition : public CBaseTransition;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::CCustomTransition](../Topic/CCustomTransition::CCustomTransition.md)|Costruisce un oggetto di transizione personalizzato.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::Create](../Topic/CCustomTransition::Create.md)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulati.  \(Esegue l'override di [CBaseTransition::Create](../Topic/CBaseTransition::Create.md).\)|  
|[CCustomTransition::SetInitialValue](../Topic/CCustomTransition::SetInitialValue.md)|Imposta un valore iniziale che verrà applicato a una variabile di animazione associata a questa transizione.|  
|[CCustomTransition::SetInitialVelocity](../Topic/CCustomTransition::SetInitialVelocity.md)|Imposta una velocità iniziale che verrà applicata a una variabile di animazione associata a questa transizione.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCustomTransition::m\_bInitialValueSpecified](../Topic/CCustomTransition::m_bInitialValueSpecified.md)|Specifica se il valore iniziale è stato specificato con SetInitialValue.|  
|[CCustomTransition::m\_bInitialVelocitySpecified](../Topic/CCustomTransition::m_bInitialVelocitySpecified.md)|Specifica se la velocità iniziale è stata specificata con SetInitialVelocity.|  
|[CCustomTransition::m\_initialValue](../Topic/CCustomTransition::m_initialValue.md)|Archivia il valore iniziale.|  
|[CCustomTransition::m\_initialVelocity](../Topic/CCustomTransition::m_initialVelocity.md)|Archivia la velocità iniziale.|  
|[CCustomTransition::m\_pInterpolator](../Topic/CCustomTransition::m_pInterpolator.md)|Archivia un puntatore a un interpolatore personalizzato.|  
  
## Note  
 La classe CCustomTransitions consente agli sviluppatori di implementare transizioni personalizzate.  Viene creato e utilizzato come transizione standard, ma il costruttore accetta come parametro un puntatore a un interpolatore personalizzato.  Per utilizzare le transizioni personalizzate, effettuare i passaggi seguenti: 1.  Derivare una classe da CCustomInterpolator e implementare almeno il metodo InterpolateValue.  2.  Assicurarsi che la durata di un oggetto interpolatore personalizzato sia più lunga della durata dell'animazione dove viene utilizzato.  3.  Creare un'istanza \(utilizzando l'operatore new\) di un oggetto CCustomTransition e passare un puntatore all'interpolatore personalizzato nel costruttore.  4.  Chiamare CCustomTransition::SetInitialValue e CCustomTransition::SetInitialVelocity se questi parametri sono richiesti per l'interpolazione personalizzata.  5.  Passare il puntatore alla transizione personalizzata ad un metodo AddTransition dell'oggetto di animazione al cui valore deve essere aggiunta un'animazione con l'algoritmo personalizzato.  6.  Quando il valore dell'oggetto di animazione deve essere modificato, l'API di animazione di Windows chiamerà InterpolateValue \(e gli altri metodi attinenti\) in CCustomInterpolator.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CCustomTransition](../../mfc/reference/ccustomtransition-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)