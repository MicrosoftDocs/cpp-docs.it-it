---
title: _bstr_t::_bstr_t | Documenti Microsoft
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
ms.openlocfilehash: 824108b78ede3999a83b1c7c1ac75cc847f182f5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
 `s1`  
 Oggetto `_bstr_t` da copiare.  
  
 `s2`  
 Stringa multibyte.  
  
 `s3`  
 Stringa Unicode  
  
 `var`  
 Oggetto [variant_t](../cpp/variant-t-class.md) oggetto.  
  
 `bstr`  
 Oggetto `BSTR` esistente.  
  
 `fCopy`  
 Se `false`, l'argomento `bstr` viene associato al nuovo oggetto senza creare una copia tramite la chiamata a `SysAllocString`.  
  
## <a name="remarks"></a>Note  
 Nella tabella seguente vengono descritti i costruttori per `_bstr_t`.  
  
|Costruttore|Descrizione|  
|-----------------|-----------------|  
|`_bstr_t( )`|Costruisce un valore predefinito `_bstr_t` oggetto che incapsula un valore null `BSTR` oggetto.|  
|`_bstr_t( _bstr_t&`  `s1`  `)`|Costruisce un oggetto `_bstr_t` come copia di un altro.<br /><br /> Si tratta di un *superficiale* copia, che incrementa il conteggio dei riferimenti di incapsulato `BSTR` oggetto anziché crearne uno nuovo.|  
|`_bstr_t( char*`  `s2`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.<br /><br /> Questo costruttore esegue innanzitutto una conversione multibyte a Unicode.|  
|`_bstr_t( wchar_t*`  `s3`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.|  
|`_bstr_t( _variant_t&`  `var`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `_variant_t` recuperando prima un oggetto `BSTR` dall'oggetto VARIANT incapsulato.|  
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente (anziché su una stringa `wchar_t*`). If `fCopy` è false, l'oggetto `BSTR` specificato viene associato al nuovo oggetto senza creare una nuova copia con `SysAllocString`.<br /><br /> Questo costruttore viene utilizzato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e acquisire la proprietà di un oggetto `BSTR` restituita da un metodo di interfaccia.|  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [bstr_t (classe)](../cpp/bstr-t-class.md)   
 [Classe _variant_t](../cpp/variant-t-class.md)