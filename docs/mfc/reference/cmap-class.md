---
title: "CMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMap class"
  - "classi di raccolte, dictionary mapping"
  - "dictionary mapping class"
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe di raccolta dizionario che esegue il mapping delle chiavi univoche ai valori.  
  
## Sintassi  
  
```  
template< class KEY, class ARG_KEY, class VALUE, class ARG_VALUE >class CMap : public CObject  
```  
  
#### Parametri  
 `KEY`  
 Classe dell'oggetto utilizzato come chiave al mapping.  
  
 `ARG` *\_* `KEY`  
 Tipo di dati utilizzato per gli argomenti `KEY` ; generalmente un riferimento a `KEY`.  
  
 `VALUE`  
 Classe dell'oggetto archiviato nella mappa.  
  
 `ARG` *\_* `VALUE`  
 Tipo di dati utilizzato per gli argomenti `VALUE` ; generalmente un riferimento a `VALUE`.  
  
## Membri  
  
### Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::CPair](../Topic/CMap::CPair.md)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto collegato.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::CMap](../Topic/CMap::CMap.md)|Crea una raccolta mappata chiavi ai valori.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::GetCount](../Topic/CMap::GetCount.md)|Restituisce il numero di elementi in questa mappa.|  
|[CMap::GetHashTableSize](../Topic/CMap::GetHashTableSize.md)|Restituisce il numero di elementi nella tabella hash.|  
|[CMap::GetNextAssoc](../Topic/CMap::GetNextAssoc.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CMap::GetSize](../Topic/CMap::GetSize.md)|Restituisce il numero di elementi in questa mappa.|  
|[CMap::GetStartPosition](../Topic/CMap::GetStartPosition.md)|Restituisce la posizione del primo elemento.|  
|[CMap::InitHashTable](../Topic/CMap::InitHashTable.md)|Inizializza un hash presenti e specifica la dimensione.|  
|[CMap::IsEmpty](../Topic/CMap::IsEmpty.md)|Test per lo stato del Vuoto\- mapping \(alcun elemento\).|  
|[CMap::Lookup](../Topic/CMap::Lookup.md)|Trova il valore mappato alla chiave specificata.|  
|[CMap::PGetFirstAssoc](../Topic/CMap::PGetFirstAssoc.md)|Restituisce un puntatore al primo elemento.|  
|[CMap::PGetNextAssoc](../Topic/CMap::PGetNextAssoc.md)|Ottiene un puntatore all'elemento successivo per l'iterazione.|  
|[CMap::PLookup](../Topic/CMap::PLookup.md)|Restituisce un puntatore a una chiave del cui valore corrisponde al valore specificato.|  
|[CMap::RemoveAll](../Topic/CMap::RemoveAll.md)|Rimuove tutti gli elementi da questa mappa.|  
|[CMap::RemoveKey](../Topic/CMap::RemoveKey.md)|Rimuove un elemento specificato da una chiave.|  
|[CMap::SetAt](../Topic/CMap::SetAt.md)|Inserisce un elemento nella mappa, sostituire un elemento esistente se una chiave corrispondente viene trovata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMap::operator](../Topic/CMap::operator.md)|Inserisce un elemento nel mapping alla sostituzione dell'operatore per `SetAt`.|  
  
## Note  
 Una volta aggiunto una coppia chiave\-valore \(elemento\) nel mapping, è possibile recuperare o eliminare in modo efficiente la coppia utilizzando la chiave per accedervi.  È inoltre possibile scorrere tutti gli elementi nella mappa.  
  
 Una variabile di tipo **POSITION** viene utilizzata per l'accesso di alternativa alle voci.  È possibile utilizzare **POSITION** "" si ricorda una voce e scorrere il mapping.  Si potrebbe pensare che l'iterazione è sequenziale per valore della chiave; non è.  La sequenza di elementi recuperati è indeterminata.  
  
 Alcune funzioni membro della classe chiamano funzioni di supporto globali che devono essere personalizzate per la maggior parte di utilizzare la classe `CMap`.  Vedere [Supporto della classe di raccolta](../../mfc/reference/collection-class-helpers.md) nella sezione Globals e macro `MFC``Reference`.  
  
 `CMap` esegue l'override [CObject::Serialize](../Topic/CObject::Serialize.md) per supportare la serializzazione e il dump degli elementi.  Se un mapping viene archiviato in un archivio utilizzando `Serialize`, ogni elemento mapping viene serializzato a sua volta.  L'implementazione predefinita della funzione di supporto `SerializeElements` esegue un'operazione bit per bit scrittura.  Per informazioni sulla serializzazione degli elementi della raccolta del puntatore derivati da `CObject` o altri tipi definiti dall'utente, vedere [Procedura: creazione di una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md).  
  
 Se è necessario un dump di diagnostica dei singoli elementi nel mapping \(chiavi e valori\), è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un oggetto `CMap` viene eliminato, oppure quando gli elementi vengono rimossi, le chiavi e i valori di entrambe vengono rimossi.  
  
 La derivazione della classe di mapping è simile alla derivazione dell'elenco.  Vedere l'articolo [Raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe per scopi specifici dell'elenco.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMap`  
  
## Requisiti  
 **Header:** afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)