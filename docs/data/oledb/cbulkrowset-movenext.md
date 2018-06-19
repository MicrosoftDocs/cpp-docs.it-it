---
title: 'CBulkRowset:: MoveNext | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CBulkRowset<TAccessor>.MoveNext
- ATL::CBulkRowset::MoveNext
- CBulkRowset::MoveNext
- ATL.CBulkRowset.MoveNext
- CBulkRowset.MoveNext
- ATL::CBulkRowset<TAccessor>::MoveNext
- CBulkRowset<TAccessor>.MoveNext
- CBulkRowset<TAccessor>::MoveNext
dev_langs:
- C++
helpviewer_keywords:
- MoveNext method
ms.assetid: 788f3344-cf60-4af1-8f5f-0098c8d1a3f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 68ec7e4a583039a0087654dadde36598a3ced629
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33094456"
---
# <a name="cbulkrowsetmovenext"></a>CBulkRowset::MoveNext
Recupera la riga successiva di dati.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveNext() throw();  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Quando è stata raggiunta la fine del set di righe, restituisce **DB_S_ENDOFROWSET**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)