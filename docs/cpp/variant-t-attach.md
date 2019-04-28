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
ms.openlocfilehash: 510267c7ab00fe22a93dc01342def5fc262ddb04
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166218"
---
# <a name="varianttattach"></a>_variant_t::Attach

**Sezione specifica Microsoft**

Associa un `VARIANT` nell'oggetto di **variant_t** oggetto.

## <a name="syntax"></a>Sintassi

```
void Attach(VARIANT& varSrc);
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
Oggetto `VARIANT` oggetto da associare a questo **variant_t** oggetto.

## <a name="remarks"></a>Note

Acquisisce la proprietà del `VARIANT` incapsulandolo. Questa funzione membro rilascia qualsiasi incapsulato esistente `VARIANT`, quindi copia l'oggetto fornito `VARIANT`e imposta relativo `VARTYPE` su VT_EMPTY per assicurarsi che le relative risorse possono essere rilasciate solo per il **variant_t** distruttore.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)