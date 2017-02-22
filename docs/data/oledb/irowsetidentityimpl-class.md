---
title: "Classe IRowsetIdentityImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IRowsetIdentityImpl"
  - "ATL.IRowsetIdentityImpl"
  - "IRowsetIdentityImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetIdentityImpl (classe)"
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IRowsetIdentityImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa l'interfaccia OLE DB [IRowsetIdentity](https://msdn.microsoft.com/en-us/library/ms715913.aspx), che consente il test per l'identità di riga.  
  
## Sintassi  
  
```  
template <class T, class RowClass = CSimpleRow>  
class ATL_NO_VTABLE IRowsetIdentityImpl   
   : public IRowsetIdentity  
```  
  
#### Parametri  
 `T`  
 Classe derivata da `IRowsetIdentityImpl`.  
  
 `RowClass`  
 L'unità di archiviazione per **HROW**.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[IsSameRow](../../data/oledb/irowsetidentityimpl-issamerow.md)|Confronta due handle di riga per verificare se puntano alla stessa riga.|  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)