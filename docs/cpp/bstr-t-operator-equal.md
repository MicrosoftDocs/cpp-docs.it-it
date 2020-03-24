---
title: _bstr_t::operator =
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::operator=
helpviewer_keywords:
- operator = [C++], bstr
- operator= [C++], bstr
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
ms.openlocfilehash: 5b7f499dd84a67020232aab84966647378daadad
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181070"
---
# <a name="_bstr_toperator-"></a>_bstr_t::operator =

**Sezione specifica Microsoft**

Assegna un nuovo valore a un oggetto `_bstr_t` esistente.

## <a name="syntax"></a>Sintassi

```
_bstr_t& operator=(const _bstr_t& s1) throw ( );
_bstr_t& operator=(const char* s2);
_bstr_t& operator=(const wchar_t* s3);
_bstr_t& operator=(const _variant_t& var);
```

#### <a name="parameters"></a>Parametri

*s1*<br/>
Oggetto `_bstr_t` da assegnare a un oggetto esistente `_bstr_t`.

*s2*<br/>
Stringa multibyte da assegnare a un oggetto esistente `_bstr_t`.

*S3*<br/>
Stringa unicode da assegnare a un oggetto esistente `_bstr_t`.

*var*<br/>
Oggetto `_variant_t` da assegnare a un oggetto esistente `_bstr_t`.

**Fine sezione specifica Microsoft**

## <a name="example"></a>Esempio

Vedere [_bstr_t:: Assign](../cpp/bstr-t-assign.md) per un esempio di utilizzo di **operator =** .

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
