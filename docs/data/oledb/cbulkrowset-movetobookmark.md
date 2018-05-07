---
title: 'CBulkRowset:: MoveToBookmark | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CBulkRowset<TAccessor>::MoveToBookmark
- CBulkRowset.MoveToBookmark
- MoveToBookmark
- ATL.CBulkRowset.MoveToBookmark
- CBulkRowset::MoveToBookmark
- ATL::CBulkRowset<TAccessor>::MoveToBookmark
- ATL::CBulkRowset::MoveToBookmark
dev_langs:
- C++
helpviewer_keywords:
- MoveToBookmark method
ms.assetid: 76aab025-819e-4ecd-ae0a-d8d3fb2d2099
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4b1911fe170262e65ef06e65649f837a0b723d05
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cbulkrowsetmovetobookmark"></a>CBulkRowset::MoveToBookmark
Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato (`lSkip`) da tale segnalibro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark,  
   DBCOUNTITEM lSkip = 0) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `bookmark`  
 [in] Un segnalibro che contrassegna la posizione da cui si desidera recuperare i dati.  
  
 `lSkip`  
 [in] Il numero conteggio delle righe dal segnalibro nella riga di destinazione. Se `lSkip` è zero, la prima riga recuperata è la riga con segnalibro. Se `lSkip` è 1, la prima riga recuperata è la riga dopo la riga con segnalibro. Se `lSkip` è -1, la prima riga recuperata è la riga che precede la riga con segnalibro.  
  
## <a name="return-value"></a>Valore restituito  
 Vedere [IRowset:: GetData](https://msdn.microsoft.com/en-us/library/ms716988.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)