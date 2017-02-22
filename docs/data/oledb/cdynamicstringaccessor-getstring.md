---
title: "CDynamicStringAccessor::GetString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicStringAccessor.GetString"
  - "CDynamicStringAccessor::GetString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetString (metodo)"
ms.assetid: 4af27f27-7589-49f5-93d8-6ef05c023c8a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# CDynamicStringAccessor::GetString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i dati specificati di colonna come stringa.  
  
## Sintassi  
  
```  
  
      BaseType* GetString(  
   DBORDINAL nColumn  
) const throw( );  
BaseType* GetString(  
   const CHAR* pColumnName  
) const throw( );  
BaseType* GetString(  
   const WCHAR* pColumnName  
) const throw( );  
```  
  
#### Parametri  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
 `pColumnName`  
 \[in\] puntatore A una stringa di caratteri che contiene il nome della colonna.  
  
## Valore restituito  
 Un puntatore al valore stringa recuperato dalla colonna specificata.  Il valore è di tipo ***BaseType***, che sono **CHAR**  o **WCHAR** come se \_UNICODE è definito o meno.  Torna ANNULLANO se la colonna specificata non viene trovata.  
  
## Note  
 La seconda forma di override accetta il nome della colonna come stringa ANSI.  Il terzo form override accetta il nome della colonna come stringhe Unicode.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)