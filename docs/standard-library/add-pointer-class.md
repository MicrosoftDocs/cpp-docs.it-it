---
title: Classe add_pointer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- add_pointer
- std::add_pointer
- type_traits/std::add_pointer
dev_langs:
- C++
helpviewer_keywords:
- add_pointer class
- add_pointer
ms.assetid: d8095cb0-6578-4143-b78f-87f82485298c
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 008f19421575b8a930498a615642fdfdad99b7b6
ms.lasthandoff: 02/24/2017

---
# <a name="addpointer-class"></a>Classe add_pointer
Crea un puntatore al tipo da un tipo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T>  
struct add_pointer;  
 
template <class T>
using add_pointer_t = typename add_pointer<T>::type;  
```  
  
#### <a name="parameters"></a>Parametri  
*T*  
Tipo da modificare.  
  
## <a name="remarks"></a>Note  
Il typedef del membro `type` assegna allo stesso tipo il nome `remove_reference<T>::type*`. L'alias `add_pointer_t` è un collegamento per l'accesso al typedef del membro `type`.  
  
Poiché non è valido creare un puntatore da un riferimento, `add_pointer` rimuove il riferimento, se presente, dal tipo specificato prima di creare un puntatore al tipo. È pertanto possibile utilizzare un tipo con `add_pointer` senza doversi preoccupare che il tipo sia un riferimento.  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene illustrato che `add_pointer` di un tipo equivale a un puntatore a tale tipo.  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
int main()   
{   
    std::add_pointer_t<int> *p = (int **)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_pointer_t<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
add_pointer_t<int> == int *  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe remove_pointer](../standard-library/remove-pointer-class.md)

