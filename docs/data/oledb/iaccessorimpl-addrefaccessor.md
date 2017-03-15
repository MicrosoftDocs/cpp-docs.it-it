---
title: "IAccessorImpl::AddRefAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IAccessorImpl::AddRefAccessor"
  - "AddRefAccessor"
  - "IAccessorImpl::AddRefAccessor"
  - "IAccessorImpl.AddRefAccessor"
  - "ATL.IAccessorImpl.AddRefAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRefAccessor (metodo)"
ms.assetid: 4c15392c-944b-4cbd-8cc7-2a5c2f308a70
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IAccessorImpl::AddRefAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.  
  
## Sintassi  
  
```  
  
      STDMETHOD(AddRefAccessor)(  
   HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount   
);  
```  
  
#### Parametri  
 Vedere [IAccessor::AddRefAccessor](https://msdn.microsoft.com/en-us/library/ms714978.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl::CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)   
 [IAccessorImpl::ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)