---
title: "CDataSource::GetProperty | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDataSource::GetProperty"
  - "ATL.CDataSource.GetProperty"
  - "CDataSource.GetProperty"
  - "CDataSource::GetProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Metodo GetProperty"
ms.assetid: 6531147c-b164-4ab5-a4a7-509634b85b4d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDataSource::GetProperty
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il valore di una proprietà specificata per l'oggetto datasource collegato.  
  
## Sintassi  
  
```  
  
      HRESULT GetProperty(   
   const GUID& guid,   
   DBPROPID propid,   
   VARIANT* pVariant    
) const throw( );  
```  
  
#### Parametri  
 `guid`  
 \[in\] A GUID che identifica l'insieme di proprietà per il quale restituire la proprietà.  
  
 `propid`  
 \[in\] ID proprietà affinché la proprietà restituiscano.  
  
 *pVariant*  
 \[out\] puntatore Al variant in cui **GetProperty** restituisce il valore della proprietà.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Per ottenere più proprietà, utilizzare [GetProperties](../../data/oledb/cdatasource-getproperties.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)