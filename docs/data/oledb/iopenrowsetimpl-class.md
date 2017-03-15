---
title: "Classe IOpenRowsetImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IOpenRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IOpenRowsetImpl (classe)"
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe IOpenRowsetImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce l'implementazione per l'interfaccia di `IOpenRowset`.  
  
## Sintassi  
  
```  
template <class SessionClass>  
class IOpenRowsetImpl : public IOpenRowset  
```  
  
#### Parametri  
 `SessionClass`  
 La classe, derivata da `IOpenRowsetImpl`.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CreateRowset](../../data/oledb/iopenrowsetimpl-createrowset.md)|Crea un oggetto rowset.  Non chiamato direttamente dall'utente.|  
|[OpenRowset](../../data/oledb/iopenrowsetimpl-openrowset.md)|Apre e restituisce un rowset che include tutte le righe di una tabella o indice di base. \(Non da ATLDB.H\)|  
  
## Note  
 L'interfaccia di [IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx) è obbligatoria per un oggetto session.  Apre e restituisce un rowset che include tutte le righe di una tabella o indice di base.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)