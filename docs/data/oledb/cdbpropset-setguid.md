---
title: "CDBPropSet::SetGUID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDBPropSet.SetGUID"
  - "CDBPropSet.SetGUID"
  - "ATL::CDBPropSet::SetGUID"
  - "SetGUID"
  - "CDBPropSet::SetGUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddProperty (metodo)"
  - "SetGUID (metodo)"
ms.assetid: a4cce036-cf1f-4897-9712-7b01eaf887ff
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDBPropSet::SetGUID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impostare il campo di **guidPropertySet** nella struttura di **DBPROPSET**.  
  
## Sintassi  
  
```  
  
      void SetGUID(   
   const GUID& guid    
) throw( );  
```  
  
#### Parametri  
 `guid`  
 \[in\] A GUID utilizzato per impostare il campo di **guidPropertySet** della struttura di [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx).  
  
## Note  
 Questo campo può essere impostato da [costruttore](../../data/oledb/cdbpropset-cdbpropset.md) anche.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDBPropSet](../../data/oledb/cdbpropset-class.md)