---
title: _bstr_t::operator +=, +
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::operator+
- _bstr_t::operator+=
helpviewer_keywords:
- += operator [C++], appending strings
- + operator [C++], _bstr_t objects
ms.assetid: d28316ce-c2c8-4a38-bdb3-44fa4e582c44
ms.openlocfilehash: b9eddca85d66f4978e1b33299ca655cd880cf45e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181148"
---
# <a name="_bstr_toperator--"></a>_bstr_t::operator +=, +

**Sezione specifica Microsoft**

Aggiunge i caratteri al termine dell'oggetto `_bstr_t` o concatena due stringhe.

## <a name="syntax"></a>Sintassi

```
_bstr_t& operator+=( const _bstr_t& s1 );
_bstr_t operator+( const _bstr_t& s1 );
friend _bstr_t operator+( const char* s2, const _bstr_t& s1);
friend _bstr_t operator+( const wchar_t* s3, const _bstr_t& s1);
```

#### <a name="parameters"></a>Parametri

*s1*<br/>
Oggetto `_bstr_t` .

*s2*<br/>
Stringa multibyte.

*S3*<br/>
Stringa Unicode.

## <a name="remarks"></a>Osservazioni

Questi operatori eseguono la concatenazione di stringhe:

- **operatore + = (**  *S1*  **)** Accoda i caratteri del `BSTR` incapsulato di *S1* alla fine del `BSTR`incapsulato di questo oggetto.

- **operatore + (**  *S1*  **)** Restituisce il nuovo `_bstr_t` costituito dalla concatenazione del `BSTR` di questo oggetto con quello di *S1*.

- **operatore + (**  *S2*  **&#124;**  *S1*  **)** Restituisce un nuovo `_bstr_t` costituito dalla concatenazione di una stringa multibyte *S2*, convertita in Unicode, con il `BSTR` incapsulato in *S1*.

- **operatore + (**  *S3* **,**  *S1*  **)** Restituisce un nuovo `_bstr_t` costituito dalla concatenazione di una stringa Unicode *S3* con il `BSTR` incapsulato in *S1*.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
