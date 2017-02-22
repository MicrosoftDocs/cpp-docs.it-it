---
title: "CRBTree Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CRBTree"
  - "CRBTree"
  - "ATL::CRBTree"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRBTree class"
ms.assetid: a1b1cb63-38e4-4fc2-bb28-f774d1721760
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CRBTree Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per la creazione e l'utilizzo della struttura ad albero Rosso\- Nero.  
  
## Sintassi  
  
```  
  
      template<  
   typename K,  
   typename V,  
   class KTraits = CElementTraits< K >,  
   class VTraits = CElementTraits< V >  
> class CRBTree  
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
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBTree::KINARGTYPE](../Topic/CRBTree::KINARGTYPE.md)|Digitare utilizzato quando una chiave passata come argomento di input.|  
|[CRBTree::KOUTARGTYPE](../Topic/CRBTree::KOUTARGTYPE.md)|Tipo utilizzato quando una chiave viene restituita come argomento di output.|  
|[CRBTree::VINARGTYPE](../Topic/CRBTree::VINARGTYPE.md)|Tipo utilizzato quando un valore viene passato come argomento di input.|  
|[CRBTree::VOUTARGTYPE](../Topic/CRBTree::VOUTARGTYPE.md)|Tipo utilizzato quando un valore viene passato come argomento di output.|  
  
### Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBTree::CPair Class](../Topic/CRBTree::CPair%20Class.md)|Classe contenente gli elementi di valore e la chiave.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBTree::~CRBTree](../Topic/CRBTree::~CRBTree.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRBTree::FindFirstKeyAfter](../Topic/CRBTree::FindFirstKeyAfter.md)|Chiamare questo metodo per trovare la posizione dell'elemento che utilizza la chiave successivo disponibile.|  
|[CRBTree::GetAt](../Topic/CRBTree::GetAt.md)|Chiamare questo metodo per ottenere un elemento in una posizione specificata nella struttura ad albero.|  
|[CRBTree::GetCount](../Topic/CRBTree::GetCount.md)|Chiamare questo metodo per ottenere il numero di elementi nella struttura ad albero.|  
|[CRBTree::GetHeadPosition](../Topic/CRBTree::GetHeadPosition.md)|Chiamare questo metodo per ottenere il valore della posizione dell'elemento all'intestazione della struttura ad albero.|  
|[CRBTree::GetKeyAt](../Topic/CRBTree::GetKeyAt.md)|Chiamare questo metodo per ottenere la chiave da una posizione specificata nella struttura ad albero.|  
|[CRBTree::GetNext](../Topic/CRBTree::GetNext.md)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` e spostare la posizione all'elemento successivo.|  
|[CRBTree::GetNextAssoc](../Topic/CRBTree::GetNextAssoc.md)|Chiamare questo metodo per ottenere la chiave e il valore di un elemento memorizzato nel mapping e per spostare la posizione all'elemento successivo.|  
|[CRBTree::GetNextKey](../Topic/CRBTree::GetNextKey.md)|Chiamare questo metodo per ottenere la chiave di un elemento memorizzato nella struttura ad albero e per spostare la posizione all'elemento successivo.|  
|[CRBTree::GetNextValue](../Topic/CRBTree::GetNextValue.md)|Chiamare questo metodo per ottenere il valore di un elemento memorizzato nella struttura ad albero e per spostare la posizione all'elemento successivo.|  
|[CRBTree::GetPrev](../Topic/CRBTree::GetPrev.md)|Chiamare questo metodo per ottenere un puntatore a un elemento archiviato nell'oggetto `CRBTree` quindi aggiornare la posizione all'elemento precedente.|  
|[CRBTree::GetTailPosition](../Topic/CRBTree::GetTailPosition.md)|Chiamare questo metodo per ottenere il valore della posizione dell'elemento tail a albero.|  
|[CRBTree::GetValueAt](../Topic/CRBTree::GetValueAt.md)|Chiamare questo metodo per recuperare il valore archiviato in una posizione specificata nell'oggetto `CRBTree`.|  
|[CRBTree::IsEmpty](../Topic/CRBTree::IsEmpty.md)|Chiamare questo metodo per verificare un oggetto vuoto con struttura ad albero.|  
|[CRBTree::RemoveAll](../Topic/CRBTree::RemoveAll.md)|Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto **CRBTree** .|  
|[CRBTree::RemoveAt](../Topic/CRBTree::RemoveAt.md)|Chiamare questo metodo per eliminare l'elemento nella posizione specificata nell'oggetto **CRBTree** .|  
|[CRBTree::SetValueAt](../Topic/CRBTree::SetValueAt.md)|Chiamare questo metodo per modificare il valore archiviato in una posizione specificata nell'oggetto `CRBTree`.|  
  
## Note  
 Un albero Rosso\- Nero è una struttura ad albero di ricerca binaria che utilizza un bit aggiuntivo di informazioni per nodo per garantire che rimanga "bilanciato", ovvero altezza della struttura ad albero non si compila OK " e non influisce sulle prestazioni.  
  
 Questa classe modello è progettata per essere utilizzata da [CRBMap](../../atl/reference/crbmap-class.md) e da [CRBMultiMap](../../atl/reference/crbmultimap-class.md).  La maggior parte dei metodi che compongono queste classi derivate fornito da `CRBTree`.  
  
 Per un maggiore la descrizione completa di diverse classi di raccolte e le relative funzionalità e caratteristiche di prestazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)