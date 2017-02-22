---
title: "Classe CNoAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CNoAccessor"
  - "CNoAccessor"
  - "ATL.CNoAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoAccessor (classe)"
ms.assetid: eb669ae5-0a56-49a3-9646-c4ae6239da31
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CNoAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Può essere utilizzato come argomento di modello \(`TAccessor`\) per le classi modello, ad esempio `CCommand` e `CTable`, che richiedono un argomento della classe di funzioni di accesso.  
  
## Sintassi  
  
```  
class CNoAccessor  
```  
  
## Note  
 Utilizzare `CNoAccessor` come argomento di modello quando non si desidera che la classe per supportare i parametri o colonne di output.  
  
 `CNoAccessor` implementa i metodi stub, ognuno dei quali corrispondono agli altri metodi della classe di funzioni di accesso:  
  
-   **BindColumns** \- colonne di associazioni alle funzioni di accesso.  
  
-   `BindParameters` \- associazioni i parametri creati alle colonne.  
  
-   **Associa** \- Crea le associazioni.  
  
-   **Chiudi** \- Chiude la funzione di accesso.  
  
-   `ReleaseAccessors` \- versioni le funzioni di accesso create dalla classe.  
  
-   `FreeRecordMemory` \- libera tutte le colonne del record corrente che devono essere rilasciati.  
  
-   `GetColumnInfo` \- ottiene le informazioni di colonna dal rowset apri.  
  
-   `GetNumAccessors` \- recupera il numero delle funzioni di accesso create dalla classe.  
  
-   `IsAutoAccessor` \- restituisce true se automaticamente i dati vengono recuperati tramite la funzione di accesso durante l'operazione di spostamento.  
  
-   `GetHAccessor` \- recupera l'handle della funzione di accesso di una funzione di accesso specificata.  
  
-   `GetBuffer` \- recupera il puntatore nel buffer del segnalibro.  
  
-   **NoBindOnNullRowset** \- impedisce l'associazione dati sui rowset vuoti.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)