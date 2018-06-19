---
title: 'Iconverttypeimpl:: CanConvert | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IConvertTypeImpl.CanConvert
- CanConvert
- IConvertTypeImpl::CanConvert
dev_langs:
- C++
helpviewer_keywords:
- CanConvert method
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a2f7e32fd01c932f24b617951d601ddcfe7fb5af
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33099888"
---
# <a name="iconverttypeimplcanconvert"></a>IConvertTypeImpl::CanConvert
Fornisce informazioni sulla disponibilità delle conversioni di tipo in un comando o in un set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(CanConvert)(DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IConvertType::CanConvert](https://msdn.microsoft.com/en-us/library/ms711224.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Utilizza la conversione dei dati OLE DB in `MSADC.DLL`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)