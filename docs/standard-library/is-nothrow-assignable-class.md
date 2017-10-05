---
title: Classe is_nothrow_assignable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- type_traits/std::is_nothrow_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_nothrow_assignable
ms.assetid: aa3aca92-308b-4b1d-b3f3-c54216c48fe7
caps.latest.revision: 13
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: f4e0b1cc873c5b83f7a307e98965ac4891153f60
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="isnothrowassignable-class"></a>Classe is_nothrow_assignable
Verifica se un valore del tipo `From` può essere assegnato al tipo `To` e se l'assegnazione è nota come operazione che non genera eccezioni.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class To, class From>  
struct is_nothrow_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 Per  
 Il tipo di oggetto che riceve l'assegnazione.  
  
 Da  
 Il tipo di oggetto che fornisce il valore.  
  
## <a name="remarks"></a>Note  
 L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore come espressione che non genera eccezioni. `From` e `To` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




