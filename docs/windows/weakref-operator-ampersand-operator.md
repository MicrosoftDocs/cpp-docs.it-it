---
title: 'Weakref:: operator&amp; operatore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::WeakRef::operator&
dev_langs:
- C++
helpviewer_keywords:
- operator& operator
ms.assetid: 900afb73-3801-4d08-9b41-2e6a62011ccd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c8221b405618b1879f4e4c865115a227eb09857
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890114"
---
# <a name="weakrefoperatoramp-operator"></a>Weakref:: operator&amp; (operatore)
Restituisce un oggetto ComPtrRef che rappresenta l'oggetto WeakRef corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&() throw()  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un oggetto ComPtrRef che rappresenta l'oggetto WeakRef corrente.  
  
## <a name="remarks"></a>Note  
 Questo è un operatore di supporto interno che non deve essere utilizzata nel codice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)