---
description: 'Altre informazioni su: _bstr_t:: GetBSTR'
title: _bstr_t::GetBSTR
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::GetBSTR
helpviewer_keywords:
- GetBSTR method [C++]
ms.openlocfilehash: b48dd082b21c0f3416c8b58b8ae2669c74d9d227
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522755"
---
# `_bstr_t::GetBSTR`

**Specifico di Microsoft**

Punta all'inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```cpp
BSTR& GetBSTR( );
```

## <a name="return-value"></a>Valore restituito

Inizio dell'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Commenti

**`GetBSTR`** influiscono su tutti `_bstr_t` gli oggetti che condividono un oggetto `BSTR` . Più di uno `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore di copia e di `operator=` .

## <a name="example"></a>Esempio

[`_bstr_t::Assign`](../cpp/bstr-t-assign.md)Per un esempio di utilizzo di **`GetBSTR`** , vedere.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)