---
title: 'CDynamicAccessor:: GetBookmark | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicAccessor.GetBookmark
- GetBookmark
- CDynamicAccessor::GetBookmark
- ATL.CDynamicAccessor.GetBookmark
- ATL::CDynamicAccessor::GetBookmark
dev_langs:
- C++
helpviewer_keywords:
- GetBookmark method
ms.assetid: 6d0a2970-0c62-4a34-bac7-149d8e990f81
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ac9ea217b987f7355757fc756acc0108fca0e4a1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093883"
---
# <a name="cdynamicaccessorgetbookmark"></a>CDynamicAccessor::GetBookmark
Recupera il segnalibro per la riga corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetBookmark(CBookmark< >* pBookmark) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `pBookmark`  
 [out] Un puntatore al [CBookmark](../../data/oledb/cbookmark-class.md) oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Uno degli standard `HRESULT` valori.  
  
## <a name="remarks"></a>Note  
 È necessario impostare **DBPROP_IRowsetLocate** a `VARIANT_TRUE` per recuperare un segnalibro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)