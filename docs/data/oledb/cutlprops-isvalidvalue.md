---
title: 'CUtlProps:: IsValidValue | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CUtlProps::IsValidValue
- CUtlProps.IsValidValue
- IsValidValue
dev_langs:
- C++
helpviewer_keywords:
- IsValidValue method
ms.assetid: 1164556e-8d98-429c-a396-fc9a699e0e97
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7c806b7fdeae18f53d9f8fd5d012bf67ce8b1ef6
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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