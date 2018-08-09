---
title: 'Metodo criticalsectiontraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 8fb382f5-6eda-407e-9673-71d77bda4962
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b64f44e2188848a25e607c53171e25aa721e9bc4
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641366"
---
# <a name="criticalsectiontraitsunlock-method"></a>Metodo CriticalSectionTraits::Unlock
Specializza un `CriticalSection` modello in modo che non supporta il rilascio del proprietario dell'oggetto specificato sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline static void Unlock(  
   _In_ Type cs  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 Un puntatore a un oggetto sezione critica.  
  
## <a name="remarks"></a>Note  
 Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.  
  
 Per altre informazioni, vedere **funzione LeaveCriticalSection** nel **funzioni di sincronizzazione** sezione della documentazione dell'API di Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)