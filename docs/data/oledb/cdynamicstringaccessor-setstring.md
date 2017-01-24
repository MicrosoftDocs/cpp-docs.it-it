---
title: "CDynamicStringAccessor::SetString | Microsoft Docs"
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
  - "CDynamicStringAccessor::SetString"
  - "CDynamicStringAccessor.SetString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetString (metodo)"
ms.assetid: 94846d8b-4c1b-47fe-acdc-1752981cee25
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicStringAccessor::SetString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta i dati specificati di colonna come stringa.  
  
## Sintassi  
  
```  
HRESULT SetString(  
   DBORDINAL nColumn,  
   BaseType* data  
) throw( );  
HRESULT SetString(  
   const CHAR* pColumnName,  
   BaseType* data  
) throw( );  
HRESULT SetString(  
   const WCHAR* pColumnName,  
   BaseType* data  
) throw( );  
```  
  
#### Parametri  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Il valore speciale di 0 si riferisce alla colonna bookmark, se disponibile.  
  
 `pColumnName`  
 \[in\] puntatore A una stringa di caratteri che contiene il nome della colonna.  
  
 `data`  
 \[in\] puntatore Ai dati in formato stringa da scrivere nella colonna specificata.  
  
## Valore restituito  
 Un puntatore al valore stringa alla quale per impostare la colonna specificata.  Il valore è di tipo `BaseType`, che sono `CHAR`  o `WCHAR` a seconda che `_UNICODE` è definito o meno.  
  
## Note  
 La seconda forma di override accetta il nome della colonna come una stringa ANSI e il terzo form override accetta il nome della colonna come stringhe Unicode.  
  
 Se `_SECURE_ATL` viene definito con un valore diverso da zero, un errore di asserzione runtime verrà generata se la stringa di `data` di input è maggiore della lunghezza massima consentita della colonna di dati a cui si fa riferimento.  In caso contrario, la stringa di input viene troncata se è maggiore della lunghezza massima consentita.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)