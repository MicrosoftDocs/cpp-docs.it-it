---
title: "CMapPtrToWord Class | Microsoft Docs"
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
  - "CMapPtrToWord"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "16-bit word mapping"
  - "CMapPtrToWord class"
ms.assetid: 4631c6b6-d49f-49d9-adc0-1e0491e32d7b
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMapPtrToWord Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mapping di supporta le parole a 16 bit impostati dai puntatori a void.  
  
## Sintassi  
  
```  
class CMapPtrToWord : public CObject  
```  
  
## Membri  
 Le funzioni membro `CMapPtrToWord` sono simili alle funzioni membro di classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CMapStringToOb` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come un parametro di funzione o valore restituito, **WORD**sostitutivo.  Per visualizzare `CString` o un puntatore **const** a `char` come un parametro di funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `BOOL CMapStringToOb::Lookup( const char* <key>,`  
  
 `CObject*& <rValue> ) const;`  
  
 ad esempio, converte a  
  
 `BOOL CMapPtrToWord::Lookup( const void* <key>, WORD& <rValue> ) const;`  
  
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
  
 i mapping Puntatore a Word non possono essere serializzati.  
  
 Quando un oggetto `CMapPtrToWord` viene eliminato, oppure quando gli elementi vengono rimossi, puntatori e le parole vengono rimossi.  Le entità fatto riferimento dai puntatori principali non vengono rimosse.  
  
 Per ulteriori informazioni su `CMapPtrToWord`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CMapPtrToWord`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)