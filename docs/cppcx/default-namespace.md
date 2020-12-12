---
description: 'Altre informazioni su: spazio dei nomi predefinito'
title: spazio dei nomi predefinito
ms.date: 12/30/2016
ms.assetid: 4712e9dc-57ba-43cc-811e-022e1dae4de8
ms.openlocfilehash: 46fa1e6162d0d9ffe25a47bfec88d8461f366828
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273319"
---
# <a name="default-namespace"></a>spazio dei nomi predefinito

Lo `default` spazio dei nomi include i tipi incorporati supportati da C++/CX.

## <a name="syntax"></a>Sintassi

```
namespace default;
```

### <a name="members"></a>Members

Tutti i tipi incorporati ereditano i membri seguenti.

| Nome | Description |
|--|--|
| [default::(type_name)::Equals](../cppcx/default-type-name-equals-method.md) | Determina se l'oggetto specificato è uguale all'oggetto corrente. |
| [default::(type_name)::GetHashCode](../cppcx/default-type-name-gethashcode-method.md) | Restituisce il codice hash per l'istanza. |
| [default::(type_name)::GetType](../cppcx/default-type-name-gettype-method.md) | Restituisce una stringa che rappresenta il tipo corrente. |
| [default::(type_name)::ToString](../cppcx/default-type-name-tostring-method.md) | Restituisce una stringa che rappresenta il tipo corrente. |

### <a name="built-in-types"></a>Tipi incorporati

|Nome|Description|
|----------|-----------------|
|`char16`|Valore non numerico a 16 bit che rappresenta un punto di codice Unicode (UTF-16).|
|`float32`|Numero a virgola mobile IEEE 754 a 32 bit.|
|`float64`|Numero a virgola mobile IEEE 754 a 64 bit.|
|`int16`|Intero con segno a 16 bit.|
|`int32`|Intero con segno a 32 bit.|
|`int64`|Intero con segno a 64 bit.|
|`int8`|Valore numerico con segno a 8 bit.|
|`uint16`|Numero intero non firmato a 16 bit.|
|`uint32`|Intero senza segno a 32 bit.|
|`uint64`|Intero senza segno a 64 bit.|
|`uint8`|Valore numerico senza segno a 8 bit.|

### <a name="requirements"></a>Requisiti

**Intestazione:** vccorlib.h

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)
