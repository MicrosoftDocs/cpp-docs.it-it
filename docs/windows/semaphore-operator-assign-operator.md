---
title: 'Semaphore:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: ea19839f-91f0-4b00-a35b-5728fcba4981
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 49405cda5ff7a9d3313ebafbda35b5fb6182febe
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015507"
---
# <a name="semaphoreoperator-operator"></a>Operatore Semaphore::operator=
Sposta l'handle specificato da un **semaforo** oggetto all'oggetto corrente **semaforo** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Semaphore& operator=(  
   _Inout_ Semaphore&& h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Riferimento rvalue a un **semaforo** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto corrente **semaforo** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Semaphore](../windows/semaphore-class.md)