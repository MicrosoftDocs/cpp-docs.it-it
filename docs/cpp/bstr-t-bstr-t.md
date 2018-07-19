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
ms.openlocfilehash: fb2e870c7418c0d0a6cf3cd82bc0a8acb45466a0
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37941265"
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
 *s1*  
 Oggetto `_bstr_t` da copiare.  
  
 *s2*  
 Stringa multibyte.  
  
 *S3*  
 Stringa Unicode  
  
 *var*  
 Oggetto [variant_t](../cpp/variant-t-class.md) oggetto.  
  
 *BSTR*  
 Oggetto `BSTR` esistente.  
  
 *fCopy*  
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
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente (anziché su una stringa `wchar_t*`). If `fCopy` è false, l'oggetto `BSTR` specificato viene associato al nuovo oggetto senza creare una nuova copia con `SysAllocString`.<br /><br /> Questo costruttore viene utilizzato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e acquisire la proprietà di un oggetto `BSTR` restituita da un metodo di interfaccia.|  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [classe bstr_t](../cpp/bstr-t-class.md)   
 [Classe _variant_t](../cpp/variant-t-class.md)