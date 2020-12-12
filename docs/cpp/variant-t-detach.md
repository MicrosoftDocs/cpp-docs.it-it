---
description: 'Altre informazioni su: _variant_t::D etach'
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
ms.openlocfilehash: 502903f73f9b149a5f85a6eb1be44687aab20664
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204693"
---
# <a name="_variant_tdetach"></a>_variant_t::Detach

**Specifico di Microsoft**

Disconnette l'oggetto incapsulato `VARIANT` da questo `_variant_t` oggetto.

## <a name="syntax"></a>Sintassi

```
VARIANT Detach( );
```

## <a name="return-value"></a>Valore restituito

Oggetto incapsulato `VARIANT` .

## <a name="remarks"></a>Commenti

Estrae e restituisce l'oggetto incapsulato `VARIANT` , quindi cancella l' `_variant_t` oggetto senza eliminarlo definitivamente. Questa funzione membro rimuove l' `VARIANT` oggetto dall'incapsulamento e imposta l' `VARTYPE` oggetto di questo `_variant_t` oggetto su VT_EMPTY. È compito dell'utente rilasciare l'oggetto restituito chiamando `VARIANT` la funzione [VariantClear](/windows/win32/api/oleauto/nf-oleauto-variantclear) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
