---
title: _variant_t::SetString | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::SetString
dev_langs:
- C++
helpviewer_keywords:
- SetString method [C++]
ms.assetid: 816b08e5-6830-46ca-b3d7-7689308b3be3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 52ea719a2c9296ca1e64d881ac150994c041e206
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018730"
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