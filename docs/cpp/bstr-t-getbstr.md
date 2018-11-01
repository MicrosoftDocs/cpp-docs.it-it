---
title: _bstr_t::GetBSTR
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::GetBSTR
helpviewer_keywords:
- GetBSTR method [C++]
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
ms.openlocfilehash: cea3404e0732cb0e16b3fa9199ce95e3dfcc23f5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50618049"
---
# <a name="bstrtgetbstr"></a>_bstr_t::GetBSTR

**Sezione specifica Microsoft**

Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
BSTR& GetBSTR( );
```

## <a name="return-value"></a>Valore restituito

Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Note

**GetBSTR** influisce su tutte `_bstr_t` gli oggetti che condividono un `BSTR`. Più di un `_bstr_t` possono condividere una `BSTR` tramite il costruttore di copia e **operatore =**.

## <a name="example"></a>Esempio

Visualizzare [_bstr_t::Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo **GetBSTR**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)