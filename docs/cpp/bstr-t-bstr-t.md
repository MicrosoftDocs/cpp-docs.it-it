---
description: 'Altre informazioni su: _bstr_t:: _bstr_t'
title: _bstr_t::_bstr_t
ms.date: 11/04/2016
f1_keywords:
- _bstr_t::_bstr_t
helpviewer_keywords:
- BSTR object
- _bstr_t method [C++]
- _bstr_t class
ms.assetid: 116d994e-5a72-4351-afbe-866c80b4c165
ms.openlocfilehash: efc28b98ecbc6e22c2a78c89e46c08d94e6ce72d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229418"
---
# <a name="_bstr_t_bstr_t"></a>_bstr_t::_bstr_t

**Specifico di Microsoft**

Costruisce un oggetto `_bstr_t`.

## <a name="syntax"></a>Sintassi

```
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

#### <a name="parameters"></a>Parametri

*s1*<br/>
Oggetto `_bstr_t` da copiare.

*S2*<br/>
Stringa multibyte.

*S3*<br/>
Stringa Unicode

*var*<br/>
Oggetto [_variant_t](../cpp/variant-t-class.md) .

*BSTR*<br/>
Oggetto `BSTR` esistente.

*fCopy*<br/>
Se **`false`** , l'argomento *BSTR* viene associato al nuovo oggetto senza effettuare una copia chiamando `SysAllocString` .

## <a name="remarks"></a>Commenti

Nella tabella seguente vengono descritti i costruttori per `_bstr_t`.

|Costruttore|Descrizione|
|-----------------|-----------------|
|`_bstr_t( )`|Costruisce un `_bstr_t` oggetto predefinito che incapsula un oggetto null `BSTR` .|
|`_bstr_t( _bstr_t&`  `s1`  `)`|Costruisce un oggetto `_bstr_t` come copia di un altro.<br /><br /> Si tratta di una copia *superficiale* , che incrementa il conteggio dei riferimenti dell'oggetto incapsulato `BSTR` anziché crearne uno nuovo.|
|`_bstr_t( char*`  `s2`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.<br /><br /> Questo costruttore esegue innanzitutto una conversione multibyte a Unicode.|
|`_bstr_t( wchar_t*`  `s3`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.|
|`_bstr_t( _variant_t&`  `var`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `_variant_t` recuperando prima un oggetto `BSTR` dall'oggetto VARIANT incapsulato.|
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente (anziché su una stringa `wchar_t*`). Se *fCopy* è false, l' `BSTR` oggetto fornito viene associato al nuovo oggetto senza creare una nuova copia con `SysAllocString` .<br /><br /> Questo costruttore viene utilizzato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e acquisire la proprietà di un oggetto `BSTR` restituita da un metodo di interfaccia.|

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _bstr_t](../cpp/bstr-t-class.md)<br/>
[Classe _variant_t](../cpp/variant-t-class.md)
