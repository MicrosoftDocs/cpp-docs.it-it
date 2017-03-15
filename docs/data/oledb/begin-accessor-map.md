---
title: "BEGIN_ACCESSOR_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_ACCESSOR_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_ACCESSOR_MAP (macro)"
ms.assetid: e6d6e3a4-62fa-4e49-8c53-caf8c9d20091
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# BEGIN_ACCESSOR_MAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna l'inizio delle voci della mappa delle funzioni di accesso.  
  
## Sintassi  
  
```  
  
BEGIN_ACCESSOR_MAP(  
x  
,   
num  
 )  
  
```  
  
#### Parametri  
 *x*  
 \[in\] Nome della classe di record utente.  
  
 *num*  
 \[in\] Il numero delle funzioni di accesso in questa mappa.  
  
## Note  
 In caso di più funzioni di accesso su un gruppo di righe, è necessario specificare `BEGIN_ACCESSOR_MAP` all'inizio e usare la macro `BEGIN_ACCESSOR` per ogni singola funzione di accesso. La macro `BEGIN_ACCESSOR` è completata con la macro `END_ACCESSOR`. La mappa delle funzioni di accesso è completata con la macro `END_ACCESSOR_MAP`.  
  
 In presenza di una sola funzione di accesso nel record utente, usare la macro [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md).  
  
## Esempio  
 [!CODE [NVC_OLEDB_Consumer#15](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#15)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)