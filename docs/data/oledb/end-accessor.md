---
title: END_ACCESSOR | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- END_ACCESSOR
dev_langs:
- C++
helpviewer_keywords:
- END_ACCESSOR macro
ms.assetid: 26f74167-68c4-4909-a474-73dc7ebc9542
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 93ff134d39dded392d817adebaebb37f3129b2dd
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="endaccessor"></a>END_ACCESSOR
Contrassegna la fine di una voce della funzione di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
END_ACCESSOR()  
  
```  
  
## <a name="remarks"></a>Note  
 Per più funzioni di accesso su un set di righe, è necessario specificare `BEGIN_ACCESSOR_MAP` e utilizzare il `BEGIN_ACCESSOR` macro per ogni singola funzione di accesso. La macro `BEGIN_ACCESSOR` è completata con la macro `END_ACCESSOR` . Il `BEGIN_ACCESSOR_MAP` macro è stata completata con il `END_ACCESSOR_MAP` (macro).  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)