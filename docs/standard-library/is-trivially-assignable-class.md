---
title: Classe is_trivially_assignable | Microsoft Docs
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
- is_trivially_assignable
- type_traits/std::is_trivially_assignable
dev_langs:
- C++
helpviewer_keywords:
- is_trivially_assignable
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 4b640307631b1407e5309adaa63b39e100839f91
ms.lasthandoff: 02/24/2017

---
# <a name="istriviallyassignable-class"></a>Classe is_trivially_assignable
Verifica se un valore di tipo `From` può essere facilmente assegnato al tipo `To`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class To, class From>  
struct is_trivially_assignable;
```  
  
#### <a name="parameters"></a>Parametri  
 Per  
 Il tipo di oggetto che riceve l'assegnazione.  
  
 Da  
 Il tipo di oggetto che fornisce il valore.  
  
## <a name="remarks"></a>Note  
 L'espressione `declval<To>() = declval<From>()` deve essere nel formato corretto e deve essere nota al compilatore per non richiedere operazioni complesse. `From` e `To` devono essere tipi completi, `void`, o matrici di valori associati sconosciuti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




