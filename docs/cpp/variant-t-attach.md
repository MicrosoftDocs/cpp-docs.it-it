---
description: 'Altre informazioni su: _variant_t:: Connetti'
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
ms.openlocfilehash: de13b1e8138eb24971e52165ee84fc92d97ca3d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116652"
---
# <a name="_variant_tattach"></a>_variant_t::Attach

**Specifico di Microsoft**

Connette un `VARIANT` oggetto all'oggetto **_variant_t** .

## <a name="syntax"></a>Sintassi

```cpp
void Attach(VARIANT& varSrc);
```

#### <a name="parameters"></a>Parametri

*varSrc*<br/>
`VARIANT`Oggetto da associare a questo oggetto **_variant_t** .

## <a name="remarks"></a>Commenti

Acquisisce la proprietà di `VARIANT` mediante l'incapsulamento. Questa funzione membro rilascia tutti gli incapsulati esistenti `VARIANT` , quindi copia l'oggetto fornito `VARIANT` e imposta la proprietà `VARTYPE` su VT_EMPTY per assicurarsi che le risorse possano essere rilasciate solo dal distruttore **_variant_t** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
