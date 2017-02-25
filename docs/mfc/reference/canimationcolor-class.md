---
title: "Classe CAnimationColor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationColor"
  - "afxanimationcontroller/CAnimationColor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationColor (classe)"
ms.assetid: 88bfabd4-efeb-4652-87e8-304253d8e48c
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Classe CAnimationColor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di un colore i cui componenti rosso, verde e blu possono essere animati.  
  
## Sintassi  
  
```  
class CAnimationColor : public CAnimationBaseObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::CAnimationColor](../Topic/CAnimationColor::CAnimationColor.md)|Di overload.  Costruisce un oggetto colore di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::AddTransition](../Topic/CAnimationColor::AddTransition.md)|Aggiunge transizioni per i componenti rosso, verde e blu.|  
|[CAnimationColor::GetB](../Topic/CAnimationColor::GetB.md)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.|  
|[CAnimationColor::GetDefaultValue](../Topic/CAnimationColor::GetDefaultValue.md)|Restituisce i valori predefiniti per i componenti di colore.|  
|[CAnimationColor::GetG](../Topic/CAnimationColor::GetG.md)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.|  
|[CAnimationColor::GetR](../Topic/CAnimationColor::GetR.md)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.|  
|[CAnimationColor::GetValue](../Topic/CAnimationColor::GetValue.md)|Restituisce il valore corrente.|  
|[CAnimationColor::SetDefaultValue](../Topic/CAnimationColor::SetDefaultValue.md)|Imposta il valore predefinito.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::GetAnimationVariableList](../Topic/CAnimationColor::GetAnimationVariableList.md)|Inserisce le variabili di animazione incapsulate in un elenco.  \(Esegue l'override di [CAnimationBaseObject::GetAnimationVariableList](../Topic/CAnimationBaseObject::GetAnimationVariableList.md).\)|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::operator COLORREF](../Topic/CAnimationColor::operator%20COLORREF.md)||  
|[CAnimationColor::operator\=](../Topic/CAnimationColor::operator=.md)|Assegna il colore a CAnimationColor.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationColor::m\_bValue](../Topic/CAnimationColor::m_bValue.md)|La variabile dell'animazione incapsulata che rappresenta il componente blu del colore di animazione.|  
|[CAnimationColor::m\_gValue](../Topic/CAnimationColor::m_gValue.md)|La variabile dell'animazione incapsulata che rappresenta il componente verde del colore di animazione.|  
|[CAnimationColor::m\_rValue](../Topic/CAnimationColor::m_rValue.md)|La variabile dell'animazione incapsulata che rappresenta il componente rosso del colore di animazione.|  
  
## Note  
 La classe CAnimationColor incapsula tre oggetti CAnimationVariable e può rappresentare un colore nelle applicazioni.  Ad esempio, è possibile utilizzare questa classe per animare i colori di un qualsiasi oggetto sullo schermo \(come il colore del testo, il colore di sfondo e così via\).  Per utilizzare questa classe in un'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller dell'animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare ai componenti rosso, verde e blu.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationColor](../../mfc/reference/canimationcolor-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)