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
ms.openlocfilehash: 9fed5bb31b077288495a78aefcbd8401b3520bb6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367219"
---
# <a name="runtimeclassflags-structure"></a>RuntimeClassFlags (struttura)

Contiene il tipo per un'istanza di [RuntimeClass.](runtimeclass-class.md)

## <a name="syntax"></a>Sintassi

```cpp
template <unsigned int flags>
struct RuntimeClassFlags;
```

### <a name="parameters"></a>Parametri

*Bandiere*<br/>
Valore [di enumerazione RuntimeClassType.](runtimeclasstype-enumeration.md)

## <a name="members"></a>Membri

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante RuntimeClassFlags::value](#value-constant)|Contiene un valore [di enumerazione RuntimeClassType.](runtimeclasstype-enumeration.md)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassFlags`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="runtimeclassflagsvalue-constant"></a><a name="value-constant"></a>Costante RuntimeClassFlags::value

Campo che contiene un valore [di enumerazione RuntimeClassType.](runtimeclasstype-enumeration.md)

```cpp
static const unsigned int value = flags;
```
