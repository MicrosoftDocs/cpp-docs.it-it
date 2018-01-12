---
title: Classe CNoRowset | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.CNoRowset
- ATL::CNoRowset<TAccessor>
- CNoRowset
- ATL.CNoRowset<TAccessor>
- ATL::CNoRowset
dev_langs: C++
helpviewer_keywords: CNoRowset class
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 901d857b5095dd882a368b9a87e8a7d38d20bc42
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cnorowset-class"></a>Classe CNoRowset
Può essere utilizzato come argomento di modello (`TRowset`) per [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class TAccessor = CAccessorBase>  
class CNoRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso. Il valore predefinito è `CAccessorBase`.  
  
## <a name="remarks"></a>Note  
 Utilizzare `CNoRowset` come argomento di modello se il comando non restituisce un set di righe.  
  
 `CNoRowset`implementa i metodi stub seguenti, ognuna delle quali corrispondono agli altri metodi di classe della funzione di accesso:  
  
-   **BindFinished** -indica se l'associazione viene completata (restituisce `S_OK`).  
  
-   **Chiudi** -rilascia l'interfaccia IRowset corrente e righe.  
  
-   `GetIID`: Recupera l'ID di interfaccia di un punto di connessione.  
  
-   **GetInterface** -recupera un'interfaccia.  
  
-   `GetInterfacePtr`: Recupera un puntatore a interfaccia incapsulato.  
  
-   **SetAccessor** -imposta un puntatore alla funzione di accesso.  
  
-   **SetupOptionalRowsetInterfaces** -imposta le interfacce facoltative per il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)