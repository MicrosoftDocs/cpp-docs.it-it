---
title: 'CDataSource:: GetProperty | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CDataSource::GetProperty
- ATL.CDataSource.GetProperty
- CDataSource.GetProperty
- CDataSource::GetProperty
dev_langs:
- C++
helpviewer_keywords:
- GetProperty method
ms.assetid: 6531147c-b164-4ab5-a4a7-509634b85b4d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: afe21f6f41491a4f62eda09e2df43aa470417e20
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090487"
---
# <a name="cdatasourcegetproperty"></a>CDataSource::GetProperty
Restituisce il valore di una proprietà specificata per l'oggetto origine dati connessa.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetProperty(const GUID& guid,   
   DBPROPID propid,   
   VARIANT* pVariant) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `guid`  
 [in] GUID che identifica la proprietà impostata per il quale restituire la proprietà.  
  
 `propid`  
 [in] ID di proprietà per la proprietà da restituire.  
  
 *pVariant*  
 [out] Un puntatore per la variante in **GetProperty** restituisce il valore della proprietà.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Per ottenere più proprietà, utilizzare [GetProperties](../../data/oledb/cdatasource-getproperties.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)