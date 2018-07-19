---
title: _bstr_t::operator + =, + | Microsoft Docs
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
ms.openlocfilehash: 4a2ea7cd3b93f7445190f16a92a580fe9628a976
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943266"
---
# <a name="bstrtoperator--"></a>_bstr_t::operator +=, +
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
 *s1*  
 Oggetto `_bstr_t`.  
  
 *s2*  
 Stringa multibyte.  
  
 *S3*  
 Stringa Unicode.  
  
## <a name="remarks"></a>Note  
 Questi operatori eseguono la concatenazione di stringhe:  
  
-   **operator + = (***s1***)** aggiunge i caratteri in incapsulato `BSTR` del *s1* alla fine di incapsulato questooggetto`BSTR`.      
  
-   **Operatore operator + (***s1***)** restituisce il nuovo `_bstr_t` che è costituito dalla concatenazione dell'oggetto `BSTR` con quello del *s1*.      
  
-   **Operatore operator + (***s2***&#124;***s1***)** restituisce un nuovo `_bstr_t` che viene creato concatenando una stringa multibyte *s2*, convertito in Unicode, con la `BSTR` racchiusa *s1*.          
  
-   **Operatore operator + (***s3* **,***s1***)** restituisce un nuovo `_bstr_t` che è costituito dalla concatenazione di una stringa Unicode *s3* con il `BSTR` racchiusa *s1*.        
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)