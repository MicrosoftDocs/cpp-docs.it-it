---
title: "IRowsetImpl::m_bCanFetchBack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetImpl.m_bCanFetchBack"
  - "ATL::IRowsetImpl::m_bCanFetchBack"
  - "IRowsetImpl.m_bCanFetchBack"
  - "IRowsetImpl::m_bCanFetchBack"
  - "m_bCanFetchBack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_bCanFetchBack"
ms.assetid: cfa007b0-7ba5-48a3-9d05-9f1916305fb7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IRowsetImpl::m_bCanFetchBack
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica se un provider supporta da recuperare.  
  
## Sintassi  
  
```  
  
unsigned m_bCanFetchBack:1;  
  
```  
  
## Note  
 Collegato a **DBPROP\_CANFETCHBACKWARDS** la proprietà nel gruppo di **DBPROPSET\_ROWSET**.  Il provider deve supportare **DBPROP\_CANFETCHBACKWARDS** per **m\_bCanFetchBackwards** è impostato su true.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::m\_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)