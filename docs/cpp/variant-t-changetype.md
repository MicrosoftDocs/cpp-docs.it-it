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
ms.openlocfilehash: b0692c9befaa6b7e787ada624dcbb56b074c9f9d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160463"
---
# <a name="_variant_tchangetype"></a>_variant_t::ChangeType

**Sezione specifica Microsoft**

Consente di modificare il tipo dell'oggetto `_variant_t` nella `VARTYPE`indicata.

## <a name="syntax"></a>Sintassi

```
void ChangeType(
   VARTYPE vartype,
   const _variant_t* pSrc = NULL
);
```

#### <a name="parameters"></a>Parametri

*VarType*<br/>
`VARTYPE` per questo oggetto `_variant_t`.

*pSrc*<br/>
Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è NULL, la conversione viene eseguita sul posto.

## <a name="remarks"></a>Osservazioni

Questa funzione membro converte un oggetto `_variant_t` nella `VARTYPE`indicata. Se *pSrc* è null, la conversione viene eseguita sul posto. in caso contrario, l'oggetto `_variant_t` viene copiato da *pSrc* e quindi convertito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _variant_t](../cpp/variant-t-class.md)
