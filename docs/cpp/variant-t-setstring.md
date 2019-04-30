---
title: _variant_t::SetString
ms.date: 11/04/2016
f1_keywords:
- _variant_t::SetString
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
ms.openlocfilehash: d07e995be0ecd99974356a7516e7c4deee677637
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403269"
---
# <a name="varianttsetstring"></a>_variant_t::SetString

**Sezione specifica Microsoft**

Assegna una stringa a questo oggetto `_variant_t`.

## <a name="syntax"></a>Sintassi

```
void SetString(const char* pSrc);
```

#### <a name="parameters"></a>Parametri

*pSrc*<br/>
Puntatore alla stringa di caratteri.

## <a name="remarks"></a>Note

Converte una stringa di caratteri ANSI in una stringa `BSTR` Unicode e la assegna a questo oggetto `_variant_t`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)