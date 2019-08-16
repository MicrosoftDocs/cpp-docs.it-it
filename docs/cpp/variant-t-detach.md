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
ms.openlocfilehash: 8426c80af04b2c0906af150ea3e91304335e9f69
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500554"
---
# <a name="_variant_tdetach"></a>_variant_t::Detach

**Sezione specifica Microsoft**

Disconnette l' `VARIANT` oggetto incapsulato da questo `_variant_t` oggetto.

## <a name="syntax"></a>Sintassi

```
VARIANT Detach( );
```

## <a name="return-value"></a>Valore restituito

Oggetto incapsulato `VARIANT`.

## <a name="remarks"></a>Note

Estrae e restituisce l' `VARIANT` `_variant_t` oggetto incapsulato, quindi cancella l'oggetto senza eliminarlo definitivamente. Questa funzione membro rimuove l' `VARIANT` oggetto dall'incapsulamento e `VARTYPE` imposta l' `_variant_t` oggetto di questo oggetto su VT_EMPTY. È compito dell'utente rilasciare l'oggetto restituito `VARIANT` chiamando la funzione [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)