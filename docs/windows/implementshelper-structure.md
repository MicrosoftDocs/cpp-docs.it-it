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
ms.openlocfilehash: 5a3a31125d8489551f1eec143013661bf385f29a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212445"
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

[Riferimento (libreria Windows Runtime)](https://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)