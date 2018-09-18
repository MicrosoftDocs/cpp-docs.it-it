---
title: _bstr_t::_bstr_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::_bstr_t
dev_langs:
- C++
helpviewer_keywords:
- BSTR object
- _bstr_t method [C++]
- _bstr_t class
ms.assetid: 116d994e-5a72-4351-afbe-866c80b4c165
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 54b61c6aa00a7ea9abf4892e6c3b8568284bd08f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056443"
---
# <a name="bstrtbstrt"></a>_bstr_t::_bstr_t

**Sezione specifica Microsoft**

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

*s2*<br/>
Stringa multibyte.

*S3*<br/>
Stringa Unicode

*var*<br/>
Oggetto [variant_t](../cpp/variant-t-class.md) oggetto.

*BSTR*<br/>
Oggetto `BSTR` esistente.

*fCopy*<br/>
Se FALSE, il *bstr* argomento viene associato al nuovo oggetto senza creare una copia tramite la chiamata `SysAllocString`.

## <a name="remarks"></a>Note

Nella tabella seguente vengono descritti i costruttori per `_bstr_t`.

|Costruttore|Descrizione|
|-----------------|-----------------|
|`_bstr_t( )`|Costruisce un valore predefinito `_bstr_t` oggetto che incapsula un valore null `BSTR` oggetto.|
|`_bstr_t( _bstr_t&`  `s1`  `)`|Costruisce un oggetto `_bstr_t` come copia di un altro.<br /><br /> Si tratta di un *superficiale* copy, che incrementa il conteggio dei riferimenti di incapsulato `BSTR` oggetto anziché crearne uno nuovo.|
|`_bstr_t( char*`  `s2`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.<br /><br /> Questo costruttore esegue innanzitutto una conversione multibyte a Unicode.|
|`_bstr_t( wchar_t*`  `s3`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.|
|`_bstr_t( _variant_t&`  `var`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `_variant_t` recuperando prima un oggetto `BSTR` dall'oggetto VARIANT incapsulato.|
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente (anziché su una stringa `wchar_t*`). Se *fCopy* è false, l'oggetto fornito `BSTR` viene associato al nuovo oggetto senza creare una nuova copia con `SysAllocString`.<br /><br /> Questo costruttore viene utilizzato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e acquisire la proprietà di un oggetto `BSTR` restituita da un metodo di interfaccia.|

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _bstr_t](../cpp/bstr-t-class.md)<br/>
[Classe _variant_t](../cpp/variant-t-class.md)