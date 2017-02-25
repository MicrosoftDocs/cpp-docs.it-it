---
title: "CMapStringToPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMapStringToPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMapStringToPtr class"
  - "classi di raccolte, string mapping"
  - "stringhe [C++], class for mapping"
ms.assetid: 1ac11143-eb0a-4511-a662-2df0d1d9005b
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CMapStringToPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I mapping di supportare i puntatori a void impostati da `CString` oggetti.  
  
## Sintassi  
  
```  
class CMapStringToPtr : public CObject  
```  
  
## Membri  
 Le funzioni membro `CMapStringToPtr` sono simili alle funzioni membro di classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CMapStringToOb` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come un parametro di funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `BOOL CMapStringToOb::Lookup( const char* <key>,`  
  
 `CObject*& <rValue> ) const;`  
  
 ad esempio, converte a  
  
 `BOOL CMapStringToPtr::Lookup( LPCTSTR <key>, void*& <rValue> )`  
  
 `const;`  
  
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
 `CMapStringToPtr` include la macro `IMPLEMENT_DYNAMIC` per l'accesso il tipo di runtime ed eseguire il dump a `CDumpContext` un oggetto.  Se è necessario un dump di singoli elementi di mapping, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 i mapping di Stringa a puntatore non possono essere serializzati.  
  
 Quando un oggetto `CMapStringToPtr` viene eliminato, oppure quando gli elementi vengono rimossi, la chiave `CString` oggetti e le parole vengono rimosse.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapStringToPtr`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)