---
title: Operatori relazionali bstr_t | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _bstr_t::operator>
- _bstr_t::operator==
- _bstr_t::operator>=
- _bstr_t::operator!=
- _bstr_t::operator<
- _bstr_t::operator<=
- _bstr_t::operator!
dev_langs:
- C++
helpviewer_keywords:
- '>= operator [C++], comparing specific objects'
- operator<= [C++], bstr
- '!= operator'
- operator == [C++], bstr
- operator!= [C++], relational operators
- < operator [C++], comparing specific objects
- relational operators [C++], _bstr_t class
- operator== [C++], bstr
- <= operator [C++], with specific objects
- operator <= [C++], bstr
- operator >= [C++], bstr
- operator != [C++], relational operators
- '> operator [C++], comparing specific objects'
- operator< [C++], bstr
- == operator [C++], with specific Visual C++ objects
- operator>= [C++], bstr
- operator < [C++], bstr
- operator > [C++], bstr
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 556a56de97c6e1b547b9a67387acfcdd3205913c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="bstrt-relational-operators"></a>Operatori relazionali _bstr_t
**Sezione specifica Microsoft**  
  
 Confronta due oggetti `_bstr_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      bool operator!( ) const throw( );   
bool operator==(  
   const _bstr_t& str   
) const throw( );  
bool operator!=(  
   const _bstr_t& str   
) const throw( );  
bool operator<(  
   const _bstr_t& str   
) const throw( );  
bool operator>(  
   const _bstr_t& str   
) const throw( );  
bool operator<=(  
   const _bstr_t& str   
) const throw( );  
bool operator>=(  
   const _bstr_t& str   
) const throw( );  
```  
  
## <a name="remarks"></a>Note  
 Questi operatori confrontano due oggetti `_bstr_t` lessicograficamente. Gli operatori restituiscono **true** se i confronti reggono, altrimenti restituiscono **false**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)