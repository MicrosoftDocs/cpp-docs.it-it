---
title: "CDynamicAccessor::SetValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDynamicAccessor.SetValue"
  - "ATL::CDynamicAccessor::SetValue"
  - "ATL::CDynamicAccessor::SetValue<ctype>"
  - "CDynamicAccessor.SetValue"
  - "ATL.CDynamicAccessor.SetValue<ctype>"
  - "CDynamicAccessor::SetValue"
  - "CDynamicAccessor::SetValue<ctype>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetValue (metodo)"
ms.assetid: ecc18850-96e5-4845-abe5-ab34ad467238
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::SetValue
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Archivia i dati a una colonna specificata.  
  
## Sintassi  
  
```  
  
      template < class ctype >    
bool SetValue(   
   DBORDINAL nColumn,   
   const ctype& data    
) throw( );  
template < class ctype >    
bool SetValue(   
   const CHAR * pColumnName,   
   const ctype& data    
) throw( );  
template <class ctype>   
bool SetValue(  
   const WCHAR *pColumnName,  
   const ctype& data   
) throw( );  
```  
  
#### Parametri  
 `ctype`  
 \[in\] parametro basato su modelli A che gestisce qualsiasi tipo di dati a meno che la stringa digitare \(**CARATTERE A DESTRA ESTESO**, **WCHAR\***\), che richiedono una gestione speciale.  `GetValue` utilizza il tipo di dati appropriato in base a cui specificate qui.  
  
 `pColumnName`  
 \[in\] puntatore A una stringa di caratteri che contiene il nome della colonna.  
  
 `data`  
 \[in\] il puntatore alla memoria che contiene i dati.  
  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
## Valore restituito  
 Se si desidera impostare i dati in formato stringa, utilizzare le versioni nontemplated di `GetValue`.  Le versioni nontemplated di questo metodo restituisce **void\***, che indica la parte del buffer contenente i dati specificati della colonna.  Restituisce **NULL** se non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice utilizzare le versioni basate su modelli di `GetValue`.  Le versioni basate su modelli restituiscono **true** su positivo o **false** in caso di errore.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)