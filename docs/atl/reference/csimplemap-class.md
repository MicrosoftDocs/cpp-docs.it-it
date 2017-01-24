---
title: "CSimpleMap Class | Microsoft Docs"
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
  - "ATL::CSimpleMap"
  - "ATL.CSimpleMap"
  - "CSimpleMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleMap class"
ms.assetid: 61b06eb4-ae73-44b0-a305-0afb5a33e8b1
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSimpleMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce il supporto per una matrice semplice di mapping.  
  
## Sintassi  
  
```  
  
      template <   
   class TKey,  
   class TVal,  
   class TEqual = CSimpleMapEqualHelper< TKey, TVal >   
>   
class CSimpleMap  
```  
  
#### Parametri  
 `TKey`  
 Il tipo di elemento chiave.  
  
 `TVal`  
 Il tipo di elemento di valore.  
  
 `TEqual`  
 Un oggetto di tratto, definendo il test di uguaglianza per gli elementi di tipo `T`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::\_ArrayElementType](../Topic/CSimpleMap::_ArrayElementType.md)|Typedef per il tipo di valore.|  
|[CSimpleMap::\_ArrayKeyType](../Topic/CSimpleMap::_ArrayKeyType.md)|Typedef per il tipo di chiave.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::CSimpleMap](../Topic/CSimpleMap::CSimpleMap.md)|Costruttore.|  
|[CSimpleMap::~CSimpleMap](../Topic/CSimpleMap::~CSimpleMap.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleMap::Add](../Topic/CSimpleMap::Add.md)|Aggiunge una chiave e un valore associato alla matrice di mapping.|  
|[CSimpleMap::FindKey](../Topic/CSimpleMap::FindKey.md)|Cerca una chiave specifica.|  
|[CSimpleMap::FindVal](../Topic/CSimpleMap::FindVal.md)|Cerca un valore specifico.|  
|[CSimpleMap::GetKeyAt](../Topic/CSimpleMap::GetKeyAt.md)|Recupera la chiave specificata.|  
|[CSimpleMap::GetSize](../Topic/CSimpleMap::GetSize.md)|Restituisce il numero di voci della matrice di mapping.|  
|[CSimpleMap::GetValueAt](../Topic/CSimpleMap::GetValueAt.md)|Recupera il valore specificato.|  
|[CSimpleMap::Lookup](../Topic/CSimpleMap::Lookup.md)|Restituisce il valore associato alla chiave specificata.|  
|[CSimpleMap::Remove](../Topic/CSimpleMap::Remove.md)|Rimuove una chiave e un valore corrispondente.|  
|[CSimpleMap::RemoveAll](../Topic/CSimpleMap::RemoveAll.md)|Rimuove tutti i valori e chiavi.|  
|[CSimpleMap::RemoveAt](../Topic/CSimpleMap::RemoveAt.md)|Rimuove una chiave e un valore corrispondente specifici.|  
|[CSimpleMap::ReverseLookup](../Topic/CSimpleMap::ReverseLookup.md)|Restituisce la chiave associata al valore specificato.|  
|[CSimpleMap::SetAt](../Topic/CSimpleMap::SetAt.md)|Imposta il valore associato alla chiave specificata.|  
|[CSimpleMap::SetAtIndex](../Topic/CSimpleMap::SetAtIndex.md)|Imposta la chiave e il valore specifici.|  
  
## Note  
 `CSimpleMap` fornisce il supporto per una matrice semplice di mapping di qualsiasi tipo specificato `T`, mantenimento una matrice non ordinata degli elementi principali e i relativi valori collegati.  
  
 Il parametro `TEqual` consente di definizione della funzione di uguaglianza di due elementi di tipo `T`.  Creando una classe simile a [CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md), è possibile modificare il comportamento di test di uguaglianza per qualsiasi matrice specificata.  Ad esempio quando si occupa di una matrice di puntatori, può essere utile definire l'uguaglianza come base ai valori puntatori fanno riferimento.  l'implementazione predefinita utilizza **operator\=\=\(\)**.  
  
 Sia `CSimpleMap` che [CSimpleArray](../../atl/reference/csimplearray-class.md) sono forniti per compatibilità delle versioni precedenti ATL e le implementazioni di raccolta più complete e più efficienti sono fornite da [CAtlArray](../../atl/reference/catlarray-class.md) e da [CAtlMap](../../atl/reference/catlmap-class.md).  
  
 A differenza di altre raccolte di mapping in ATL e MFC, questa classe è implementata con una matrice semplice e le ricerche di ricerca richiedono una ricerca lineare.  `CAtlMap` deve essere utilizzato quando la matrice contiene numerosi elementi.  
  
## Requisiti  
 **Header:** atlsimpcoll.h  
  
## Esempio  
 [!code-cpp[NVC_ATL_Utilities#91](../../atl/codesnippet/CPP/csimplemap-class_1.cpp)]  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)