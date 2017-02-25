---
title: "CRuntimeClass Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRuntimeClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRuntimeClass structure"
  - "dynamic class information"
  - "run-time class, CRuntimeClass structure"
  - "runtime, class information"
ms.assetid: de62b6ef-90d4-420f-8c70-f58b36976a2b
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CRuntimeClass Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ogni classe derivata da `CObject` associata a una struttura `CRuntimeClass` che è possibile utilizzare per ottenere informazioni su un oggetto o la relativa classe base in fase di esecuzione.  
  
## Sintassi  
  
```  
struct CRuntimeClass  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRuntimeClass::CreateObject](../Topic/CRuntimeClass::CreateObject.md)|Crea un oggetto in fase di esecuzione.|  
|[CRuntimeClass::FromName](../Topic/CRuntimeClass::FromName.md)|Crea un oggetto in fase di esecuzione utilizzando il nome della classe comune.|  
|[CRuntimeClass::IsDerivedFrom](../Topic/CRuntimeClass::IsDerivedFrom.md)|Determina se la classe è derivata dalla classe specificata.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRuntimeClass::m\_lpszClassName](../Topic/CRuntimeClass::m_lpszClassName.md)|Nome della classe.|  
|[CRuntimeClass::m\_nObjectSize](../Topic/CRuntimeClass::m_nObjectSize.md)|Dimensione dell'oggetto in byte.|  
|[CRuntimeClass::m\_pBaseClass](../Topic/CRuntimeClass::m_pBaseClass.md)|Un puntatore a una struttura `CRuntimeClass` della classe base.|  
|[CRuntimeClass::m\_pfnCreateObject](../Topic/CRuntimeClass::m_pfnCreateObject.md)|Un puntatore alla funzione che crea dinamicamente l'oggetto.|  
|[CRuntimeClass::m\_pfnGetBaseClass](../Topic/CRuntimeClass::m_pfnGetBaseClass.md)|Restituisce la struttura `CRuntimeClass` \(disponibile solo una volta in modo dinamico connessi\).|  
|[CRuntimeClass::m\_wSchema](../Topic/CRuntimeClass::m_wSchema.md)|Il numero dello schema della classe.|  
  
## Note  
 `CRuntimeClass` è una struttura e pertanto non dispone di una classe base.  
  
 La possibilità di determinare la classe di oggetto in fase di esecuzione è utile quando il controllo di tipo aggiuntivo di argomenti di funzione è necessaria, o se è necessario scrivere codice specifico in base alla classe di oggetto.  Le informazioni sulla classe di runtime non è supportato direttamente dal linguaggio C\+\+.  
  
 `CRuntimeClass` vengono fornite informazioni sull'oggetto correlato C\+\+, ad esempio un puntatore a `CRuntimeClass` della classe base e il nome della classe ASCII della classe correlata.  Questa struttura implementa varie funzioni che possono essere utilizzate per creare dinamicamente gli oggetti, specificare il tipo di oggetto utilizzando un nome comune e determinare se la classe correlata è derivata da una classe specifica.  
  
 Per ulteriori informazioni su l `CRuntimeClass`, vedere l'articolo [Accedere a informazioni sulla classe di runtime](../../mfc/accessing-run-time-class-information.md).  
  
## Gerarchia di ereditarietà  
 `CRuntimeClass`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObject::GetRuntimeClass](../Topic/CObject::GetRuntimeClass.md)   
 [CObject::IsKindOf](../Topic/CObject::IsKindOf.md)   
 [RUNTIME\_CLASS](../Topic/RUNTIME_CLASS.md)   
 [IMPLEMENT\_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md)   
 [IMPLEMENT\_DYNCREATE](../Topic/IMPLEMENT_DYNCREATE.md)   
 [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md)