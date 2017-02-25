---
title: "_bstr_t::_bstr_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::_bstr_t"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_bstr_t (classe)"
  - "_bstr_t (metodo)"
  - "oggetto BSTR"
ms.assetid: 116d994e-5a72-4351-afbe-866c80b4c165
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# _bstr_t::_bstr_t
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Costruisce un oggetto `_bstr_t`.  
  
## Sintassi  
  
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
  
#### Parametri  
 `s1`  
 Oggetto `_bstr_t` da copiare.  
  
 `s2`  
 Stringa multibyte.  
  
 `s3`  
 Stringa Unicode  
  
 `var`  
 Oggetto [\_variant\_t](../cpp/variant-t-class.md).  
  
 `bstr`  
 Oggetto `BSTR` esistente.  
  
 `fCopy`  
 Se `false`, l'argomento `bstr` viene associato al nuovo oggetto senza creare una copia tramite la chiamata a `SysAllocString`.  
  
## Note  
 Nella tabella seguente vengono descritti i costruttori per `_bstr_t`.  
  
|Costruttore|Descrizione|  
|-----------------|-----------------|  
|`_bstr_t( )`|Costruisce un oggetto predefinito `_bstr_t` che incapsula un oggetto `BSTR` null.|  
|`_bstr_t( _bstr_t&`  `s1`  `)`|Costruisce un oggetto `_bstr_t` come copia di un altro.<br /><br /> Si tratta di una copia *superficiale*, che incrementa il conteggio dei riferimenti dell'oggetto `BSTR` incapsulato anziché crearne uno nuovo.|  
|`_bstr_t( char*`  `s2`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.<br /><br /> Questo costruttore esegue innanzitutto una conversione multibyte a Unicode.|  
|`_bstr_t( wchar_t*`  `s3`  `)`|Costruisce un oggetto `_bstr_t` chiamando `SysAllocString` per creare un nuovo oggetto `BSTR`, quindi lo incapsula.|  
|`_bstr_t( _variant_t&`  `var`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `_variant_t` recuperando prima un oggetto `BSTR` dall'oggetto VARIANT incapsulato.|  
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Costruisce un oggetto `_bstr_t` da un oggetto `BSTR` esistente \(anziché su una stringa `wchar_t*`\).  If `fCopy` è false, l'oggetto `BSTR` specificato viene associato al nuovo oggetto senza creare una nuova copia con `SysAllocString`.<br /><br /> Questo costruttore viene utilizzato dalle funzioni wrapper nelle intestazioni della libreria dei tipi per incapsulare e acquisire la proprietà di un oggetto `BSTR` restituita da un metodo di interfaccia.|  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_bstr\_t Class](../cpp/bstr-t-class.md)   
 [Classe \_variant\_t](../cpp/variant-t-class.md)