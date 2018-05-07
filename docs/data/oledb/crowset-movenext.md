---
title: 'CRowset:: MoveNext | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CRowset<TAccessor>.MoveNext
- ATL.CRowset.MoveNext
- ATL::CRowset<TAccessor>::MoveNext
- CRowset<TAccessor>.MoveNext
- CRowset.MoveNext
- CRowset<TAccessor>::MoveNext
- CRowset::MoveNext
- ATL::CRowset::MoveNext
dev_langs:
- C++
helpviewer_keywords:
- MoveNext method
ms.assetid: 0df3288c-2bce-494f-99c0-6344b54a4adf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6c56e3dc53699f47c9dc1061120a201ef5698c04
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="crowsetmovenext"></a>CRowset::MoveNext
Sposta il cursore al record successivo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveNext() throw();HRESULT MoveNext(LONG lSkip,   
   bool bForward= true) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `lSkip`  
 [in] Il numero di righe da ignorare prima di recupero.  
  
 `bForward`  
 [in] Passare **true** per spostarsi in avanti al record successivo, **false** per spostarsi all'indietro.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Quando è stata raggiunta la fine del set di righe, restituisce **DB_S_ENDOFROWSET**.  
  
## <a name="remarks"></a>Note  
 Recupera la riga successiva sequenza dal `CRowset` oggetto, memorizzando la posizione precedente. Facoltativamente, è possibile scegliere di ignorare `lSkip` righe o spostamento con le versioni precedenti.  
  
 Questo metodo richiede l'impostazione delle proprietà seguenti prima di chiamare **aprire** la tabella o un comando contenente il set di righe:  
  
-   **DBPROP_CANSCROLLBACKWARDS** deve essere `VARIANT_TRUE` se `lSkip` < 0  
  
-   **DBPROP_CANFETCHBACKWARDS** deve essere `VARIANT_TRUE` se `bForward` = false  
  
 In caso contrario (se `lSkip` > = 0 e `bForward` = true), non è necessario impostare proprietà aggiuntive.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset::MoveFirst](../../data/oledb/crowset-movefirst.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)