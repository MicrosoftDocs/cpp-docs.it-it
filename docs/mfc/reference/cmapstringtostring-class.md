---
title: "CMapStringToString Class | Microsoft Docs"
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
  - "CMapStringToString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMapStringToString class"
  - "classi di raccolte, string mapping"
  - "stringhe [C++], class for mapping"
  - "stringhe [C++], mapping"
ms.assetid: b45794c2-fe6b-4edb-a8ca-faa03b57b4a8
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMapStringToString Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I mapping di supportare gli oggetti `CString` impostati da `CString` oggetti.  
  
## Sintassi  
  
```  
class CMapStringToString : public CObject  
```  
  
## Membri  
 Le funzioni membro `CMapStringToString` sono simili alle funzioni membro di classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CMapStringToOb` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come valore restituito o parametro\-funzione "restituito", sostituire un puntatore a `char`.  Per visualizzare un puntatore `CObject` come parametro di funzione "di l", sostituire un puntatore a `char`.  
  
 `BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`  
  
 ad esempio, converte a  
  
 `BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`  
  
### Strutture pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToString::CPair](../Topic/CMapStringToString::CPair.md)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto stringa collegato.|  
  
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
|[CMapStringToString::PGetFirstAssoc](../Topic/CMapStringToString::PGetFirstAssoc.md)|Ottiene un puntatore a primo `CString` nella mappa.|  
|[CMapStringToString::PGetNextAssoc](../Topic/CMapStringToString::PGetNextAssoc.md)|Ottiene un puntatore a `CString` seguente per l'iterazione.|  
|[CMapStringToString::PLookup](../Topic/CMapStringToString::PLookup.md)|Restituisce un puntatore a `CString` il cui valore corrisponde al valore specificato.|  
|[CMapStringToOb::RemoveAll](../Topic/CMapStringToOb::RemoveAll.md)|Rimuove tutti gli elementi da questa mappa.|  
|[CMapStringToOb::RemoveKey](../Topic/CMapStringToOb::RemoveKey.md)|Rimuove un elemento specificato da una chiave.|  
|[CMapStringToOb::SetAt](../Topic/CMapStringToOb::SetAt.md)|Inserisce un elemento nella mappa, sostituire un elemento esistente se una chiave corrispondente viene trovata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMapStringToOb::operator](../Topic/CMapStringToOb::operator.md)|Inserisce un elemento nel mapping alla sostituzione dell'operatore per `SetAt`.|  
  
## Note  
 `CMapStringToString` include la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump degli elementi.  Ogni elemento viene serializzato a sua volta se un mapping viene archiviato in un archivio, con l'operatore di overload di inserimento \(**\<\<**\) o con la funzione membro `Serialize`.  
  
 Se è necessario un dump dell'utente `CString`\- gli elementi di`CString`, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando un oggetto `CMapStringToString` viene eliminato, oppure quando gli elementi vengono rimossi, gli oggetti `CString` vengono rimossi in modo appropriato.  
  
 Per ulteriori informazioni su `CMapStringToString`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapStringToString`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)