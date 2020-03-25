---
title: _variant_t::SetString
ms.date: 11/04/2016
f1_keywords:
- _variant_t::SetString
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
ms.openlocfilehash: 0cd300a09c29668c496d93109d1bc862947e948c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187557"
---
# <a name="_variant_tsetstring"></a>_variant_t::SetString

**Sezione specifica Microsoft**

Assegna una stringa a questo oggetto `_variant_t`.

## <a name="syntax"></a>Sintassi

```
void SetString(const char* pSrc);
```

#### <a name="parameters"></a>Parametri

*pSrc*<br/>
Puntatore alla stringa di caratteri.

## <a name="remarks"></a>Osservazioni

Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
