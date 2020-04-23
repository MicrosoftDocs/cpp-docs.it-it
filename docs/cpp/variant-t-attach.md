---
title: _variant_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _variant_t::Attach
- _variant_t.Attach
helpviewer_keywords:
- Attach method [C++]
- VARIANT object [C++], attach
- VARIANT object
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
ms.openlocfilehash: d0822dfc730cbbb64f8364e6fa8fe8bc7207f9f9
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750736"
---
# <a name="_variant_tattach"></a>_variant_t::Attach

**Specifico di Microsoft**

Associa un `VARIANT` oggetto all'oggetto **_variant_t.**

## <a name="syntax"></a>Sintassi

```cpp
void Attach(VARIANT& varSrc);
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` da associare a questo **_variant_t** oggetto.

## <a name="remarks"></a>Osservazioni

Assume la `VARIANT` proprietà di l'oggetto incapsulandolo. Questa funzione membro rilascia `VARIANT`qualsiasi file incapsulato `VARIANT`esistente, `VARTYPE` quindi copia l'oggetto fornito e ne imposta la proprietà su VT_EMPTY per assicurarsi che le relative risorse possano essere rilasciate solo dal distruttore **_variant_t.**

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
