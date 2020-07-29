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
ms.openlocfilehash: 6e0296a2bf4ce97e41fdf6208c3dd1c6b91215dc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226940"
---
# <a name="_variant_t-relational-operators"></a>Operatori relazionali _variant_t

**Specifico di Microsoft**

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
`VARIANT`Oggetto da confrontare con l' `_variant_t` oggetto.

*pSrc*<br/>
Puntatore all' `VARIANT` oggetto da confrontare con l' `_variant_t` oggetto.

## <a name="return-value"></a>Valore restituito

Restituisce **`true`** se il confronto include, in **`false`** caso contrario.

## <a name="remarks"></a>Osservazioni

Confronta un `_variant_t` oggetto con un oggetto `VARIANT` , verificando l'uguaglianza o la disuguaglianza.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
