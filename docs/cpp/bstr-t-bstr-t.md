---
description: 'Altre informazioni su: _bstr_t:: _bstr_t'
title: _bstr_t::_bstr_t
ms.date: 02/02/2021
f1_keywords:
- _bstr_t::_bstr_t
helpviewer_keywords:
- BSTR object
- _bstr_t method [C++]
- _bstr_t class
ms.openlocfilehash: 0e6913a45b1c4d542e495bc59bc5871f533a1573
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522911"
---
# `_bstr_t::_bstr_t`

**Specifico di Microsoft**

Costruisce un oggetto `_bstr_t`.

## <a name="syntax"></a>Sintassi

```cpp
_bstr_t( ) throw( );
_bstr_t(
   const _bstr_t& s1
) throw( );
_bstr_t(
   const char* s2
);
_bstr_t(
   const wchar_t* s3
);
_bstr_t(
   const _variant_t& var
);
_bstr_t(
   BSTR bstr,
   bool fCopy
);
```

### <a name="parameters"></a>Parametri

*`s1`*\
Oggetto `_bstr_t` da copiare.

*`s2`*\
Stringa multibyte.

*`s3`*\
Stringa Unicode

*`var`*\
Oggetto [_variant_t](../cpp/variant-t-class.md) .

*`bstr`*\
Oggetto `BSTR` esistente.

*`fCopy`*\
Se **`false`** , l' *`bstr`* argomento viene associato al nuovo oggetto senza effettuare una copia chiamando `SysAllocString` .

## <a name="remarks"></a>Commenti

La `_bstr_t` classe fornisce diversi costruttori:

`_bstr_t( )`\
Costruisce un `_bstr_t` oggetto predefinito che incapsula un oggetto null `BSTR` .

`_bstr_t( _bstr_t& s1 )`\
Costruisce un oggetto `_bstr_t` come copia di un altro. Questo costruttore esegue una copia *superficiale* , che incrementa il conteggio dei riferimenti dell'oggetto incapsulato `BSTR` anziché crearne uno nuovo.

`_bstr_t( char* s2 )`\
Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula. Questo costruttore esegue innanzitutto una conversione multibyte a Unicode.

`_bstr_t( wchar_t* s3 )`\
Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.

`_bstr_t( _variant_t& var )`\
Costruisce un `_bstr_t` oggetto da un `_variant_t` oggetto recuperando prima un `BSTR` oggetto dall'oggetto incapsulato `VARIANT` .

`_bstr_t( BSTR bstr, bool fCopy )`\
Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente (anziché su una stringa `wchar_t*`). Se *`fCopy`* è **`false`** , l' `BSTR` oggetto fornito viene associato al nuovo oggetto senza creare una nuova copia tramite `SysAllocString` . Questo costruttore viene usato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e assumere la proprietà di un oggetto `BSTR` restituito da un metodo di interfaccia.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[`_bstr_t` classe](../cpp/bstr-t-class.md)\
[`_variant_t` classe](../cpp/variant-t-class.md)
