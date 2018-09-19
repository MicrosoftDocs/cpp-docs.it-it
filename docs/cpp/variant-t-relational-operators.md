---
title: Operatori relazionali variant_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::operator==
- _variant_t::operator!=
dev_langs:
- C++
helpviewer_keywords:
- '!= operator'
- relational operators [C++], _variant_t class
- operator!= [C++], variant
- operator!= [C++], relational operators
- operator != [C++], variant
- operator == [C++], variant
- operator== [C++], variant
- operator != [C++], relational operators
- == operator [C++], with specific Visual C++ objects
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 95cb1ac663607f26c4f168c2e98910f5b41963c0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040161"
---
# <a name="variantt-relational-operators"></a>Operatori relazionali _variant_t

**Sezione specifica Microsoft**

Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.

## <a name="syntax"></a>Sintassi

```
bool operator==(
   const VARIANT& varSrc) const;
bool operator==(
   const VARIANT* pSrc) const;
bool operator!=(
   const VARIANT& varSrc) const;
bool operator!=(
   const VARIANT* pSrc) const;
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` da confrontare con il `_variant_t` oggetto.

*pSrc*<br/>
Puntatore per il `VARIANT` da confrontare con il `_variant_t` oggetto.

## <a name="return-value"></a>Valore restituito

Restituisce **true** qualora sia presente, il confronto **false** in caso contrario.

## <a name="remarks"></a>Note

Confronta un `_variant_t` dell'oggetto con un `VARIANT`, il test di uguaglianza o disuguaglianza.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)