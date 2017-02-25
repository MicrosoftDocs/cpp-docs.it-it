---
title: "CMapWordToPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMapWordToPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "16-bit word mapping"
  - "CMapWordToPtr class"
ms.assetid: b204d87f-6427-43e1-93e3-a4b1bb41099f
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CMapWordToPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mapping di supportare i puntatori a void impostati dalle parole a 16 bit.  
  
## Sintassi  
  
```  
class CMapWordToPtr : public CObject  
```  
  
## Membri  
 Le funzioni membro `CMapWordToPtr` sono simili alle funzioni membro di classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CMapStringToOb` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come un parametro di funzione o valore restituito, sostituire un puntatore a `void`.  Per visualizzare `CString` o un puntatore **const** a `char` come un parametro di funzione o valore restituito, **WORD**sostitutivo.  
  
 `BOOL CMapStringToOb::Lookup( const char* <key>,`  
  
 `CObject*& <rValue> ) const;`  
  
 ad esempio, converte a  
  
 `BOOL CMapWordToPtr::Lookup( WORD <key>, void*& <rValue> ) const;`  
  
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
 `CMapWordToPtr` include la macro `IMPLEMENT_DYNAMIC` per l'accesso il tipo di runtime ed eseguire il dump a `CDumpContext` un oggetto.  Se è necessario un dump di singoli elementi di mapping, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 i mapping di Word a puntatore non possono essere serializzati.  
  
 Quando un oggetto `CMapWordToPtr` viene eliminato, oppure quando gli elementi vengono rimossi, le parole e collegamenti rimossi.  Le entità fatto riferimento dai puntatori non vengono rimosse.  
  
 Per ulteriori informazioni su `CMapWordToPtr`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapWordToPtr`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)