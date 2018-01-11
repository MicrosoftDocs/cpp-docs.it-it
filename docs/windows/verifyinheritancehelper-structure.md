---
title: VerifyInheritanceHelper (struttura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::VerifyInheritanceHelper
dev_langs: C++
helpviewer_keywords: VerifyInheritanceHelper structure
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e9e740dc15618388fe9c1428705b47bd495a1c37
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="verifyinheritancehelper-structure"></a>VerifyInheritanceHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
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
  
#### <a name="parameters"></a>Parametri  
 `I`  
 Tipo.  
  
 `Base`  
 Un altro tipo.  
  
## <a name="remarks"></a>Note  
 Verifica se un'interfaccia è derivata da un'altra interfaccia.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo VerifyInheritanceHelper::Verify](../windows/verifyinheritancehelper-verify-method.md)|Verifica le due interfacce specificate dai parametri di modello corrente e determina se un'interfaccia è derivata da altra.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `VerifyInheritanceHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)