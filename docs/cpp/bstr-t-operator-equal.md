---
description: 'Altre informazioni su: _bstr_t:: operator ='
title: _bstr_t::operator =
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::operator=
helpviewer_keywords:
- operator = [C++], bstr
- operator= [C++], bstr
ms.openlocfilehash: d021ba013190ddee262b8644e16876401be846dc
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522716"
---
# `_bstr_t::operator =`

**Specifico di Microsoft**

Assegna un nuovo valore a un oggetto `_bstr_t` esistente.

## <a name="syntax"></a>Sintassi

```cpp
_bstr_t& operator=(const _bstr_t& s1) throw ( );
_bstr_t& operator=(const char* s2);
_bstr_t& operator=(const wchar_t* s3);
_bstr_t& operator=(const _variant_t& var);
```

### <a name="parameters"></a>Parametri

*`s1`*\
Oggetto `_bstr_t` da assegnare a un oggetto esistente `_bstr_t`.

*`s2`*\
Stringa multibyte da assegnare a un oggetto esistente `_bstr_t`.

*`s3`*\
Stringa unicode da assegnare a un oggetto esistente `_bstr_t`.

*`var`*\
Oggetto `_variant_t` da assegnare a un oggetto esistente `_bstr_t`.

**TERMINA specifica Microsoft**

## <a name="example"></a>Esempio

[`_bstr_t::Assign`](../cpp/bstr-t-assign.md)Per un esempio di utilizzo di **`operator=`** , vedere.

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)
