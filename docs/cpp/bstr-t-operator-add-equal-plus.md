---
description: 'Altre informazioni su: _bstr_t:: operator + =, _bstr_t:: operator +'
title: '_bstr_t:: operator + =, _bstr_t:: operator +'
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::operator+
- _bstr_t::operator+=
helpviewer_keywords:
- += operator [C++], appending strings
- + operator [C++], _bstr_t objects
ms.openlocfilehash: 44a525891ee072ea797026bd022ecae7b62fd6d1
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522521"
---
# <a name="_bstr_toperator--_bstr_toperator-"></a>`_bstr_t::operator +=`, `_bstr_t::operator +`

**Specifico di Microsoft**

Aggiunge caratteri alla fine dell' `_bstr_t` oggetto o concatena due stringhe.

## <a name="syntax"></a>Sintassi

```cpp
_bstr_t& operator+=( const _bstr_t& s1 );
_bstr_t operator+( const _bstr_t& s1 );
friend _bstr_t operator+( const char* s2, const _bstr_t& s1);
friend _bstr_t operator+( const wchar_t* s3, const _bstr_t& s1);
```

### <a name="parameters"></a>Parametri

*`s1`*\
Un oggetto `_bstr_t`.

*`s2`*\
Stringa multibyte.

*`s3`*\
Stringa Unicode.

## <a name="remarks"></a>Commenti

Questi operatori eseguono la concatenazione di stringhe:

- `operator+=( s1 )` Accoda i caratteri nell'oggetto incapsulato `BSTR` di *`s1`* alla fine di questo oggetto incapsulato `BSTR` .

- `operator+( s1 )` Restituisce il nuovo `_bstr_t` oggetto formato dalla concatenazione di questo oggetto `BSTR` e di quello in *`s1`* .

- `operator+( s2, s1 )` Restituisce un nuovo oggetto `_bstr_t` formato dalla concatenazione di una stringa multibyte *`s2`* , convertita in Unicode e da `BSTR` incapsulato in *`s1`* .

- `operator+( s3, s1 )` Restituisce un nuovo oggetto `_bstr_t` creato concatenando una stringa Unicode *`s3`* e l'oggetto `BSTR` incapsulato in *`s1`* .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)
