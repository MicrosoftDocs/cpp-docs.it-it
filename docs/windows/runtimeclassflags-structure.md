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
ms.openlocfilehash: c5bfd9fc6dd87c61149722e8ef7fed79f8f017da
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48788838"
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
