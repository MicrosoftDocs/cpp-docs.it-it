---
title: 'Membro dati creatormap:: FactoryCreator | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap::factoryCreator
dev_langs:
- C++
helpviewer_keywords:
- factoryCreator data member
ms.assetid: c9aac363-8f38-4cfd-9605-1e6ac74c5097
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 90367a21d76fe7fe735d1174bc9b9d40900dec78
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600830"
---
# <a name="creatormapfactorycreator-data-member"></a>Membro dati CreatorMap::factoryCreator

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
HRESULT (*factoryCreator)(
   unsigned int* currentflags,
   const CreatorMap* entry,
   REFIID iidClassFactory,
 IUnknown** factory);
```

### <a name="parameters"></a>Parametri

*currentflags*  
Uno dei [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.

*entry*  
Un CreatorMap.

*iidClassFactory*  
L'ID di interfaccia di una class factory.

*factory*  
Al termine dell'operazione, l'indirizzo di una class factory.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Crea una factory per la CreatorMap specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura CreatorMap](../windows/creatormap-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)