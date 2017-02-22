---
title: "CRBMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CRBMap"
  - "CRBMap"
  - "ATL::CRBMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRBMap class"
ms.assetid: 658e94dc-e835-4356-aed1-1513e1f66969
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CRBMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta una struttura di mapping, utilizzando una struttura ad albero binaria Rosso\- Nero.  
  
## Sintassi  
  
```  
  
      template<   
   typename K,  
   typename V,  
   class KTraits = CElementTraits< K >,  
   class VTraits = CElementTraits< V >   
> class CRBMap : public CRBTree< K, V, KTraits, VTraits >  
```  
  
#### Parametri  
 `K`  
 Il tipo di elemento chiave.  
  
 *V*  
 Il tipo di elemento di valore.  
  
 `KTraits`  
 Il codice utilizzato per copiare o spostare elementi chiave.  Vedere [classe di CElementTraits](../../atl/reference/celementtraits-class.md) per ulteriori informazioni.  
  
 `VTraits`  
 Il codice utilizzato per copiare o spostare elementi di valore.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMap::CRBMap](../Topic/CRBMap::CRBMap.md)|Costruttore.|  
|[CRBMap::~CRBMap](../Topic/CRBMap::~CRBMap.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMap::Lookup](../Topic/CRBMap::Lookup.md)|Chiamare questo metodo per trovare le chiavi o valori nell'oggetto `CRBMap`.|  
|[CRBMap::RemoveKey](../Topic/CRBMap::RemoveKey.md)|Chiamare questo metodo per eliminare un elemento dall'oggetto `CRBMap`, in base alla chiave.|  
|[CRBMap::SetAt](../Topic/CRBMap::SetAt.md)|Chiamare questo metodo per inserire una coppia dell'elemento nella mappa.|  
  
## Note  
 `CRBMap` fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, mantenimento matrice ordinata degli elementi principali e i relativi valori collegati.  Ogni chiave può avere un solo valore associato.  Gli elementi \(consistendo di una chiave e un valore vengono archiviati in una struttura ad albero binaria, utilizzando il metodo [CRBMap::SetAt](../Topic/CRBMap::SetAt.md).  Gli elementi possono essere rimossi mediante il metodo [CRBMap::RemoveKey](../Topic/CRBMap::RemoveKey.md), che rimuove l'elemento con il valore della chiave specificato.  
  
 Attraversare la struttura ad albero è consentito con metodi come [CRBTree::GetHeadPosition](../Topic/CRBTree::GetHeadPosition.md), [CRBTree::GetNext](../Topic/CRBTree::GetNext.md)e [CRBTree::GetNextValue](../Topic/CRBTree::GetNextValue.md).  
  
 I parametri `VTraits` e `KTraits` disponibili classi di tratti che contengono tutto il codice supplementare necessario per copiare o spostare elementi.  
  
 `CRBMap` è derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa una struttura ad albero binaria utilizzando l'algoritmo Rosso\- Nero.  [CRBMultiMap](../../atl/reference/crbmultimap-class.md) è una variante che consente più valori per ogni chiave.  Inoltre è derivato da `CRBTree`così da condivisioni molte funzionalità con `CRBMap`.  
  
 Un'alternativa a entrambi gli `CRBMap` e `CRBMultiMap` viene fornita dalla classe [CAtlMap](../../atl/reference/catlmap-class.md).  Quando solo un numero limitato di elementi deve essere memorizzato, considerare l'utilizzo della classe [CSimpleMap](../../atl/reference/csimplemap-class.md) anziché.  
  
 Per un maggiore la descrizione completa di diverse classi di raccolte e le relative funzionalità e caratteristiche di prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 [CRBTree](../../atl/reference/crbtree-class.md)  
  
 `CRBMap`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CRBTree Class](../../atl/reference/crbtree-class.md)   
 [CAtlMap Class](../../atl/reference/catlmap-class.md)   
 [CRBMultiMap Class](../../atl/reference/crbmultimap-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)