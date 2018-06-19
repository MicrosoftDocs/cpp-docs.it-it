---
title: Classe CNoRowset | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CNoRowset
- ATL::CNoRowset<TAccessor>
- CNoRowset
- ATL.CNoRowset<TAccessor>
- ATL::CNoRowset
dev_langs:
- C++
helpviewer_keywords:
- CNoRowset class
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 87d005dc19ef286bc4b0da927ecabcd90e6f0235
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098160"
---
# <a name="cnorowset-class"></a>Classe CNoRowset
Può essere utilizzato come argomento di modello (`TRowset`) per [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md).  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>  
class CNoRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso. Il valore predefinito è `CAccessorBase`.  
  
## <a name="remarks"></a>Note  
 Utilizzare `CNoRowset` come argomento di modello se il comando non restituisce un set di righe.  
  
 `CNoRowset` implementa i metodi stub seguenti, ognuna delle quali corrispondono agli altri metodi di classe della funzione di accesso:  
  
-   **BindFinished** -indica se l'associazione viene completata (restituisce `S_OK`).  
  
-   **Chiudi** -rilascia l'interfaccia IRowset corrente e righe.  
  
-   `GetIID` : Recupera l'ID di interfaccia di un punto di connessione.  
  
-   **GetInterface** -recupera un'interfaccia.  
  
-   `GetInterfacePtr` : Recupera un puntatore a interfaccia incapsulato.  
  
-   **SetAccessor** -imposta un puntatore alla funzione di accesso.  
  
-   **SetupOptionalRowsetInterfaces** -imposta le interfacce facoltative per il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)