---
title: 'CRowset:: Addrefrows | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CRowset<TAccessor>.AddRefRows
- CRowset.AddRefRows
- ATL.CRowset.AddRefRows
- AddRefRows
- CRowset::AddRefRows
- CRowset<TAccessor>::AddRefRows
- ATL::CRowset::AddRefRows
- ATL.CRowset<TAccessor>.AddRefRows
- ATL::CRowset<TAccessor>::AddRefRows
dev_langs:
- C++
helpviewer_keywords:
- AddRefRows method
ms.assetid: 590b5a24-870f-4c42-b0c8-28491f368a82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f41a33523f30776109624982b9de1a57d4d9227b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096652"
---
# <a name="crowsetaddrefrows"></a>CRowset::AddRefRows
Chiamate [IRowset:: Addrefrows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) incremento (uno) il conteggio dei riferimenti associato all'handle di riga corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT AddRefRows() throw();  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo incrementa il conteggio dei riferimenti per l'handle di riga corrente. Chiamare [ReleaseRows](../../data/oledb/crowset-releaserows.md) per diminuire il conteggio. Le righe restituite dai metodi di spostamento hanno un conteggio dei riferimenti di uno.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset::ReleaseRows](../../data/oledb/crowset-releaserows.md)