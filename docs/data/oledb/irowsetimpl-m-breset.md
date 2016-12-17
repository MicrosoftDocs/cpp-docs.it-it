---
title: "IRowsetImpl::m_bReset | Microsoft Docs"
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
  - "ATL.IRowsetImpl.m_bReset"
  - "IRowsetImpl.m_bReset"
  - "m_bReset"
  - "IRowsetImpl::m_bReset"
  - "ATL::IRowsetImpl::m_bReset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_bReset"
ms.assetid: d423f9f3-4d48-4d0c-b152-684c81a0b34e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::m_bReset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un flag di bit usato determinare se la posizione del cursore viene definita nel rowset.  
  
## Sintassi  
  
```  
  
unsigned m_bReset:1;  
  
```  
  
## Note  
 Se il consumer chiama [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) con `lOffset` negativo o *i corvi* e `m_bReset` è true, `GetNextRows` si sposta alla fine del rowset.  Se `m_bReset` è false, il consumer riceve un codice di errore, in conformitÃ con la specifica OLE DB.  Il flag di `m_bReset` ottiene il set a **true** quando il rowset e in seguito a quando il consumer chiama [IRowsetImpl::RestartPosition](../../data/oledb/irowsetimpl-restartposition.md).  Ottiene il set a **false** quando si chiama `GetNextRows`.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)