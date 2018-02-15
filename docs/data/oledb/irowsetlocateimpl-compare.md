---
title: 'IRowsetLocateImpl:: compare | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetLocateImpl.Compare
- IRowsetLocateImpl::Compare
- IRowsetLocateImpl.Compare
- ATL::IRowsetLocateImpl::Compare
dev_langs:
- C++
helpviewer_keywords:
- Compare method
ms.assetid: 6f84052c-c68c-480a-982f-03748faa7d5d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 83c115e866aab8e2d2e34a601d805dc43311a0b8
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="irowsetlocateimplcompare"></a>IRowsetLocateImpl::Compare
Confronta due segnalibri.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD (Compare )(HCHAPTER /* hReserved */,  
   DBBKMARK cbBookmark1,  
   const BYTE* pBookmark1,  
   DBBKMARK cbBookmark2,  
   const BYTE* pBookmark2,  
   DBCOMPARE* pComparison);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 Entrambi i segnalibri possono essere standard definite da OLE DB [segnalibro standard](https://msdn.microsoft.com/en-us/library/ms712954.aspx) (**DBBMK_FIRST**, **DBBMK_LAST**, o **DBBMK_INVALID**). Il valore restituito in `pComparison` indica la relazione tra due segnalibri:  
  
-   **DBCOMPARE_LT** (`cbBookmark1` prima `cbBookmark2`.)  
  
-   **DBCOMPARE_EQ** (`cbBookmark1` è uguale a `cbBookmark2`.)  
  
-   **DBCOMPARE_GT** (`cbBookmark1` dopo `cbBookmark2`.)  
  
-   **DBCOMPARE_NE** (i segnalibri sono uguali e non ordinato).  
  
-   **DBCOMPARE_NOTCOMPARABLE** (non è possibile confrontare i segnalibri.)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)