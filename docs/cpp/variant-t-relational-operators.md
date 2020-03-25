---
title: Operatori relazionali _variant_t
ms.date: 11/04/2016
f1_keywords:
- _variant_t::operator==
- _variant_t::operator!=
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
ms.openlocfilehash: e0d7ea1a0bcaf8329cff0cdfb0c01154f3c5a73b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187570"
---
# <a name="_variant_t-relational-operators"></a>Operatori relazionali _variant_t

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
`VARIANT` da confrontare con l'oggetto `_variant_t`.

*pSrc*<br/>
Puntatore al `VARIANT` da confrontare con l'oggetto `_variant_t`.

## <a name="return-value"></a>Valore restituito

Restituisce **true** se il confronto include; in caso contrario, **false** .

## <a name="remarks"></a>Osservazioni

Confronta un oggetto `_variant_t` con un `VARIANT`, verificando l'uguaglianza o la disuguaglianza.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
