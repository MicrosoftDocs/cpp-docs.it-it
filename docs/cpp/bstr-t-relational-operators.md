---
title: Operatori relazionali bstr_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
- '>= operator, comparing specific objects'
- operator<=, bstr
- '!= operator'
- operator ==, bstr
- operator!=, relational operators
- < operator, comparing specific objects
- relational operators, _bstr_t class
- operator==, bstr
- <= operator, with specific objects
- operator <=, bstr
- operator >=, bstr
- operator !=, relational operators
- '> operator, comparing specific objects'
- operator<, bstr
- == operator, with specific Visual C++ objects
- operator>=, bstr
- operator <, bstr
- operator >, bstr
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
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
ms.openlocfilehash: 4af54cf348765453fea3dd59959e00f623bef7e0
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

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
