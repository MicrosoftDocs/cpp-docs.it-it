---
title: 'Metodo mutex:: lock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock
dev_langs:
- C++
helpviewer_keywords:
- Lock method
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1dcb5b187944e58ff24f312fa376ff71e2cf63f3
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018637"
---
# <a name="mutexlock-method"></a>Metodo Mutex::Lock
Attende fino a quando l'oggetto corrente, o la **Mutex** oggetto associato all'handle specificato, le versioni è trascorso l'intervallo di timeout specificato o il mutex.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
SyncLock Lock(  
   DWORD milliseconds = INFINITE  
);  
  
static SyncLock Lock(  
   HANDLE h,  
   DWORD milliseconds = INFINITE  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *millisecondi*  
 L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, che è in attesa per un periodo illimitato.  
  
 *h*  
 L'handle di una **Mutex** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Classe Mutex](../windows/mutex-class1.md)