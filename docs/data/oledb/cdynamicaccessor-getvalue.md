---
title: "CDynamicAccessor::GetValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetValue"
  - "CDynamicAccessor::GetValue<ctype>"
  - "ATL.CDynamicAccessor.GetValue<ctype>"
  - "CDynamicAccessor.GetValue"
  - "CDynamicAccessor::GetValue"
  - "ATL.CDynamicAccessor.GetValue"
  - "ATL::CDynamicAccessor::GetValue"
  - "ATL::CDynamicAccessor::GetValue<ctype>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetValue (metodo)"
ms.assetid: 553f44af-68bc-4cb6-8774-e0940003fa90
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::GetValue
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i dati per una colonna specificata.  
  
## Sintassi  
  
```  
  
      void* GetValue(   
   DBORDINAL nColumn    
) const throw( );  
void* GetValue(  
   const CHAR* pColumnName   
) const throw( );  
void* GetValue(  
   const WCHAR* pColumnName   
) const throw( );  
template < class ctype >  
bool GetValue(  
   DBORDINAL nColumn,  
   ctype* pData   
) const throw( );  
template < class ctype >  
bool GetValue(  
   const CHAR* pColumnName,  
   ctype* pData   
) const throw( );  
template < class ctype >  
bool GetValue(  
   const WCHAR* pColumnName,  
   ctype* pData   
) const throw( );  
```  
  
#### Parametri  
 `ctype`  
 \[in\] parametro basato su modelli A che gestisce qualsiasi tipo di dati a meno che la stringa digitare \(**CARATTERE A DESTRA ESTESO**, **WCHAR\***\), che richiedono una gestione speciale.  `GetValue` utilizza il tipo di dati appropriato in base a cui specificate qui.  
  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
 `pColumnName`  
 \[in\] nome della colonna.  
  
 `pData`  
 \[out\] puntatore al contenuto della colonna specificata.  
  
## Valore restituito  
 Se si desidera passare i dati in formato stringa, utilizzare le versioni nontemplated di `GetValue`.  Le versioni nontemplated di questo metodo restituisce **void\***, che indica la parte del buffer contenente i dati specificati della colonna.  Restituisce **NULL** se non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice utilizzare le versioni basate su modelli di `GetValue`.  Le versioni basate su modelli restituiscono **true** su positivo o **false** in caso di errore.  
  
## Note  
 Utilizzare le versioni nontemplated per restituire le colonne contenenti stringhe e le versioni basate su modelli per colonne che contengono altri tipi di dati.  
  
 In modalità di debug, si otterrà un'asserzione se la dimensione di `pData` è diverso dalla dimensione della colonna per cui punta.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)