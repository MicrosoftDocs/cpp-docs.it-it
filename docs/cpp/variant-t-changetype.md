---
title: _variant_t::ChangeType
ms.date: 11/04/2016
f1_keywords:
- _variant_t::ChangeType
- _variant_t.ChangeType
helpviewer_keywords:
- ChangeType method [C++]
- VARIANT object [C++], ChangeType
- VARIANT object
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
ms.openlocfilehash: c2283158856a6781ab2e12c51f4e2ad0e4f1d531
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750723"
---
# <a name="_variant_tchangetype"></a>_variant_t::ChangeType

**Specifico di Microsoft**

Modifica il tipo `_variant_t` dell'oggetto `VARTYPE`in base al file .

## <a name="syntax"></a>Sintassi

```cpp
void ChangeType(
   VARTYPE vartype,
   const _variant_t* pSrc = NULL
);
```

#### <a name="parameters"></a>Parametri

*Vartype*<br/>
Oggetto `VARTYPE` per `_variant_t` questo oggetto.

*pSrc*<br/>
Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è NULL, la conversione viene eseguita sul posto.

## <a name="remarks"></a>Osservazioni

Questa funzione membro `_variant_t` converte un `VARTYPE`oggetto nell'oggetto indicato. Se *pSrc* è NULL, la conversione `_variant_t` viene eseguita sul posto, altrimenti questo oggetto viene copiato da *pSrc* e quindi convertito.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
