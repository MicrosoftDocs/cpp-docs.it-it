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
ms.openlocfilehash: 2f66f185692c200ea459b88363143c0cc1af9d55
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466010"
---
# <a name="criticalsectiontraitsunlock-method"></a>Metodo CriticalSectionTraits::Unlock
Un modello CriticalSection è specializzata in modo che supporti il rilascio del proprietario dell'oggetto specificato sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type cs  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *cs*  
 Un puntatore a un oggetto sezione critica.  
  
## <a name="remarks"></a>Note  
 Il *tipo* modificatore viene definito come `typedef CRITICAL_SECTION* Type;`.  
  
 Per altre informazioni, vedere "Function LeaveCriticalSection" nella sezione "Funzioni di sincronizzazione" della documentazione dell'API di Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)