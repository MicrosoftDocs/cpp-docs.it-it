---
title: Metodo CompareStringOrdinal | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal
dev_langs:
- C++
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e3abf87340671d1ac4851b055a57896e340d0c20
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comparestringordinal-method"></a>Metodo CompareStringOrdinal
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline INT32 CompareStringOrdinal(  
   HSTRING lhs,   
   HSTRING rhs)  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo HSTRING da confrontare.  
  
 `rhs`  
 Il secondo HSTRING da confrontare.  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Condizione|  
|-----------|---------------|  
|-1|`lhs` è minore di `rhs`.|  
|0|`lhs` è uguale a `rhs`.|  
|1|`lhs` è maggiore di `rhs`.|  
  
## <a name="remarks"></a>Note  
 Confronta due oggetti HSTRING specificati e restituisce un intero che indica la posizione relativa di un ordinamento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)