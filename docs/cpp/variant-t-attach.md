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
ms.openlocfilehash: 3792ed4d0fcd86c4a4e846771c450413fda130b5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187765"
---
# <a name="_variant_tattach"></a>_variant_t::Attach

**Sezione specifica Microsoft**

Connette un oggetto `VARIANT` nell'oggetto **_variant_t** .

## <a name="syntax"></a>Sintassi

```
void Attach(VARIANT& varSrc);
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` da associare a questo oggetto **_variant_t** .

## <a name="remarks"></a>Osservazioni

Acquisisce la proprietà del `VARIANT` incapsulando tale oggetto. Questa funzione membro rilascia tutti i `VARIANT`incapsulati esistenti, quindi copia il `VARIANT`fornito e imposta la relativa `VARTYPE` su VT_EMPTY per assicurarsi che le relative risorse possano essere rilasciate solo dal distruttore del **_variant_t** .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
