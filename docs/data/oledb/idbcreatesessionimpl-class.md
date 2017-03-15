---
title: "Classe IDBCreateSessionImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDBCreateSessionImpl"
  - "ATL.IDBCreateSessionImpl"
  - "ATL::IDBCreateSessionImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDBCreateSessionImpl (classe)"
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IDBCreateSessionImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione per l'interfaccia di [IDBCreateSession](https://msdn.microsoft.com/en-us/library/ms724076.aspx).  
  
## Sintassi  
  
```  
template <class T, class SessionClass>  
class ATL_NO_VTABLE IDBCreateSessionImpl   
   : public IDBCreateSession  
```  
  
#### Parametri  
 `T`  
 ARGOMENTI VOSTRA CLASS, DERIVATA FROM  
  
 `SessionClass`  
 Oggetto Session.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[CreateSession](../../data/oledb/idbcreatesessionimpl-createsession.md)|Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta la sessione appena creato.|  
  
## Note  
 Un'interfaccia richiesta per gli oggetti origine dati.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)