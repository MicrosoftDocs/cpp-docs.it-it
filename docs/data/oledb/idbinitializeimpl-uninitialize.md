---
title: "IDBInitializeImpl::Uninitialize | Microsoft Docs"
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
  - "IDBInitializeImpl.Uninitialize"
  - "Uninitialize"
  - "IDBInitializeImpl::Uninitialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Uninitialize (metodo)"
ms.assetid: ba37fc74-f84e-40b0-abb6-41bddd505269
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBInitializeImpl::Uninitialize
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserisce l'oggetto datasource in uno stato non inizializzata liberando risorse interne come il supporto della proprietà.  
  
## Sintassi  
  
```  
  
      STDMETHOD(Uninitialize)(   
   void    
);  
```  
  
## Note  
 Vedere [IDBInitialize::Uninitialize](https://msdn.microsoft.com/en-us/library/ms719648.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)   
 [IDBInitializeImpl::Initialize](../../data/oledb/idbinitializeimpl-initialize.md)