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
ms.openlocfilehash: 12d4fdd415ab37c9af0b0b34651e7cd2f00cf31b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405281"
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

*currentflags*<br/>
Uno dei [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.

*entry*<br/>
Un CreatorMap.

*iidClassFactory*<br/>
L'ID di interfaccia di una class factory.

*factory*<br/>
Al termine dell'operazione, l'indirizzo di una class factory.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Crea una factory per la CreatorMap specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura CreatorMap](../windows/creatormap-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)