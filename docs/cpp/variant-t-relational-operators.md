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
ms.openlocfilehash: e0d26247868440f47c73422510ac0e998f8e8dee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403295"
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