---
title: _variant_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _variant_t::Detach
- _variant_t.Detach
helpviewer_keywords:
- VARIANT object [C++], detatch
- Detach method [C++]
- VARIANT object
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
ms.openlocfilehash: 4b19e3c1615912550cdf1eb6a2b0b3f906ee4af9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50522330"
---
# <a name="varianttdetach"></a>_variant_t::Detach

**Sezione specifica Microsoft**

Scollega incapsulato `VARIANT` da questo oggetto `_variant_t` oggetto.

## <a name="syntax"></a>Sintassi

```
VARIANT Detach( );
```

## <a name="return-value"></a>Valore restituito

Incapsulato `VARIANT`.

## <a name="remarks"></a>Note

Estrae e restituisce incapsulato `VARIANT`, quindi Cancella questo `_variant_t` oggetto senza eliminarlo. Questa funzione membro rimuove il `VARIANT` dall'incapsulamento e imposta la `VARTYPE` di questo `_variant_t` oggetto parametro su VT_EMPTY. È responsabilità dell'utente per rilasciare l'oggetto restituito `VARIANT` chiamando il [VariantClear](/previous-versions/windows/desktop/api/oleauto/nf-oleauto-variantclear) (funzione).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)