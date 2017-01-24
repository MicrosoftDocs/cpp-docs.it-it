---
title: "Classe IRowsetCreatorImpl | Microsoft Docs"
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
  - "ATL::IRowsetCreatorImpl"
  - "ATL.IRowsetCreatorImpl"
  - "ATL::IRowsetCreatorImpl<T>"
  - "ATL.IRowsetCreatorImpl<T>"
  - "IRowsetCreatorImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetCreatorImpl (classe)"
ms.assetid: 92cc950f-7978-4754-8d9a-defa63867d82
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetCreatorImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue le stesse funzioni di `IObjectWithSite` ma consente inoltre alle proprietà **DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS** oLE DB.  
  
## Sintassi  
  
```  
template < class T >  
class ATL_NO_VTABLE IRowsetCreatorImpl   
   : public IObjectWithSiteImpl< T >  
```  
  
#### Parametri  
 `T`  
 Classe derivata da **IRowsetCreator**.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[SetSite](../../data/oledb/irowsetcreatorimpl-setsite.md)|Imposta il sito che contiene l'oggetto rowset.|  
  
## Note  
 Questa classe eredita da [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) ed eseguire l'override [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869).  Quando un oggetto command o session del provider crea un rowset, chiamare `QueryInterface` sull'oggetto rowset che cerca `IObjectWithSite` e chiama `SetSite` che passa l'interfaccia di **IUnkown** dell'oggetto rowset dell'interfaccia del sito.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)