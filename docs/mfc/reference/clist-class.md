---
title: "CList Class | Microsoft Docs"
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
  - "CList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CList class"
  - "elenchi"
  - "elenchi, base class for"
ms.assetid: 6f6273c3-c8f6-47f5-ac2a-0a950379ae5d
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta gli elenchi ordinati di oggetti nonunique accessibili in sequenza o per valore.  
  
## Sintassi  
  
```  
template< class TYPE, class ARG_TYPE = const TYPE& >   
class CList : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CList::CList](../Topic/CList::CList.md)|Crea un elenco ordinato vuoto.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CList::AddHead](../Topic/CList::AddHead.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) all'inizio dell'elenco \(effettua una nuova intestazione\).|  
|[CList::AddTail](../Topic/CList::AddTail.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) la parte finale di elenco \(effettua un nuovo elemento tail\).|  
|[CList::Find](../Topic/CList::Find.md)|Ottiene la posizione di un elemento specificato dal valore di un puntatore.|  
|[CList::FindIndex](../Topic/CList::FindIndex.md)|Ottiene la posizione di un elemento specificato da un indice a base zero.|  
|[CList::GetAt](../Topic/CList::GetAt.md)|Ottiene l'elemento nella posizione specificata.|  
|[CList::GetCount](../Topic/CList::GetCount.md)|Restituisce il numero di elementi di questo elenco.|  
|[CList::GetHead](../Topic/CList::GetHead.md)|Restituisce l'elemento head dell'elenco \(non può essere vuoto.|  
|[CList::GetHeadPosition](../Topic/CList::GetHeadPosition.md)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CList::GetNext](../Topic/CList::GetNext.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CList::GetPrev](../Topic/CList::GetPrev.md)|Ottiene l'elemento precedente per l'iterazione.|  
|[CList::GetSize](../Topic/CList::GetSize.md)|Restituisce il numero di elementi di questo elenco.|  
|[CList::GetTail](../Topic/CList::GetTail.md)|Restituisce l'elemento tail di elenco \(non può essere vuoto.|  
|[CList::GetTailPosition](../Topic/CList::GetTailPosition.md)|Restituisce la posizione dell'elemento tail dell'elenco.|  
|[CList::InsertAfter](../Topic/CList::InsertAfter.md)|Inserisce un nuovo elemento a una posizione specificata.|  
|[CList::InsertBefore](../Topic/CList::InsertBefore.md)|Inserisce un nuovo elemento prima della posizione specificata.|  
|[CList::IsEmpty](../Topic/CList::IsEmpty.md)|Test per lo stato dell'elenco vuoto \(alcun elemento\).|  
|[CList::RemoveAll](../Topic/CList::RemoveAll.md)|Rimuove tutti gli elementi di questo elenco.|  
|[CList::RemoveAt](../Topic/CList::RemoveAt.md)|Rimuove un elemento da questo elenco, specificato dalla posizione.|  
|[CList::RemoveHead](../Topic/CList::RemoveHead.md)|Rimuove l'elemento dall'intestazione dell'elenco.|  
|[CList::RemoveTail](../Topic/CList::RemoveTail.md)|Rimuove l'elemento dalla coda dell'elenco.|  
|[CList::SetAt](../Topic/CList::SetAt.md)|Imposta l'elemento nel percorso specificato.|  
  
#### Parametri  
 `TYPE`  
 Tipo di oggetto memorizzato.  
  
 `ARG` *\_* `TYPE`  
 Tipo utilizzato per fare riferimento agli oggetti memorizzati nell'elenco.  Può essere un riferimento.  
  
## Note  
 Gli elenchi di`CList` si comportano come gli elenchi doppio\-collegati.  
  
 Una variabile di tipo **POSITION** è una chiave per l'elenco.  È possibile utilizzare una variabile **POSITION** come iteratore per scorrere un elenco in sequenza e come segnalibro per utilizzare un punto.  Una posizione non è uguale all'indice, tuttavia.  
  
 L'inserimento dell'elemento è molto veloceinizio dell'elenco, la parte finale e a **POSITION**noto.  Una ricerca sequenziale è necessaria per trovare un elemento per valore o indice.  La ricerca può essere lenta se l'elenco è lungo.  
  
 Se è necessario un dump dei singoli elementi nell'elenco, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Alcune funzioni membro della classe chiamano funzioni di supporto globali che devono essere personalizzate per la maggior parte di utilizzare la classe `CList`.  Vedere [Supporto della classe di raccolta](../../mfc/reference/collection-class-helpers.md) nella sezione "Globals e di macro".  
  
 Per ulteriori informazioni su l `CList`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Esempio  
 [!code-cpp[NVC_MFCCollections#35](../../mfc/codesnippet/CPP/clist-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CList`  
  
## Requisiti  
 **Header:** afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMap Class](../../mfc/reference/cmap-class.md)   
 [CArray Class](../../mfc/reference/carray-class.md)