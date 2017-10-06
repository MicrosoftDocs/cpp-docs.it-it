---
title: + = _bstr_t::operator, + | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 0ba8936df56359523a76992866642521f899af69
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
 *s1*  
 Oggetto `_bstr_t`.  
  
 *s2*  
 Stringa multibyte.  
  
 `s3`  
 Stringa Unicode.  
  
## <a name="remarks"></a>Note  
 Questi operatori eseguono la concatenazione di stringhe:  
  
-   **+ = (operatore) (***s1***)** aggiunge i caratteri in incapsulato `BSTR` di *s1* alla fine di incapsulato questooggetto`BSTR`.      
  
-   **operatore + (***s1***)** restituisce il nuovo `_bstr_t` che è costituito dalla concatenazione di questo oggetto `BSTR` con quello di *s1*.      
  
-   **operatore + (***s2***&#124;** *s1***)** restituisce un nuovo `_bstr_t` che viene creato concatenando una stringa multibyte *s2*, convertito in Unicode, con la `BSTR` incapsulato in *s1*.          
  
-   **operatore + (** `s3` **,***s1***)** restituisce un nuovo `_bstr_t` che viene creato concatenando una stringa Unicode `s3` con il `BSTR` incapsulate in *s1*.        
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)
