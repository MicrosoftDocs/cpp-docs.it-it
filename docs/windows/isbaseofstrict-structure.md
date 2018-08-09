---
title: IsBaseOfStrict (struttura) | Microsoft Docs
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
ms.openlocfilehash: d4690c15adac7be66ca916b1fc0f769e6c50190c
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40017901"
---
# <a name="isbaseofstrict-structure"></a>IsBaseOfStrict (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
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
  
### <a name="parameters"></a>Parametri  
 *base*  
 Tipo di base.  
  
 *Derivati*  
 Il tipo derivato.  
  
## <a name="remarks"></a>Note  
 Verifica se un tipo è la base di un altro tipo.  
  
 Il primo modello di verifica se un tipo è derivato da un tipo di base, che potrebbe produrre **true** oppure **false**. Il secondo modello di verifica se un tipo è derivato da se stessa, che restituisce sempre **false**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante IsBaseOfStrict::value](../windows/isbaseofstrict-value-constant.md)|Indica se un tipo è la base di un altro.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IsBaseOfStrict`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)