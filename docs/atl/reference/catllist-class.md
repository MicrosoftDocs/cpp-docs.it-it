---
title: "CAtlList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlList"
  - "CAtlList"
  - "ATL::CAtlList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlList class"
ms.assetid: 09e98053-64b2-4efa-99ab-d0542caaf981
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CAtlList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare e gestire un oggetto elenco.  
  
## Sintassi  
  
```  
  
      template<  
   typename E,  
   class ETraits = CElementTraits< E >  
>  
class CAtlList  
```  
  
#### Parametri  
 `E`  
 Tipo dell'elemento.  
  
 `ETraits`  
 Il codice utilizzato per copiare o spostare elementi.  Vedere [classe di CElementTraits](../../atl/reference/celementtraits-class.md) per ulteriori informazioni.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::INARGTYPE](../Topic/CAtlList::INARGTYPE.md)||  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::CAtlList](../Topic/CAtlList::CAtlList.md)|Costruttore.|  
|[CAtlList::~CAtlList](../Topic/CAtlList::~CAtlList.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlList::AddHead](../Topic/CAtlList::AddHead.md)|Chiamare questo metodo per aggiungere un elemento all'inizio dell'elenco.|  
|[CAtlList::AddHeadList](../Topic/CAtlList::AddHeadList.md)|Chiamare questo metodo per aggiungere un elenco esistenteinizio dell'elenco.|  
|[CAtlList::AddTail](../Topic/CAtlList::AddTail.md)|Chiamare questo metodo per aggiungere un elemento alla coda di questo elenco.|  
|[CAtlList::AddTailList](../Topic/CAtlList::AddTailList.md)|Chiamare questo metodo per aggiungere un elenco esistente la parte finale di questo elenco.|  
|[CAtlList::AssertValid](../Topic/CAtlList::AssertValid.md)|Chiamare questo metodo per verificare l'elenco è valido.|  
|[CAtlList::Find](../Topic/CAtlList::Find.md)|Chiamare questo metodo per trovare l'elenco l'elemento specificato.|  
|[CAtlList::FindIndex](../Topic/CAtlList::FindIndex.md)|Chiamare questo metodo per ottenere la posizione di un elemento, in base a un valore di indice.|  
|[CAtlList::GetAt](../Topic/CAtlList::GetAt.md)|Chiamare questo metodo per restituire l'elemento nella posizione specificata nell'elenco.|  
|[CAtlList::GetCount](../Topic/CAtlList::GetCount.md)|Chiamare questo metodo per restituire il numero di oggetti nell'elenco.|  
|[CAtlList::GetHead](../Topic/CAtlList::GetHead.md)|Chiamare questo metodo per restituire l'elementoinizio dell'elenco.|  
|[CAtlList::GetHeadPosition](../Topic/CAtlList::GetHeadPosition.md)|Chiamare questo metodo per ottenere la posizione dell'intestazione dell'elenco.|  
|[CAtlList::GetNext](../Topic/CAtlList::GetNext.md)|Chiamare questo metodo per restituire l'elemento seguente nell'elenco.|  
|[CAtlList::GetPrev](../Topic/CAtlList::GetPrev.md)|Chiamare questo metodo per restituire l'elemento precedente dall'elenco.|  
|[CAtlList::GetTail](../Topic/CAtlList::GetTail.md)|Chiamare questo metodo per restituire l'elemento tail all'elenco.|  
|[CAtlList::GetTailPosition](../Topic/CAtlList::GetTailPosition.md)|Chiamare questo metodo per ottenere la posizione della parte finale dell'elenco.|  
|[CAtlList::InsertAfter](../Topic/CAtlList::InsertAfter.md)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco dopo la posizione specificata.|  
|[CAtlList::InsertBefore](../Topic/CAtlList::InsertBefore.md)|Chiamare questo metodo per inserire un nuovo elemento nell'elenco prima della posizione specificata.|  
|[CAtlList::IsEmpty](../Topic/CAtlList::IsEmpty.md)|Chiamare questo metodo per determinare se l'elenco è vuoto.|  
|[CAtlList::MoveToHead](../Topic/CAtlList::MoveToHead.md)|Chiamare questo metodo per spostare l'elemento specificato nell'intestazione dell'elenco.|  
|[CAtlList::MoveToTail](../Topic/CAtlList::MoveToTail.md)|Chiamare questo metodo per spostare l'elemento specificato nella parte finale dell'elenco.|  
|[CAtlList::RemoveAll](../Topic/CAtlList::RemoveAll.md)|Chiamare questo metodo per rimuovere tutti gli elementi dall'elenco.|  
|[CAtlList::RemoveAt](../Topic/CAtlList::RemoveAt.md)|Chiamare questo metodo per rimuovere un singolo elemento dall'elenco.|  
|[CAtlList::RemoveHead](../Topic/CAtlList::RemoveHead.md)|Chiamare questo metodo per eliminare l'elementoinizio dell'elenco.|  
|[CAtlList::RemoveHeadNoReturn](../Topic/CAtlList::RemoveHeadNoReturn.md)|Chiamare questo metodo per eliminare l'elementoinizio dell'elenco senza restituire un valore.|  
|[CAtlList::RemoveTail](../Topic/CAtlList::RemoveTail.md)|Chiamare questo metodo per eliminare l'elemento tail all'elenco.|  
|[CAtlList::RemoveTailNoReturn](../Topic/CAtlList::RemoveTailNoReturn.md)|Chiamare questo metodo per eliminare l'elemento tail all'elenco senza restituire un valore.|  
|[CAtlList::SetAt](../Topic/CAtlList::SetAt.md)|Chiamare questo metodo per impostare il valore dell'elemento in una posizione specificata nell'elenco.|  
|[CAtlList::SwapElements](../Topic/CAtlList::SwapElements.md)|Chiamare questo metodo per scambiare gli elementi nell'elenco.|  
  
## Note  
 La classe `CAtlList` supporta gli elenchi ordinati di oggetti nonunique accessibili in sequenza o per valore.  Gli elenchi di`CAtlList` doppio si comportano come gli elenchi collegati.  Ogni elenco ha un'intestazione e un elemento tail e i nuovi elementi \(o elenchi in alcuni casi\) possono essere aggiunti all'elenco, o essere inseriti prima o dopo gli elementi specifici.  
  
 La maggior parte dei metodi `CAtlList` utilizzano un valore di percorso.  Questo valore viene utilizzato dai metodi per fare riferimento alla posizione effettiva di memoria in cui gli elementi vengono archiviati e non deve essere calcolato direttamente o previsto.  Se è necessario accedere l'ennesimo elemento nell'elenco, il metodo [CAtlList::FindIndex](../Topic/CAtlList::FindIndex.md) restituirà il valore della posizione corrispondente per un indice specificato.  I metodi [CAtlList::GetNext](../Topic/CAtlList::GetNext.md) e [CAtlList::GetPrev](../Topic/CAtlList::GetPrev.md) possono essere utilizzati per scorrere gli oggetti nell'elenco.  
  
 Per ulteriori informazioni sulle classi di raccolte disponibili con ATL, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CList Class](../../mfc/reference/clist-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)