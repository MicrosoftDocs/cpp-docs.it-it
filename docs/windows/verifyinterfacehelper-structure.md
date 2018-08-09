---
title: VerifyInterfaceHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInterfaceHelper
dev_langs:
- C++
helpviewer_keywords:
- VerifyInterfaceHelper structure
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d468913dcca511702deeb77b08306dd0256d6091
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641249"
---
# <a name="verifyinterfacehelper-structure"></a>VerifyInterfaceHelper (struttura)
Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   bool isWinRTInterface,  
   typename I  
>  
struct VerifyInterfaceHelper;  
  
template <  
   typename I  
>  
struct VerifyInterfaceHelper<false, I>;  
```  
  
### <a name="parameters"></a>Parametri  
 *I*  
 Interfaccia da verificare.  
  
 *isWinRTInterface*  
  
## <a name="remarks"></a>Note  
 Verifica che l'interfaccia specificata dal parametro di modello soddisfi determinati requisiti.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo VerifyInterfaceHelper::Verify](../windows/verifyinterfacehelper-verify-method.md)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `VerifyInterfaceHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)