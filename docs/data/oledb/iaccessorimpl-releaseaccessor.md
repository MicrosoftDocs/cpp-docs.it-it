---
title: 'IAccessorImpl:: ReleaseAccessor | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ReleaseAccessor
- IAccessorImpl::ReleaseAccessor
- ATL.IAccessorImpl.ReleaseAccessor
- ATL::IAccessorImpl::ReleaseAccessor
- IAccessorImpl.ReleaseAccessor
dev_langs:
- C++
helpviewer_keywords:
- ReleaseAccessor method
ms.assetid: 1526e360-bd9c-4ecd-967e-5afdd7506d2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f6c68d57997bc9e779530365aefc1d4b930484e4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33099485"
---
# <a name="iaccessorimplreleaseaccessor"></a>IAccessorImpl::ReleaseAccessor
Rilascia una funzione di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(ReleaseAccessor)(HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IAccessor:: ReleaseAccessor](https://msdn.microsoft.com/en-us/library/ms719717.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [IAccessorImpl (classe)](../../data/oledb/iaccessorimpl-class.md)   
 [IAccessorImpl:: CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)   
 [IAccessorImpl::AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)