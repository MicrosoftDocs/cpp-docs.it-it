---
title: 'Metodo implementshelper:: Fillarraywithiid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: f60035ee-b7d6-4a08-966d-f88c646944c3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9313ade1f5731319732a2ee3efc0af191af14f05
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879923"
---
# <a name="implementshelperfillarraywithiid-method"></a>Metodo ImplementsHelper::FillArrayWithIid
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void FillArrayWithIid(  
   _Inout_ unsigned long *index,   
   _Inout_ IID* iids) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `index`  
 Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine dell'operazione, `index` viene incrementato di 1.  
  
 `iids`  
 Matrice di tipo IID.  
  
## <a name="remarks"></a>Note  
 Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ImplementsHelper (struttura)](../windows/implementshelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)