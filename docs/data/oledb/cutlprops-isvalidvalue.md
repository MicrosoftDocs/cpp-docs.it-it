---
title: 'CUtlProps:: IsValidValue | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CUtlProps::IsValidValue
- CUtlProps.IsValidValue
- IsValidValue
dev_langs:
- C++
helpviewer_keywords:
- IsValidValue method
ms.assetid: 1164556e-8d98-429c-a396-fc9a699e0e97
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0a37f0e0e9d415f9b7c78c8a619fd7fd66d24f28
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33101965"
---
# <a name="cutlpropsisvalidvalue"></a>CUtlProps::IsValidValue
Utilizzato per convalidare un valore prima di impostare una proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      virtual HRESULT CUtlPropsBase::IsValidValue(ULONG /* iCurSet */,  
   DBPROP* pDBProp);  
```  
  
#### <a name="parameters"></a>Parametri  
 `iCurSet`  
 L'indice nella matrice di set di proprietà; zero se è impostato solo una proprietà.  
  
 `pDBProp`  
 L'ID di proprietà e un nuovo valore in un [DBPROP](https://msdn.microsoft.com/en-us/library/ms717970.aspx) struttura.  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard. Il valore predefinito valore restituito è `S_OK`.  
  
## <a name="remarks"></a>Note  
 Se si dispone di qualsiasi routine di convalida da eseguire su un valore che si desidera utilizzare per impostare una proprietà, è necessario eseguire l'override di questa funzione. Ad esempio, è possibile convalidare **DBPROP_AUTH_PASSWORD** rispetto a una tabella di password per determinare un valore valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)