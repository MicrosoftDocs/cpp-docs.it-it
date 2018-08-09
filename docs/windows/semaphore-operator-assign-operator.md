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
ms.openlocfilehash: eee563a52a24d2b78157b640ae6e84217c03af64
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39651278"
---
# <a name="semaphoreoperator-operator"></a>Operatore Semaphore::operator=
Sposta l'handle specificato da un **semaforo** oggetto all'oggetto corrente **semaforo** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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