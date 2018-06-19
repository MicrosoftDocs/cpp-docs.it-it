---
title: END_ACCESSOR_MAP | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- END_ACCESSOR_MAP
dev_langs:
- C++
helpviewer_keywords:
- END_ACCESSOR_MAP macro
ms.assetid: ede813c7-46c9-48a6-aa1a-8ebf38e92023
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 647e581a86564221ad409caf9addd03ae3d11fb1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33101565"
---
# <a name="endaccessormap"></a>END_ACCESSOR_MAP
Contrassegna la fine di voci della mappa di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
END_ACCESSOR_MAP()  
  
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