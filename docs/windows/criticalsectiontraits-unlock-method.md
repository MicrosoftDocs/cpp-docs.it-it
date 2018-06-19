---
title: 'Metodo criticalsectiontraits:: Unlock | Documenti Microsoft'
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
ms.openlocfilehash: 35a632a6c88ed29ef5e30e942c1341246de75e71
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33883498"
---
# <a name="criticalsectiontraitsunlock-method"></a>Metodo CriticalSectionTraits::Unlock
Un modello CriticalSection è specializzato in modo che supporti il rilascio del proprietario dell'oggetto specificato sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type cs  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `cs`  
 Puntatore a un oggetto sezione critica.  
  
## <a name="remarks"></a>Note  
 Il *tipo* modificatore è definito come `typedef CRITICAL_SECTION* Type;`.  
  
 Per ulteriori informazioni, vedere "Funzione LeaveCriticalSection" nella sezione "Funzioni di sincronizzazione" della documentazione dell'API di Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)