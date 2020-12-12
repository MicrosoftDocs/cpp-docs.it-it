---
description: 'Altre informazioni su: _bstr_t operatori relazionali'
title: Operatori relazionali _bstr_t
ms.date: 05/07/2019
f1_keywords:
- _bstr_t::operator>
- _bstr_t::operator==
- _bstr_t::operator>=
- _bstr_t::operator!=
- _bstr_t::operator<
- _bstr_t::operator<=
- _bstr_t::operator!
helpviewer_keywords:
- _bstr_t [C++]
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
ms.openlocfilehash: 3d34c83d9547bb9d52e43174cac2acd259717e76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308692"
---
# <a name="_bstr_t-relational-operators"></a>Operatori relazionali _bstr_t

**Specifico di Microsoft**

Confronta due oggetti `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
bool operator!( ) const throw( );
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

[Classe _bstr_t](../cpp/bstr-t-class.md)
