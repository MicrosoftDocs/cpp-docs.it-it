---
title: CRowset::Undo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CRowset.Undo
- ATL::CRowset<TAccessor>::Undo
- CRowset<TAccessor>::Undo
- ATL.CRowset.Undo
- ATL.CRowset<TAccessor>.Undo
- CRowset<TAccessor>.Undo
- ATL::CRowset::Undo
- CRowset::Undo
- Undo
dev_langs:
- C++
helpviewer_keywords:
- Undo method
ms.assetid: 1ccd70e2-3931-41c4-893e-a05d0e295410
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1dc12cbb5228afd3ab8750b5a2121247d7d3c901
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="crowsetundo"></a>CRowset::Undo
Annullare le modifiche apportate a una riga dall'ultimo recupero o [aggiornamento](../../data/oledb/crowset-update.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Undo(DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `pcRows`  
 [out] Un puntatore alla posizione in cui **Annulla** restituisce il numero di righe di cui si è tentato di annullare le modifiche necessarie.  
  
 `phRow`  
 [out] Un puntatore alla posizione in cui **Annulla** restituisce una matrice di handle per tutte le righe che si è tentato di annullare le modifiche necessarie.  
  
 `pStatus`  
 [out] Un puntatore alla posizione in cui **Annulla** restituisce il valore di stato di riga. Se non viene restituito alcun stato `pStatus` è null.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetUpdate** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando contenente il set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx)