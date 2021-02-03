---
description: 'Altre informazioni su: _bstr_t:: GetAddress'
title: _bstr_t::GetAddress
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::GetAddress
helpviewer_keywords:
- GetAddress method [C++]
ms.openlocfilehash: 23013a6666b8e268a6437532b69050933ffe6b42
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522833"
---
# `_bstr_t::GetAddress`

**Specifico di Microsoft**

Libera la memoria per qualsiasi stringa esistente e restituisce l'indirizzo di una nuova stringa allocata.

## <a name="syntax"></a>Sintassi

```cpp
BSTR* GetAddress( );
```

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `BSTR` sottoposto a wrapping da `_bstr_t`.

## <a name="remarks"></a>Commenti

**`GetAddress`** influiscono su tutti `_bstr_t` gli oggetti che condividono un oggetto `BSTR` . Più di uno `_bstr_t` può condividere un oggetto `BSTR` tramite l'utilizzo del costruttore di copia e di **`operator=`** .

## <a name="example"></a>Esempio

[`_bstr_t::Assign`](../cpp/bstr-t-assign.md)Per un esempio di utilizzo di **`GetAddress`** , vedere.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)