---
title: 'CDynamicAccessor:: GetValue | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- GetValue
- CDynamicAccessor::GetValue<ctype>
- ATL.CDynamicAccessor.GetValue<ctype>
- CDynamicAccessor.GetValue
- CDynamicAccessor::GetValue
- ATL.CDynamicAccessor.GetValue
- ATL::CDynamicAccessor::GetValue
- ATL::CDynamicAccessor::GetValue<ctype>
dev_langs:
- C++
helpviewer_keywords:
- GetValue method
ms.assetid: 553f44af-68bc-4cb6-8774-e0940003fa90
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7e43707d4697fbbeece5475f71b7e2f93e731772
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096418"
---
# <a name="cdynamicaccessorgetvalue"></a>CDynamicAccessor::GetValue
Recupera i dati per una colonna specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
void* GetValue(DBORDINAL nColumn) const throw();  

void* GetValue(const CHAR* pColumnName) const throw();  

void* GetValue(const WCHAR* pColumnName) const throw();  

template < class ctype >
bool GetValue(DBORDINAL nColumn, ctype* pData) const throw();  

template < class ctype >  
bool GetValue(const CHAR* pColumnName, ctype* pData) const throw();  

template < class ctype >  
bool GetValue(const WCHAR* pColumnName, ctype* pData) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `ctype`  
 [in] Un parametro basato su modelli che gestisce qualsiasi tipo di dati ad eccezione dei tipi di stringa (**CHAR\***, **WCHAR\***), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato in base a quanto specificato qui.  
  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
 `pColumnName`  
 [in] Il nome della colonna.  
  
 `pData`  
 [out] Puntatore al contenuto della colonna specificata.  
  
## <a name="return-value"></a>Valore restituito  
 Se si desidera passare dati stringa, utilizzare le versioni non basata su modelli di `GetValue`. Le versioni non basata su modelli di questo metodo restituiscono **void\***, che punta alla parte del buffer che contiene i dati della colonna specificata. Restituisce **NULL** se la colonna non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice utilizzare le versioni basate su modelli di `GetValue`. Versioni basate su modelli restituiscono **true** in caso di esito positivo o **false** in caso di errore.  
  
## <a name="remarks"></a>Note  
 Utilizzare le versioni non basata su modelli per restituire le colonne che contengono le stringhe e le versioni basate su modelli per le colonne che contengono altri tipi di dati.  
  
 In modalità debug, si otterrà un'asserzione se le dimensioni di `pData` non è uguale alla dimensione della colonna a cui fa riferimento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)