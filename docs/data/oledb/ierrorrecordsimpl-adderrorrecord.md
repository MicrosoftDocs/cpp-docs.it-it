---
title: 'IErrorRecordsImpl:: Adderrorrecord | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IErrorRecordsImpl.AddErrorRecord
- AddErrorRecord
- IErrorRecordsImpl::AddErrorRecord
dev_langs:
- C++
helpviewer_keywords:
- AddErrorRecord method
ms.assetid: b5f8e9ae-509d-454f-b511-4bda7e972607
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bc60982a99b6c052d10ffe300efbfbcdde49d0fa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106453"
---
# <a name="ierrorrecordsimpladderrorrecord"></a>IErrorRecordsImpl::AddErrorRecord
Aggiunge un record per l'oggetto di errore OLE DB.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(AddErrorRecord )(ERRORINFO *pErrorInfo,  
   DWORD dwLookupID,  
   DISPPARAMS *pdispparams,  
   IUnknown *punkCustomError,  
   DWORD dwDynamicErrorID);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IErrorRecords::AddErrorRecord](https://msdn.microsoft.com/en-us/library/ms725362.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IErrorRecordsImpl](../../data/oledb/ierrorrecordsimpl-class.md)