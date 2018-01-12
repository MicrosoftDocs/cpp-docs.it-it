---
title: 'CDynamicAccessor:: Getcolumnname | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CDynamicAccessor::GetColumnName
- GetColumnName
- ATL.CDynamicAccessor.GetColumnName
- CDynamicAccessor::GetColumnName
- CDynamicAccessor.GetColumnName
dev_langs: C++
helpviewer_keywords: GetColumnName method
ms.assetid: 96a7452a-1f5b-41e9-ab37-88dac026f961
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 57d0a7b494fb2222db0a29b4fdc7def7a8aac057
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicaccessorgetcolumnname"></a>CDynamicAccessor::GetColumnName
Recupera il nome della colonna specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      LPOLESTR GetColumnName(   
   DBORDINAL nColumn    
) const throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
## <a name="return-value"></a>Valore restituito  
 Nome della colonna specificata.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)