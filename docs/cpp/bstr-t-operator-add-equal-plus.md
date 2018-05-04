---
title: + = _bstr_t::operator, + | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::operator+
- _bstr_t::operator+=
dev_langs:
- C++
helpviewer_keywords:
- += operator [C++], appending strings
- + operator [C++], _bstr_t objects
ms.assetid: d28316ce-c2c8-4a38-bdb3-44fa4e582c44
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e443b233e19f6cdc64d7d6021a9a9c078a4f327
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bstrtoperator--"></a>_bstr_t::operator +=, +
**Sezione specifica Microsoft**  
  
 Aggiunge i caratteri al termine dell'oggetto `_bstr_t` o concatena due stringhe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      _bstr_t& operator+=(  
   const _bstr_t& s1   
);  
_bstr_t operator+(  
   const _bstr_t& s1   
);  
friend _bstr_t operator+(  
   const char* s2,  
   const _bstr_t& s1   
);  
friend _bstr_t operator+(  
   const wchar_t* s3,  
   const _bstr_t& s1   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *S1*  
 Oggetto `_bstr_t`.  
  
 *S2*  
 Stringa multibyte.  
  
 `s3`  
 Stringa Unicode.  
  
## <a name="remarks"></a>Note  
 Questi operatori eseguono la concatenazione di stringhe:  
  
-   **+ = (operatore) (***s1***)** aggiunge i caratteri in incapsulato `BSTR` di *s1* alla fine di incapsulato questooggetto`BSTR`.      
  
-   **operator + (***s1***)** restituisce il nuovo `_bstr_t` che è costituito dalla concatenazione dell'oggetto `BSTR` con quella del *s1*.      
  
-   **operator + (***s2***&#124;***s1***)** restituisce un nuovo `_bstr_t` che viene creato concatenando una stringa multibyte *s2*convertito in Unicode, con il `BSTR` incapsulato nel *s1*.          
  
-   **operator + (** `s3` **,***s1***)** restituisce un nuovo `_bstr_t` che viene creato concatenando una stringa Unicode `s3` con il `BSTR` incapsulato nel *s1*.        
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)