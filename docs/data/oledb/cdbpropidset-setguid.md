---
title: CDBPropIDSet::SetGUID | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 32f697e07c850ab71249614a0479aecca4f7caa2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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