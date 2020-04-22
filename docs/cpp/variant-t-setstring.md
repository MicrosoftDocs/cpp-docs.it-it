---
title: _variant_t::SetString
ms.date: 11/04/2016
f1_keywords:
- _variant_t::SetString
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
ms.openlocfilehash: 60ad1c1bd95eb35f2a4f2800f79d0326c68a1176
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745857"
---
# <a name="_variant_tsetstring"></a>_variant_t::SetString

**Specifico di Microsoft**

Assegna una stringa a questo oggetto `_variant_t`.

## <a name="syntax"></a>Sintassi

```cpp
void SetString(const char* pSrc);
```

#### <a name="parameters"></a>Parametri

*pSrc*<br/>
Puntatore alla stringa di caratteri.

## <a name="remarks"></a>Osservazioni

Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
