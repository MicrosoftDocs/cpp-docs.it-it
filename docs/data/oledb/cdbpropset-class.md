---
title: Classe CDBPropSet | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDBPropSet
- ATL.CDBPropSet
- ATL::CDBPropSet
dev_langs:
- C++
helpviewer_keywords:
- CDBPropSet class
ms.assetid: 54190149-c277-4679-b81a-ef484d4d1c00
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 692bb3ccb20373a0bc2765675138eb15daadcb0e
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdbpropset-class"></a>Classe CDBPropSet
Eredita il **DBPROPSET** struttura e aggiunge un costruttore che inizializza i campi chiavi, nonché `AddProperty` accedere al metodo.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDBPropSet : public tagDBPROPSET  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[addProperty](../../data/oledb/cdbpropset-addproperty.md)|Aggiunge una proprietà per il set di proprietà.|  
|[CDBPropSet](../../data/oledb/cdbpropset-cdbpropset.md)|Costruttore.|  
|[SetGUID](../../data/oledb/cdbpropset-setguid.md)|Imposta il **guidPropertySet** campo il **DBPROPSET** struttura.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cdbpropset-operator-equal.md)|Assegna il contenuto di una proprietà è impostata su un altro.|  
  
## <a name="remarks"></a>Note  
 Utilizzo di provider e consumer OLE DB **DBPROPSET** strutture per passare matrici di `DBPROP` strutture. Ogni `DBPROP` struttura rappresenta una singola proprietà che possono essere impostate.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Cdbpropidset (classe)](../../data/oledb/cdbpropidset-class.md)   
 [Struttura DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx)   
 [Struttura DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx)