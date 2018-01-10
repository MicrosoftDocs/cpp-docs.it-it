---
title: END_ACCESSOR_MAP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: END_ACCESSOR_MAP
dev_langs: C++
helpviewer_keywords: END_ACCESSOR_MAP macro
ms.assetid: ede813c7-46c9-48a6-aa1a-8ebf38e92023
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f37db043eb9cdc2fb58abc48e1ee3060f98c1be7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="endaccessormap"></a>END_ACCESSOR_MAP
Contrassegna la fine di voci della mappa di accesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
END_ACCESSOR_MAP( )  
  
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