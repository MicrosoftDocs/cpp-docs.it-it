---
title: MixIn (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::MixIn
dev_langs:
- C++
helpviewer_keywords:
- MixIn structure
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d0ebf8efb556aef4fbd5048fa1930f2d98a01410
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605724"
---
# <a name="mixin-structure"></a>MixIn (struttura)
Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename Derived,  
   typename MixInType,  
   bool hasImplements = __is_base_of(Details::ImplementsBase,  
   MixInType)  
>  
struct MixIn;  
```  
  
### <a name="parameters"></a>Parametri  
 *Derivati*  
 Un tipo derivato dal [implementa](../windows/implements-structure.md) struttura.  
  
 *MixInType*  
 Tipo di base.  
  
 *hasImplements*  
 **true** se *MixInType* è derivato dall'implementazione corrente il tipo di base; **false** in caso contrario.  
  
## <a name="remarks"></a>Note  
 Se una classe è derivata da Windows Runtime e le interfacce di classi COM, l'elenco di dichiarazione di classe prima di tutto necessario elencare le interfacce di Windows Runtime e quindi qualsiasi COM classico interfacce. **MixIn** assicura che le interfacce sono specificate nell'ordine corretto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MixIn`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)