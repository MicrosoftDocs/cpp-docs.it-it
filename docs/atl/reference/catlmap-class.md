---
title: "CAtlMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlMap"
  - "CAtlMap"
  - "ATL::CAtlMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlMap class"
ms.assetid: 5e2fe028-8e6d-4686-93df-1433d2080ec3
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CAtlMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare e gestire un oggetto mappa.  
  
## Sintassi  
  
```  
  
      template<  
   typename K,  
   typename V,  
   class KTraits = CElementTraits< K >,  
   class VTraits = CElementTraits< V >  
>  
class CAtlMap  
```  
  
#### Parametri  
 `K`  
 Il tipo di elemento chiave.  
  
 V  
 Il tipo di elemento di valore.  
  
 `KTraits`  
 Il codice utilizzato per copiare o spostare elementi chiave.  Vedere [classe di CElementTraits](../../atl/reference/celementtraits-class.md) per ulteriori informazioni.  
  
 `VTraits`  
 Il codice utilizzato per copiare o spostare elementi di valore.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::KINARGTYPE](../Topic/CAtlMap::KINARGTYPE.md)|Tipo utilizzato quando una chiave passata come argomento di input|  
|[CAtlMap::KOUTARGTYPE](../Topic/CAtlMap::KOUTARGTYPE.md)|Tipo utilizzato quando una chiave viene restituita come argomento di output.|  
|[CAtlMap::VINARGTYPE](../Topic/CAtlMap::VINARGTYPE.md)|Tipo utilizzato quando un valore viene passato come argomento di input.|  
|[CAtlMap::VOUTARGTYPE](../Topic/CAtlMap::VOUTARGTYPE.md)|Tipo utilizzato quando un valore viene passato come argomento di output.|  
  
### Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::CPair Class](../Topic/CAtlMap::CPair%20Class.md)|Classe contenente gli elementi di valore e la chiave.|  
  
