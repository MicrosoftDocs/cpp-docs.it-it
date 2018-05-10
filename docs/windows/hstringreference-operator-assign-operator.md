---
title: 'Hstringreference:: operator = (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator=
dev_langs:
- C++
ms.assetid: ea100ed3-e566-4c9e-b6a8-f296088dea9c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 73ec71526d340aafb16ddf2af274dce7ad0e9cbd
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator=
Sposta il valore di un altro oggetto HStringReference all'oggetto HStringReference corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HStringReference& operator=(HStringReference&& other) throw()  
```  
  
#### <a name="parameters"></a>Parametri  
 `other`  
 Oggetto HStringReference esistente.  
  
## <a name="remarks"></a>Note  
 Il valore dell'oggetto esistente `other` oggetto viene copiato l'oggetto HStringReference corrente, quindi il `other` oggetto viene eliminato definitivamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)