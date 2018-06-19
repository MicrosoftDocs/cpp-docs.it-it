---
title: IsBaseOfStrict (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::IsBaseOfStrict
dev_langs:
- C++
helpviewer_keywords:
- IsBaseOfStrict structure
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db8f315c0589ceb7cd9411873152fe644985818e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876891"
---
# <a name="isbaseofstrict-structure"></a>IsBaseOfStrict (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename Base,  
   typename Derived  
>  
  
struct IsBaseOfStrict;  
template <  
   typename Base  
>  
struct IsBaseOfStrict<Base, Base>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Tipo di base.  
  
 `Derived`  
 Il tipo derivato.  
  
## <a name="remarks"></a>Note  
 Verifica se un tipo è la base di un altro tipo.  
  
 Il primo modello verifica se un tipo è derivato da un tipo di base, che potrebbe restituire **true** o **false**. Il secondo modello verifica se un tipo derivato da se stessa, che restituisce sempre **false**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante IsBaseOfStrict::value](../windows/isbaseofstrict-value-constant.md)|Indica se un tipo di base di un altro.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IsBaseOfStrict`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)