---
title: Struttura MixIn | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::MixIn
dev_langs:
- C++
helpviewer_keywords:
- MixIn structure
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 883e952dde579cce3f5a65ba4a453f98ddbb4740
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `true`Se `MixInType` è derivato dall'implementazione corrente il tipo di base; `false` in caso contrario.  
  
## <a name="remarks"></a>Note  
 Se una classe è derivata da Windows Runtime e le interfacce di classe COM, l'elenco di dichiarazione di classe prima di tutto necessario elencare le interfacce di Windows Runtime e quindi di interfacce di qualsiasi COM classico. MixIn assicura che le interfacce vengono specificate nell'ordine corretto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MixIn`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)