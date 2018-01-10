---
title: 'CBulkRowset:: MoveNext | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CBulkRowset<TAccessor>.MoveNext
- ATL::CBulkRowset::MoveNext
- CBulkRowset::MoveNext
- ATL.CBulkRowset.MoveNext
- CBulkRowset.MoveNext
- ATL::CBulkRowset<TAccessor>::MoveNext
- CBulkRowset<TAccessor>.MoveNext
- CBulkRowset<TAccessor>::MoveNext
dev_langs: C++
helpviewer_keywords: MoveNext method
ms.assetid: 788f3344-cf60-4af1-8f5f-0098c8d1a3f0
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0388bfbb7b8a134f5813c74cebdaec3fcbffdfa2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cbulkrowsetmovenext"></a>CBulkRowset::MoveNext
Recupera la riga successiva di dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
HRESULT MoveNext( ) throw( );  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Quando è stata raggiunta la fine del set di righe, restituisce **DB_S_ENDOFROWSET**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)