---
title: 'Mutex:: operator = (operatore) | Documenti Microsoft'
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
ms.openlocfilehash: 8791d3c947206be399f475bb8c895b2b5e032133
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33875487"
---
# <a name="mutexoperator-operator"></a>Operatore Mutex::operator=
Assegna il Mutex specificato (sposta) dell'oggetto per l'oggetto Mutex corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Mutex& operator=(  
   _Inout_ Mutex&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Un riferimento rvalue a un oggetto Mutex.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto Mutex corrente.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il **la semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Mutex (classe)](../windows/mutex-class1.md)