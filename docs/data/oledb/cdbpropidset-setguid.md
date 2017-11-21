---
title: 'Cdbpropidset:: SetGuid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDBPropIDSet.SetGUID
- ATL::CDBPropIDSet::SetGUID
- SetGUID
- ATL.CDBPropIDSet.SetGUID
- CDBPropIDSet::SetGUID
dev_langs: C++
helpviewer_keywords: SetGUID method
ms.assetid: 8dd0f3bf-1490-4d53-9063-322b8d821bbe
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0d91cc0374474a38bd2caba66ab98003852195f9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdbpropidsetsetguid"></a>CDBPropIDSet::SetGUID
Imposta il campo GUID di **DBPROPIDSET** struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void SetGUID(   
   const GUID& guid    
) throw( );  
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