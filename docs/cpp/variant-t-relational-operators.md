---
description: 'Altre informazioni su: _variant_t operatori relazionali'
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
ms.openlocfilehash: 0a9c339bc67527e258c0d1f69060cde251c8adb9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161429"
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

## <a name="remarks"></a>Commenti

Confronta un `_variant_t` oggetto con un oggetto `VARIANT` , verificando l'uguaglianza o la disuguaglianza.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
