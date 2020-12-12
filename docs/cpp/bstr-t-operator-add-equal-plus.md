---
description: 'Ulteriori informazioni su: _bstr_t:: operator + =, +'
title: _bstr_t::operator +=, +
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::operator+
- _bstr_t::operator+=
helpviewer_keywords:
- += operator [C++], appending strings
- + operator [C++], _bstr_t objects
ms.assetid: d28316ce-c2c8-4a38-bdb3-44fa4e582c44
ms.openlocfilehash: e3ae71a3a43e189251ac0ddaf77572656a031aaf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97308809"
---
# <a name="_bstr_toperator--"></a>_bstr_t::operator +=, +

**Specifico di Microsoft**

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
Un oggetto `_bstr_t`.

*S2*<br/>
Stringa multibyte.

*S3*<br/>
Stringa Unicode.

## <a name="remarks"></a>Commenti

Questi operatori eseguono la concatenazione di stringhe:

- **operatore + = (**  *S1*  **)** Accoda i caratteri nell'oggetto incapsulato `BSTR` di *S1* alla fine di questo oggetto incapsulato `BSTR` .

- **operatore + (**  *S1*  **)** Restituisce il nuovo `_bstr_t` formato concatenando questo oggetto `BSTR` con quello di *S1*.

- **operatore + (***S2* **&#124;** *S1***)** Restituisce un nuovo oggetto `_bstr_t` formato dalla concatenazione di una stringa multibyte *S2*, convertita in Unicode, con `BSTR` incapsulato in *S1*.        

- **operatore + (**  *S3* **,**  *S1*  **)** Restituisce un nuovo `_bstr_t` che è costituito dalla concatenazione di una stringa Unicode *S3* con l'oggetto `BSTR` incapsulato in *S1*.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)
