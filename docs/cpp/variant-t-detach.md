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
ms.openlocfilehash: 719852c4556291747b612d54c44d4bf82caa9188
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51519006"
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

Estrae e restituisce incapsulato `VARIANT`, quindi Cancella questo `_variant_t` oggetto senza eliminarlo. Questa funzione membro rimuove il `VARIANT` dall'incapsulamento e imposta la `VARTYPE` di questo `_variant_t` oggetto parametro su VT_EMPTY. È responsabilità dell'utente per rilasciare l'oggetto restituito `VARIANT` chiamando il [VariantClear](/windows/desktop/api/oleauto/nf-oleauto-variantclear) (funzione).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)