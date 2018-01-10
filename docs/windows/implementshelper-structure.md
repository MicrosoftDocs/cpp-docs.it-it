---
title: ImplementsHelper (struttura) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::ImplementsHelper
dev_langs: C++
helpviewer_keywords: ImplementsHelper structure
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1a51de59278e476be1e99b60ef1b0ab8a6e3f3cd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementshelper-structure"></a>ImplementsHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename RuntimeClassFlagsT,  
   typename ILst,  
   bool IsDelegateToClass  
>  
friend struct Details::ImplementsHelper;  
```  
  
#### <a name="parameters"></a>Parametri  
 `RuntimeClassFlagsT`  
 Un campo di flag che specifica uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.  
  
 `ILst`  
 Un elenco di ID di interfaccia.  
  
 `IsDelegateToClass`  
 Specificare `true` se l'istanza corrente di implementa è una classe di base del primo ID di interfaccia in `ILst`; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Consente di implementare il [implementa](../windows/implements-structure.md) struttura.  
  
 Questo modello consente di scorrere un elenco di interfacce e li aggiunge come classi base e di informazioni necessarie per abilitare QueryInterface.  
  
## <a name="members"></a>Membri  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ImplementsHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (libreria di Runtime di Windows)](http://msdn.microsoft.com/en-us/00000000-0000-0000-0000-000000000000)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)