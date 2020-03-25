---
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
ms.openlocfilehash: a4126eb7771e17db5fb813898d6fa4917f6983bb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190313"
---
# <a name="_bstr_t-relational-operators"></a>Operatori relazionali _bstr_t

**Sezione specifica Microsoft**

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

Questi operatori confrontano due oggetti `_bstr_t` lessicograficamente. Gli operatori restituiscono TRUE se i confronti vengono mantenuti; in caso contrario, restituisce FALSE.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
