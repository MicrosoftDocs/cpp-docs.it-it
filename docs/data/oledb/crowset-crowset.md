---
title: 'CRowset:: CRowset | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CRowset<TAccessor>::CRowset
- CRowset.CRowset
- ATL::CRowset::CRowset
- ATL::CRowset<TAccessor>::CRowset
- ATL.CRowset.CRowset
- CRowset
- CRowset<TAccessor>.CRowset
- CRowset::CRowset
- ATL.CRowset<TAccessor>.CRowset
dev_langs: C++
helpviewer_keywords: CRowset class, constructor
ms.assetid: 1c6f72e2-f4f4-48dc-957e-038ae8914ba7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ad5401daa0032d613ee55519c3973f84a8096746
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="crowsetcrowset"></a>CRowset::CRowset
Crea un nuovo `CRowset` dell'oggetto e (facoltativamente) lo associa a un [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) interfaccia fornita come parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      CRowset( );   
CRowset(  
   IRowset* pRowset   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `pRowset`  
 [in] Puntatore a un'interfaccia `IRowset` da associare a questa classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)