---
title: "CMapStringToOb Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMapStringToOb"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMapStringToOb class"
  - "classi di raccolte, string mapping"
  - "stringhe [C++], class for mapping"
ms.assetid: 09653980-b885-4f3a-8594-0aeb7f94c601
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CMapStringToOb Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe di raccolta dizionario che esegue il mapping `CString` univoco oggetti a puntatori `CObject`.  
  
## Sintassi  
  
```  
class CMapStringToOb : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::CMapStringToOb](../Topic/CMapStringToOb::CMapStringToOb.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::GetCount](../Topic/CMapStringToOb::GetCount.md)|Restituisce il numero di elementi in questa mappa.|  
|[CMapStringToOb::GetHashTableSize](../Topic/CMapStringToOb::GetHashTableSize.md)|Determina il numero corrente degli elementi nella tabella hash.|  
|[CMapStringToOb::GetNextAssoc](../Topic/CMapStringToOb::GetNextAssoc.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CMapStringToOb::GetSize](../Topic/CMapStringToOb::GetSize.md)|Restituisce il numero di elementi in questa mappa.|  
|[CMapStringToOb::GetStartPosition](../Topic/CMapStringToOb::GetStartPosition.md)|Restituisce la posizione del primo elemento.|  
|[CMapStringToOb::HashKey](../Topic/CMapStringToOb::HashKey.md)|Calcola il valore hash della chiave specificata.|  
|[CMapStringToOb::InitHashTable](../Topic/CMapStringToOb::InitHashTable.md)|Inizializza la tabella hash.|  
|[CMapStringToOb::IsEmpty](../Topic/CMapStringToOb::IsEmpty.md)|Test per lo stato del Vuoto\- mapping \(alcun elemento\).|  
|[CMapStringToOb::Lookup](../Topic/CMapStringToOb::Lookup.md)|Cerca un puntatore a void base alla chiave del puntatore a void.  Il valore del puntatore, non l'entità che indica, viene utilizzato per il confronto principale.|  
|[CMapStringToOb::LookupKey](../Topic/CMapStringToOb::LookupKey.md)|Restituisce un riferimento alla chiave associata al valore della chiave specificato.|  
|[CMapStringToOb::RemoveAll](../Topic/CMapStringToOb::RemoveAll.md)|Rimuove tutti gli elementi da questa mappa.|  
|[CMapStringToOb::RemoveKey](../Topic/CMapStringToOb::RemoveKey.md)|Rimuove un elemento specificato da una chiave.|  
|[CMapStringToOb::SetAt](../Topic/CMapStringToOb::SetAt.md)|Inserisce un elemento nella mappa, sostituire un elemento esistente se una chiave corrispondente viene trovata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::operator](../Topic/CMapStringToOb::operator.md)|Inserisce un elemento nel mapping alla sostituzione dell'operatore per `SetAt`.|  
  
## Note  
 Una volta aggiunto una coppia di`CObject*` \- `CString`\(elemento\) nel mapping, è possibile recuperare o eliminare in modo efficiente la coppia utilizzando una stringa o un valore `CString` come chiave.  È inoltre possibile scorrere tutti gli elementi nella mappa.  
  
 Una variabile di tipo **POSITION** viene utilizzata per accesso alternativo voce in tutte le variazioni di mapping.  È possibile utilizzare **POSITION** "" si ricorda una voce e scorrere il mapping.  Si potrebbe pensare che l'iterazione è sequenziale per valore della chiave; non è.  La sequenza di elementi recuperati è indeterminata.  
  
 `CMapStringToOb` include la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump degli elementi.  Ogni elemento viene serializzato a sua volta se un mapping viene archiviato in un archivio, con l'operatore di overload di inserimento \(**\<\<**\) o con la funzione membro `Serialize`.  
  
 Se è necessario un dump di diagnostica dei singoli elementi nel mapping \(il valore `CString` e contenuto `CObject` \), è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un oggetto `CMapStringToOb` viene eliminato, oppure quando gli elementi vengono rimossi, gli oggetti `CString` e i puntatori `CObject` vengono rimossi.  Gli oggetti a cui fanno riferimento i puntatori `CObject` non vengono eliminati.  
  
 La derivazione della classe di mapping è simile alla derivazione dell'elenco.  Vedere l'articolo [Raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe per scopi specifici dell'elenco.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapStringToOb`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMapPtrToPtr Class](../../mfc/reference/cmapptrtoptr-class.md)   
 [CMapPtrToWord Class](../../mfc/reference/cmapptrtoword-class.md)   
 [CMapStringToPtr Class](../../mfc/reference/cmapstringtoptr-class.md)   
 [CMapStringToString Class](../../mfc/reference/cmapstringtostring-class.md)   
 [CMapWordToOb Class](../../mfc/reference/cmapwordtoob-class.md)   
 [CMapWordToPtr Class](../../mfc/reference/cmapwordtoptr-class.md)