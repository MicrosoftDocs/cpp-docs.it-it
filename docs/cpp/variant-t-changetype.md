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
ms.openlocfilehash: 319c4fde808932e86021ee59b051261c43ca2edd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50471240"
---
# <a name="varianttchangetype"></a>_variant_t::ChangeType

**Sezione specifica Microsoft**

Modifica il tipo dei `_variant_t` oggetto indicato `VARTYPE`.

## <a name="syntax"></a>Sintassi

```
void ChangeType(
   VARTYPE vartype,
   const _variant_t* pSrc = NULL
);
```

#### <a name="parameters"></a>Parametri

*VarType*<br/>
Il `VARTYPE` per questo `_variant_t` oggetto.

*pSrc*<br/>
Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è NULL, la conversione viene eseguita sul posto.

## <a name="remarks"></a>Note

Questa funzione membro converte un `_variant_t` oggetto indicato `VARTYPE`. Se *pSrc* è NULL, la conversione viene eseguita sul posto, in caso contrario ciò `_variant_t` oggetto viene copiato dalla *pSrc* e quindi convertito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)