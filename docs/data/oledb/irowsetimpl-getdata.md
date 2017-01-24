---
title: "IRowsetImpl::GetData | Microsoft Docs"
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
  - "ATL.IRowsetImpl.GetData"
  - "ATL::IRowsetImpl::GetData"
  - "IRowsetImpl::GetData"
  - "IRowsetImpl.GetData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetData (metodo) [OLE DB]"
ms.assetid: cb15f1cc-bd25-4b74-93c3-db71aa93829c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::GetData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera dati dalla copia della riga del set di righe.  
  
## Sintassi  
  
```  
  
      STDMETHOD( GetData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pDstData   
);  
```  
  
#### Parametri  
 Vedere [IRowset::GetData](https://msdn.microsoft.com/en-us/library/ms716988.aspx)*in OLE DB Programmer's Reference*.  
  
 Alcuni parametri corrispondono ai parametri *di OLE DB Programmer's Reference* dei nomi diversi, descritti in **IRowset::GetData**:  
  
|Parametri di modelli OLE DB|Parametri di*OLE DB Programmer's Reference*|  
|---------------------------------|-------------------------------------------------|  
|*pDstData*|`pData`|  
  
## Note  
 Gestisce la conversione di dati che utilizza la DLL di conversione di dati OLE DB.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)