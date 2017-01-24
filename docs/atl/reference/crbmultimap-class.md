---
title: "CRBMultiMap Class | Microsoft Docs"
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
  - "CRBMultiMap"
  - "ATL.CRBMultiMap"
  - "ATL::CRBMultiMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRBMultiMap class"
ms.assetid: 94d3ec0c-3e30-4ab7-a101-d8da4fb8add3
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRBMultiMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta una struttura di mapping che consente ogni chiave può essere associata a più di un valore, utilizzando una struttura ad albero binaria Rosso\- Nero.  
  
## Sintassi  
  
```  
  
      template<  
   typename K,  
   typename V,  
   class KTraits = CElementTraits< K >,  
   class VTraits = CElementTraits< V >  
> class CRBMultiMap : public CRBTree< K, V, KTraits, VTraits >  
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
|[CRBMultiMap::CRBMultiMap](../Topic/CRBMultiMap::CRBMultiMap.md)|Costruttore.|  
|[CRBMultiMap::~CRBMultiMap](../Topic/CRBMultiMap::~CRBMultiMap.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBMultiMap::FindFirstWithKey](../Topic/CRBMultiMap::FindFirstWithKey.md)|Chiamare questo metodo per trovare la posizione del primo elemento con una chiave specificata.|  
|[CRBMultiMap::GetNextValueWithKey](../Topic/CRBMultiMap::GetNextValueWithKey.md)|Chiamare questo metodo per ottenere il valore associato a una chiave specificata e aggiornare il valore della posizione.|  
|[CRBMultiMap::GetNextWithKey](../Topic/CRBMultiMap::GetNextWithKey.md)|Chiamare questo metodo per ottenere un elemento associato a una chiave specificata e aggiornare il valore della posizione.|  
|[CRBMultiMap::Insert](../Topic/CRBMultiMap::Insert.md)|Chiamare questo metodo per inserire una coppia dell'elemento nella mappa.|  
|[CRBMultiMap::RemoveKey](../Topic/CRBMultiMap::RemoveKey.md)|Chiamare questo metodo per rimuovere tutti gli elementi chiave\/valore di una chiave specificata.|  
  
## Note  
 `CRBMultiMap` fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, mantenimento matrice ordinata degli elementi chiavi e i valori.  A differenza della classe [CRBMap](../../atl/reference/crbmap-class.md), ogni chiave può essere associata a più di un valore.  
  
 Gli elementi \(consistendo di una chiave e un valore vengono archiviati in una struttura ad albero binaria, utilizzando il metodo [CRBMultiMap::Insert](../Topic/CRBMultiMap::Insert.md).  Gli elementi possono essere rimossi mediante il metodo [CRBMultiMap::RemoveKey](../Topic/CRBMultiMap::RemoveKey.md), che rimuove tutti gli elementi che corrispondono alla chiave specificata.  
  
 Attraversare la struttura ad albero è consentito con metodi come [CRBTree::GetHeadPosition](../Topic/CRBTree::GetHeadPosition.md), [CRBTree::GetNext](../Topic/CRBTree::GetNext.md)e [CRBTree::GetNextValue](../Topic/CRBTree::GetNextValue.md).  Accedere ai valori potenzialmente più per chiave è possibile utilizzare i metodi [CRBMultiMap::FindFirstWithKey](../Topic/CRBMultiMap::FindFirstWithKey.md), [CRBMultiMap::GetNextValueWithKey](../Topic/CRBMultiMap::GetNextValueWithKey.md)e [CRBMultiMap::GetNextWithKey](../Topic/CRBMultiMap::GetNextWithKey.md).  Vedere l'esempio relativo [CRBMultiMap::CRBMultiMap](../Topic/CRBMultiMap::CRBMultiMap.md) per un'illustrazione su in pratica.  
  
 I parametri `VTraits` e `KTraits` disponibili classi di tratti che contengono tutto il codice supplementare necessario per copiare o spostare elementi.  
  
 `CRBMultiMap` è derivato da [CRBTree](../../atl/reference/crbtree-class.md), che implementa una struttura ad albero binaria utilizzando l'algoritmo Rosso\- Nero.  Un'alternativa a `CRBMultiMap` e a `CRBMap` viene fornita dalla classe [CAtlMap](../../atl/reference/catlmap-class.md).  Quando solo un numero limitato di elementi deve essere memorizzato, considerare l'utilizzo della classe [CSimpleMap](../../atl/reference/csimplemap-class.md) anziché.  
  
 Per un maggiore la descrizione completa di diverse classi di raccolte e le relative funzionalità e caratteristiche di prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 [CRBTree](../../atl/reference/crbtree-class.md)  
  
 `CRBMultiMap`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CRBTree Class](../../atl/reference/crbtree-class.md)   
 [CAtlMap Class](../../atl/reference/catlmap-class.md)   
 [CRBMap Class](../../atl/reference/crbmap-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)