---
title: 'CRowset:: MoveToBookmark | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CRowset::MoveToBookmark
- ATL::CRowset<TAccessor>::MoveToBookmark
- ATL.CRowset.MoveToBookmark
- ATL.CRowset<TAccessor>.MoveToBookmark
- MoveToBookmark
- CRowset::MoveToBookmark
- CRowset.MoveToBookmark
- CRowset<TAccessor>::MoveToBookmark
dev_langs:
- C++
helpviewer_keywords:
- MoveToBookmark method
ms.assetid: 90124723-8daf-4692-ae2f-0db26b5db920
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9f638f928c9fee0383e5ed50cd4b3dd547ad4939
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33097796"
---
# <a name="crowsetmovetobookmark"></a>CRowset::MoveToBookmark
Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato (`lSkip`) da tale segnalibro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark,   
   LONG lSkip = 0) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `bookmark`  
 [in] Un segnalibro che contrassegna la posizione da cui si desidera recuperare i dati.  
  
 `lSkip`  
 [in] Il numero conteggio delle righe dal segnalibro nella riga di destinazione. Se `lSkip` è zero, la prima riga recuperata è la riga con segnalibro. Se `lSkip` è 1, la prima riga recuperata è la riga dopo la riga con segnalibro. Se `lSkip` è -1, la prima riga recuperata è la riga che precede la riga con segnalibro.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetLocate`, che potrebbe non essere supportato in tutti i provider; in questo caso, il metodo restituisce **E_NOINTERFACE**. È inoltre necessario impostare **DBPROP_IRowsetLocate** a `VARIANT_TRUE` e impostare **DBPROP_CANFETCHBACKWARDS** a `VARIANT_TRUE` prima di chiamare **aprire** la tabella o un comando che contiene il set di righe.  
  
 Per informazioni sull'utilizzo di segnalibri degli utenti, vedere [mediante segnalibri](../../data/oledb/using-bookmarks.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CRowset (classe)](../../data/oledb/crowset-class.md)   
 [CRowset:: MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveFirst](../../data/oledb/crowset-movefirst.md)   
 [IRowsetLocate::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)