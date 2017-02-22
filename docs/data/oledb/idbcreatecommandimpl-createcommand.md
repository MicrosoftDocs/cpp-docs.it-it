---
title: "IDBCreateCommandImpl::CreateCommand | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBCreateCommandImpl.CreateCommand"
  - "CreateCommand"
  - "IDBCreateCommandImpl::CreateCommand"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateCommand (metodo)"
ms.assetid: 50ffbf8b-2c07-4bcb-96c5-ffce4519c7f7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IDBCreateCommandImpl::CreateCommand
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un nuovo comando e restituisce l'interfaccia richiesta.  
  
## Sintassi  
  
```  
  
      STDMETHOD(CreateCommand)(   
   IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppvCommand    
);  
```  
  
#### Parametri  
 Vedere [IDBCreateCommand::CreateCommand](https://msdn.microsoft.com/en-us/library/ms709772.aspx)*in OLE DB Programmer's Reference*.  
  
 Alcuni parametri corrispondono ai parametri *di OLE DB Programmer's Reference* dei nomi diversi, descritti in **IDBCreateCommand::CreateCommand**:  
  
|Parametri di modelli OLE DB|Parametri di*OLE DB Programmer's Reference*|  
|---------------------------------|-------------------------------------------------|  
|*ppvCommand*|*ppCommand*|  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IDBCreateCommandImpl](../../data/oledb/idbcreatecommandimpl-class.md)