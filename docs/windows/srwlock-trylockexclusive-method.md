---
title: 'Metodo SRWLOCK:: Trylockexclusive | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive
dev_langs:
- C++
helpviewer_keywords:
- TryLockExclusive method
ms.assetid: 661e8b19-3058-4511-8742-c9fbb90412c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 674a7dced019926e6ea07b41641eb42db70c45a0
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013480"
---
# <a name="srwlocktrylockexclusive-method"></a>Metodo SRWLock::TryLockExclusive
Prova ad acquisire un **SRWLock** oggetto in modalità esclusiva per il correnti o specificate **SRWLock** oggetto. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà del blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
SyncLockExclusive TryLockExclusive();  
  
static SyncLockExclusive TryLockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *lock*  
 Puntatore a un **SRWLock** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un **SRWLock** oggetto in modalità esclusiva e il thread chiamante assume la proprietà del blocco. In caso contrario, un **SRWLock** oggetto il cui stato non è valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)