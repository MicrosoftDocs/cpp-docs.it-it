---
title: 'Operatore hstringreference:: Operator = | Microsoft Docs'
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
ms.openlocfilehash: fc8f919dcec994be5d4f0300e9c96dde95895e16
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39608521"
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator=
Sposta il valore di un'altra **HStringReference** oggetto all'oggetto corrente **HStringReference** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HStringReference& operator=(HStringReference&& other) throw()  
```  
  
### <a name="parameters"></a>Parametri  
 *other*  
 Un oggetto esistente **HStringReference** oggetto.  
  
## <a name="remarks"></a>Note  
 Il valore dell'oggetto esistente *altri* viene copiato l'oggetto corrente **HStringReference** oggetto e quindi il *altri* oggetto viene eliminato definitivamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)