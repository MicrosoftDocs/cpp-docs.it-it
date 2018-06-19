---
title: CRowset::MovePrev | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CRowset<TAccessor>.MovePrev
- CRowset.MovePrev
- MovePrev
- CRowset::MovePrev
- ATL.CRowset.MovePrev
- ATL::CRowset<TAccessor>::MovePrev
- ATL::CRowset::MovePrev
- ATL.CRowset<TAccessor>.MovePrev
- CRowset<TAccessor>::MovePrev
dev_langs:
- C++
helpviewer_keywords:
- MovePrev method
ms.assetid: 7ced2bfb-f556-40fc-97ea-0d4e7213e114
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b86a5266faefaacb0df940f51985f1d31dd006b3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33097146"
---
# <a name="crowsetmoveprev"></a>CRowset::MovePrev
Sposta il cursore del record precedente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MovePrev() throw();  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'impostazione di **DBPROP_CANFETCHBACKWARDS** o **DBPROP_CANSCROLLBACKWARDS** a `VARIANT_TRUE` prima di chiamare **aprire** nella tabella o comando contenente il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset:: MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)