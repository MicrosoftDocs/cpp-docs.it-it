---
title: Classe hash | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- hash
- functional/std::hash
- bitset/std::hash
- memory/std::hash
- string/std::hash
- system_error/std::hash
- thread/std::hash
- typeindex/std::hash
- vector/std::hash
- XSTDDEF/std::hash
- xstring/std::hash
dev_langs:
- C++
helpviewer_keywords:
- hash class
ms.assetid: e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4
caps.latest.revision: 21
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: 28baed4badda4f2c1d7e5b20235fe8d40c2a7195
ms.openlocfilehash: d549fb7aeed268327122532e6c4390ac931740e7
ms.lasthandoff: 02/24/2017

---
# <a name="hash-class"></a>Classe hash
Calcola il codice hash per un valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
struct hash {  
    size_t operator()(Ty val) const; 
};  
```  
  
## <a name="remarks"></a>Note  
L'oggetto funzione definisce una funzione hash, idonea per il mapping di valori di tipo *Ty* con una distribuzione di valori di indice. Il membro `operator()` restituisce un codice hash per *val*, idoneo per l'uso con classi modello `unordered_map`, `unordered_multimap`, `unordered_set` e `unordered_multiset`. La libreria standard fornisce specializzazioni per i tipi di base: *Ty* può essere qualsiasi tipo scalare, inclusi tipi di puntatore e tipi di enumerazione. Sono inoltre disponibili specializzazioni per i tipi della libreria `string`, `wstring`, `u16string`, `u32string`, `string_view`, `wstring_view`, `u16string_view`, `u32string_view`, `bitset`, `error_code`, `error_condition`, `optional`, `shared_ptr`, `thread`, `type_index`, `unique_ptr`, `variant` e `vector<bool>`.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__functional__hash.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
#include <unordered_set>   
  
int main()   
    {   
    std::unordered_set<int, std::hash<int> > c0;   
    c0.insert(3);   
    std::cout << *c0.find(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
3  
```  
  
## <a name="requirements"></a>Requisiti  
**Intestazione:** \<functional>  
  
**Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<unordered_map>](../standard-library/unordered-map.md)   
 [Classe unordered_multimap](../standard-library/unordered-multimap-class.md)   
 [Classe unordered_multiset](../standard-library/unordered-multiset-class.md)   
 [<unordered_set>](../standard-library/unordered-set.md)


