---
title: VerifyInheritanceHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::VerifyInheritanceHelper
dev_langs:
- C++
helpviewer_keywords:
- VerifyInheritanceHelper structure
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a67e63748ee7650b2e99a6112f9725daf6cf13c6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652936"
---
# <a name="verifyinheritancehelper-structure"></a>VerifyInheritanceHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename I,  
   typename Base  
>  
struct VerifyInheritanceHelper;  
template <  
   typename I  
>  
struct VerifyInheritanceHelper<I, Nil>;  
```  
  
### <a name="parameters"></a>Parametri  
 *I*  
 Tipo.  
  
 *base*  
 Un altro tipo.  
  
## <a name="remarks"></a>Note  
 Verifica se un'interfaccia è derivata da un'altra interfaccia.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo VerifyInheritanceHelper::Verify](../windows/verifyinheritancehelper-verify-method.md)|Testa le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `VerifyInheritanceHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)