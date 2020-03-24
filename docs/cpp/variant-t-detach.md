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
ms.openlocfilehash: 9737db6b77483fa55e1dad90b9464752cd8537a5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187739"
---
# <a name="_variant_tdetach"></a>_variant_t::Detach

**Sezione specifica Microsoft**

Disconnette l'oggetto `VARIANT` incapsulato da questo oggetto `_variant_t`.

## <a name="syntax"></a>Sintassi

```
VARIANT Detach( );
```

## <a name="return-value"></a>Valore restituito

`VARIANT`incapsulato.

## <a name="remarks"></a>Osservazioni

Estrae e restituisce il `VARIANT`incapsulato, quindi Cancella questo oggetto `_variant_t` senza eliminarlo definitivamente. Questa funzione membro rimuove il `VARIANT` dall'incapsulamento e imposta la `VARTYPE` di questo oggetto `_variant_t` su VT_EMPTY. È compito dell'utente rilasciare il `VARIANT` restituito chiamando la funzione [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
