---
title: 'Semaphore:: operator = (operatore) | Documenti Microsoft'
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
ms.openlocfilehash: 25287e642bd368470b207ed237f44ca70773064e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892527"
---
# <a name="semaphoreoperator-operator"></a>Operatore Semaphore::operator=
Sposta l'handle specificato da un oggetto semaforo all'oggetto semaforo corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Semaphore& operator=(  
   _Inout_ Semaphore&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Riferimento rvalue a un oggetto semaforo.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto semaforo corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Semaphore](../windows/semaphore-class.md)