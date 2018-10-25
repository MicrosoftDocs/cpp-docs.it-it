---
title: RuntimeClassFlags (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassFlags
- implements/Microsoft::WRL::RuntimeClassFlags::value
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::RuntimeClassFlags structure
- Microsoft::WRL::RuntimeClassFlags::value constant
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 90b590637935b7dbeaa0bb6a07ed84faeb0d0a1d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50076178"
---
# <a name="runtimeclassflags-structure"></a>RuntimeClassFlags (struttura)

Contiene il tipo di un'istanza di un [RuntimeClass](../windows/runtimeclass-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <unsigned int flags>
struct RuntimeClassFlags;
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Oggetto [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Costante RuntimeClassFlags::value](#value-constant)|Contiene un [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassFlags`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="value-constant"></a>Costante runtimeclassflags:: value

Un campo che contiene un [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.

```cpp
static const unsigned int value = flags;
```
