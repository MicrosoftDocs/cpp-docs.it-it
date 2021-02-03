---
description: 'Altre informazioni su: _bstr_t operatori relazionali'
title: Operatori relazionali _bstr_t
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::operator>
- _bstr_t::operator==
- _bstr_t::operator>=
- _bstr_t::operator!=
- _bstr_t::operator<
- _bstr_t::operator<=
helpviewer_keywords:
- _bstr_t relational operators[C++]
ms.openlocfilehash: eef66f8165fc1dfbb29730507ee8d3b996800b7b
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522586"
---
# <a name="_bstr_t-relational-operators"></a>`_bstr_t` operatori relazionali

**Specifico di Microsoft**

Confronta due oggetti `_bstr_t`.

## <a name="syntax"></a>Sintassi

```cpp
bool operator==(const _bstr_t& str) const throw( );
bool operator!=(const _bstr_t& str) const throw( );
bool operator<(const _bstr_t& str) const throw( );
bool operator>(const _bstr_t& str) const throw( );
bool operator<=(const _bstr_t& str) const throw( );
bool operator>=(const _bstr_t& str) const throw( );
```

## <a name="remarks"></a>Osservazioni

Questi operatori confrontano due oggetti `_bstr_t` lessicograficamente. Gli operatori restituiscono **`true`** se i confronti sono in attesa; in caso contrario, restituisce **`false`** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)
