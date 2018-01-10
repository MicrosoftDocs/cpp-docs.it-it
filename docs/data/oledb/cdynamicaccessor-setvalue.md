---
title: 'CDynamicAccessor:: SetValue | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CDynamicAccessor.SetValue
- ATL::CDynamicAccessor::SetValue
- ATL::CDynamicAccessor::SetValue<ctype>
- CDynamicAccessor.SetValue
- ATL.CDynamicAccessor.SetValue<ctype>
- CDynamicAccessor::SetValue
- CDynamicAccessor::SetValue<ctype>
dev_langs: C++
helpviewer_keywords: SetValue method
ms.assetid: ecc18850-96e5-4845-abe5-ab34ad467238
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bdd334f916257d3688658e941522b6cc20b12b40
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdynamicaccessorsetvalue"></a>CDynamicAccessor::SetValue
Archivia i dati di una colonna specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      template < class ctype >    
bool SetValue(   
   DBORDINAL nColumn,   
   const ctype& data    
) throw( );  
template < class ctype >    
bool SetValue(   
   const CHAR * pColumnName,   
   const ctype& data    
) throw( );  
template <class ctype>   
bool SetValue(  
   const WCHAR *pColumnName,  
   const ctype& data   
) throw( );  
```  
  
#### <a name="parameters"></a>Parametri  
 `ctype`  
 [in] Un parametro basato su modelli che gestisce qualsiasi tipo di dati ad eccezione dei tipi di stringa (**CHAR\***, **WCHAR\***), che richiedono una gestione speciale. `GetValue`Usa il tipo di dati appropriato in base a quanto specificato qui.  
  
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