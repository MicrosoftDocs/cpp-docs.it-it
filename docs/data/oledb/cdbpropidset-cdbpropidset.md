---
title: "CDBPropIDSet::CDBPropIDSet | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDBPropIDSet::CDBPropIDSet"
  - "CDBPropIDSet"
  - "CDBPropIDSet.CDBPropIDSet"
  - "CDBPropIDSet::CDBPropIDSet"
  - "ATL.CDBPropIDSet.CDBPropIDSet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBPropIDSet (classe), costruttore"
ms.assetid: e68cc20e-fce2-4cc1-9e9d-05c542334cc8
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDBPropIDSet::CDBPropIDSet
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Costruttore.  Inizializza **rgProperties**, **cProperties** ed eventualmente i campi di **guidPropertySet** della struttura di [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx).  
  
## Sintassi  
  
```  
  
      CDBPropIDSet(  
   const GUID& guid   
);  
CDBPropIDSet(   
   const CDBPropIDSet& propidset    
);  
CDBPropIDSet( );  
```  
  
#### Parametri  
 `guid`  
 \[in\] A GUID utilizzato per inizializzare il campo di **guidPropertySet**.  
  
 *propidset*  
 \[in\] un altro oggetto di `CDBPropIDSet` per la costruzione di copia.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)   
 [CDBPropIDSet::SetGUID](../../data/oledb/cdbpropidset-setguid.md)