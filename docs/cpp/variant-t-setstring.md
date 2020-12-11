---
description: 'Altre informazioni su: _variant_t:: sestring'
title: _variant_t::SetString
ms.date: 11/04/2016
f1_keywords:
- _variant_t::SetString
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
ms.openlocfilehash: a36bab9189b6046325bb275469dc9dbdb495fc7a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161416"
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

## <a name="remarks"></a>Commenti

Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
