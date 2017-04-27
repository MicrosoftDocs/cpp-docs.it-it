---
title: Classe is_literal_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_literal_type
- type_traits/std::is_literal_type
dev_langs:
- C++
helpviewer_keywords:
- is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
caps.latest.revision: 12
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
ms.openlocfilehash: 5a89b32e85cc7756f4d420f8eea55b2088a44320
ms.lasthandoff: 02/24/2017

---
# <a name="isliteraltype-class"></a>Classe is_literal_type
Verifica se un tipo può essere usato come variabile `constexpr` oppure costruito, usato o restituito da funzioni `constexpr`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
struct is_literal_type;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se `T` è un *tipo letterale*; in caso contrario, contiene false. Un tipo letterale è `void`, un tipo scalare, un tipo di riferimento, una matrice di tipo letterale o un tipo di classe letterale. Un tipo di classe letterale è un tipo di classe che ha un distruttore semplice, è un tipo aggregato o ha almeno un costruttore `constexpr` che non supporta la copia o lo spostamento e tutti i relativi membri di dati non statici e le relative classi di base sono tipi letterali non volatili. Se da un lato il tipo di un valore letterale è sempre un tipo letterale, dall'altro il concetto di tipo letterale include tutto ciò che il compilatore può valutare come `constexpr` in fase di compilazione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




