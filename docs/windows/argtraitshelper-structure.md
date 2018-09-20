---
title: ArgTraitsHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraitsHelper
dev_langs:
- C++
helpviewer_keywords:
- ArgTraitsHelper structure
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 314853b103d74bd7907fb665b806f386ed7bd44e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397469"
---
# <a name="argtraitshelper-structure"></a>ArgTraitsHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface>
struct ArgTraitsHelper;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Un'interfaccia di delegato.

## <a name="remarks"></a>Note

Consente di definire le caratteristiche comuni di argomenti del delegato.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`methodType`|Sinonimo di `decltype(&TDelegateInterface::Invoke)`.|
|`Traits`|Sinonimo di `ArgTraits<methodType>`.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Costante ArgTraitsHelper::args](../windows/argtraitshelper-args-constant.md)|Aiuta [argtraits:: args](../windows/argtraits-args-constant.md) Mantieni il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraitsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)