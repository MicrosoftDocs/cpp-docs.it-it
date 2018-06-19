---
title: 'Cdberrorinfo:: Geterrorparameters | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CDBErrorInfo.GetErrorParameters
- CDBErrorInfo::GetErrorParameters
- ATL::CDBErrorInfo::GetErrorParameters
- CDBErrorInfo.GetErrorParameters
- GetErrorParameters
dev_langs:
- C++
helpviewer_keywords:
- GetErrorParameters method
ms.assetid: 3a2dd8e2-fecc-4315-9f2b-ce3138cdd187
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8765482b3f3bd47acee00c1c345ba7b96b228c51
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33094566"
---
# <a name="cdberrorinfogeterrorparameters"></a>CDBErrorInfo::GetErrorParameters
Chiamate [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) per restituire i parametri di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT GetErrorParameters(ULONG ulRecordNum,   
  DISPPARAMS* pdispparams) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)