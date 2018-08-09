---
title: ImplementsHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper
dev_langs:
- C++
helpviewer_keywords:
- ImplementsHelper structure
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eca429578fd9b58a2a3229199d53812a494af045
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018348"
---
# <a name="implementshelper-structure"></a>ImplementsHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename RuntimeClassFlagsT,  
   typename ILst,  
   bool IsDelegateToClass  
>  
friend struct Details::ImplementsHelper;  
```  
  
### <a name="parameters"></a>Parametri  
 *RuntimeClassFlagsT*  
 Un campo di flag che specifica uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.  
  
 *ILst*  
 Un elenco ID di interfaccia.  
  
 *IsDelegateToClass*  
 Specificare **true** se l'istanza corrente di `Implements` è una classe di base del primo ID di interfaccia in *ILst*; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Consente di implementare il [implementa](../windows/implements-structure.md) struttura.  
  
 Questo modello consente di scorrere un elenco di interfacce e li aggiunge come classi di base e le informazioni necessarie per abilitare `QueryInterface`.  
  
## <a name="members"></a>Membri  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ImplementsHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (libreria Windows Runtime)](http://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)