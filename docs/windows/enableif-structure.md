---
title: EnableIf (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::EnableIf
dev_langs:
- C++
helpviewer_keywords:
- EnableIf structure
ms.assetid: 7825b283-e6b2-4f39-a4b9-c03bcd431b8e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 82a9bc4000919d2bbe2b8598351d3fe6a4730ba9
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569030"
---
# <a name="enableif-structure"></a>EnableIf (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   bool b,  
   typename T = void  
>  
  
struct EnableIf;  
template <  
   typename T  
>  
struct EnableIf<true, T>;  
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Tipo.  
  
 *b*  
 Espressione booleana.  
  
## <a name="remarks"></a>Note  
 Definisce un membro dati di tipo specificato dal secondo parametro di modello, se il primo parametro di modello restituisce **true**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Se il parametro di modello *b* restituisca **true**, la parziale specializzazione definisce il membro dati `type` sia di tipo `T`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EnableIf`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)