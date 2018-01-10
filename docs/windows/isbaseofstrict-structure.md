---
title: IsBaseOfStrict (struttura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: internal/Microsoft::WRL::Details::IsBaseOfStrict
dev_langs: C++
helpviewer_keywords: IsBaseOfStrict structure
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8a8e40bec0f4dedf02aab14b2c8072ccc3e60bbb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)