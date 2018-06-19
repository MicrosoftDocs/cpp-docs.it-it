---
title: 'Metodo implementshelper:: Casttounknown | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown
dev_langs:
- C++
helpviewer_keywords:
- CastToUnknown method
ms.assetid: 5bcfcbaf-c75f-4d43-87b3-0d6838c838d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e5a5c71fd0a6ca8fa3b04ad39f46ba5583fbd670
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874499"
---
# <a name="implementshelpercasttounknown-method"></a>Metodo ImplementsHelper::CastToUnknown
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
IUnknown* CastToUnknown();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown sottostante.  
  
## <a name="remarks"></a>Note  
 Ottiene un puntatore a interfaccia IUnknown sottostante per la struttura implementa corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ImplementsHelper (struttura)](../windows/implementshelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)