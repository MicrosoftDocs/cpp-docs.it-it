---
title: "IDBCreateSessionImpl::CreateSession | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBCreateSessionImpl::CreateSession"
  - "IDBCreateSessionImpl.CreateSession"
  - "CreateSession"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateSession (metodo)"
ms.assetid: 035e5ddb-56e6-43b1-874d-89c0e40b103b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# IDBCreateSessionImpl::CreateSession
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta alla sessione appena creato.  
  
## Sintassi  
  
```  
  
      STDMETHOD(CreateSession)(   
   IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppDBSession    
);  
```  
  
#### Parametri  
 Vedere [IDBCreateSession::CreateSession](https://msdn.microsoft.com/en-us/library/ms714942.aspx) nel *riferimento di programmatore OLE DB*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBCreateSessionImpl](../../data/oledb/idbcreatesessionimpl-class.md)