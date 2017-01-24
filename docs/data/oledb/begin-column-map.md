---
title: "BEGIN_COLUMN_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_COLUMN_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_COLUMN_MAP (macro)"
ms.assetid: d6ffe633-e0da-4e33-8faa-f7f259d05420
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BEGIN_COLUMN_MAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Segna l'inizio di una voce della mappa delle colonne.  
  
## Sintassi  
  
```  
  
BEGIN_COLUMN_MAP(  
x  
 )  
  
```  
  
#### Parametri  
 *x*  
 \[in\] Il nome della classe di record utente derivata da `CAccessor`.  
  
## Note  
 Questa macro viene usata nel caso di un'unica funzione di accesso su un set di righe. Se ci sono più funzioni di accesso su un set di righe, usare [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md).  
  
 La macro `BEGIN_COLUMN_MAP` è completata con la macro `END_COLUMN_MAP`. Questa macro viene usata quando è richiesta una sola funzione di accesso nel record utente.  
  
 Le colonne corrispondono ai campi nel set di righe che si desidera associare.  
  
## Esempio  
 Ecco un esempio di mappa delle colonne e dei parametri:  
  
 [!CODE [NVC_OLEDB_Consumer#16](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#16)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN\_ENTRY\_EX](../../data/oledb/column-entry-ex.md)