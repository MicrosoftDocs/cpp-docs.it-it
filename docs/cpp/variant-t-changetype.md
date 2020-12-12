---
description: 'Altre informazioni su: _variant_t:: ChangeType'
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
ms.openlocfilehash: 32ce43f1d9afb388c97e5271927113c71d31bb92
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116626"
---
# <a name="_variant_tchangetype"></a>_variant_t::ChangeType

**Specifico di Microsoft**

Imposta il tipo dell' `_variant_t` oggetto sull'oggetto indicato `VARTYPE` .

## <a name="syntax"></a>Sintassi

```cpp
void ChangeType(
   VARTYPE vartype,
   const _variant_t* pSrc = NULL
);
```

#### <a name="parameters"></a>Parametri

*VarType*<br/>
`VARTYPE`Oggetto per questo `_variant_t` oggetto.

*pSrc*<br/>
Puntatore all'oggetto `_variant_t` da convertire. Se questo valore è NULL, la conversione viene eseguita sul posto.

## <a name="remarks"></a>Commenti

Questa funzione membro converte un `_variant_t` oggetto nell'oggetto indicato `VARTYPE` . Se *pSrc* è null, la conversione viene eseguita sul posto; in caso contrario, l' `_variant_t` oggetto viene copiato da *pSrc* e quindi convertito.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _variant_t](../cpp/variant-t-class.md)
