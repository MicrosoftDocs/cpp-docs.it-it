---
title: 'CDBPropSet:: CDBPropSet | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDBPropSet.CDBPropSet
- CDBPropSet::CDBPropSet
- ATL::CDBPropSet::CDBPropSet
- ATL.CDBPropSet.CDBPropSet
dev_langs:
- C++
helpviewer_keywords:
- CDBPropSet class, constructor
ms.assetid: 02ae5d9e-c067-47ca-8111-a03e86b5626b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 58c3639d6c849a4b57ba1b0a75a7840def977556
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090474"
---
# <a name="cdbpropsetcdbpropset"></a>CDBPropSet::CDBPropSet
Costruttore. Inizializza il **rgProperties**, **cProperties**, e **guidPropertySet** campi del [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      CDBPropSet(const GUID& guid);  

CDBPropSet(const CDBPropSet& propset);  

CDBPropSet();  
```  
  
#### <a name="parameters"></a>Parametri  
 `guid`  
 [in] Un GUID utilizzato per inizializzare il **guidPropertySet** campo.  
  
 *propset*  
 [in] Altro oggetto `CDBPropSet` per la costruzione di copia.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CDBPropSet (classe)](../../data/oledb/cdbpropset-class.md)   
 [CDBPropSet::SetGUID](../../data/oledb/cdbpropset-setguid.md)   
 [Struttura DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx)