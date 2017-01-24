---
title: "CObList Class | Microsoft Docs"
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
  - "CObList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CObList class"
  - "elenchi, oggetto"
  - "oggetti [C++], lists of"
ms.assetid: 80699c93-33d8-4f8b-b8cf-7b58aeab64ca
caps.latest.revision: 20
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CObList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta gli elenchi ordinati dei puntatori nonunique `CObject` accessibili in sequenza o per valore del puntatore.  
  
## Sintassi  
  
```  
class CObList : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList::CObList](../Topic/CObList::CObList.md)|Crea un elenco vuoto per puntatori a `CObject`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList::AddHead](../Topic/CObList::AddHead.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) all'inizio dell'elenco \(effettua una nuova intestazione\).|  
|[CObList::AddTail](../Topic/CObList::AddTail.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) la parte finale di elenco \(effettua un nuovo elemento tail\).|  
|[CObList::Find](../Topic/CObList::Find.md)|Ottiene la posizione di un elemento specificato dal valore di un puntatore.|  
|[CObList::FindIndex](../Topic/CObList::FindIndex.md)|Ottiene la posizione di un elemento specificato da un indice a base zero.|  
|[CObList::GetAt](../Topic/CObList::GetAt.md)|Ottiene l'elemento nella posizione specificata.|  
|[CObList::GetCount](../Topic/CObList::GetCount.md)|Restituisce il numero di elementi di questo elenco.|  
|[CObList::GetHead](../Topic/CObList::GetHead.md)|Restituisce l'elemento head dell'elenco \(non può essere vuoto.|  
|[CObList::GetHeadPosition](../Topic/CObList::GetHeadPosition.md)|Restituisce la posizione dell'elemento head dell'elenco.|  
|[CObList::GetNext](../Topic/CObList::GetNext.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CObList::GetPrev](../Topic/CObList::GetPrev.md)|Ottiene l'elemento precedente per l'iterazione.|  
|[CObList::GetSize](../Topic/CObList::GetSize.md)|Restituisce il numero di elementi di questo elenco.|  
|[CObList::GetTail](../Topic/CObList::GetTail.md)|Restituisce l'elemento tail di elenco \(non può essere vuoto.|  
|[CObList::GetTailPosition](../Topic/CObList::GetTailPosition.md)|Restituisce la posizione dell'elemento tail dell'elenco.|  
|[CObList::InsertAfter](../Topic/CObList::InsertAfter.md)|Inserisce un nuovo elemento a una posizione specificata.|  
|[CObList::InsertBefore](../Topic/CObList::InsertBefore.md)|Inserisce un nuovo elemento prima della posizione specificata.|  
|[CObList::IsEmpty](../Topic/CObList::IsEmpty.md)|Test per lo stato dell'elenco vuoto \(alcun elemento\).|  
|[CObList::RemoveAll](../Topic/CObList::RemoveAll.md)|Rimuove tutti gli elementi di questo elenco.|  
|[CObList::RemoveAt](../Topic/CObList::RemoveAt.md)|Rimuove un elemento da questo elenco, specificato dalla posizione.|  
|[CObList::RemoveHead](../Topic/CObList::RemoveHead.md)|Rimuove l'elemento dall'intestazione dell'elenco.|  
|[CObList::RemoveTail](../Topic/CObList::RemoveTail.md)|Rimuove l'elemento dalla coda dell'elenco.|  
|[CObList::SetAt](../Topic/CObList::SetAt.md)|Imposta l'elemento nel percorso specificato.|  
  
## Note  
 Gli elenchi di`CObList` si comportano come gli elenchi doppio\-collegati.  
  
 Una variabile di tipo **POSITION** è una chiave per l'elenco.  È possibile utilizzare una variabile **POSITION** sia come iteratore per scorrere un elenco in sequenza che come segnalibro per utilizzare un punto.  Una posizione non è uguale all'indice, tuttavia.  
  
 L'inserimento dell'elemento è molto veloceinizio dell'elenco, la parte finale e a **POSITION**noto.  Una ricerca sequenziale è necessaria per trovare un elemento per valore o indice.  La ricerca può essere lenta se l'elenco è lungo.  
  
 `CObList` include la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump degli elementi.  Se l'elenco dei puntatori `CObject` viene archiviato in un archivio, con un operatore di overload di inserimento o con la funzione membro `Serialize`, ogni elemento `CObject` viene serializzato a sua volta.  
  
 Se è necessario un dump degli elementi `CObject` nell'elenco, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un oggetto `CObList` viene eliminato, oppure quando gli elementi vengono rimossi, solo i puntatori `CObject` vengono eliminati, non oggetti che fanno riferimento.  
  
 È possibile derivare classi personalizzate da `CObList`.  La nuova classe di elenco, progettata per utilizzare i puntatori agli oggetti derivati da `CObject`, aggiunge nuovi membri dati e nuove funzioni membro.  Si noti che l'elenco risultante non completamente indipendente dai tipi, in quanto consente l'inserimento del puntatore `CObject`.  
  
> [!NOTE]
>  È necessario utilizzare la macro [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) nell'implementazione della classe derivata se si desidera serializzare l'elenco.  
  
 Per ulteriori informazioni su l `CObList`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CObList`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CStringList Class](../../mfc/reference/cstringlist-class.md)   
 [CPtrList Class](../../mfc/reference/cptrlist-class.md)