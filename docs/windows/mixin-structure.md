---
title: Struttura MixIn | Documenti Microsoft
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
ms.openlocfilehash: b20dac5f189a51a1610da45e43e03e51ff1c3610
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876163"
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
  
#### <a name="parameters"></a>Parametri  
 `Derived`  
 Un tipo derivato dal [implementa](../windows/implements-structure.md) struttura.  
  
 `MixInType`  
 Tipo di base.  
  
 `hasImplements`  
 `true` Se `MixInType` è derivato dall'implementazione corrente il tipo di base; `false` in caso contrario.  
  
## <a name="remarks"></a>Note  
 Se una classe è derivata da Windows Runtime e le interfacce di classe COM, l'elenco di dichiarazione di classe prima di tutto necessario elencare le interfacce di Windows Runtime e quindi di interfacce di qualsiasi COM classico. MixIn assicura che le interfacce vengono specificate nell'ordine corretto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MixIn`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)