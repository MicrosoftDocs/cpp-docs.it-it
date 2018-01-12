---
title: 'Iconverttypeimpl:: CanConvert | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IConvertTypeImpl.CanConvert
- CanConvert
- IConvertTypeImpl::CanConvert
dev_langs: C++
helpviewer_keywords: CanConvert method
ms.assetid: bdad6e95-bc0b-4427-9b5e-eea51f09f392
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 618f09e2bd0aab553741495fd42f8b2dbca18185
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iconverttypeimplcanconvert"></a>IConvertTypeImpl::CanConvert
Fornisce informazioni sulla disponibilità delle conversioni di tipo in un comando o in un set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      STDMETHOD(CanConvert)(   
   DBTYPE wFromType,   
   DBTYPE wToType,   
   DBCONVERTFLAGS dwConvertFlags    
);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IConvertType::CanConvert](https://msdn.microsoft.com/en-us/library/ms711224.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Utilizza la conversione dei dati OLE DB in `MSADC.DLL`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IConvertTypeImpl](../../data/oledb/iconverttypeimpl-class.md)