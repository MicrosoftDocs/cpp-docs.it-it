---
title: RuntimeClassFlags (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassFlags
- implements/Microsoft::WRL::RuntimeClassFlags::value
helpviewer_keywords:
- Microsoft::WRL::RuntimeClassFlags structure
- Microsoft::WRL::RuntimeClassFlags::value constant
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
ms.openlocfilehash: 4cbd3f367bc57c2eedf672422a458b67b1908fc0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403152"
---
# <a name="runtimeclassflags-structure"></a>RuntimeClassFlags (struttura)

Contiene il tipo di un'istanza di un [RuntimeClass](runtimeclass-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <unsigned int flags>
struct RuntimeClassFlags;
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Oggetto [RuntimeClassType (enumerazione)](runtimeclasstype-enumeration.md) valore.

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante RuntimeClassFlags::value](#value-constant)|Contiene un [RuntimeClassType (enumerazione)](runtimeclasstype-enumeration.md) valore.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassFlags`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="value-constant"></a>Costante runtimeclassflags:: value

Un campo che contiene un [RuntimeClassType (enumerazione)](runtimeclasstype-enumeration.md) valore.

```cpp
static const unsigned int value = flags;
```
