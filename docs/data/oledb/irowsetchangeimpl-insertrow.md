---
title: 'IRowsetChangeImpl:: InsertRow | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.IRowsetChangeImpl.InsertRow
- InsertRow
- IRowsetChangeImpl.InsertRow
- ATL::IRowsetChangeImpl::InsertRow
- IRowsetChangeImpl::InsertRow
dev_langs:
- C++
helpviewer_keywords:
- InsertRow method
ms.assetid: 93027be3-921e-438e-a19a-6e5aadb813eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7d8a03489e2754b6b35873cad9c6db245e1f01a3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="irowsetchangeimplinsertrow"></a>IRowsetChangeImpl::InsertRow
Crea e Inizializza una nuova riga nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (InsertRow )(HCHAPTER /* hReserved */,  
   HACCESSOR hAccessor,  
   void* pData,  
   HROW* phRow);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetChange:: InsertRow](https://msdn.microsoft.com/en-us/library/ms716921.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)