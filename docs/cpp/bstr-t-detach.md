---
title: _bstr_t::Detach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- _bstr_t::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
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
ms.openlocfilehash: 2bdc40741ab10ac180742a1e310285290daa08c6
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="bstrtdetach"></a>_bstr_t::Detach
**Sezione specifica Microsoft**  
  
 Restituisce `BSTR` sottoposto a wrapping da un oggetto `_bstr_t` e rimuove `BSTR` da `_bstr_t`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BSTR Detach( ) throw;  
  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'elemento `BSTR` di cui è stato eseguito il wrapping da `_bstr_t`.  
  
## <a name="example"></a>Esempio  
 Vedere [Connetti](../cpp/bstr-t-assign.md) per un esempio di utilizzo **scollegamento**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Classe _bstr_t](../cpp/bstr-t-class.md)
