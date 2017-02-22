---
title: "CStringList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStringList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringList class"
  - "elenchi, stringa"
  - "stringhe [C++], raccolte"
  - "stringhe [C++], elenchi"
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CStringList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta gli elenchi di oggetti `CString`.  
  
## Sintassi  
  
```  
class CStringList : public CObject  
```  
  
## Membri  
 Le funzioni membro `CStringList` sono simili alle funzioni membro di classe [CObList](../../mfc/reference/coblist-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CObList` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come valore restituito, sostituire `CString` \(non un puntatore `CString` \).  Per visualizzare un puntatore `CObject` come parametro di funzione, sostituire `LPCTSTR`.  
  
 `CObject*& CObList::GetHead() const;`  
  
 ad esempio, converte a  
  
 `CString& CStringList::GetHead() const;`  
  
 e  
  
 `POSITION AddHead( CObject* <newElement> );`  
  
 converte un oggetto  
  
 `POSITION AddHead( LPCTSTR <newElement> );`  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObList::CObList](../Topic/CObList::CObList.md)|Crea un elenco vuoto.|  
  
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
 Tutti i confronti vengono eseguiti mediante valore, pertanto i caratteri della stringa vengono confrontati anziché gli indirizzi di stringhe.  
  
 `CStringList` include la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump degli elementi.  Se un elenco di oggetti `CString` viene archiviato in un archivio, con un operatore di overload di inserimento o con la funzione membro `Serialize`, ogni elemento `CString` viene serializzato a sua volta.  
  
 Se è necessario un dump degli elementi `CString` utente, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Per ulteriori informazioni su l `CStringList`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringList`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)