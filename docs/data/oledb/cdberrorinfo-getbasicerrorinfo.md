---
title: 'Cdberrorinfo:: Getbasicerrorinfo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBErrorInfo::GetBasicErrorInfo
- ATL.CDBErrorInfo.GetBasicErrorInfo
- CDBErrorInfo.GetBasicErrorInfo
- ATL::CDBErrorInfo::GetBasicErrorInfo
- GetBasicErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- GetBasicErrorInfo method
ms.assetid: 263cec53-63f6-48fe-b46e-31d20251863e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4bef16b2c67c63b2c1f5014ce4da17618c602c94
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090312"
---
# <a name="cdberrorinfogetbasicerrorinfo"></a>CDBErrorInfo::GetBasicErrorInfo
Chiamate [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) per restituire le informazioni di base sull'errore, ad esempio il codice restituito e il numero di errore specifico del provider.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT GetBasicErrorInfo(ULONG ulRecordNum,   
  ERRORINFO* pErrorInfo) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)