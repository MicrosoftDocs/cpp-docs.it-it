---
title: 'IRowsetChangeImpl:: SetData | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- SetData
- IRowsetChangeImpl::SetData
- ATL.IRowsetChangeImpl.SetData
- IRowsetChangeImpl.SetData
- ATL::IRowsetChangeImpl::SetData
dev_langs:
- C++
helpviewer_keywords:
- SetData method
ms.assetid: 81e1dd0a-0518-440c-8808-cee76e4929c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f37ea1e5cbdddf3099356c99acc10014d6ab661f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102212"
---
# <a name="irowsetchangeimplsetdata"></a>IRowsetChangeImpl::SetData
Imposta i valori dei dati in una o più colonne.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (SetData )(HROW hRow,  
   HACCESSOR hAccessor,  
   void* pSrcData);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetChange:: SetData](https://msdn.microsoft.com/en-us/library/ms721232.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)