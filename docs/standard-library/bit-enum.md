---
title: endian enum
description: Enumerazione utilizzata per specificare l'oggetto di tipo scalare
ms.date: 08/27/2020
f1_keywords:
- bit/std::endian
helpviewer_keywords:
- std::endian
ms.openlocfilehash: b535bc009fbdc0b047444a6bc2ca36eed7a6d1cb
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040080"
---
# <a name="endian-enum"></a>endian enum

Indica la caratteristica di tutti i tipi scalari.

## <a name="syntax"></a>Sintassi

```cpp
enum class endian {
    little = 0,
    big = 1,
    native = little
 };
```

### <a name="members"></a>Members

|Elemento|Descrizione|
|-|-|
| `little` | Indica che i tipi scalari sono little-endian. Ciò significa che il byte meno significativo viene archiviato nell'indirizzo più piccolo. Ad esempio, `0x1234` è archiviato `0x34` `0x12` .  |
| `big` | Indica che i tipi scalari sono big endian, ovvero il byte più significativo è archiviato nell'indirizzo più basso. Ad esempio, `0x1234` è archiviato `0x12` `0x34` .  |

## <a name="remarks"></a>Commenti

Tutti i tipi scalari nativi sono little-endian per le piattaforme che Microsoft Visual C++ destinazioni (x86, x64, ARM, ARM64).

## <a name="requirements"></a>Requisiti

**Intestazione:**\<bit>

**Spazio dei nomi:** std

[/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) è obbligatorio.

## <a name="see-also"></a>Vedere anche

[\<bit>](../standard-library/bit.md)  
