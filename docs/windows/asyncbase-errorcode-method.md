---
title: 'Metodo asyncbase:: ErrorCode | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::ErrorCode
dev_langs:
- C++
helpviewer_keywords:
- ErrorCode method
ms.assetid: 3f5f0f69-d60a-4a67-8cc6-a55fdc89a192
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a5f4ccbe1789914f5a7c378f5cb847aaa1c49bb8
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644703"
---
# <a name="asyncbaseerrorcode-method"></a>Metodo AsyncBase::ErrorCode
Recupera il codice di errore per l'operazione asincrona corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline void ErrorCode(  
   HRESULT *error  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *Errore*  
 Il percorso in cui questa operazione archivia il codice di errore corrente.  
  
## <a name="remarks"></a>Note  
 Questa operazione è thread-safe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)