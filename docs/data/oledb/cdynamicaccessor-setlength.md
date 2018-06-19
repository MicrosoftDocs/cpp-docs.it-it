---
title: 'CDynamicAccessor:: SetLength | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CDynamicAccessor::SetLength
- CDynamicAccessor.SetLength
- CDynamicAccessor::SetLength
- ATL.CDynamicAccessor.SetLength
dev_langs:
- C++
helpviewer_keywords:
- SetLength method
ms.assetid: 8109ae73-04ec-4a47-be97-ba1e60080384
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ae99881309188b9cfa7ec3a93a6d4afa43ba72ca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090627"
---
# <a name="cdynamicaccessorsetlength"></a>CDynamicAccessor::SetLength
Imposta la lunghezza della colonna specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool SetLength(DBORDINAL nColumn,   
   DBLENGTH nLength)throw();  

bool SetLength(const CHAR* pColumnName,   
   DBLENGTH nLength) throw();  

bool SetLength(const WCHAR* pColumnName,   
   DBLENGTH nLength) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
 `nLength`  
 [in] La lunghezza della colonna in byte.  
  
 `pColumnName`  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la lunghezza della colonna specificata è stata impostata correttamente. In caso contrario, questa funzione restituisce **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::GetLength](../../data/oledb/cdynamicaccessor-getlength.md)