---
title: 'CAccessorRowset:: GetColumnInfo | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- GetColumnInfo
- CAccessorRowset.GetColumnInfo
- CAccessorRowset::GetColumnInfo
dev_langs:
- C++
helpviewer_keywords:
- GetColumnInfo method
ms.assetid: 8ade2388-3c58-43cd-8ed6-499ee0531291
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 46f645ba2f662cad38fa962cea543f7530418530
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089585"
---
# <a name="caccessorrowsetgetcolumninfo"></a>CAccessorRowset::GetColumnInfo
Ottiene informazioni sulle colonne dal set di righe aperto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT GetColumnInfo(DBORDINAL* pulColumns,  
   DBCOLUMNINFO** ppColumnInfo,  
   LPOLESTR* ppStrings) const;  

HRESULT GetColumnInfo(DBORDINAL* pColumns,  
   DBCOLUMNINFO** ppColumnInfo);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 L'utente deve liberare il buffer di stringa e di informazioni di colonna restituita. Utilizzare la seconda versione di questo metodo quando si utilizza [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ed è necessario eseguire l'override delle associazioni.  
  
 Per ulteriori informazioni, vedere [IColumnsInfo:: GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) nel *riferimento per programmatori OLE DB*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAccessorRowset](../../data/oledb/caccessorrowset-class.md)