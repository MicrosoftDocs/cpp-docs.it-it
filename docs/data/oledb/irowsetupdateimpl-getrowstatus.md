---
title: 'IRowsetUpdateImpl:: GetRowStatus | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetUpdateImpl.GetRowStatus
- IRowsetUpdateImpl::GetRowStatus
- IRowsetUpdateImpl.GetRowStatus
- ATL::IRowsetUpdateImpl::GetRowStatus
- GetRowStatus
dev_langs: C++
helpviewer_keywords: GetRowStatus method
ms.assetid: ce57e8be-5891-44d9-b3c5-59ffd3913678
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5d5802f1870f2e8be42669d5dc53ea5e55531258
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetupdateimplgetrowstatus"></a>IRowsetUpdateImpl::GetRowStatus
Restituisce lo stato di righe specificate.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD ( GetRowStatus )(  
   HCHAPTER /* hReserved */,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBPENDINGSTATUS rgPendingStatus[]   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hReserved`  
 [in] Corrisponde alla `hChapter` parametro [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx).  
  
 Per altri parametri, vedere [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)