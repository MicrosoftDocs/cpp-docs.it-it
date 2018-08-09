---
title: 'Mutex:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: 9b0ee206-a930-4fea-8dc0-1f79839e9d13
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9ce42a1e14e3de77b8ac10c67a8f15b6ee3f080f
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40019956"
---
# <a name="mutexoperator-operator"></a>Operatore Mutex::operator=
Assegna (sposta) specificato **Mutex** oggetto all'oggetto corrente **Mutex** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Mutex& operator=(  
   _Inout_ Mutex&& h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Un riferimento rvalue a un **Mutex** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto corrente **Mutex** oggetto.  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere la **semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Mutex](../windows/mutex-class1.md)