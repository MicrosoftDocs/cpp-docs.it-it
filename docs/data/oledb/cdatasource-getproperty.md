---
title: 'CDataSource:: GetProperty | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDataSource::GetProperty
- ATL.CDataSource.GetProperty
- CDataSource.GetProperty
- CDataSource::GetProperty
dev_langs: C++
helpviewer_keywords: GetProperty method
ms.assetid: 6531147c-b164-4ab5-a4a7-509634b85b4d
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 304a96ef9bb5e918dccaf473577f49b6b8d5d78f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdatasourcegetproperty"></a>CDataSource::GetProperty
Restituisce il valore di una proprietà specificata per l'oggetto origine dati connessa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT GetProperty(   
   const GUID& guid,   
   DBPROPID propid,   
   VARIANT* pVariant    
) const throw( );  
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