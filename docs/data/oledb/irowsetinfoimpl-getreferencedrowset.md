---
title: "IRowsetInfoImpl::GetReferencedRowset | Microsoft Docs"
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
  - "ATL::IRowsetInfoImpl::GetReferencedRowset"
  - "GetReferencedRowset"
  - "ATL.IRowsetInfoImpl.GetReferencedRowset"
  - "IRowsetInfoImpl.GetReferencedRowset"
  - "IRowsetInfoImpl::GetReferencedRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetReferencedRowset (metodo)"
ms.assetid: 94d2155c-9da0-4c19-a37c-bc35716359fd
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetInfoImpl::GetReferencedRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un puntatore a interfaccia nel rowset in cui un segnalibro viene applicato.  
  
## Sintassi  
  
```  
  
      STDMETHOD ( GetReferencedRowset )(  
   DBORDINAL iOrdinal,  
   REFIID riid,  
   IUnknown** ppReferencedRowset   
);  
```  
  
#### Parametri  
 Vedere [IRowsetInfo::GetReferencedRowset](https://msdn.microsoft.com/en-us/library/ms721145.aspx)*in OLE DB Programmer's Reference*.  Il parametro *di iOrdinal* deve essere una colonna bookmark.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetInfoImpl](../../data/oledb/irowsetinfoimpl-class.md)   
 [IRowsetInfoImpl::GetSpecification](../../data/oledb/irowsetinfoimpl-getspecification.md)   
 [IRowsetInfoImpl::GetProperties](../../data/oledb/irowsetinfoimpl-getproperties.md)