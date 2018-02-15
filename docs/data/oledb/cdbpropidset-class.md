---
title: Classe CDBPropIDSet | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDBPropIDSet
- ATL.CDBPropIDSet
- ATL::CDBPropIDSet
dev_langs:
- C++
helpviewer_keywords:
- CDBPropIDSet class
ms.assetid: 52bb806c-9581-494d-9af7-50d8a4834805
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 32048b9f8e6ab528a3a31ed475cfb2725c20918e
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cdbpropidset-class"></a>Classe CDBPropIDSet
Eredita il **DBPROPIDSET** struttura e aggiunge un costruttore che inizializza i campi chiavi, nonché [AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md) accedere al metodo.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDBPropIDSet : public tagDBPROPIDSET  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddPropertyID](../../data/oledb/cdbpropidset-addpropertyid.md)|Aggiunge una proprietà per il set di ID di proprietà.|  
|[CDBPropIDSet](../../data/oledb/cdbpropidset-cdbpropidset.md)|Costruttore.|  
|[SetGUID](../../data/oledb/cdbpropidset-setguid.md)|Imposta il GUID dell'ID di proprietà.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cdbpropidset-operator-equal.md)|Assegna il contenuto di una proprietà ID è impostato su un'altra.|  
  
## <a name="remarks"></a>Note  
 Usare i consumer OLE DB **DBPROPIDSET** strutture per passare una matrice di ID di proprietà per cui il consumer desidera ottenere informazioni sulle proprietà. Le proprietà identificate in un'unica [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) struttura appartengono al set di una proprietà.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)