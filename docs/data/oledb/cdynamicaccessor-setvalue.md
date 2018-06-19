---
title: 'CDynamicAccessor:: SetValue | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CDynamicAccessor.SetValue
- ATL::CDynamicAccessor::SetValue
- ATL::CDynamicAccessor::SetValue<ctype>
- CDynamicAccessor.SetValue
- ATL.CDynamicAccessor.SetValue<ctype>
- CDynamicAccessor::SetValue
- CDynamicAccessor::SetValue<ctype>
dev_langs:
- C++
helpviewer_keywords:
- SetValue method
ms.assetid: ecc18850-96e5-4845-abe5-ab34ad467238
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9322394f2b72b49afe988c371858d9ee580825ab
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095677"
---
# <a name="cdynamicaccessorsetvalue"></a>CDynamicAccessor::SetValue
Archivia i dati di una colonna specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <class ctype>
bool SetValue(   
   DBORDINAL nColumn,   
   constctype& data) throw( );  

template <class ctype>    
bool SetValue(   
   const CHAR * pColumnName,   
   const ctype& data) throw( );  

template <class ctype>   
bool SetValue(  
   const WCHAR *pColumnName,  
   const ctype& data) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `ctype`  
 [in] Un parametro basato su modelli che gestisce qualsiasi tipo di dati ad eccezione dei tipi di stringa (**CHAR\***, **WCHAR\***), che richiedono una gestione speciale. `GetValue` Usa il tipo di dati appropriato in base a quanto specificato qui.  
  
 `pColumnName`  
 [in] Puntatore a una stringa di caratteri che contiene il nome della colonna.  
  
 `data`  
 [in] Puntatore alla memoria contenente i dati.  
  
 `nColumn`  
 [in] Numero di colonna. Numeri di colonna iniziano con 1. Il valore 0 si intende la colonna del segnalibro, se presente.  
  
## <a name="return-value"></a>Valore restituito  
 Se si desidera impostare dati di tipo stringa, utilizzare le versioni non basata su modelli di `GetValue`. Le versioni non basata su modelli di questo metodo restituiscono **void\***, che punta alla parte del buffer che contiene i dati della colonna specificata. Restituisce **NULL** se la colonna non viene trovata.  
  
 Per tutti gli altri tipi di dati, è più semplice utilizzare le versioni basate su modelli di `GetValue`. Versioni basate su modelli restituiscono **true** in caso di esito positivo o **false** in caso di errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)