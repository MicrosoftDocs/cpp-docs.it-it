---
description: 'Altre informazioni su: _bstr_t::D etach'
title: _bstr_t::Detach
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.openlocfilehash: bc269f46d3a393485e95a62df23692c60070d75a
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522846"
---
# `_bstr_t::Detach`

**Specifico di Microsoft**

Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.

## <a name="syntax"></a>Sintassi

```cpp
BSTR Detach( ) throw;
```

## <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `BSTR` incapsulato dall'oggetto `_bstr_t` .

## <a name="example"></a>Esempio

[`_bstr_t::Assign`](../cpp/bstr-t-assign.md)Per un esempio di utilizzo di **`Detach`** , vedere.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)
