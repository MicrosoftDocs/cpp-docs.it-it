---
title: "CDBPropIDSet::SetGUID | Microsoft Docs"
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
  - "CDBPropIDSet.SetGUID"
  - "ATL::CDBPropIDSet::SetGUID"
  - "SetGUID"
  - "ATL.CDBPropIDSet.SetGUID"
  - "CDBPropIDSet::SetGUID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetGUID (metodo)"
ms.assetid: 8dd0f3bf-1490-4d53-9063-322b8d821bbe
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBPropIDSet::SetGUID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il campo GUID nella struttura di **DBPROPIDSET**.  
  
## Sintassi  
  
```  
  
      void SetGUID(   
   const GUID& guid    
) throw( );  
```  
  
#### Parametri  
 `guid`  
 \[in\] A GUID utilizzato per impostare il campo di **guidPropertySet** della struttura di [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx).  
  
## Note  
 Questo campo può essere impostato da [costruttore](../../data/oledb/cdbpropidset-cdbpropidset.md) anche.  Chiamare questa funzione se si utilizza il costruttore predefinito per la classe.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)