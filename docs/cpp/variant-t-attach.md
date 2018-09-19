---
title: _variant_t::Attach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _variant_t::Attach
- _variant_t.Attach
dev_langs:
- C++
helpviewer_keywords:
- Attach method [C++]
- VARIANT object [C++], attach
- VARIANT object
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e680f4f42881ea89510048f43d657d1579686527
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109262"
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