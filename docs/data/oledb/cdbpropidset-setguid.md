---
title: 'Cdbpropidset:: SetGuid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBPropIDSet.SetGUID
- ATL::CDBPropIDSet::SetGUID
- SetGUID
- ATL.CDBPropIDSet.SetGUID
- CDBPropIDSet::SetGUID
dev_langs:
- C++
helpviewer_keywords:
- SetGUID method
ms.assetid: 8dd0f3bf-1490-4d53-9063-322b8d821bbe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 87878b6cc7ae38f2c9ffcf597a56ab020d8e9c8b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cdbpropidsetsetguid"></a>CDBPropIDSet::SetGUID
Imposta il campo GUID di **DBPROPIDSET** struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      void SetGUID(const GUID& guid) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `guid`  
 [in] Un GUID utilizzato per impostare il **guidPropertySet** campo il [DBPROPIDSET](https://msdn.microsoft.com/en-us/library/ms717981.aspx) struttura.  
  
## <a name="remarks"></a>Note  
 Questo campo può essere impostato il [costruttore](../../data/oledb/cdbpropidset-cdbpropidset.md) anche. Chiamare questa funzione se si utilizza il costruttore predefinito per questa classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)