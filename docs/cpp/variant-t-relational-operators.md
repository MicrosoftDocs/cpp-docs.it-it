---
title: Operatori relazionali variant_t | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _variant_t::operator==
- _variant_t::operator!=
dev_langs:
- C++
helpviewer_keywords:
- '!= operator'
- relational operators [C++], _variant_t class
- operator!= [C++], variant
- operator!= [C++], relational operators
- operator != [C++], variant
- operator == [C++], variant
- operator== [C++], variant
- operator != [C++], relational operators
- == operator [C++], with specific Visual C++ objects
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
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
ms.openlocfilehash: d8bcf9550e3e3f8af1836aa3f6e8747089837142
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="variantt-relational-operators"></a>Operatori relazionali _variant_t
**Sezione specifica Microsoft**  
  
 Confronta due oggetti `_variant_t` per verificarne l'uguaglianza o la disuguaglianza.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      bool operator==(  
   const VARIANT& varSrc   
) const;  
bool operator==(  
   const VARIANT* pSrc   
) const;  
bool operator!=(  
   const VARIANT& varSrc   
) const;  
bool operator!=(  
   const VARIANT* pSrc   
) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 *varSrc*  
 Oggetto **VARIANT** da confrontare con il `_variant_t` oggetto.  
  
 `pSrc`  
 Puntatore al **VARIANT** da confrontare con il `_variant_t` oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** se è responsabile del confronto, **false** in caso contrario.  
  
## <a name="remarks"></a>Note  
 Confronta un `_variant_t` dell'oggetto con un **VARIANT**, il test di uguaglianza o disuguaglianza.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _variant_t](../cpp/variant-t-class.md)