### Membri dati di CPair  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPair::m\_key](../Topic/CAtlMap::CPair::m_key.md)|Il membro dati che archivia l'elemento chiave.|  
|[CPair::m\_value](../Topic/CAtlMap::CPair::m_value.md)|Il membro dati che archivia l'elemento di valore.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::CAtlMap](../Topic/CAtlMap::CAtlMap.md)|Costruttore.|  
|[CAtlMap::~CAtlMap](../Topic/CAtlMap::~CAtlMap.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::AssertValid](../Topic/CAtlMap::AssertValid.md)|Chiamare questo metodo per generare un'eccezione ASSERT se `CAtlMap` non è valido.|  
|[CAtlMap::DisableAutoRehash](../Topic/CAtlMap::DisableAutoRehash.md)|Chiamare questo metodo per disabilitare rimaneggiare automatico dell'oggetto `CAtlMap`.|  
|[CAtlMap::EnableAutoRehash](../Topic/CAtlMap::EnableAutoRehash.md)|Chiamare questo metodo per abilitare rimaneggiare automatico dell'oggetto `CAtlMap`.|  
|[CAtlMap::GetAt](../Topic/CAtlMap::GetAt.md)|Chiamare questo metodo per restituire l'elemento nel percorso specificato nel mapping.|  
|[CAtlMap::GetCount](../Topic/CAtlMap::GetCount.md)|Chiamare questo metodo per recuperare il numero di elementi nella mappa.|  
|[CAtlMap::GetHashTableSize](../Topic/CAtlMap::GetHashTableSize.md)|Chiamare questo metodo per determinare il numero di cestini nell'hash di mapping \- tabella.|  
|[CAtlMap::GetKeyAt](../Topic/CAtlMap::GetKeyAt.md)|Chiamare questo metodo per recuperare la chiave archiviata nel percorso specificato nell'oggetto `CAtlMap`.|  
|[CAtlMap::GetNext](../Topic/CAtlMap::GetNext.md)|Chiamare questo metodo per ottenere un puntatore alla coppia dell'elemento nell'oggetto `CAtlMap`.|  
|[CAtlMap::GetNextAssoc](../Topic/CAtlMap::GetNextAssoc.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CAtlMap::GetNextKey](../Topic/CAtlMap::GetNextKey.md)|Chiamare questo metodo per recuperare la chiave dall'oggetto `CAtlMap`.|  
|[CAtlMap::GetNextValue](../Topic/CAtlMap::GetNextValue.md)|Chiamare questo metodo per ottenere il valore dall'oggetto `CAtlMap`.|  
|[CAtlMap::GetStartPosition](../Topic/CAtlMap::GetStartPosition.md)|Chiamare questo metodo per avviare un'iterazione di mapping.|  
|[CAtlMap::GetValueAt](../Topic/CAtlMap::GetValueAt.md)|Chiamare questo metodo per recuperare il valore archiviato in una posizione specificata nell'oggetto `CAtlMap`.|  
|[CAtlMap::InitHashTable](../Topic/CAtlMap::InitHashTable.md)|Chiamare questo metodo per inizializzare la tabella hash.|  
|[CAtlMap::IsEmpty](../Topic/CAtlMap::IsEmpty.md)|Chiamare questo metodo per verificare un oggetto mappa vuota.|  
|[CAtlMap::Lookup](../Topic/CAtlMap::Lookup.md)|Chiamare questo metodo per trovare le chiavi o valori nell'oggetto `CAtlMap`.|  
|[CAtlMap::Rehash](../Topic/CAtlMap::Rehash.md)|Chiamare questo metodo per rimaneggiare l'oggetto `CAtlMap`.|  
|[CAtlMap::RemoveAll](../Topic/CAtlMap::RemoveAll.md)|Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto `CAtlMap`.|  
|[CAtlMap::RemoveAtPos](../Topic/CAtlMap::RemoveAtPos.md)|Chiamare questo metodo per eliminare l'elemento nella posizione specificata nell'oggetto `CAtlMap`.|  
|[CAtlMap::RemoveKey](../Topic/CAtlMap::RemoveKey.md)|Chiamare questo metodo per eliminare un elemento dall'oggetto `CAtlMap`, in base alla chiave.|  
|[CAtlMap::SetAt](../Topic/CAtlMap::SetAt.md)|Chiamare questo metodo per inserire una coppia dell'elemento nella mappa.|  
|[CAtlMap::SetOptimalLoad](../Topic/CAtlMap::SetOptimalLoad.md)|Chiamare questo metodo per impostare il caricamento ottimale dell'oggetto `CAtlMap`.|  
|[CAtlMap::SetValueAt](../Topic/CAtlMap::SetValueAt.md)|Chiamare questo metodo per modificare il valore archiviato in una posizione specificata nell'oggetto `CAtlMap`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlMap::operator](../Topic/CAtlMap::operator.md)|Sostituisce o aggiunge un nuovo elemento a `CAtlMap`.|  
  
## Note  
 `CAtlMap` fornisce il supporto per una matrice di mapping di qualsiasi tipo specificato, mantenimento una matrice non ordinata degli elementi principali e i relativi valori collegati.  Gli elementi \(consistendo di una chiave e un valore\) vengono memorizzate mediante un algoritmo hash, consentendo grandi quantità di dati da archiviare e recuperare in modo efficiente.  
  
 I parametri `VTraits` e `KTraits` disponibili classi di tratti che contengono tutto il codice supplementare necessario per copiare o spostare elementi.  
  
 Un'alternativa a `CAtlMap` viene fornita dalla classe [CRBMap](../../atl/reference/crbmap-class.md).  `CRBMap` inoltre memorizza le coppie chiave\/valore, ma le caratteristiche di prestazione diverse di mostre.  Il tempo impiegato per inserire un elemento, per cercare una chiave, o per eliminare una chiave da un oggetto `CRBMap` è di ordine  *log\(n\)*, dove *n* è il numero di elementi.  Per `CAtlMap`, tutte queste operazioni in genere richiedono tempo costante, sebbene gli scenari peggiori possono essere di ordine *N.* Pertanto, in un caso tipico, `CAtlMap` è più veloce.  
  
 Un'altra differenza tra `CRBMap` e `CAtlMap` diventa evidente quando si scorre gli elementi archiviati.  In `CRBMap`, gli elementi vengono visualizzati in un ordinamento.  In `CAtlMap`, gli elementi non vengono ordinati e nessun ordine può essere dedotto.  
  
 Quando un numero limitato di elementi devono essere memorizzati, considerare l'utilizzo della classe [CSimpleMap](../../atl/reference/csimplemap-class.md) anziché.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Esempio di marquee](../../top/visual-cpp-samples.md)   
 [L'esempio UpdatePV](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)